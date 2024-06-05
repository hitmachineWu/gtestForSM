#include "./initialization.h"
#define IN_Auto_Braking_For_EBCM_and_Ib ((uint8_T)2U) //1.2
#define M_IN_Auto_Braking_For_EBCM_Only ((uint8_T)1U) //1.1
#define MainStateMachine_IN_HBA1       ((uint8_T)3U)    // 3.1
#define MainStateMachine_IN_HBA2       ((uint8_T)4U)    // 3.2
#define MainStateMachine_IN_Hold       ((uint8_T)5U)    // 4
#define MainStateMachine_IN_Inactive   ((uint8_T)6U)    //0
#define MainStateMachine_IN_Off        ((uint8_T)7U)    

// typedef enum {
//   Off = 0,                             /* Default value */
//   Inactive, //0
//   Auto_Braking_For_EBCM_Only, //1.1
//   Auto_Braking_For_EBCM_and_Ibooster, //1.2
//   Hold, //4
//   HBA1, //3.1
//   HBA2 //3.2
// } State; 
void All_input_Valid(ExtU_MainStateMachine_T *in){
    //All input signals are valid
    in->AccActPosV =0;
    in->AEB_Scenario =2 ;
    in->VehSpdAvgNDrvnV =0;//Valid
    in->IMUYawRtPriV = 0;//Valid
    in->IMULatAccPrimV =0;//Valid
    in->StrWhAngV =0;//Valid
    in->WhlAngVelRRrAuthV =0;//Valid
    in->WhlAngVelLRrAuthV =0;// Valid
    in->IMULonAccPriV = 0;
    in->StrWhAngGrdV =0;//Valid
    in->ABAAPS_AccPosV =0;//Valid
    in->StrWhAngMsk =1;//True
    in->StrWhAngGrdMsk = 1;// use data
    in->IMUDataMsk_1 =1;//True
    in->DrvIntndAxlTrqMinV =0;//Valid
    in->BrkPedAppV =0;//Valid
    in->BPDAPS_BkPDrvApPV =0;//Valid
    in->VSEAct =0;//False
    in->TransEstGearV_TCM =0;//Valid
    in->SysPwrMdV = 0 ; //valid
    in->DrSbltAtcV = 0; //valid
    in->PsSbltAtcV = 0; //valid
    in->FltMngmntOut = 0;
    in->SysPwrMd = 2;
    in->Major_Speed_Right_Rear_Diag = 1;
    in->Major_Speed_Left_Rear_Diag = 1;
    in->BackUp_Speed_Diag = 1;
    in->StrWhlAngSenCalStat = 2; //$0=Unknown; $1=Estimated; $2=Calibrated
    in->IMUXAxisClbrtd = 1;      //$0=Not Calibrated; $1=Calibrated
}

void All_input_Invalid(ExtU_MainStateMachine_T *in){
    in->AccActPosV =1;
    in->IMUYawRtPriV = 1;
    in->IMULatAccPrimV =1;
    in->StrWhAngV =1;//Valid
    in->WhlAngVelRRrAuthV =1;
    in->WhlAngVelLRrAuthV =1;
    in->IMULonAccPriV =1;
    in->StrWhAngGrdV =1;
    in->VehSpdAvgNDrvnV =1;
    
    in->ABAAPS_AccPosV =1;
    in->StrWhAngMsk =0;
    in->StrWhAngGrdMsk = 0;
    in->IMUDataMsk_1 =0;
    in->DrvIntndAxlTrqMinV =1;
    in->BrkPedAppV =1;
    in->BPDAPS_BkPDrvApPV =1;
    in->VSEAct =1;
    in->TransEstGearV_TCM =1;
    in->SysPwrMdV = 1 ; 
    in->DrSbltAtcV = 1; 
    in->PsSbltAtcV = 1; 
    in->FltMngmntOut =0 ;
    in->SysPwrMd = 2;
    in->SysPwrMdV = 0;
}
void All_Sensors_Ready(ExtU_MainStateMachine_T *in){

    in->ILRR_SP_OperationMode = 2; //normal
    in->ILRR_SP_CalibrationState = 1; //sensor_calibrated
    in->FS_FULL_BLOCKAGE_BIT = 0; //None
    in->FS_Impaired_VD = 0 ;// None
    in->FS_OUT_OF_CALIBRATION = 0;//None
    in->FS_CALIBRATION_MISALIGNMENT = 0; //None

}

void brakePedalInhibit(ExtU_MainStateMachine_T * in){
    in->BrkPdlPos = 0; //
    in->BPDAPS_BkPDrvApP = 0; //

}
void acceleratorPedalInhibit(ExtU_MainStateMachine_T * in){
    in->AccActPos = 0;
    in->AccActPosGrad = 0;
    in->IMULonAccPriV = 0;
    in->IMULonAccPri = 0;
}

void DriverHardTurning(ExtU_MainStateMachine_T * in){
    if(in->AEB_Scenario == CIB){
        in->StrWhAngGrd = 0;
    }
    else if(in->AEB_Scenario == VRU){
        in->StrWhAngGrd = 180;
    }
    else if(in -> AEB_Scenario == ICM){
        in->StrWhAngGrd = 0;
    }
    
}

void SteeringWheelGradientInhibit(ExtU_MainStateMachine_T * in){
    in->StrWhAngGrd  = 0;

}

void seatbeltUnfastenedInhibit(ExtU_MainStateMachine_T * in){
    in->DrSbltAtc = 1;
    in->PsSbltAtc = 0;
    in->DrSbltAtcV = 0;
    in->FrntPasSeatOccSta = 1;
}

void AcceleratorPedalOverride(ExtU_MainStateMachine_T * in){
    
}
void AEBinhibit(ExtU_MainStateMachine_T * in){
    brakePedalInhibit(in);
    acceleratorPedalInhibit(in);
    SteeringWheelGradientInhibit(in);
    seatbeltUnfastenedInhibit(in);
}
void brakePedalOverride(ExtU_MainStateMachine_T * in){
    in->BrkPdlPos = 0;
    
}
void IBAinhibit(ExtU_MainStateMachine_T * in){

    acceleratorPedalInhibit(in);
    SteeringWheelGradientInhibit(in);
    seatbeltUnfastenedInhibit(in);
}

void T0_11_Initialization(ExtU_MainStateMachine_T * in){
    // MainStateMachine_DW.is_c3_MainStateMachine = 7U; 
    // MainStateMachine_DW.is_active_c3_MainStateMachine  = 1;
    All_input_Valid(in);
    All_Sensors_Ready(in);
    in->AEB_Scenario = 1; // CIB
    in->ColPrSysCstChgSetReq = 3; 
    in->ICMCstChgStReq = 3 ; // 458 vehicle don't have this signal
    in->FrntPCMRspTypCstChgSetReq = 3;
    in->TransEstGear_TCM = 0xC;

    
    // acceleratorPedalInhibit(in);
    // DriverHardTurning(in);
    AEBinhibit(in);
    // yawRateInhibit(in);
    // SpeedInhibit(in);

    in->WhlAngVelRRrAuth = 25;
    in->WhlAngVelLRrAuth = 25;
    in->WhlDstPrRvlRrAuth= 1000;

    in->TiToCllsn = 0;

    in->ExtBrkReqBackupEBCM = 1;

    in->BrkPdlPosGrad = 0;
    in->BPDAPS_BkPDrvApP = 0;
}

void T0_12_Initialization(ExtU_MainStateMachine_T * in){

    All_input_Valid(in);
    All_Sensors_Ready(in);
    in->AEB_Scenario = CIB;
    in->ColPrSysCstChgSetReq = 3; 
    in->ICMCstChgStReq = 3 ; // 458 vehicle don't have this signal
    in->FrntPCMRspTypCstChgSetReq = 3;
    in->TransEstGear_TCM = 0xC;

    
    acceleratorPedalInhibit(in);
    DriverHardTurning(in);
    AEBinhibit(in);


    in->DrSbltAtc = 1;
    in->DrSbltAtcV = 0;
    in->FrntPasSeatOccSta = 1;

    in->WhlAngVelRRrAuth = 25;
    in->WhlAngVelLRrAuth = 25;
    in->WhlDstPrRvlRrAuth = 1000;

    in->TiToCllsn = 0;

    in->ExtBrkReqBackupEBCM = 0;
}
void T0_32_Initialization(ExtU_MainStateMachine_T * in){
    // MainStateMachine_DW.is_c3_MainStateMachine = 6U; 
    // MainStateMachine_DW.is_active_c3_MainStateMachine  = 1;
    All_input_Valid(in);
    All_Sensors_Ready(in);
    in->AEB_Scenario = CIB;
    in->ColPrSysCstChgSetReq = 3; 
    in->ICMCstChgStReq = 3 ;
    in->FrntPCMRspTypCstChgSetReq = 3;
    in->TransEstGear_TCM = 0xC;
    acceleratorPedalInhibit(in);
    DriverHardTurning(in);
    IBAinhibit(in);

    in->DrSbltAtc = 1;
    in->DrSbltAtcV = 0;
    in->FrntPasSeatOccSta = 1;
    in->WhlAngVelRRrAuth = 25;
    in->WhlAngVelLRrAuth = 25;
    in->WhlDstPrRvlRrAuth = 1000;
    in->TiToCllsn = 0;
    in->ABFI_CollPrepSysInhbt = 0;

    in->BrkPdlPosGrad = 85;
    in->ExtBrkReqBackupEBCM = 0;
    in->BPDAPS_BkPDrvApP = 2480;
    in->ObjOfInterest_Present = 1;
}

void T11_0_Initialization(ExtU_MainStateMachine_T * in){
    MainStateMachine_DW.is_c3_MainStateMachine = 2; 
    MainStateMachine_DW.is_active_c3_MainStateMachine  = 1;
}

void T11_32_Initialization(ExtU_MainStateMachine_T * in){

    in->BrkPdlPosGrad = 85;
    in->BPDAPS_BkPDrvApP = 2480;
    in->ObjOfInterest_Present = 1;
}

void T11_4_Initialization(ExtU_MainStateMachine_T * in){
    in->WhlAngVelRRrAuth = 1 / 36;
    in->WhlAngVelLRrAuth = 1 / 36;
    in->WhlDstPrRvlRrAuth = 1000;
}
void T12_0_Initialization(ExtU_MainStateMachine_T * in){
    MainStateMachine_DW.is_c3_MainStateMachine = 2; 
    MainStateMachine_DW.is_active_c3_MainStateMachine  = 1;

}
void T12_31_Initialization(ExtU_MainStateMachine_T * in){

    in->ColPrSysCstChgSetReq = 3;
    in->BrkPedApp = 1;
    in->ExtBrkReqBackupEBCM = 2;
    in->ObjOfInterest_Present = 1;
}
void T12_4_Initialization(ExtU_MainStateMachine_T * in){
    in->WhlAngVelRRrAuth = 1 / 36;
    in->WhlAngVelLRrAuth = 1 / 36;
    in->WhlDstPrRvlRrAuth = 1000;
}
void T31_0_Initialization(ExtU_MainStateMachine_T * in){
    // MainStateMachine_DW.is_c3_MainStateMachine = 3;
    // MainStateMachine_DW.is_active_c3_MainStateMachine  = 1;
}
void T32_0_Initialization(ExtU_MainStateMachine_T * in){

    in->AccActPosV =0;
    in->VehSpdAvgNDrvnV =0;//Valid
    in->IMUYawRtPriV = 0;//Valid
    in->IMULatAccPrimV =0;//Valid
    in->StrWhAngV =0;//Valid
    in->WhlAngVelRRrAuthV =0;//Valid
    in->WhlAngVelLRrAuthV =0;// Valid
    in->IMULonAccPriV = 0;
    in->StrWhAngGrdV =0;//Valid
    in->ABAAPS_AccPosV =0;//Valid
    in->StrWhAngMsk =1;//True
    in->StrWhAngGrdMsk = 1;// use data
    in->IMUDataMsk_1 =1;//True
    in->DrvIntndAxlTrqMinV =0;//Valid
    in->BrkPedAppV =0;//Valid
    in->BPDAPS_BkPDrvApPV =0;//Valid
    in->BPDAPS_BkPDrvApP = 6;
    in->VSEAct =0;//False
    in->TransEstGearV_TCM =0;//Valid
    in->IMULonAccPriV = 0; //valid
    in->SysPwrMdV = 0 ; //valid
    in->DrSbltAtcV = 0; //valid
    in->PsSbltAtcV = 0; //valid
    in->FltMngmntOut =0;
    in->SysPwrMd = 2;
    in->SysPwrMdV = 0;  
    in->StrWhlAngSenCalStat = 2;
    in->IMUXAxisClbrtd = 1;
    in->VehSpdAvgNDrvn = 40; //1 valid kph
    in->ILRR_SP_OperationMode = 2; //normal
    in->ILRR_SP_CalibrationState = 1; //sensor_calibrated
    in->FS_FULL_BLOCKAGE_BIT = 0; //None
    in->FS_Impaired_VD = 0 ;// None
    in->FS_OUT_OF_CALIBRATION = 0;//None
    in->FS_CALIBRATION_MISALIGNMENT = 0; //None
    in->AEB_Scenario = 2;
    in->ColPrSysCstChgSetReq = 3; 
    in->ICMCstChgStReq = 3 ;
    in->FrntPCMRspTypCstChgSetReq = 3;
    in->TransEstGear_TCM = 0xC;
    in->AccActPos = 0;
    in->AccActPosGrad = 0;
    in->IMULonAccPriV = 0;
    in->IMULonAccPri = 0;
    in->AccActPosGrad = 0;
    in->StrWhAngGrd  = 0;
    in->TiToCllsn = 0;
    in->ExtBrkReqBackupEBCM = 1;
    in->WhlAngVelRRrAuth = 25;
    in->WhlAngVelLRrAuth = 25;
    in->WhlDstPrRvlRrAuth = 1000;
    in->ObjOfInterest_Present = 1; //AEB SDK if the object is missing from camera but still in lidar

}
void T4_0_Initialization(ExtU_MainStateMachine_T * in){
    MainStateMachine_DW.is_c3_MainStateMachine = 5; 
    MainStateMachine_DW.is_active_c3_MainStateMachine  = 1;
}

//0-1.1
void T0_11_S2(ExtU_MainStateMachine_T * in ){
    in->IMUYawRtPriV = 1; //invalid
}
void T0_11_S3(ExtU_MainStateMachine_T * in ){
    in->IMULatAccPrimV = 1; //invalid
}
void T0_11_S4(ExtU_MainStateMachine_T * in ){
    in->StrWhAngV = 1; //invalid
}
void T0_11_S5(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdMsk = 0;
}
void T0_11_S6(ExtU_MainStateMachine_T * in ){
    in->WhlAngVelRRrAuthV = 1; //invalid   
}
void T0_11_S7(ExtU_MainStateMachine_T * in ){
    in->WhlAngVelLRrAuthV = 1; //invalid
    
}
void T0_11_S8(ExtU_MainStateMachine_T * in ){
    in->IMUDataMsk_1 = 0;
}
void T0_11_S9(ExtU_MainStateMachine_T * in ){
    in->IMULonAccPriV = 1;
}
void T0_11_S10(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdV = 1; 
}
void T0_11_S11(ExtU_MainStateMachine_T * in ){
    in->VehSpdAvgNDrvnV = 1;
    
}
void T0_11_S12(ExtU_MainStateMachine_T * in ){
    in->AccActPosV = 1; //invalid
    
}
void T0_11_S13(ExtU_MainStateMachine_T * in ){
    in->DrSbltAtcV = 1; //Invalid
}
void T0_11_S14(ExtU_MainStateMachine_T * in ){
    in->PsSbltAtcV = 1; //invalid
}
void T0_11_S15(ExtU_MainStateMachine_T * in ){
    in->StrWhlAngSenCalStat = 0; //unknown
}
void T0_11_S16(ExtU_MainStateMachine_T * in ){
    in->IMUXAxisClbrtd =0; //not calivrated
}
void T0_11_S17(ExtU_MainStateMachine_T * in ){
    //0-3.2
//    CIB Collision Preparation System Customization Change Setting Request ≠ $3=Alert Brake AND 
// 8kph≤ PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven ≤140kph
    in->ColPrSysCstChgSetReq = 2;
    in->WhlAngVelRRrAuth = 20;
    in->WhlAngVelLRrAuth = 20;
}
void T0_11_S18(ExtU_MainStateMachine_T * in ){
    //0-1.2
// CIB Collision Preparation System Customization Change Setting Request = $3=Alert Brake AND 
// PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven < 8kph 
    in->ColPrSysCstChgSetReq = 3;
    in->WhlAngVelRRrAuth = 1 / 36;
    in->WhlAngVelLRrAuth = 1 / 36;
}

void T0_11_S19(ExtU_MainStateMachine_T * in ){
    //0-3.2
// Collision Preparation System Customization Change Setting Request = $3=Alert Brake AND 
// 140kph < PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven
    in->ColPrSysCstChgSetReq = 3;
    in->WhlAngVelRRrAuth = 2000 / 36;
    in->WhlAngVelLRrAuth = 2000 / 36;
}

void T0_11_S20(ExtU_MainStateMachine_T * in ){
    //0-3.2
    //     VRU Front PCM Response Type Customization Change Setting Request ≠ $3=Alert Brake AND 
// 8≤ PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven ≤ 80kph
    in->AEB_Scenario = 2; // VRU
    in->FrntPCMRspTypCstChgSetReq = 1;
    in->WhlAngVelRRrAuth = 20;
    in->WhlAngVelLRrAuth = 20;
}

void T0_11_S21(ExtU_MainStateMachine_T * in ){
    //0-3.2
// VRU Front PCM Response Type Customization Change Setting Request = $3=Alert Brake AND 
//  PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven < 8kph
    in->AEB_Scenario = 2; // VRU
    in->FrntPCMRspTypCstChgSetReq = 1;
    in->WhlAngVelRRrAuth = 1 / 36;
    in->WhlAngVelLRrAuth = 1 / 36;
}

void T0_11_S22(ExtU_MainStateMachine_T * in ){
    //0-3.2
//     VRU  Front PCM Response Type Customization Change Setting Request = $3=Alert Brake AND 
// 80kph < PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven
    in->AEB_Scenario = 2; // VRU
    in->FrntPCMRspTypCstChgSetReq = 1;
    in->WhlAngVelRRrAuth = 2000 / 36;
    in->WhlAngVelLRrAuth = 2000 / 36;
}

void T0_11_S23(ExtU_MainStateMachine_T * in ){
    //0-3.2
    /* ICM
Intersection Collision Mitigation Customization Change Setting Request ≠ $3=Alert Brake AND 
8kph ≤ PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven ≤ 80kph*/
    in->AEB_Scenario = 3; // ICM
    in->ICMCstChgStReq = 1; // Off
    in->WhlAngVelRRrAuth = 25;
    in->WhlAngVelLRrAuth = 25;
}

void T0_11_S24(ExtU_MainStateMachine_T * in ){
    //0-3.2
    /*ntersection Collision Mitigation Customization Change Setting Request = $3=Alert Brake AND 
PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven < 8kph*/
    in->AEB_Scenario = 3;   // ICM
    in->ICMCstChgStReq = 3;
    in->WhlAngVelRRrAuth = 1 / 36;
    in->WhlAngVelLRrAuth = 1 / 36;
}

void T0_11_S25(ExtU_MainStateMachine_T * in ){
    //0-3.2
    /*Intersection Collision Mitigation Customization Change Setting Request = $3=Alert Brake AND 
80kph < PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven*/
    in->AEB_Scenario = 3; // ICM
    in->ICMCstChgStReq = 3;
    in->WhlAngVelRRrAuth = 2000 / 36;
    in->WhlAngVelLRrAuth = 2000 / 36;
}

void T0_11_S26(ExtU_MainStateMachine_T * in ){
    /*458：0x0C8: TransEstGear_TCM = $F Park Gear
557：Transmission Estimated Gear_ECP_H1  = $F Park Gear;*/
    in->TransEstGear_TCM = 0xF;
    
}

void T0_11_S27(ExtU_MainStateMachine_T * in ){
    /*458：0x0C8: TransEstGear_TCM = $E Reverse Gear
557：Transmission Estimated Gear_ECP_H1 = $E Reverse Gear;*/
    in->TransEstGear_TCM = 0xE;
}

void T0_11_S28(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0x0;
}

void T0_11_S29(ExtU_MainStateMachine_T * in ){
    in->TransEstGearV_TCM = 1;
}

void T0_11_S30(ExtU_MainStateMachine_T * in ){
    in->VSEAct = 1;
}

// TODO: last for 4s
void T0_11_S31(ExtU_MainStateMachine_T * in ){
    /* Accelerator Actual Position > 30% and 
IMULonAccPri > 0.6m/s2 */
    in->AccActPos = 35;
    in->AccActPosGrad = 45;
    in->IMULonAccPri = 0.7; 
}

void T0_11_S32(ExtU_MainStateMachine_T * in ){
    /*in case of CIB, Driver Avoidance Hard Turning is False,
Steering Wheel Angle Gradient > K_w_CIB_SWI_Rate_Hard_Turn( 170°/s ) 
*/
    //in->AEB_Scenario = 1;
    in->StrWhAngGrd = 171;
}

void T0_11_S33(ExtU_MainStateMachine_T * in ){
    /*n case of VRU, Driver Avoidance Hard Turning is False,
Steering Wheel Angle Gradient > K_w_VRU_SWI_Rate_Hard_Turn > 170°/s  
*/
    in->AEB_Scenario = 2; // VRU
    in->StrWhAngGrd = 171;
    in->WhlAngVelRRrAuth = 25;
    in->WhlAngVelLRrAuth = 25;
}

void T0_11_S34(ExtU_MainStateMachine_T * in ){
    /*PPEI Engine General Status 1 Signal Group 2 : Accelerator Actual Position > 30% and 
Accelerator Actual Position Gradient > 40%/s  (no signals) and 
IMULonAccPri > 0.6m/s2 */
    in->AEB_Scenario = 3;
    in->StrWhAngGrd = 344;
    in->WhlAngVelRRrAuth = 25;
    in->WhlAngVelLRrAuth = 25;
}

void T0_11_S35(ExtU_MainStateMachine_T *in){
    /*in case of CIB, Driver Avoidance Hard Turning is False,
Steering Wheel Angle Gradient > K_w_CIB_SWI_Rate_Hard_Turn( 170°/s ) 
*/
    in->BrkPdlPos = 11.0;
}

void T0_11_S36(ExtU_MainStateMachine_T *in){
    /*in case of VRU, Driver Avoidance Hard Turning is False,
Steering Wheel Angle Gradient > K_w_VRU_SWI_Rate_Hard_Turn > 170°/s  
*/
    in->BPDAPS_BkPDrvApP = 251;
}

void T0_11_S37(ExtU_MainStateMachine_T *in){
    /*Driver Avoidance Hard Turning is False,
Steering Wheel Angle Gradient > K_w_ICM_SWI_Rate_Hard_Turn(ICM > 343°/s)
*/
    in->DrSbltAtc = 0;
    in->DrSbltAtcV = 0;
}

void T0_11_S38(ExtU_MainStateMachine_T *in){
    /*FrntPasSeatOccSta(no signals, no need to consider)
and
PsSbltAtc =$1=False
and
PsSbltAtcV = $0=Valid*/
    in->PsSbltAtc = 0; // false
    in->PsSbltAtcV = 0;
    in->FrntPasSeatOccSta = 2;
}

void T0_11_S39(ExtU_MainStateMachine_T *in){
    /*BPDAPS_BkPDrvApP > K_p_BPI_PressureEntr(250kpa) */
    in->TiToCllsn = 1000.0;
}

//0-1.2
void T0_12_S2(ExtU_MainStateMachine_T * in ){
    in->IMUYawRtPriV = 1; //invalid
}
void T0_12_S3(ExtU_MainStateMachine_T * in ){
    in->IMULatAccPrimV = 1; //invalid
}
void T0_12_S4(ExtU_MainStateMachine_T * in ){
    in->StrWhAngV = 1; //invalid
}
void T0_12_S5(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdMsk = 0;
}
void T0_12_S6(ExtU_MainStateMachine_T * in ){
    in->WhlAngVelRRrAuthV = 1; //invalid   
}
void T0_12_S7(ExtU_MainStateMachine_T * in ){
    in->WhlAngVelLRrAuthV = 1; //invalid
    
}
void T0_12_S8(ExtU_MainStateMachine_T * in ){
    in->IMUDataMsk_1 = 0;
}
void T0_12_S9(ExtU_MainStateMachine_T * in ){
    in->IMULonAccPriV = 1;
}
void T0_12_S10(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdV = 1; 
}
void T0_12_S11(ExtU_MainStateMachine_T * in ){
    in->VehSpdAvgNDrvnV = 1;
    
}
void T0_12_S12(ExtU_MainStateMachine_T * in ){
    in->AccActPosV = 1; //invalid
    
}
void T0_12_S13(ExtU_MainStateMachine_T * in ){
    in->DrSbltAtcV = 1; //Invalid
}
void T0_12_S14(ExtU_MainStateMachine_T * in ){
    in->PsSbltAtcV = 1; //invalid
}
void T0_12_S15(ExtU_MainStateMachine_T * in ){
    in->StrWhlAngSenCalStat = 0; //unknown
}
void T0_12_S16(ExtU_MainStateMachine_T * in ){
    in->IMUXAxisClbrtd =0; //not calivrated
}
void T0_12_S17(ExtU_MainStateMachine_T * in ){
    // 0-3.2
    //  In case of CIB: Make sure only the requirement below is satisfied:
    //  CIB Collision Preparation System Customization Change Setting Request ≠ $3=Alert Brake AND
    // 8kph≤ PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven ≤140kph
    in->AEB_Scenario = CIB;
    in->ColPrSysCstChgSetReq = 1;
    in->WhlAngVelRRrAuth = 25;
    in->WhlAngVelLRrAuth = 25;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_12_S18(ExtU_MainStateMachine_T * in ){
    //0-1.2
// CIB Collision Preparation System Customization Change Setting Request = $3=Alert Brake AND 
// PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven < 8kph
    in->ColPrSysCstChgSetReq = 3;
    in->WhlAngVelRRrAuth = 1 / 36;
    in->WhlAngVelLRrAuth = 1 / 36;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_12_S19(ExtU_MainStateMachine_T * in ){
    //0-3.2
// Collision Preparation System Customization Change Setting Request = $3=Alert Brake AND 
// 140kph < PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven
    in->ColPrSysCstChgSetReq = 3;
    in->WhlAngVelRRrAuth = 2000 / 36;
    in->WhlAngVelLRrAuth = 2000 / 36;
    in->WhlDstPrRvlRrAuth = 1000;
}
void T0_12_S20(ExtU_MainStateMachine_T * in ){
    //0-3.2
    //     VRU Front PCM Response Type Customization Change Setting Request ≠ $3=Alert Brake AND 
// 8≤ PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven ≤ 80kph
    in->AEB_Scenario = VRU;
    in->FrntPCMRspTypCstChgSetReq = 1; // Off
    in->ColPrSysCstChgSetReq = 2;
    in->WhlAngVelRRrAuth = 20;
    in->WhlAngVelLRrAuth = 20;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_12_S21(ExtU_MainStateMachine_T * in ){
    //0-3.2
// VRU Front PCM Response Type Customization Change Setting Request = $3=Alert Brake AND 
//  PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven < 8kph
    in->AEB_Scenario = VRU;
    in->FrntPCMRspTypCstChgSetReq = 3; // Off
    in->WhlAngVelRRrAuth = 1 / 36;
    in->WhlAngVelLRrAuth = 1 / 36;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_12_S22(ExtU_MainStateMachine_T * in ){
    //0-3.2
//     VRU  Front PCM Response Type Customization Change Setting Request = $3=Alert Brake AND 
// 80kph < PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven
    in->AEB_Scenario = VRU;
    in->FrntPCMRspTypCstChgSetReq = 3;
    in->WhlAngVelRRrAuth = 1000 / 36;
    in->WhlAngVelLRrAuth = 1000 / 36;
    in->WhlDstPrRvlRrAuth = 1000;
}
void T0_12_S23(ExtU_MainStateMachine_T * in ){
    //0-3.2
    /* ICM
Intersection Collision Mitigation Customization Change Setting Request ≠ $3=Alert Brake AND 
8kph ≤ PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven ≤ 80kph*/
    in->AEB_Scenario = ICM;
    in->ICMCstChgStReq = 1; // Off
    in->WhlAngVelRRrAuth = 20;
    in->WhlAngVelLRrAuth = 20;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_12_S24(ExtU_MainStateMachine_T * in ){
    //0-3.2
    /*ntersection Collision Mitigation Customization Change Setting Request = $3=Alert Brake AND 
PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven < 8kph*/
    in->AEB_Scenario = ICM;
    in->ICMCstChgStReq = 3;
    in->WhlAngVelRRrAuth = 1 / 36;
    in->WhlAngVelLRrAuth = 1 / 36;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_12_S25(ExtU_MainStateMachine_T * in ){
    //0-3.2
    /*Intersection Collision Mitigation Customization Change Setting Request = $3=Alert Brake AND 
80kph < PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven*/
    in->AEB_Scenario = ICM;
    in->ICMCstChgStReq = 3;
    in->WhlAngVelRRrAuth = 1000 / 36;
    in->WhlAngVelLRrAuth = 1000 / 36;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_12_S26(ExtU_MainStateMachine_T * in ){
    /*458：0x0C8: TransEstGear_TCM = $F Park Gear
557：Transmission Estimated Gear_ECP_H1  = $F Park Gear;*/
    in->TransEstGear_TCM = 0xF;
    
}

void T0_12_S27(ExtU_MainStateMachine_T * in ){
    /*458：0x0C8: TransEstGear_TCM = $E Reverse Gear
557：Transmission Estimated Gear_ECP_H1 = $E Reverse Gear;*/
    in->TransEstGear_TCM = 0xE;
}

void T0_12_S28(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0x0;
}

void T0_12_S29(ExtU_MainStateMachine_T * in ){
    in->TransEstGearV_TCM = 1;
}

void T0_12_S30(ExtU_MainStateMachine_T * in ){
    in->VSEAct = 1;
}

void T0_12_S31(ExtU_MainStateMachine_T * in ){
    /* Accelerator Actual Position > 30% and 
IMULonAccPri > 0.6m/s2 */
    in->AccActPos = 35;
    in->AccActPosGrad = 50;
    in->IMULonAccPri = 0.7;
}

void T0_12_S32(ExtU_MainStateMachine_T * in ){
    /*in case of CIB, Driver Avoidance Hard Turning is False,
Steering Wheel Angle Gradient > K_w_CIB_SWI_Rate_Hard_Turn( 170°/s ) 
*/
    //in->AEB_Scenario = 1;
    in->StrWhAngGrd = 171;
}

void T0_12_S33(ExtU_MainStateMachine_T * in ){
    /*n case of VRU, Driver Avoidance Hard Turning is False,
Steering Wheel Angle Gradient > K_w_VRU_SWI_Rate_Hard_Turn > 170°/s  
*/
    in->AEB_Scenario = 2;
    in->StrWhAngGrd = 171;

}
void T0_12_S34(ExtU_MainStateMachine_T * in ){
    /*PPEI Engine General Status 1 Signal Group 2 : Accelerator Actual Position > 30% and 
Accelerator Actual Position Gradient > 40%/s  (no signals) and 
IMULonAccPri > 0.6m/s2 */
    in->AEB_Scenario = 3;
    in->StrWhAngGrd = 344;

}
// TODO: Last for 4s
void T0_12_S35(ExtU_MainStateMachine_T *in){
    /*in case of CIB, Driver Avoidance Hard Turning is False,
Steering Wheel Angle Gradient > K_w_CIB_SWI_Rate_Hard_Turn( 170°/s ) 
*/
    in->BrkPdlPos = 11.0;
}
void T0_12_S36(ExtU_MainStateMachine_T *in){
    /*in case of VRU, Driver Avoidance Hard Turning is False,
Steering Wheel Angle Gradient > K_w_VRU_SWI_Rate_Hard_Turn > 170°/s  
*/
    in->BPDAPS_BkPDrvApP = 251;

}
void T0_12_S37(ExtU_MainStateMachine_T *in){
    /*Driver Avoidance Hard Turning is False,
Steering Wheel Angle Gradient > K_w_ICM_SWI_Rate_Hard_Turn(ICM > 343°/s)
*/
    in->DrSbltAtc = 0;
    in->DrSbltAtcV = 0;
}

void T0_12_S38(ExtU_MainStateMachine_T *in){
    /*FrntPasSeatOccSta(no signals, no need to consider)
and
PsSbltAtc =$1=False
and
PsSbltAtcV = $0=Valid*/
    in->FrntPasSeatOccSta = 2;
    in->PsSbltAtc = 0;
    in->PsSbltAtcV = 0;
}

void T0_12_S39(ExtU_MainStateMachine_T *in){
    /*BPDAPS_BkPDrvApP > K_p_BPI_PressureEntr(250kpa) */
    in->TiToCllsn = 1000.0;
}


//T0-32
void T0_32_S2(ExtU_MainStateMachine_T * in ){
    in->IMUYawRtPriV = 1; //invalid
}
void T0_32_S3(ExtU_MainStateMachine_T * in ){
    in->IMULatAccPrimV = 1; //invalid
}
void T0_32_S4(ExtU_MainStateMachine_T * in ){
    in->StrWhAngV = 1; //invalid
}
void T0_32_S5(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdMsk = 0;
}
void T0_32_S6(ExtU_MainStateMachine_T * in ){
    in->WhlAngVelRRrAuthV = 1; //invalid   
}
void T0_32_S7(ExtU_MainStateMachine_T * in ){
    in->WhlAngVelLRrAuthV = 1; //invalid
    
}
void T0_32_S8(ExtU_MainStateMachine_T * in ){
    in->IMUDataMsk_1 = 0;
}
void T0_32_S9(ExtU_MainStateMachine_T * in ){
    in->IMULonAccPriV = 1;
}
void T0_32_S10(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdV = 1; 
}
void T0_32_S11(ExtU_MainStateMachine_T * in ){
    in->VehSpdAvgNDrvnV = 1;
    
}
void T0_32_S12(ExtU_MainStateMachine_T * in ){
    in->AccActPosV = 1; //invalid
    
}
void T0_32_S13(ExtU_MainStateMachine_T * in ){
    in->DrSbltAtcV = 1; //Invalid
}
void T0_32_S14(ExtU_MainStateMachine_T * in ){
    in->PsSbltAtcV = 1; //invalid
}
void T0_32_S15(ExtU_MainStateMachine_T * in ){
    in->StrWhlAngSenCalStat = 0; //unknown
}
void T0_32_S16(ExtU_MainStateMachine_T * in ){
    in->IMUXAxisClbrtd =0; //not calivrated
}
void T0_32_S17(ExtU_MainStateMachine_T * in ){
    //0-3.2
//    CIB Collision Preparation System Customization Change Setting Request ≠ $3=Alert Brake AND 
// 8kph≤ PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven ≤140kph
    in->ColPrSysCstChgSetReq = 1;
    in->WhlAngVelRRrAuth = 25;
    in->WhlAngVelLRrAuth = 25;
    in->WhlDstPrRvlRrAuth = 1000;
}
void T0_32_S18(ExtU_MainStateMachine_T * in ){
    //0-1.2
// CIB Collision Preparation System Customization Change Setting Request = $3=Alert Brake AND 
// PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven < 8kph
    in->ColPrSysCstChgSetReq = 3;
    in->WhlAngVelRRrAuth = 1 / 36;
    in->WhlAngVelLRrAuth = 1 / 36;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_32_S19(ExtU_MainStateMachine_T * in ){
    //0-3.2
// Collision Preparation System Customization Change Setting Request = $3=Alert Brake AND 
// 140kph < PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven
    in->ColPrSysCstChgSetReq = 3;
    in->WhlAngVelRRrAuth = 2000 / 36;
    in->WhlAngVelLRrAuth = 2000 / 36;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_32_S20(ExtU_MainStateMachine_T * in ){
    //0-3.2
    //     VRU Front PCM Response Type Customization Change Setting Request ≠ $3=Alert Brake AND 
// 8≤ PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven ≤ 80kph
    in->AEB_Scenario = VRU;
    in->FrntPCMRspTypCstChgSetReq = 1;
    in->WhlAngVelRRrAuth = 20;
    in->WhlAngVelLRrAuth = 20;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_32_S21(ExtU_MainStateMachine_T * in ){
    //0-3.2
// VRU Front PCM Response Type Customization Change Setting Request = $3=Alert Brake AND 
//  PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven < 8kph
    in->AEB_Scenario = VRU;
    in->FrntPCMRspTypCstChgSetReq = 3;
    in->WhlAngVelRRrAuth = 1 / 36;
    in->WhlAngVelLRrAuth = 1 / 36;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_32_S22(ExtU_MainStateMachine_T * in ){
    //0-3.2
//     VRU  Front PCM Response Type Customization Change Setting Request = $3=Alert Brake AND 
// 80kph < PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven
    in->AEB_Scenario = VRU;
    in->FrntPCMRspTypCstChgSetReq = 3;
    in->WhlAngVelRRrAuth = 1000 / 36;
    in->WhlAngVelLRrAuth = 1000 / 36;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_32_S23(ExtU_MainStateMachine_T * in ){
    //0-3.2
    /* ICM
Intersection Collision Mitigation Customization Change Setting Request ≠ $3=Alert Brake AND 
8kph ≤ PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven ≤ 80kph*/
    in->AEB_Scenario = ICM;
    in->ICMCstChgStReq = 1;
    in->WhlAngVelRRrAuth =  20;
    in->WhlAngVelLRrAuth =  20;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_32_S24(ExtU_MainStateMachine_T * in ){
    //0-3.2
    /*ntersection Collision Mitigation Customization Change Setting Request = $3=Alert Brake AND 
PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven < 8kph*/
    in->AEB_Scenario = ICM;
    in->ICMCstChgStReq = 3;
    in->WhlAngVelRRrAuth = 1 / 36;
    in->WhlAngVelLRrAuth = 1 / 36;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_32_S25(ExtU_MainStateMachine_T * in ){
    //0-3.2
    /*Intersection Collision Mitigation Customization Change Setting Request = $3=Alert Brake AND 
80kph < PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven*/
    in->AEB_Scenario = ICM;
    in->ICMCstChgStReq = 3;
    in->WhlAngVelRRrAuth = 1000 / 36;
    in->WhlAngVelLRrAuth = 1000 / 36;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T0_32_S26(ExtU_MainStateMachine_T * in ){
    /*458：0x0C8: TransEstGear_TCM = $F Park Gear
557：Transmission Estimated Gear_ECP_H1  = $F Park Gear;*/
    in->TransEstGear_TCM = 0xF;
    
}
void T0_32_S27(ExtU_MainStateMachine_T * in ){
    /*458：0x0C8: TransEstGear_TCM = $E Reverse Gear
557：Transmission Estimated Gear_ECP_H1 = $E Reverse Gear;*/
    in->TransEstGear_TCM = 0xE;
}
void T0_32_S28(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0x0;
}
void T0_32_S29(ExtU_MainStateMachine_T * in ){
    in->TransEstGearV_TCM = 1;
}
void T0_32_S30(ExtU_MainStateMachine_T * in ){
    in->VSEAct = 1;
}

void T0_32_S31(ExtU_MainStateMachine_T * in ){
    /* Accelerator Actual Position > 30% and 
IMULonAccPri > 0.6m/s2 */
    in->AccActPos = 35;
    in->AccActPosGrad = 50;
    in->IMULonAccPri = 0.7;
}

void T0_32_S32(ExtU_MainStateMachine_T * in ){
    /*in case of CIB, Driver Avoidance Hard Turning is False,
Steering Wheel Angle Gradient > K_w_CIB_SWI_Rate_Hard_Turn( 170°/s ) 
*/
    //in->AEB_Scenario = 1;
    in->StrWhAngGrd = 171;
}
void T0_32_S33(ExtU_MainStateMachine_T * in ){
    /*n case of VRU, Driver Avoidance Hard Turning is False,
Steering Wheel Angle Gradient > K_w_VRU_SWI_Rate_Hard_Turn > 170°/s  
*/
    in->AEB_Scenario = 2;
    in->StrWhAngGrd = 171;

}
void T0_32_S34(ExtU_MainStateMachine_T * in ){
    /*PPEI Engine General Status 1 Signal Group 2 : Accelerator Actual Position > 30% and 
Accelerator Actual Position Gradient > 40%/s  (no signals) and 
IMULonAccPri > 0.6m/s2 */
    in->AEB_Scenario = 3;
    in->StrWhAngGrd = 344;

}

void T0_32_S35(ExtU_MainStateMachine_T *in){
    in->DrSbltAtc = 0;
    in->DrSbltAtcV = 0;
}

void T0_32_S36(ExtU_MainStateMachine_T *in){
    /*in case of VRU, Driver Avoidance Hard Turning is False,
Steering Wheel Angle Gradient > K_w_VRU_SWI_Rate_Hard_Turn > 170°/s  
*/
    in->PsSbltAtc = 0;
    in->PsSbltAtcV = 0;
    in->FrntPasSeatOccSta = 2;
}

void T0_32_S37(ExtU_MainStateMachine_T *in){
    /*Driver Avoidance Hard Turning is False,
Steering Wheel Angle Gradient > K_w_ICM_SWI_Rate_Hard_Turn(ICM > 343°/s)
*/
    in->TiToCllsn = 1000.0;
}



//T1.1-3.2
void T11_32_S1(ExtU_MainStateMachine_T *in){
    /*Brake Pedal Apply Rate Position > K_pct_IBA_Brake_Rate_Position for at least K_t_IBA_Rate_Enable_Time
AND 
Brake Pedal Driver Applied Pressure > K_p_IBA_Enable_Pressure for at least  K_t_IBA _Enable_Time */
    in->BrkPdlPosGrad = 85;
    in->BPDAPS_BkPDrvApP = 2480;
}

void T11_32_S2(ExtU_MainStateMachine_T *in){
    /*Brake Pedal Apply Rate Position = 30% and
    1. Set AEB state = Auto Braking For EBCM Only
    2. Set all input signals value as below
    - Brake Pedal Driver Applied Pressure = 2000kpa
    3. Run sw
    3. Check output signals value*/
    in->BrkPdlPosGrad = 15;
}

void T11_32_S3(ExtU_MainStateMachine_T *in){
    /*Brake Pedal Position Gradient <= K_pct_IBA_Brake_Rate_Position
    1. Set AEB state = Auto Braking For EBCM Only
    2. Set all input signals value as below
    - Brake Pedal Driver Applied Pressure = 2000kpa
    3. Run sw
    3. Check output signals value*/
    in->BPDAPS_BkPDrvApP = 2000;
}


//T1.1-4
void T11_4_S1(ExtU_MainStateMachine_T *in)
{
    //in->AEB_Scenario = 1;
}
void T11_4_S2(ExtU_MainStateMachine_T *in)
{
    in->WhlAngVelRRrAuth = 25;
    in->WhlAngVelLRrAuth = 25;
    in->WhlDstPrRvlRrAuth = 1000;
}

//t1.2-3.1
void T12_31_S1(ExtU_MainStateMachine_T *in){
    /*1. Set AEB state = Auto Braking For EBCM & Ibooster
    2. Set input signals value  Brake Pedal Applied = "$1 True"
    3. Run sw
    3. Check output signals value*/
    in->BrkPedApp = 1;
    in->ExtBrkReqBackupEBCM = 2;
}

void T12_31_S2(ExtU_MainStateMachine_T *in){
    in->BrkPedApp = 0;
}

void T12_31_S3(ExtU_MainStateMachine_T *in){
    /*
Brake Pedal Applied = $1 True  for less than  K_t_IBA_Enable_Time (VRU  0.2s).*/
    in->AEB_Scenario = VRU;
    in->BrkPedApp = 1;
}



//T1.2-4
void T12_4_S1(ExtU_MainStateMachine_T *in)
{
    in->WhlAngVelRRrAuth = 0;
    in->WhlAngVelLRrAuth = 0;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T12_4_S2(ExtU_MainStateMachine_T *in)
{
    in->WhlAngVelRRrAuth = 25;
    in->WhlAngVelLRrAuth = 25;
    in->WhlDstPrRvlRrAuth = 1000;
    in->ObjOfInterest_Present = 1;
}



//T1.1-0
void T11_0_S1(ExtU_MainStateMachine_T * in ){
    in->IMUYawRtPriV = 1; //invalid
}

void T11_0_S2(ExtU_MainStateMachine_T * in ){
    in->IMULatAccPrimV = 1; //invalid
}

void T11_0_S3(ExtU_MainStateMachine_T * in ){
    in->StrWhAngV = 1; //invalid
}

void T11_0_S4(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdMsk = 0;
}

void T11_0_S5(ExtU_MainStateMachine_T * in ){
    in->WhlAngVelRRrAuthV = 1; //invalid   
}

void T11_0_S6(ExtU_MainStateMachine_T * in ){
    in->WhlAngVelLRrAuthV = 1; //invalid
    
}

void T11_0_S7(ExtU_MainStateMachine_T * in ){
    in->IMUDataMsk_1 = 0;
}

void T11_0_S8(ExtU_MainStateMachine_T * in ){
    in->IMULonAccPriV = 1;
}

void T11_0_S9(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdV = 1; 
}

void T11_0_S10(ExtU_MainStateMachine_T * in ){
    in->VehSpdAvgNDrvnV = 1;
}

void T11_0_S11(ExtU_MainStateMachine_T * in ){
    in->AccActPosV = 1; //invalid
}

void T11_0_S12(ExtU_MainStateMachine_T * in ){
    in->DrSbltAtcV = 1; //Invalid
}

void T11_0_S13(ExtU_MainStateMachine_T * in ){
    in->PsSbltAtcV = 1; //invalid
}

void T11_0_S14(ExtU_MainStateMachine_T * in ){
    in->StrWhlAngSenCalStat = 0; //unknown
}

void T11_0_S15(ExtU_MainStateMachine_T * in ){
    in->IMUXAxisClbrtd =0; //not calivrated
}

void T11_0_S16(ExtU_MainStateMachine_T * in ){
    //0-3.2
//    CIB Collision Preparation System Customization Change Setting Request ≠ $3=Alert Brake AND 
// 8kph≤ PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven ≤140kph
    in->AEB_Scenario  = CIB;
    in->ColPrSysCstChgSetReq = 2;
}

void T11_0_S17(ExtU_MainStateMachine_T * in ){
    //0-1.2
// CIB Collision Preparation System Customization Change Setting Request = $3=Alert Brake AND 
// PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven < 8kph 
    in->AEB_Scenario = CIB;
    in->ColPrSysCstChgSetReq = 1;
    in->WhlAngVelRRrAuth = 25;
    in->WhlAngVelLRrAuth = 25;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T11_0_S18(ExtU_MainStateMachine_T * in ){
    //0-3.2
// CIB Collision Preparation System Customization Change Setting Request = $3=Alert Brake AND 
// 140kph < PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven
    in->AEB_Scenario = CIB;
    in->ColPrSysCstChgSetReq = 1;
    in->WhlAngVelRRrAuth = 1.94;
    in->WhlAngVelLRrAuth = 1.94;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T11_0_S19(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0xF;  
}

void T11_0_S20(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0xE;
}

void T11_0_S21(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0x0;
}

void T11_0_S22(ExtU_MainStateMachine_T * in ){
    in->TransEstGearV_TCM = 1;
}

void T11_0_S23(ExtU_MainStateMachine_T * in ){
    in->VSEAct  = 1;
}

void T11_0_S24(ExtU_MainStateMachine_T * in ){
    in->AEB_Scenario = ICM;
    in->ICMCstChgStReq = 1;            // Off
    in->WhlAngVelRRrAuth = 20;
    in->WhlAngVelLRrAuth = 20;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T11_0_S25(ExtU_MainStateMachine_T * in ){
    in->AccActPos = 25;
    in->ABFI_CollPrepSysInhbt = 1;
}

void T11_0_S26(ExtU_MainStateMachine_T * in ){
    in->AEB_Scenario = CIB;
    in->StrWhAngGrd = 171;
}

void T11_0_S27(ExtU_MainStateMachine_T * in ){
    in->AEB_Scenario = VRU;
    in->StrWhAngGrd = 171;
}

void T11_0_S28(ExtU_MainStateMachine_T * in ){
    in->AEB_Scenario = ICM;
    in->StrWhAngGrd = 410;
}

void T11_0_S29(ExtU_MainStateMachine_T * in ){
    in->BrkPdlPos = 88;
}

void T11_0_S30(ExtU_MainStateMachine_T * in ){
    in->DrSbltAtc = 0;
    in->DrSbltAtcV = 1;
}

void T11_0_S31(ExtU_MainStateMachine_T * in ){
    in->PsSbltAtc = 1;
    in->PsSbltAtcV = 1;
}

void T11_0_S32(ExtU_MainStateMachine_T * in ){
    in->TiToCllsn = 1000;
    in->ObjOfInterest_Present = 1;
}

void T11_0_S33(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdMsk = 0;
}

//t1.2-0
void T12_0_S1(ExtU_MainStateMachine_T * in ){
    in->IMUYawRtPriV = 1; //invalid
}
void T12_0_S2(ExtU_MainStateMachine_T * in ){
    in->IMULatAccPrimV = 1; //invalid
}
void T12_0_S3(ExtU_MainStateMachine_T * in ){
    in->StrWhAngV = 1; //invalid
}
void T12_0_S4(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdMsk = 0;
}
void T12_0_S5(ExtU_MainStateMachine_T * in ){
    in->WhlAngVelRRrAuthV = 1; //invalid   
}
void T12_0_S6(ExtU_MainStateMachine_T * in ){
    in->WhlAngVelLRrAuthV = 1; //invalid
    
}
void T12_0_S7(ExtU_MainStateMachine_T * in ){
    in->IMUDataMsk_1 = 0;
}
void T12_0_S8(ExtU_MainStateMachine_T * in ){
    in->IMULonAccPriV = 1;
}
void T12_0_S9(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdV = 1; 
}
void T12_0_S10(ExtU_MainStateMachine_T * in ){
    in->VehSpdAvgNDrvnV = 1;
}
void T12_0_S11(ExtU_MainStateMachine_T * in ){
    in->AccActPosV = 1; //invalid
}
void T12_0_S12(ExtU_MainStateMachine_T * in ){
    in->DrSbltAtcV = 1; //Invalid
}
void T12_0_S13(ExtU_MainStateMachine_T * in ){
    in->PsSbltAtcV = 1; //invalid
}
void T12_0_S14(ExtU_MainStateMachine_T * in ){
    in->StrWhlAngSenCalStat = 0; //unknown
}
void T12_0_S15(ExtU_MainStateMachine_T * in ){
    in->IMUXAxisClbrtd =0; //not calivrated
}
void T12_0_S16(ExtU_MainStateMachine_T * in ){
    //0-3.2
//    CIB Collision Preparation System Customization Change Setting Request ≠ $3=Alert Brake AND 
// 8kph≤ PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven ≤140kph
    in->AEB_Scenario  = CIB;
    in->ColPrSysCstChgSetReq = 0;

}
void T12_0_S17(ExtU_MainStateMachine_T * in ){
    //0-1.2
// CIB Collision Preparation System Customization Change Setting Request = $3=Alert Brake AND 
// PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven < 8kph 
    in->AEB_Scenario = VRU;
    in->FrntPCMRspTypCstChgSetReq = 0;

}

void T12_0_S18(ExtU_MainStateMachine_T * in ){
    //0-3.2
// Collision Preparation System Customization Change Setting Request = $3=Alert Brake AND 
// 140kph < PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven
    in->AEB_Scenario = ICM;
    in->ICMCstChgStReq = 0;
    in->WhlAngVelRRrAuth = 20;
    in->WhlAngVelLRrAuth = 20;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T12_0_S19(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0xF;  
}

void T12_0_S20(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0xE;
}

void T12_0_S21(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0x0;
}

void T12_0_S22(ExtU_MainStateMachine_T * in ){
    in->TransEstGearV_TCM = 1;
}

void T12_0_S23(ExtU_MainStateMachine_T * in ){
    in->AccActPos = 85;
}

//todo last for 1s
void T12_0_S24(ExtU_MainStateMachine_T * in ){
    in->AccActPos = 25;
    in->ABFI_CollPrepSysInhbt = 1;
}

void T12_0_S25(ExtU_MainStateMachine_T * in ){
    in->AEB_Scenario = CIB;
    in->StrWhAngGrd = 171;
}

void T12_0_S26(ExtU_MainStateMachine_T * in ){
    in->AEB_Scenario = VRU;
    in->StrWhAngGrd = 171;
}
void T12_0_S27(ExtU_MainStateMachine_T * in ){
    in->AEB_Scenario = ICM;
    in->StrWhAngGrd = 410;
}
void T12_0_S28(ExtU_MainStateMachine_T * in ){
    in->DrSbltAtc = 0;
    in->DrSbltAtcV = 0;
}
void T12_0_S29(ExtU_MainStateMachine_T * in ){
    in->PsSbltAtc = 1;
    in->PsSbltAtcV = 0;
}
void T12_0_S30(ExtU_MainStateMachine_T * in ){
    in->TiToCllsn = 1000;
}
void T12_0_S31(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdMsk = 1;
}
//todo : after activating 1.2 for 5s , return to state 0 automatically
void T12_0_S32(ExtU_MainStateMachine_T * in ){
    
}



//T3.1_0
void T31_0_S1(ExtU_MainStateMachine_T * in ){
    in->IMUYawRtPriV = 1; //invalid
}
void T31_0_S2(ExtU_MainStateMachine_T * in ){
    in->IMULatAccPrimV = 1; //invalid
}
void T31_0_S3(ExtU_MainStateMachine_T * in ){
    in->StrWhAngV = 1; //invalid
}
void T31_0_S4(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdMsk = 0;
}
void T31_0_S5(ExtU_MainStateMachine_T * in ){
    in->WhlAngVelRRrAuthV = 1; //invalid   
}
void T31_0_S6(ExtU_MainStateMachine_T * in ){
    in->WhlAngVelLRrAuthV = 1; //invalid
    
}
void T31_0_S7(ExtU_MainStateMachine_T * in ){
    in->IMUDataMsk_1 = 0;
}
void T31_0_S8(ExtU_MainStateMachine_T * in ){
    in->IMULonAccPriV = 1;
}
void T31_0_S9(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdV = 1; 
}
void T31_0_S10(ExtU_MainStateMachine_T * in ){
    in->VehSpdAvgNDrvnV = 1;
}
void T31_0_S11(ExtU_MainStateMachine_T * in ){
    in->AccActPosV = 1; //invalid
}
void T31_0_S12(ExtU_MainStateMachine_T * in ){
    in->DrSbltAtcV = 1; //Invalid
}

void T31_0_S13(ExtU_MainStateMachine_T * in ){
    in->PsSbltAtcV = 1; //invalid
}

void T31_0_S14(ExtU_MainStateMachine_T * in ){
    in->StrWhlAngSenCalStat = 0; //unknown
}

void T31_0_S15(ExtU_MainStateMachine_T * in ){
    in->IMUXAxisClbrtd =0; //not calivrated
}

void T31_0_S16(ExtU_MainStateMachine_T * in ){
    //0-3.2
//    CIB Collision Preparation System Customization Change Setting Request ≠ $3=Alert Brake AND 
// 8kph≤ PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven ≤140kph
    in->AEB_Scenario  = CIB;
    in->ColPrSysCstChgSetReq = 1;
    in->WhlAngVelRRrAuth = 25;
    in->WhlAngVelLRrAuth = 25;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T31_0_S17(ExtU_MainStateMachine_T * in ){
    //0-1.2
// CIB Collision Preparation System Customization Change Setting Request = $3=Alert Brake AND 
// PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven < 8kph 
    in->AEB_Scenario = VRU;
    in->FrntPCMRspTypCstChgSetReq = 1;
    in->WhlAngVelRRrAuth = 20;
    in->WhlAngVelLRrAuth = 20;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T31_0_S18(ExtU_MainStateMachine_T * in ){
    //0-3.2
// Collision Preparation System Customization Change Setting Request = $3=Alert Brake AND 
// 140kph < PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven
    in->AEB_Scenario = ICM;
    in->ICMCstChgStReq = 1;
    in->WhlAngVelRRrAuth = 20;
    in->WhlAngVelLRrAuth = 20;
    in->WhlDstPrRvlRrAuth = 1000;
}

void T31_0_S19(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0xF;  
}

void T31_0_S20(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0xE;
}

void T31_0_S21(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0x0;
}

void T31_0_S22(ExtU_MainStateMachine_T * in ){
    in->TransEstGearV_TCM = 1;
}

void T31_0_S23(ExtU_MainStateMachine_T * in ){
    in->AccActPos = 85;
}

//todo last for 1s
void T31_0_S24(ExtU_MainStateMachine_T * in ){
    in->AccActPos = 25;
    in->ABFI_CollPrepSysInhbt = 1;
}

void T31_0_S25(ExtU_MainStateMachine_T * in ){
    in->AEB_Scenario = CIB;
    in->StrWhAngGrd = 171;
}

void T31_0_S26(ExtU_MainStateMachine_T * in ){
    in->AEB_Scenario = VRU;
    in->StrWhAngGrd = 171;
}
void T31_0_S27(ExtU_MainStateMachine_T * in ){
    in->AEB_Scenario = ICM;
    in->StrWhAngGrd = 410;
}
void T31_0_S28(ExtU_MainStateMachine_T * in ){
    in->DrSbltAtc = 0;
    in->DrSbltAtcV = 0;
}
void T31_0_S29(ExtU_MainStateMachine_T * in ){
    in->PsSbltAtc = 1;
    in->PsSbltAtcV = 0;
}
void T31_0_S30(ExtU_MainStateMachine_T * in ){
    in->TiToCllsn = 1000;
}
void T31_0_S31(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdMsk = 1;
}
//todo : after activating 3.1 for 3s , return to state 0 automatically
void T31_0_S32(ExtU_MainStateMachine_T * in ){
    
}



//T.32_0
void T32_0_S1(ExtU_MainStateMachine_T * in ){
    in->IMUYawRtPriV = 1; //invalid
}
void T32_0_S2(ExtU_MainStateMachine_T * in ){
    in->IMULatAccPrimV = 1; //invalid
}
void T32_0_S3(ExtU_MainStateMachine_T * in ){
    in->StrWhAngV = 1; //invalid
}
void T32_0_S4(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdMsk = 0;
}
void T32_0_S5(ExtU_MainStateMachine_T * in ){
    in->WhlAngVelRRrAuthV = 1; //invalid   
}
void T32_0_S6(ExtU_MainStateMachine_T * in ){
    in->WhlAngVelLRrAuthV = 1; //invalid
    
}
void T32_0_S7(ExtU_MainStateMachine_T * in ){
    in->IMUDataMsk_1 = 0;
}
void T32_0_S8(ExtU_MainStateMachine_T * in ){
    in->IMULonAccPriV = 1;
}
void T32_0_S9(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdV = 1; 
}
void T32_0_S10(ExtU_MainStateMachine_T * in ){
    in->VehSpdAvgNDrvnV = 1;
}
void T32_0_S11(ExtU_MainStateMachine_T * in ){
    in->AccActPosV = 1; //invalid
}
void T32_0_S12(ExtU_MainStateMachine_T * in ){
    in->DrSbltAtcV = 1; //Invalid
}
void T32_0_S13(ExtU_MainStateMachine_T * in ){
    in->PsSbltAtcV = 1; //invalid
}
void T32_0_S14(ExtU_MainStateMachine_T * in ){
    in->StrWhlAngSenCalStat = 0; //unknown
}
void T32_0_S15(ExtU_MainStateMachine_T * in ){
    in->IMUXAxisClbrtd =0; //not calivrated
}

void T32_0_S16(ExtU_MainStateMachine_T * in ){
    //0-3.2
//    CIB Collision Preparation System Customization Change Setting Request ≠ $3=Alert Brake AND 
// 8kph≤ PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven ≤140kph
    in->AEB_Scenario  = CIB;
    in->ColPrSysCstChgSetReq = 1;
}

void T32_0_S17(ExtU_MainStateMachine_T * in ){
    //0-1.2
// CIB Collision Preparation System Customization Change Setting Request = $3=Alert Brake AND 
// PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven < 8kph 
    in->AEB_Scenario = VRU;
    in->FrntPCMRspTypCstChgSetReq = 1;

}
void T32_0_S18(ExtU_MainStateMachine_T * in ){
    //0-3.2
// Collision Preparation System Customization Change Setting Request = $3=Alert Brake AND 
// 140kph < PPEI Vehicle Speed and Distance Signal Group 2 : Vehicle Speed Average Non Driven
    in->AEB_Scenario = ICM;
    in->ICMCstChgStReq = 1;
}
void T32_0_S19(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0xF;  
}
void T32_0_S20(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0xE;
}
void T32_0_S21(ExtU_MainStateMachine_T * in ){
    in->TransEstGear_TCM = 0x0;
}
void T32_0_S22(ExtU_MainStateMachine_T * in ){
    in->TransEstGearV_TCM = 1;
}

void T32_0_S23(ExtU_MainStateMachine_T * in ){
    in->AccActPos = 85;
    in->ABFI_CollPrepSysInhbt = 1;
}

//todo last for 1s
void T32_0_S24(ExtU_MainStateMachine_T * in ){
    in->AccActPos = 25;
    in->ABFI_CollPrepSysInhbt = 1;
}

void T32_0_S25(ExtU_MainStateMachine_T * in ){
    in->AEB_Scenario = CIB;
    in->StrWhAngGrd = 171;
}

void T32_0_S26(ExtU_MainStateMachine_T * in ){
    in->AEB_Scenario = VRU;
    in->StrWhAngGrd = 171;
}
void T32_0_S27(ExtU_MainStateMachine_T * in ){
    in->AEB_Scenario = ICM;
    in->StrWhAngGrd = 410;
}

void T32_0_S28(ExtU_MainStateMachine_T * in ){
    in->DrSbltAtc = 0;
    in->DrSbltAtcV = 1;
}

void T32_0_S29(ExtU_MainStateMachine_T * in ){
    in->PsSbltAtc = 1;
    in->PsSbltAtcV = 1;
}
void T32_0_S30(ExtU_MainStateMachine_T * in ){
    in->TiToCllsn = 1000;
    in->ObjOfInterest_Present = 1;
}

void T32_0_S31(ExtU_MainStateMachine_T * in ){
    in->StrWhAngGrdMsk = 0;
}

//todo : after activating 3.2 for 5s , return to state 0 automatically
void T32_0_S32(ExtU_MainStateMachine_T * in ){
    in->BPDAPS_BkPDrvApP = 501;
}

//todo lasts for 0.2s
void T32_0_S33(ExtU_MainStateMachine_T * in ){
    in->BPDAPS_BkPDrvApP = 3;
}

//T4 - 0
void T4_0_S1(ExtU_MainStateMachine_T * in){
    /*Transmission Estimated Gear_ECP_H1 = "$F Park"*/
    in->IMUYawRtPriV = 1;
}

void T4_0_S2(ExtU_MainStateMachine_T * in){
    in->IMULatAccPrimV = 1;
}

void T4_0_S3(ExtU_MainStateMachine_T * in){
    in->StrWhAngV = 1;
}

void T4_0_S4(ExtU_MainStateMachine_T * in){
    in->StrWhAngMsk = 0;
}

void T4_0_S5(ExtU_MainStateMachine_T * in){
    in->TransEstGear_TCM = 0XE;
}

void T4_0_S6(ExtU_MainStateMachine_T * in){
    in->TransEstGear_TCM = 0X0;
}

// todo lasts for 1s;
void T4_0_S7(ExtU_MainStateMachine_T * in){
    in->AccActPos= 80;
}

void T4_0_S8(ExtU_MainStateMachine_T * in){
    in->AccActPos = 20;
    //in->ABFI_CollPrepSysInhbt = 1;
}

void T4_0_S9(ExtU_MainStateMachine_T * in){
    in->BPDAPS_BkPDrvApP = 550;
}
void T4_0_S10(ExtU_MainStateMachine_T * in){
    in->BrkPedApp = 1;
}
void T4_0_S11(ExtU_MainStateMachine_T * in){
    in->ElecPrkBrkStat = 1;
}




