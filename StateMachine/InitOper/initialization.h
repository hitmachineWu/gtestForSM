
#include "src/MainStateMachine.h"
// void InitAll(ExtU_MainStateMachine_T * in);
void brakePedalInhibit(ExtU_MainStateMachine_T * in);
void acceleratorPedalInhibit(ExtU_MainStateMachine_T * in);
void SteeringWheelGradientInhibit(ExtU_MainStateMachine_T * in);
void seatbeltUnfastenedInhibit(ExtU_MainStateMachine_T * in);
void AEBinhibit(ExtU_MainStateMachine_T * in);
void IBAinhibit(ExtU_MainStateMachine_T * in);
void yawRateInhibit(ExtU_MainStateMachine_T * in);
void SpeedInhibit(ExtU_MainStateMachine_T * in);
void brakePedalOverride(ExtU_MainStateMachine_T * in);
void AcceleratorPedalOverride(ExtU_MainStateMachine_T * in);
void steerWheelAngleGradientOveride(ExtU_MainStateMachine_T * in);
void ABFI_CollPrepSysInhbt(ExtU_MainStateMachine_T * in);
void DriverHardTurning(ExtU_MainStateMachine_T * in);
void All_input_Valid(ExtU_MainStateMachine_T *in);
void All_input_Invalid(ExtU_MainStateMachine_T *in);
void All_Sensors_Ready(ExtU_MainStateMachine_T *in);
void All_Sensors_NoReady(ExtU_MainStateMachine_T *in);
/*all initialization */
//T0-1.1
void T0_11_Initialization(ExtU_MainStateMachine_T * in);
//T0-1.2
void T0_12_Initialization(ExtU_MainStateMachine_T *in);
//T0-3.2
void T0_32_Initialization(ExtU_MainStateMachine_T * in);
//T1.1-0
void T11_0_Initialization(ExtU_MainStateMachine_T * in);
//T1.1-3.2
void T11_32_Initialization(ExtU_MainStateMachine_T * in);
//T1.1-4
void T11_4_Initialization(ExtU_MainStateMachine_T * in);
//T1.2-0
void T12_0_Initialization(ExtU_MainStateMachine_T * in);
//T1.2-3.1
void T12_31_Initialization(ExtU_MainStateMachine_T * in);
//T1.2-4
void T12_4_Initialization(ExtU_MainStateMachine_T * in);
//T3.1-0
void T31_0_Initialization(ExtU_MainStateMachine_T * in);
//T3.2-0
void T32_0_Initialization(ExtU_MainStateMachine_T * in);
//T4.0
void T4_0_Initialization(ExtU_MainStateMachine_T * in);


//T0_1.1
void T0_11_S2(ExtU_MainStateMachine_T *in);
void T0_11_S3(ExtU_MainStateMachine_T *in);
void T0_11_S4(ExtU_MainStateMachine_T *in);
void T0_11_S5(ExtU_MainStateMachine_T *in);
void T0_11_S6(ExtU_MainStateMachine_T *in);
void T0_11_S7(ExtU_MainStateMachine_T *in);
void T0_11_S8(ExtU_MainStateMachine_T *in);
void T0_11_S9(ExtU_MainStateMachine_T *in);
void T0_11_S10(ExtU_MainStateMachine_T *in);
void T0_11_S11(ExtU_MainStateMachine_T *in);
void T0_11_S12(ExtU_MainStateMachine_T *in);
void T0_11_S13(ExtU_MainStateMachine_T *in);
void T0_11_S14(ExtU_MainStateMachine_T *in);
void T0_11_S15(ExtU_MainStateMachine_T *in);
void T0_11_S16(ExtU_MainStateMachine_T *in);
void T0_11_S17(ExtU_MainStateMachine_T *in);
void T0_11_S18(ExtU_MainStateMachine_T *in);
void T0_11_S19(ExtU_MainStateMachine_T *in);
void T0_11_S20(ExtU_MainStateMachine_T *in);
void T0_11_S21(ExtU_MainStateMachine_T *in);
void T0_11_S22(ExtU_MainStateMachine_T *in);
void T0_11_S23(ExtU_MainStateMachine_T *in);
void T0_11_S24(ExtU_MainStateMachine_T *in);
void T0_11_S25(ExtU_MainStateMachine_T *in);
void T0_11_S26(ExtU_MainStateMachine_T *in);
void T0_11_S27(ExtU_MainStateMachine_T *in);
void T0_11_S28(ExtU_MainStateMachine_T *in);
void T0_11_S29(ExtU_MainStateMachine_T *in);
void T0_11_S30(ExtU_MainStateMachine_T *in);
void T0_11_S31(ExtU_MainStateMachine_T *in);
void T0_11_S32(ExtU_MainStateMachine_T *in);
void T0_11_S33(ExtU_MainStateMachine_T *in);
void T0_11_S34(ExtU_MainStateMachine_T *in);
void T0_11_S35(ExtU_MainStateMachine_T *in);
void T0_11_S36(ExtU_MainStateMachine_T *in);
void T0_11_S37(ExtU_MainStateMachine_T *in);
void T0_11_S38(ExtU_MainStateMachine_T *in);
void T0_11_S39(ExtU_MainStateMachine_T *in);

//T0_1.2
void T0_12_S2(ExtU_MainStateMachine_T * in);
void T0_12_S3(ExtU_MainStateMachine_T * in);
void T0_12_S4(ExtU_MainStateMachine_T * in);
void T0_12_S5(ExtU_MainStateMachine_T * in);
void T0_12_S6(ExtU_MainStateMachine_T * in);
void T0_12_S7(ExtU_MainStateMachine_T * in);
void T0_12_S8(ExtU_MainStateMachine_T * in);
void T0_12_S9(ExtU_MainStateMachine_T * in);
void T0_12_S10(ExtU_MainStateMachine_T * in);
void T0_12_S11(ExtU_MainStateMachine_T * in);
void T0_12_S12(ExtU_MainStateMachine_T * in);
void T0_12_S13(ExtU_MainStateMachine_T * in);
void T0_12_S14(ExtU_MainStateMachine_T * in);
void T0_12_S15(ExtU_MainStateMachine_T * in);
void T0_12_S16(ExtU_MainStateMachine_T * in);
void T0_12_S17(ExtU_MainStateMachine_T * in);
void T0_12_S18(ExtU_MainStateMachine_T * in);
void T0_12_S19(ExtU_MainStateMachine_T * in);
void T0_12_S20(ExtU_MainStateMachine_T * in);
void T0_12_S21(ExtU_MainStateMachine_T * in);
void T0_12_S22(ExtU_MainStateMachine_T * in);
void T0_12_S23(ExtU_MainStateMachine_T * in);
void T0_12_S24(ExtU_MainStateMachine_T * in);
void T0_12_S25(ExtU_MainStateMachine_T * in);
void T0_12_S26(ExtU_MainStateMachine_T * in);
void T0_12_S27(ExtU_MainStateMachine_T * in);
void T0_12_S28(ExtU_MainStateMachine_T * in);
void T0_12_S29(ExtU_MainStateMachine_T * in);
void T0_12_S30(ExtU_MainStateMachine_T * in);
void T0_12_S31(ExtU_MainStateMachine_T * in);
void T0_12_S32(ExtU_MainStateMachine_T * in);
void T0_12_S33(ExtU_MainStateMachine_T *in);
void T0_12_S34(ExtU_MainStateMachine_T *in);
void T0_12_S35(ExtU_MainStateMachine_T *in);
void T0_12_S36(ExtU_MainStateMachine_T *in);
void T0_12_S37(ExtU_MainStateMachine_T *in);
void T0_12_S38(ExtU_MainStateMachine_T *in);
void T0_12_S39(ExtU_MainStateMachine_T *in);


// T0-3.2
void T0_32_S2(ExtU_MainStateMachine_T *in);
void T0_32_S3(ExtU_MainStateMachine_T *in);
void T0_32_S4(ExtU_MainStateMachine_T *in);
void T0_32_S5(ExtU_MainStateMachine_T *in);
void T0_32_S6(ExtU_MainStateMachine_T *in);
void T0_32_S7(ExtU_MainStateMachine_T *in);
void T0_32_S8(ExtU_MainStateMachine_T *in);
void T0_32_S9(ExtU_MainStateMachine_T *in);
void T0_32_S10(ExtU_MainStateMachine_T *in);
void T0_32_S11(ExtU_MainStateMachine_T *in);
void T0_32_S12(ExtU_MainStateMachine_T *in);
void T0_32_S13(ExtU_MainStateMachine_T *in);
void T0_32_S14(ExtU_MainStateMachine_T *in);
void T0_32_S15(ExtU_MainStateMachine_T *in);
void T0_32_S16(ExtU_MainStateMachine_T *in);
void T0_32_S17(ExtU_MainStateMachine_T *in);
void T0_32_S18(ExtU_MainStateMachine_T *in);
void T0_32_S19(ExtU_MainStateMachine_T *in);
void T0_32_S20(ExtU_MainStateMachine_T *in);
void T0_32_S21(ExtU_MainStateMachine_T *in);
void T0_32_S22(ExtU_MainStateMachine_T *in);
void T0_32_S23(ExtU_MainStateMachine_T *in);
void T0_32_S24(ExtU_MainStateMachine_T *in);
void T0_32_S25(ExtU_MainStateMachine_T *in);
void T0_32_S26(ExtU_MainStateMachine_T *in);
void T0_32_S27(ExtU_MainStateMachine_T *in);
void T0_32_S28(ExtU_MainStateMachine_T *in);
void T0_32_S29(ExtU_MainStateMachine_T *in);
void T0_32_S30(ExtU_MainStateMachine_T *in);
void T0_32_S31(ExtU_MainStateMachine_T *in);
void T0_32_S32(ExtU_MainStateMachine_T *in);
void T0_32_S33(ExtU_MainStateMachine_T *in);
void T0_32_S34(ExtU_MainStateMachine_T *in);
void T0_32_S35(ExtU_MainStateMachine_T *in);
void T0_32_S36(ExtU_MainStateMachine_T *in);
void T0_32_S37(ExtU_MainStateMachine_T *in);


//T1.1-3.2
void T11_32_S1(ExtU_MainStateMachine_T *in);
void T11_32_S2(ExtU_MainStateMachine_T *in);
void T11_32_S3(ExtU_MainStateMachine_T *in);

//T1.1-4
void T12_4_S1(ExtU_MainStateMachine_T *in);
void T11_4_S2(ExtU_MainStateMachine_T *in);

//t1.2-3.1
void T12_31_S1(ExtU_MainStateMachine_T *in);
void T12_31_S2(ExtU_MainStateMachine_T *in);
void T12_31_S3(ExtU_MainStateMachine_T *in);

//T1.2-4
void T11_4_S1(ExtU_MainStateMachine_T *in);
void T12_4_S2(ExtU_MainStateMachine_T *in);

//T1.1-0
void T11_0_S1(ExtU_MainStateMachine_T *in);
void T11_0_S2(ExtU_MainStateMachine_T *in);
void T11_0_S3(ExtU_MainStateMachine_T *in);
void T11_0_S4(ExtU_MainStateMachine_T *in);
void T11_0_S5(ExtU_MainStateMachine_T *in);
void T11_0_S6(ExtU_MainStateMachine_T *in);
void T11_0_S7(ExtU_MainStateMachine_T *in);
void T11_0_S8(ExtU_MainStateMachine_T *in);
void T11_0_S9(ExtU_MainStateMachine_T *in);
void T11_0_S10(ExtU_MainStateMachine_T *in);
void T11_0_S11(ExtU_MainStateMachine_T *in);
void T11_0_S12(ExtU_MainStateMachine_T *in);
void T11_0_S13(ExtU_MainStateMachine_T *in);
void T11_0_S14(ExtU_MainStateMachine_T *in);
void T11_0_S15(ExtU_MainStateMachine_T *in);
void T11_0_S16(ExtU_MainStateMachine_T *in);
void T11_0_S17(ExtU_MainStateMachine_T *in);
void T11_0_S18(ExtU_MainStateMachine_T *in);
void T11_0_S19(ExtU_MainStateMachine_T *in);
void T11_0_S20(ExtU_MainStateMachine_T *in);
void T11_0_S21(ExtU_MainStateMachine_T *in);
void T11_0_S22(ExtU_MainStateMachine_T *in);
void T11_0_S23(ExtU_MainStateMachine_T *in);
void T11_0_S24(ExtU_MainStateMachine_T *in);
void T11_0_S25(ExtU_MainStateMachine_T *in);
void T11_0_S26(ExtU_MainStateMachine_T *in);
void T11_0_S27(ExtU_MainStateMachine_T *in);
void T11_0_S28(ExtU_MainStateMachine_T *in);
void T11_0_S29(ExtU_MainStateMachine_T *in);
void T11_0_S30(ExtU_MainStateMachine_T *in);
void T11_0_S31(ExtU_MainStateMachine_T *in);
void T11_0_S32(ExtU_MainStateMachine_T *in);
void T11_0_S33(ExtU_MainStateMachine_T * in );

//T1.2-0
void T12_0_S1(ExtU_MainStateMachine_T * in);
void T12_0_S2(ExtU_MainStateMachine_T * in);
void T12_0_S3(ExtU_MainStateMachine_T * in);
void T12_0_S4(ExtU_MainStateMachine_T * in);
void T12_0_S5(ExtU_MainStateMachine_T * in);
void T12_0_S6(ExtU_MainStateMachine_T * in);
void T12_0_S7(ExtU_MainStateMachine_T * in);
void T12_0_S8(ExtU_MainStateMachine_T * in);
void T12_0_S9(ExtU_MainStateMachine_T * in);
void T12_0_S10(ExtU_MainStateMachine_T * in);
void T12_0_S11(ExtU_MainStateMachine_T * in);
void T12_0_S12(ExtU_MainStateMachine_T * in);
void T12_0_S13(ExtU_MainStateMachine_T * in);
void T12_0_S14(ExtU_MainStateMachine_T * in);
void T12_0_S15(ExtU_MainStateMachine_T * in);
void T12_0_S16(ExtU_MainStateMachine_T * in);
void T12_0_S17(ExtU_MainStateMachine_T * in);
void T12_0_S18(ExtU_MainStateMachine_T * in);
void T12_0_S19(ExtU_MainStateMachine_T * in);
void T12_0_S20(ExtU_MainStateMachine_T * in);
void T12_0_S21(ExtU_MainStateMachine_T * in);
void T12_0_S22(ExtU_MainStateMachine_T * in);
void T12_0_S23(ExtU_MainStateMachine_T * in);
void T12_0_S24(ExtU_MainStateMachine_T * in);
void T12_0_S25(ExtU_MainStateMachine_T * in);
void T12_0_S26(ExtU_MainStateMachine_T * in);
void T12_0_S27(ExtU_MainStateMachine_T * in);
void T12_0_S28(ExtU_MainStateMachine_T * in);
void T12_0_S29(ExtU_MainStateMachine_T * in);
void T12_0_S30(ExtU_MainStateMachine_T * in);
void T12_0_S31(ExtU_MainStateMachine_T * in);
void T12_0_S32(ExtU_MainStateMachine_T * in);




//T3.1_0
void T31_0_S1(ExtU_MainStateMachine_T * in);
void T31_0_S2(ExtU_MainStateMachine_T * in);
void T31_0_S3(ExtU_MainStateMachine_T * in);
void T31_0_S4(ExtU_MainStateMachine_T * in);
void T31_0_S5(ExtU_MainStateMachine_T * in);
void T31_0_S6(ExtU_MainStateMachine_T * in);
void T31_0_S7(ExtU_MainStateMachine_T * in);
void T31_0_S8(ExtU_MainStateMachine_T * in);
void T31_0_S9(ExtU_MainStateMachine_T * in);
void T31_0_S10(ExtU_MainStateMachine_T * in);
void T31_0_S11(ExtU_MainStateMachine_T * in);
void T31_0_S12(ExtU_MainStateMachine_T * in);
void T31_0_S13(ExtU_MainStateMachine_T * in);
void T31_0_S14(ExtU_MainStateMachine_T * in);
void T31_0_S15(ExtU_MainStateMachine_T * in);
void T31_0_S16(ExtU_MainStateMachine_T * in);
void T31_0_S17(ExtU_MainStateMachine_T * in);
void T31_0_S18(ExtU_MainStateMachine_T * in);
void T31_0_S19(ExtU_MainStateMachine_T * in);
void T31_0_S20(ExtU_MainStateMachine_T * in);
void T31_0_S21(ExtU_MainStateMachine_T * in);
void T31_0_S22(ExtU_MainStateMachine_T * in);
void T31_0_S23(ExtU_MainStateMachine_T * in);
void T31_0_S24(ExtU_MainStateMachine_T * in);
void T31_0_S25(ExtU_MainStateMachine_T * in);
void T31_0_S26(ExtU_MainStateMachine_T * in);


//T.32_0
void T32_0_S1(ExtU_MainStateMachine_T * in);
void T32_0_S2(ExtU_MainStateMachine_T * in);
void T32_0_S3(ExtU_MainStateMachine_T * in);
void T32_0_S4(ExtU_MainStateMachine_T * in);
void T32_0_S5(ExtU_MainStateMachine_T * in);
void T32_0_S6(ExtU_MainStateMachine_T * in);
void T32_0_S7(ExtU_MainStateMachine_T * in);
void T32_0_S8(ExtU_MainStateMachine_T * in);
void T32_0_S9(ExtU_MainStateMachine_T * in);
void T32_0_S10(ExtU_MainStateMachine_T * in);
void T32_0_S11(ExtU_MainStateMachine_T * in);
void T32_0_S12(ExtU_MainStateMachine_T * in);
void T32_0_S13(ExtU_MainStateMachine_T * in);
void T32_0_S14(ExtU_MainStateMachine_T * in);
void T32_0_S15(ExtU_MainStateMachine_T * in);
void T32_0_S16(ExtU_MainStateMachine_T * in);
void T32_0_S17(ExtU_MainStateMachine_T * in);
void T32_0_S18(ExtU_MainStateMachine_T * in);
void T32_0_S19(ExtU_MainStateMachine_T * in);
void T32_0_S20(ExtU_MainStateMachine_T * in);
void T32_0_S21(ExtU_MainStateMachine_T * in);
void T32_0_S22(ExtU_MainStateMachine_T * in);
void T32_0_S23(ExtU_MainStateMachine_T * in);
void T32_0_S24(ExtU_MainStateMachine_T * in);
void T32_0_S25(ExtU_MainStateMachine_T * in);
void T32_0_S26(ExtU_MainStateMachine_T * in);
void T32_0_S27(ExtU_MainStateMachine_T * in);
void T32_0_S28(ExtU_MainStateMachine_T * in);
void T32_0_S29(ExtU_MainStateMachine_T * in);
void T32_0_S30(ExtU_MainStateMachine_T * in);
void T32_0_S31(ExtU_MainStateMachine_T * in);
void T32_0_S32(ExtU_MainStateMachine_T * in);
void T32_0_S33(ExtU_MainStateMachine_T * in);


//T4 - 0
void T4_0_S1(ExtU_MainStateMachine_T * in);
void T4_0_S2(ExtU_MainStateMachine_T * in);
void T4_0_S3(ExtU_MainStateMachine_T * in);
void T4_0_S4(ExtU_MainStateMachine_T * in);
void T4_0_S5(ExtU_MainStateMachine_T * in);
void T4_0_S6(ExtU_MainStateMachine_T * in);
void T4_0_S7(ExtU_MainStateMachine_T * in);
void T4_0_S8(ExtU_MainStateMachine_T * in);
void T4_0_S9(ExtU_MainStateMachine_T * in);
void T4_0_S10(ExtU_MainStateMachine_T * in);
void T4_0_S11(ExtU_MainStateMachine_T * in);
