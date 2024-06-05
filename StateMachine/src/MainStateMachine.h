/*
 * File: MainStateMachine.h
 *
 * Code generated for Simulink model 'MainStateMachine'.
 *
 * Model version                  : 2.95
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Jun  3 10:29:03 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MainStateMachine_h_
#define RTW_HEADER_MainStateMachine_h_
#ifndef MainStateMachine_COMMON_INCLUDES_
#define MainStateMachine_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* MainStateMachine_COMMON_INCLUDES_ */

#include "MainStateMachine_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Delay4_DSTATE;                /* '<S144>/Delay4' */
  real_T Delay4_DSTATE_b;              /* '<S146>/Delay4' */
  real_T Delay4_DSTATE_c;              /* '<S145>/Delay4' */
  real_T Delay4_DSTATE_o;              /* '<S147>/Delay4' */
  real_T Delay4_DSTATE_a;              /* '<S148>/Delay4' */
  real_T Delay4_DSTATE_h;              /* '<S52>/Delay4' */
  real_T Delay4_DSTATE_om;             /* '<S68>/Delay4' */
  real_T Delay4_DSTATE_ah;             /* '<S60>/Delay4' */
  real_T Delay10_DSTATE;               /* '<S59>/Delay10' */
  real_T Delay6_DSTATE;                /* '<S57>/Delay6' */
  real_T Delay4_DSTATE_d;              /* '<S134>/Delay4' */
  real_T Delay4_DSTATE_g;              /* '<S136>/Delay4' */
  real_T Delay4_DSTATE_c0;             /* '<S135>/Delay4' */
  real_T Delay4_DSTATE_oh;             /* '<S137>/Delay4' */
  real_T Delay4_DSTATE_g4;             /* '<S138>/Delay4' */
  real_T Delay4_DSTATE_l;              /* '<S77>/Delay4' */
  real_T Delay_DSTATE_p;               /* '<S79>/Delay' */
  real_T Delay4_DSTATE_lh;             /* '<S82>/Delay4' */
  real_T Delay4_DSTATE_o2;             /* '<S78>/Delay4' */
  real_T Delay4_DSTATE_av;             /* '<S222>/Delay4' */
  real_T Delay4_DSTATE_avo;            /* '<S223>/Delay4' */
  real_T Delay4_DSTATE_dm;             /* '<S219>/Delay4' */
  real_T Delay4_DSTATE_lp;             /* '<S91>/Delay4' */
  real_T Delay4_DSTATE_f;              /* '<S174>/Delay4' */
  real_T Delay4_DSTATE_bi;             /* '<S172>/Delay4' */
  real_T Delay4_DSTATE_a1;             /* '<S55>/Delay4' */
  real_T Delay2_DSTATE;                /* '<S61>/Delay2' */
  real_T Delay11_DSTATE;               /* '<S58>/Delay11' */
  real_T Delay7_DSTATE;                /* '<S56>/Delay7' */
  real_T Delay4_DSTATE_cd;             /* '<S93>/Delay4' */
  real_T Delay4_DSTATE_gp;             /* '<S189>/Delay4' */
  real_T Delay4_DSTATE_i;              /* '<S190>/Delay4' */
  real_T Delay4_DSTATE_lhl;            /* '<S191>/Delay4' */
  real_T Delay4_DSTATE_f1;             /* '<S164>/Delay4' */
  real_T Delay4_DSTATE_in;             /* '<S165>/Delay4' */
  real_T Delay4_DSTATE_go;             /* '<S166>/Delay4' */
  real_T Delay4_DSTATE_oz;             /* '<S161>/Delay4' */
  real_T Delay4_DSTATE_k;              /* '<S206>/Delay4' */
  real_T Delay4_DSTATE_p;              /* '<S207>/Delay4' */
  real_T Delay4_DSTATE_at;             /* '<S203>/Delay4' */
  real_T Delay4_DSTATE_m;              /* '<S95>/Delay4' */
  real_T Delay4_DSTATE_b1;             /* '<S25>/Delay4' */
  real_T Delay2_DSTATE_n;              /* '<S83>/Delay2' */
  State UnitDelay_DSTATE;              /* '<Root>/Unit Delay' */
  boolean_T Delay3_DSTATE;             /* '<S144>/Delay3' */
  boolean_T Delay3_DSTATE_n;           /* '<S146>/Delay3' */
  boolean_T Delay3_DSTATE_j;           /* '<S145>/Delay3' */
  boolean_T Delay3_DSTATE_o;           /* '<S147>/Delay3' */
  boolean_T Delay3_DSTATE_a;           /* '<S148>/Delay3' */
  boolean_T Delay_DSTATE_b;            /* '<S52>/Delay' */
  boolean_T Delay_DSTATE_k;            /* '<S68>/Delay' */
  boolean_T Delay15_DSTATE;            /* '<S73>/Delay15' */
  boolean_T Delay_DSTATE_m;            /* '<S60>/Delay' */
  boolean_T Delay9_DSTATE;             /* '<S59>/Delay9' */
  boolean_T Delay5_DSTATE;             /* '<S57>/Delay5' */
  boolean_T Delay3_DSTATE_b;           /* '<S134>/Delay3' */
  boolean_T Delay3_DSTATE_bm;          /* '<S136>/Delay3' */
  boolean_T Delay3_DSTATE_aj;          /* '<S135>/Delay3' */
  boolean_T Delay3_DSTATE_c;           /* '<S137>/Delay3' */
  boolean_T Delay3_DSTATE_as;          /* '<S138>/Delay3' */
  boolean_T Delay3_DSTATE_p;           /* '<S77>/Delay3' */
  boolean_T Delay3_DSTATE_g;           /* '<S82>/Delay3' */
  boolean_T Delay3_DSTATE_bj;          /* '<S78>/Delay3' */
  boolean_T Delay3_DSTATE_cv;          /* '<S222>/Delay3' */
  boolean_T Delay3_DSTATE_ns;          /* '<S223>/Delay3' */
  boolean_T Delay3_DSTATE_f;           /* '<S219>/Delay3' */
  boolean_T Delay3_DSTATE_au;          /* '<S91>/Delay3' */
  boolean_T Delay3_DSTATE_pf;          /* '<S174>/Delay3' */
  boolean_T Delay3_DSTATE_fg;          /* '<S172>/Delay3' */
  boolean_T Delay_DSTATE_ej;           /* '<S55>/Delay' */
  boolean_T Delay15_DSTATE_e;          /* '<S72>/Delay15' */
  boolean_T Delay1_DSTATE_l;           /* '<S61>/Delay1' */
  boolean_T Delay8_DSTATE;             /* '<S58>/Delay8' */
  boolean_T Delay3_DSTATE_of;          /* '<S56>/Delay3' */
  boolean_T Delay3_DSTATE_gu;          /* '<S93>/Delay3' */
  boolean_T Delay3_DSTATE_l;           /* '<S189>/Delay3' */
  boolean_T Delay3_DSTATE_ay;          /* '<S190>/Delay3' */
  boolean_T Delay3_DSTATE_ju;          /* '<S191>/Delay3' */
  boolean_T Delay3_DSTATE_jp;          /* '<S164>/Delay3' */
  boolean_T Delay3_DSTATE_nq;          /* '<S165>/Delay3' */
  boolean_T Delay3_DSTATE_e;           /* '<S166>/Delay3' */
  boolean_T Delay3_DSTATE_c2;          /* '<S161>/Delay3' */
  boolean_T Delay3_DSTATE_i;           /* '<S206>/Delay3' */
  boolean_T Delay3_DSTATE_ab;          /* '<S207>/Delay3' */
  boolean_T Delay3_DSTATE_m;           /* '<S203>/Delay3' */
  boolean_T Delay3_DSTATE_ec;          /* '<S95>/Delay3' */
  boolean_T Delay_DSTATE_i;            /* '<S3>/Delay' */
  boolean_T Delay3_DSTATE_c3;          /* '<S25>/Delay3' */
  boolean_T Delay3_DSTATE_d;           /* '<S26>/Delay3' */
  boolean_T Delay3_DSTATE_ia;          /* '<S83>/Delay3' */
  uint8_T is_active_c3_MainStateMachine;/* '<Root>/FunctionStateMachine' */
  uint8_T is_c3_MainStateMachine;      /* '<Root>/FunctionStateMachine' */
} DW_MainStateMachine_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Add2;                   /* '<S91>/Add2' */
  const real_T Add2_j;                 /* '<S93>/Add2' */
  const real_T Add2_m;                 /* '<S95>/Add2' */
  const boolean_T Equal;               /* '<S188>/Equal' */
} ConstB_MainStateMachine_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T VehSpdAvgNDrvn;               /* '<Root>/VehSpdAvgNDrvn ' */
  uint8_T VehSpdAvgNDrvnV;             /* '<Root>/VehSpdAvgNDrvnV' */
  real_T DrvIntndAxlTrqMin;            /* '<Root>/DrvIntndAxlTrqMin' */
  uint8_T DrvIntndAxlTrqMinV;          /* '<Root>/DrvIntndAxlTrqMinV' */
  uint8_T ColPrSysCstChgSetReq;        /* '<Root>/ColPrSysCstChgSetReq' */
  uint8_T FrntPCMRspTypCstChgSetReq;   /* '<Root>/FrntPCMRspTypCstChgSetReq' */
  real_T StrWhAngGrd;                  /* '<Root>/StrWhAngGrd' */
  uint8_T StrWhAngGrdV;                /* '<Root>/StrWhAngGrdV' */
  uint8_T StrWhAngGrdMsk;              /* '<Root>/StrWhAngGrdMsk' */
  uint8_T TransEstGear_TCM;            /* '<Root>/TransEstGear_TCM' */
  uint8_T TransEstGearV_TCM;           /* '<Root>/TransEstGearV_TCM' */
  uint8_T ExtBrkReqBackupEBCM;         /* '<Root>/ExtBrkReqBackupEBCM' */
  real_T EBRTarPre;                    /* '<Root>/EBRTarPre' */
  real_T BrkPdlPosGrad;                /* '<Root>/BrkPdlPosGrad' */
  real_T AccActPos;                    /* '<Root>/AccActPos' */
  uint8_T AccActPosV;                  /* '<Root>/AccActPosV' */
  real_T IMULonAccPri;                 /* '<Root>/IMULonAccPri' */
  uint8_T ElecPrkBrkStat;              /* '<Root>/ElecPrkBrkStat' */
  real_T BPDAPS_BkPDrvApP;             /* '<Root>/BPDAPS_BkPDrvApP' */
  uint8_T BPDAPS_BkPDrvApPV;           /* '<Root>/BPDAPS_BkPDrvApPV' */
  real_T BrkPdlPos;                    /* '<Root>/BrkPdlPos' */
  boolean_T BrkPedApp;                 /* '<Root>/BrkPedApp' */
  boolean_T BrkOveByDri;               /* '<Root>/BrkOveByDri' */
  uint8_T BrkPedAppV;                  /* '<Root>/BrkPedAppV' */
  uint8_T SysPwrMd;                    /* '<Root>/SysPwrMd' */
  uint8_T SysPwrMdV;                   /* '<Root>/SysPwrMdV' */
  boolean_T DrSbltAtc;                 /* '<Root>/DrSbltAtc' */
  boolean_T PsSbltAtc;                 /* '<Root>/PsSbltAtc' */
  uint8_T DrSbltAtcV;                  /* '<Root>/DrSbltAtcV' */
  uint8_T PsSbltAtcV;                  /* '<Root>/PsSbltAtcV' */
  uint8_T FrntPasSeatOccSta;           /* '<Root>/FrntPasSeatOccSta' */
  boolean_T BrkSysExtHldCpbltyFld;     /* '<Root>/BrkSysExtHldCpbltyFld' */
  uint8_T WhlAngVelRRrAuthV;           /* '<Root>/WhlAngVelRRrAuthV' */
  real_T WhlAngVelRRrAuth;             /* '<Root>/WhlAngVelRRrAuth' */
  real_T WhlAngVelLRrAuth;             /* '<Root>/WhlAngVelLRrAuth' */
  uint8_T WhlAngVelLRrAuthV;           /* '<Root>/WhlAngVelLRrAuthV' */
  uint8_T IMUYawRtPriV;                /* '<Root>/IMUYawRtPriV' */
  uint8_T IMULatAccPrimV;              /* '<Root>/IMULatAccPrimV' */
  uint8_T IMUDataMsk_1;                /* '<Root>/IMUDataMsk_1' */
  boolean_T ABFI_CollPrepSysInhbt;     /* '<Root>/ABFI_CollPrepSysInhbt' */
  real_T WhlDstPrRvlRrAuth;            /* '<Root>/WhlDstPrRvlRrAuth' */
  uint8_T StrWhAngV;                   /* '<Root>/StrWhAngV' */
  uint8_T IMULonAccPriV;               /* '<Root>/IMULonAccPriV' */
  uint8_T ABAAPS_AccPosV;              /* '<Root>/ABAAPS_AccPosV' */
  uint8_T StrWhAngMsk;                 /* '<Root>/StrWhAngMsk' */
  boolean_T VSEAct;                    /* '<Root>/VSEAct' */
  uint8_T StrWhlAngSenCalStat;         /* '<Root>/StrWhlAngSenCalStat' */
  uint8_T IMUXAxisClbrtd;              /* '<Root>/IMUXAxisClbrtd' */
  uint8_T ILRR_SP_OperationMode;       /* '<Root>/ILRR_SP_OperationMode' */
  uint8_T ILRR_SP_CalibrationState;    /* '<Root>/ILRR_SP_CalibrationState' */
  uint8_T ICMCstChgStReq;              /* '<Root>/ICMCstChgStReq' */
  uint8_T SndRowLfSeatOccSta;          /* '<Root>/SndRowLfSeatOccSta' */
  uint8_T SndRowLfSbltStat;            /* '<Root>/SndRowLfSbltStat' */
  uint8_T SndRowRtSeatOccSta;          /* '<Root>/SndRowRtSeatOccSta' */
  uint8_T SndRowRiSbltStat;            /* '<Root>/SndRowRiSbltStat' */
  uint8_T Major_Speed_Right_Rear_Diag;/* '<Root>/Major_Speed_Right_Rear_Diag' */
  uint8_T Major_Speed_Left_Rear_Diag;  /* '<Root>/Major_Speed_Left_Rear_Diag' */
  uint8_T BackUp_Speed_Diag;           /* '<Root>/BackUp_Speed_Diag' */
  uint8_T FltMngmntOut;                /* '<Root>/FltMngmntOut' */
  real_T DecelReqVal;                  /* '<Root>/DecelReqVal' */
  real_T TiToCllsn;                    /* '<Root>/TiToCllsn' */
  uint8_T FS_FULL_BLOCKAGE_BIT;        /* '<Root>/FS_FULL_BLOCKAGE_BIT' */
  uint8_T FS_Impaired_VD;              /* '<Root>/FS_Impaired_VD' */
  uint8_T FS_OUT_OF_CALIBRATION;       /* '<Root>/FS_OUT_OF_CALIBRATION' */
  uint8_T FS_CALIBRATION_MISALIGNMENT;/* '<Root>/FS_CALIBRATION_MISALIGNMENT' */
  uint8_T AEB_Scenario;              /* '<Root>/AEB_Scenario' */
  boolean_T ObjOfInterest_Present;     /* '<Root>/ObjOfInterest_Present' */
  real_T AccActPosGrad;                /* '<Root>/AccActPosGrad' */
} ExtU_MainStateMachine_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  State AEB_State;                     /* '<Root>/AEB_State' */
  uint8_T EPBFldChmEvntStat;           /* '<Root>/EPBFldChmEvntStat' */
  boolean_T AutoBrkRlsIO;              /* '<Root>/AutoBrkRlsIO' */
  real_T CPSCBSC_AutoBrkReq_FCM;       /* '<Root>/CPSCBSC_AutoBrkReq_FCM' */
  real_T RDCPSCBSC_AutoBrkReq_FCM;     /* '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
  real_T CPSCBSC_AutoBrkReqTyp_FCM;    /* '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
  real_T RDCPSCBSC_AutoBrkReqTyp_FCM; /* '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
  real_T CPSCBSC_CtrlAcc_FCM;          /* '<Root>/CPSCBSC_CtrlAcc_FCM' */
  real_T RDCPSCBSC_CtrlAcc_FCM;        /* '<Root>/RDCPSCBSC_CtrlAcc_FCM' */
  real_T CPSATC_AxlTrqRqstAct_FCM;     /* '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
  real_T CPSATC_AxlTrqRqst_FCM;        /* '<Root>/CPSATC_AxlTrqRqst_FCM' */
  boolean_T Sensors_Ready;             /* '<Root>/Sensors_Ready' */
  boolean_T All_Input_Signals_Validity;/* '<Root>/All_Input_Signals_Validity' */
  real_T EgoVehSpeed;                  /* '<Root>/EgoVehSpeed' */
  boolean_T AccelPedalOverrd;          /* '<Root>/AccelPedalOverrd' */
  boolean_T Steering_Wheel_Override;   /* '<Root>/Steering_Wheel_Override' */
  boolean_T Brake_Pedal_Override;      /* '<Root>/Brake_Pedal_Override' */
  boolean_T AEB_Inhibition;            /* '<Root>/AEB_Inhibition' */
  boolean_T IBA_Inhibition;            /* '<Root>/IBA_Inhibition' */
  boolean_T Brake_Pedal_Inhibit;       /* '<Root>/Brake_Pedal_Inhibit' */
  boolean_T Accelerator_Pedal_Inhibit; /* '<Root>/Accelerator_Pedal_Inhibit' */
  boolean_T Steering_Wheel_Inhibit;    /* '<Root>/Steering_Wheel_Inhibit' */
  boolean_T SeatBelt_Inhibit;          /* '<Root>/SeatBelt_Inhibit' */
  boolean_T AEB_IBA_Inhibition_Off;    /* '<Root>/AEB_IBA_Inhibition_Off' */
  boolean_T IBA_AEB_Inhibition_Off;    /* '<Root>/IBA_AEB_Inhibition_Off' */
  boolean_T AEB_Inhibition_MAX_Hold;   /* '<Root>/AEB_Inhibition_MAX_Hold' */
  boolean_T IBA_Inhibition_MAX_Hold;   /* '<Root>/IBA_Inhibition_MAX_Hold' */
  boolean_T AEB_Inhibition_Min_Stay;   /* '<Root>/AEB_Inhibition_Min_Stay' */
  boolean_T IBA_Inhibition_Min_Stay;   /* '<Root>/IBA_Inhibition_Min_Stay' */
  boolean_T IBA_MAX_State;             /* '<Root>/IBA_MAX_State' */
  boolean_T Max_Auto_Braking_State;    /* '<Root>/Max_Auto_Braking_State' */
  boolean_T Max_Hold_State;            /* '<Root>/Max_Hold_State' */
} ExtY_MainStateMachine_T;

/* Real-time Model Data Structure */
struct tag_RTM_MainStateMachine_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_MainStateMachine_T MainStateMachine_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_MainStateMachine_T MainStateMachine_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_MainStateMachine_T MainStateMachine_Y;
extern const ConstB_MainStateMachine_T MainStateMachine_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void MainStateMachine_initialize(void);
extern void MainStateMachine_step(void);
extern void MainStateMachine_terminate(void);

/* Real-time Model object */
extern RT_MODEL_MainStateMachine_T *const MainStateMachine_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'MainStateMachine'
 * '<S1>'   : 'MainStateMachine/FunctionStateMachine'
 * '<S2>'   : 'MainStateMachine/Outputs4Debug'
 * '<S3>'   : 'MainStateMachine/Post_Processing'
 * '<S4>'   : 'MainStateMachine/Preprocessing_Module_Updated'
 * '<S5>'   : 'MainStateMachine/State_Machine_Inputs'
 * '<S6>'   : 'MainStateMachine/Subsystem2'
 * '<S7>'   : 'MainStateMachine/Subsystem3'
 * '<S8>'   : 'MainStateMachine/Subsystem4'
 * '<S9>'   : 'MainStateMachine/Subsystem5'
 * '<S10>'  : 'MainStateMachine/SysPwrMd_Validity_Check'
 * '<S11>'  : 'MainStateMachine/T0_1.2 Zahra'
 * '<S12>'  : 'MainStateMachine/T0_1_1_Updated'
 * '<S13>'  : 'MainStateMachine/T0_3_2_Updated'
 * '<S14>'  : 'MainStateMachine/T1.1_3.2 Zahra'
 * '<S15>'  : 'MainStateMachine/T1.2_0 Zahra'
 * '<S16>'  : 'MainStateMachine/T1.2_3.1 Zahra'
 * '<S17>'  : 'MainStateMachine/T1_1_0_Updated'
 * '<S18>'  : 'MainStateMachine/T1_1_4_Updated'
 * '<S19>'  : 'MainStateMachine/T1_2_4_Updated'
 * '<S20>'  : 'MainStateMachine/T3.1_0  Sina-modified by Zahra'
 * '<S21>'  : 'MainStateMachine/T3_2_0_Updated'
 * '<S22>'  : 'MainStateMachine/T4_0_Updated'
 * '<S23>'  : 'MainStateMachine/Post_Processing/Hold_Out_Check Sina'
 * '<S24>'  : 'MainStateMachine/Post_Processing/Subsystem'
 * '<S25>'  : 'MainStateMachine/Post_Processing/Hold_Out_Check Sina/Autonomous Brake Release Indication On'
 * '<S26>'  : 'MainStateMachine/Post_Processing/Hold_Out_Check Sina/EPBFldChmEvntStat_Trigger'
 * '<S27>'  : 'MainStateMachine/Post_Processing/Hold_Out_Check Sina/Hold_Out_Check'
 * '<S28>'  : 'MainStateMachine/Post_Processing/Hold_Out_Check Sina/Hold_Out_Check/Subsystem5'
 * '<S29>'  : 'MainStateMachine/Preprocessing_Module_Updated/BackUp_Vehicle_Speed_Calculation_Sina'
 * '<S30>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA'
 * '<S31>'  : 'MainStateMachine/Preprocessing_Module_Updated/Override_Check_SINA'
 * '<S32>'  : 'MainStateMachine/Preprocessing_Module_Updated/Sensors_Ready_Check'
 * '<S33>'  : 'MainStateMachine/Preprocessing_Module_Updated/Subsystem2'
 * '<S34>'  : 'MainStateMachine/Preprocessing_Module_Updated/Validity_Check'
 * '<S35>'  : 'MainStateMachine/Preprocessing_Module_Updated/BackUp_Vehicle_Speed_Calculation_Sina/Vehicle Speed Calculation'
 * '<S36>'  : 'MainStateMachine/Preprocessing_Module_Updated/BackUp_Vehicle_Speed_Calculation_Sina/Vehicle Speed Calculation/Subsystem'
 * '<S37>'  : 'MainStateMachine/Preprocessing_Module_Updated/BackUp_Vehicle_Speed_Calculation_Sina/Vehicle Speed Calculation/Subsystem3'
 * '<S38>'  : 'MainStateMachine/Preprocessing_Module_Updated/BackUp_Vehicle_Speed_Calculation_Sina/Vehicle Speed Calculation/Subsystem/Subsystem'
 * '<S39>'  : 'MainStateMachine/Preprocessing_Module_Updated/BackUp_Vehicle_Speed_Calculation_Sina/Vehicle Speed Calculation/Subsystem/Subsystem1'
 * '<S40>'  : 'MainStateMachine/Preprocessing_Module_Updated/BackUp_Vehicle_Speed_Calculation_Sina/Vehicle Speed Calculation/Subsystem/Subsystem2'
 * '<S41>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Accelerator Pedal Inhibit Sina'
 * '<S42>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Brake Pedal Inhibit Sina'
 * '<S43>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Inhibition_Max_Hold_Check'
 * '<S44>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Inhibition_Min_Stay_Check'
 * '<S45>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Inhibition_Off_Check'
 * '<S46>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Seatbelt Unfastened Inhibit Sina'
 * '<S47>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Steering Wheel Gradient Inhibit Sina '
 * '<S48>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Subsystem'
 * '<S49>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Accelerator Pedal Inhibit Sina/Subsystem'
 * '<S50>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Accelerator Pedal Inhibit Sina/Subsystem1'
 * '<S51>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Accelerator Pedal Inhibit Sina/Subsystem2'
 * '<S52>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Accelerator Pedal Inhibit Sina/Subsystem3'
 * '<S53>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Brake Pedal Inhibit Sina/Subsystem'
 * '<S54>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Brake Pedal Inhibit Sina/Subsystem1'
 * '<S55>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Brake Pedal Inhibit Sina/Subsystem2'
 * '<S56>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Inhibition_Max_Hold_Check/Subsystem'
 * '<S57>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Inhibition_Max_Hold_Check/Subsystem1'
 * '<S58>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Inhibition_Min_Stay_Check/Subsystem'
 * '<S59>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Inhibition_Min_Stay_Check/Subsystem1'
 * '<S60>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Inhibition_Off_Check/Subsystem'
 * '<S61>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Inhibition_Off_Check/Subsystem1'
 * '<S62>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Seatbelt Unfastened Inhibit Sina/2nd Row Left'
 * '<S63>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Seatbelt Unfastened Inhibit Sina/2nd Row Left1'
 * '<S64>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Seatbelt Unfastened Inhibit Sina/Driver SeatBelt'
 * '<S65>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Seatbelt Unfastened Inhibit Sina/Front Passenger SeatBelt'
 * '<S66>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Steering Wheel Gradient Inhibit Sina /CIB'
 * '<S67>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Steering Wheel Gradient Inhibit Sina /ICM'
 * '<S68>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Steering Wheel Gradient Inhibit Sina /Subsystem5'
 * '<S69>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Steering Wheel Gradient Inhibit Sina /VRU'
 * '<S70>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Subsystem/Subsystem'
 * '<S71>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Subsystem/Subsystem1'
 * '<S72>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Subsystem/Subsystem/Initial_Condition_Check'
 * '<S73>'  : 'MainStateMachine/Preprocessing_Module_Updated/Inhibition_Check_SINA/Subsystem/Subsystem1/Initial_Condition_Check'
 * '<S74>'  : 'MainStateMachine/Preprocessing_Module_Updated/Override_Check_SINA/Acceleration Pedal Override Sina'
 * '<S75>'  : 'MainStateMachine/Preprocessing_Module_Updated/Override_Check_SINA/Brake Pedal Override Sina'
 * '<S76>'  : 'MainStateMachine/Preprocessing_Module_Updated/Override_Check_SINA/Steering Wheel Angle Gradient Override Sina'
 * '<S77>'  : 'MainStateMachine/Preprocessing_Module_Updated/Override_Check_SINA/Acceleration Pedal Override Sina/Page 50 SSTS'
 * '<S78>'  : 'MainStateMachine/Preprocessing_Module_Updated/Override_Check_SINA/Acceleration Pedal Override Sina/Page 50 SSTS 3rd'
 * '<S79>'  : 'MainStateMachine/Preprocessing_Module_Updated/Override_Check_SINA/Acceleration Pedal Override Sina/Subsystem'
 * '<S80>'  : 'MainStateMachine/Preprocessing_Module_Updated/Override_Check_SINA/Acceleration Pedal Override Sina/Subsystem1'
 * '<S81>'  : 'MainStateMachine/Preprocessing_Module_Updated/Override_Check_SINA/Acceleration Pedal Override Sina/Subsystem2'
 * '<S82>'  : 'MainStateMachine/Preprocessing_Module_Updated/Override_Check_SINA/Acceleration Pedal Override Sina/Subsystem/Subsystem'
 * '<S83>'  : 'MainStateMachine/Preprocessing_Module_Updated/Override_Check_SINA/Acceleration Pedal Override Sina/Subsystem/Subsystem1'
 * '<S84>'  : 'MainStateMachine/Preprocessing_Module_Updated/Override_Check_SINA/Steering Wheel Angle Gradient Override Sina/CIB'
 * '<S85>'  : 'MainStateMachine/Preprocessing_Module_Updated/Override_Check_SINA/Steering Wheel Angle Gradient Override Sina/ICM'
 * '<S86>'  : 'MainStateMachine/Preprocessing_Module_Updated/Override_Check_SINA/Steering Wheel Angle Gradient Override Sina/VRU'
 * '<S87>'  : 'MainStateMachine/Preprocessing_Module_Updated/Subsystem2/IBA_MAX_ExitTime Sina'
 * '<S88>'  : 'MainStateMachine/Preprocessing_Module_Updated/Subsystem2/Max_Auto_Braking_ExitTime Sina'
 * '<S89>'  : 'MainStateMachine/Preprocessing_Module_Updated/Subsystem2/Max_Hold_ExitTime Sina'
 * '<S90>'  : 'MainStateMachine/Preprocessing_Module_Updated/Subsystem2/IBA_MAX_ExitTime Sina/IBA_State_Check'
 * '<S91>'  : 'MainStateMachine/Preprocessing_Module_Updated/Subsystem2/IBA_MAX_ExitTime Sina/Subsystem1'
 * '<S92>'  : 'MainStateMachine/Preprocessing_Module_Updated/Subsystem2/Max_Auto_Braking_ExitTime Sina/AEB_Active_Check'
 * '<S93>'  : 'MainStateMachine/Preprocessing_Module_Updated/Subsystem2/Max_Auto_Braking_ExitTime Sina/Subsystem1'
 * '<S94>'  : 'MainStateMachine/Preprocessing_Module_Updated/Subsystem2/Max_Hold_ExitTime Sina/IBA_State_Check'
 * '<S95>'  : 'MainStateMachine/Preprocessing_Module_Updated/Subsystem2/Max_Hold_ExitTime Sina/Subsystem1'
 * '<S96>'  : 'MainStateMachine/State_Machine_Inputs/AEB Internal Signals'
 * '<S97>'  : 'MainStateMachine/State_Machine_Inputs/BSW Signals'
 * '<S98>'  : 'MainStateMachine/State_Machine_Inputs/CAN Signals'
 * '<S99>'  : 'MainStateMachine/State_Machine_Inputs/EM Camera Signals'
 * '<S100>' : 'MainStateMachine/State_Machine_Inputs/Signals_with_Unkown_Source'
 * '<S101>' : 'MainStateMachine/T0_1.2 Zahra/subsytem1'
 * '<S102>' : 'MainStateMachine/T0_1.2 Zahra/subsytem12'
 * '<S103>' : 'MainStateMachine/T0_1.2 Zahra/subsytem13'
 * '<S104>' : 'MainStateMachine/T0_1.2 Zahra/subsytem2'
 * '<S105>' : 'MainStateMachine/T0_1.2 Zahra/subsytem3'
 * '<S106>' : 'MainStateMachine/T0_1.2 Zahra/subsytem4'
 * '<S107>' : 'MainStateMachine/T0_1.2 Zahra/subsytem5'
 * '<S108>' : 'MainStateMachine/T0_1.2 Zahra/subsytem7'
 * '<S109>' : 'MainStateMachine/T0_1.2 Zahra/subsytem8'
 * '<S110>' : 'MainStateMachine/T0_1_1_Updated/subsytem1'
 * '<S111>' : 'MainStateMachine/T0_1_1_Updated/subsytem12'
 * '<S112>' : 'MainStateMachine/T0_1_1_Updated/subsytem13'
 * '<S113>' : 'MainStateMachine/T0_1_1_Updated/subsytem2'
 * '<S114>' : 'MainStateMachine/T0_1_1_Updated/subsytem3'
 * '<S115>' : 'MainStateMachine/T0_1_1_Updated/subsytem4'
 * '<S116>' : 'MainStateMachine/T0_1_1_Updated/subsytem5'
 * '<S117>' : 'MainStateMachine/T0_1_1_Updated/subsytem6'
 * '<S118>' : 'MainStateMachine/T0_1_1_Updated/subsytem7'
 * '<S119>' : 'MainStateMachine/T0_3_2_Updated/Cond14'
 * '<S120>' : 'MainStateMachine/T0_3_2_Updated/Subsystem'
 * '<S121>' : 'MainStateMachine/T0_3_2_Updated/Subsystem3'
 * '<S122>' : 'MainStateMachine/T0_3_2_Updated/Subsystem6'
 * '<S123>' : 'MainStateMachine/T0_3_2_Updated/Subsystem9'
 * '<S124>' : 'MainStateMachine/T0_3_2_Updated/subsytem1'
 * '<S125>' : 'MainStateMachine/T0_3_2_Updated/subsytem3'
 * '<S126>' : 'MainStateMachine/T0_3_2_Updated/subsytem4'
 * '<S127>' : 'MainStateMachine/T0_3_2_Updated/subsytem5'
 * '<S128>' : 'MainStateMachine/T0_3_2_Updated/subsytem6'
 * '<S129>' : 'MainStateMachine/T0_3_2_Updated/Cond14/Subsystem'
 * '<S130>' : 'MainStateMachine/T0_3_2_Updated/Cond14/Subsystem1'
 * '<S131>' : 'MainStateMachine/T0_3_2_Updated/Cond14/Subsystem2'
 * '<S132>' : 'MainStateMachine/T0_3_2_Updated/Cond14/Subsystem3'
 * '<S133>' : 'MainStateMachine/T0_3_2_Updated/Cond14/Subsystem4'
 * '<S134>' : 'MainStateMachine/T0_3_2_Updated/Cond14/Subsystem/Subsystem1'
 * '<S135>' : 'MainStateMachine/T0_3_2_Updated/Cond14/Subsystem1/Subsystem2'
 * '<S136>' : 'MainStateMachine/T0_3_2_Updated/Cond14/Subsystem2/Subsystem5'
 * '<S137>' : 'MainStateMachine/T0_3_2_Updated/Cond14/Subsystem3/Subsystem6'
 * '<S138>' : 'MainStateMachine/T0_3_2_Updated/Cond14/Subsystem4/Subsystem7'
 * '<S139>' : 'MainStateMachine/T1.1_3.2 Zahra/Subsystem5'
 * '<S140>' : 'MainStateMachine/T1.1_3.2 Zahra/Subsystem6'
 * '<S141>' : 'MainStateMachine/T1.1_3.2 Zahra/Subsystem7'
 * '<S142>' : 'MainStateMachine/T1.1_3.2 Zahra/Subsystem8'
 * '<S143>' : 'MainStateMachine/T1.1_3.2 Zahra/Subsystem9'
 * '<S144>' : 'MainStateMachine/T1.1_3.2 Zahra/Subsystem5/Subsystem1'
 * '<S145>' : 'MainStateMachine/T1.1_3.2 Zahra/Subsystem6/Subsystem2'
 * '<S146>' : 'MainStateMachine/T1.1_3.2 Zahra/Subsystem7/Subsystem5'
 * '<S147>' : 'MainStateMachine/T1.1_3.2 Zahra/Subsystem8/Subsystem6'
 * '<S148>' : 'MainStateMachine/T1.1_3.2 Zahra/Subsystem9/Subsystem7'
 * '<S149>' : 'MainStateMachine/T1.2_0 Zahra/Subsystem'
 * '<S150>' : 'MainStateMachine/T1.2_0 Zahra/Subsystem1'
 * '<S151>' : 'MainStateMachine/T1.2_0 Zahra/Subsystem8'
 * '<S152>' : 'MainStateMachine/T1.2_0 Zahra/subsytem1'
 * '<S153>' : 'MainStateMachine/T1.2_0 Zahra/subsytem10'
 * '<S154>' : 'MainStateMachine/T1.2_0 Zahra/subsytem11'
 * '<S155>' : 'MainStateMachine/T1.2_0 Zahra/subsytem2'
 * '<S156>' : 'MainStateMachine/T1.2_0 Zahra/subsytem3'
 * '<S157>' : 'MainStateMachine/T1.2_0 Zahra/subsytem4'
 * '<S158>' : 'MainStateMachine/T1.2_0 Zahra/subsytem5'
 * '<S159>' : 'MainStateMachine/T1.2_0 Zahra/subsytem6'
 * '<S160>' : 'MainStateMachine/T1.2_0 Zahra/subsytem7'
 * '<S161>' : 'MainStateMachine/T1.2_0 Zahra/Subsystem/Subsystem4'
 * '<S162>' : 'MainStateMachine/T1.2_0 Zahra/Subsystem8/Subsystem2'
 * '<S163>' : 'MainStateMachine/T1.2_0 Zahra/Subsystem8/Subsystem3'
 * '<S164>' : 'MainStateMachine/T1.2_0 Zahra/Subsystem8/Subsystem2/Subsystem4'
 * '<S165>' : 'MainStateMachine/T1.2_0 Zahra/Subsystem8/Subsystem3/Subsystem4'
 * '<S166>' : 'MainStateMachine/T1.2_0 Zahra/subsytem10/Subsystem4'
 * '<S167>' : 'MainStateMachine/T1.2_3.1 Zahra/Condition_1'
 * '<S168>' : 'MainStateMachine/T1.2_3.1 Zahra/Condition_2'
 * '<S169>' : 'MainStateMachine/T1.2_3.1 Zahra/Condition_1/CIB//ICM'
 * '<S170>' : 'MainStateMachine/T1.2_3.1 Zahra/Condition_1/VRU'
 * '<S171>' : 'MainStateMachine/T1.2_3.1 Zahra/Condition_1/CIB//ICM/BrakePedalApp_Check'
 * '<S172>' : 'MainStateMachine/T1.2_3.1 Zahra/Condition_1/CIB//ICM/Subsystem2'
 * '<S173>' : 'MainStateMachine/T1.2_3.1 Zahra/Condition_1/VRU/BrakePedalPressure_Check'
 * '<S174>' : 'MainStateMachine/T1.2_3.1 Zahra/Condition_1/VRU/Subsystem2'
 * '<S175>' : 'MainStateMachine/T1_1_0_Updated/Subsystem8'
 * '<S176>' : 'MainStateMachine/T1_1_0_Updated/subsytem1'
 * '<S177>' : 'MainStateMachine/T1_1_0_Updated/subsytem10'
 * '<S178>' : 'MainStateMachine/T1_1_0_Updated/subsytem12'
 * '<S179>' : 'MainStateMachine/T1_1_0_Updated/subsytem13'
 * '<S180>' : 'MainStateMachine/T1_1_0_Updated/subsytem2'
 * '<S181>' : 'MainStateMachine/T1_1_0_Updated/subsytem3'
 * '<S182>' : 'MainStateMachine/T1_1_0_Updated/subsytem4'
 * '<S183>' : 'MainStateMachine/T1_1_0_Updated/subsytem5'
 * '<S184>' : 'MainStateMachine/T1_1_0_Updated/subsytem7'
 * '<S185>' : 'MainStateMachine/T1_1_0_Updated/subsytem8'
 * '<S186>' : 'MainStateMachine/T1_1_0_Updated/subsytem9'
 * '<S187>' : 'MainStateMachine/T1_1_0_Updated/Subsystem8/Subsystem2'
 * '<S188>' : 'MainStateMachine/T1_1_0_Updated/Subsystem8/Subsystem3'
 * '<S189>' : 'MainStateMachine/T1_1_0_Updated/Subsystem8/Subsystem2/Subsystem4'
 * '<S190>' : 'MainStateMachine/T1_1_0_Updated/Subsystem8/Subsystem3/Subsystem4'
 * '<S191>' : 'MainStateMachine/T1_1_0_Updated/subsytem12/Subsystem4'
 * '<S192>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem'
 * '<S193>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem1'
 * '<S194>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem11'
 * '<S195>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem2'
 * '<S196>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem3'
 * '<S197>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem5'
 * '<S198>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem6'
 * '<S199>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem7'
 * '<S200>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem8'
 * '<S201>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem9'
 * '<S202>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/subsytem5'
 * '<S203>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem1/Subsystem2'
 * '<S204>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem8/Subsystem2'
 * '<S205>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem8/Subsystem3'
 * '<S206>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem8/Subsystem2/Subsystem4'
 * '<S207>' : 'MainStateMachine/T3.1_0  Sina-modified by Zahra/Subsystem8/Subsystem3/Subsystem4'
 * '<S208>' : 'MainStateMachine/T3_2_0_Updated/Subsystem'
 * '<S209>' : 'MainStateMachine/T3_2_0_Updated/Subsystem1'
 * '<S210>' : 'MainStateMachine/T3_2_0_Updated/Subsystem10'
 * '<S211>' : 'MainStateMachine/T3_2_0_Updated/Subsystem11'
 * '<S212>' : 'MainStateMachine/T3_2_0_Updated/Subsystem3'
 * '<S213>' : 'MainStateMachine/T3_2_0_Updated/Subsystem4'
 * '<S214>' : 'MainStateMachine/T3_2_0_Updated/Subsystem5'
 * '<S215>' : 'MainStateMachine/T3_2_0_Updated/Subsystem6'
 * '<S216>' : 'MainStateMachine/T3_2_0_Updated/Subsystem7'
 * '<S217>' : 'MainStateMachine/T3_2_0_Updated/Subsystem8'
 * '<S218>' : 'MainStateMachine/T3_2_0_Updated/subsytem5'
 * '<S219>' : 'MainStateMachine/T3_2_0_Updated/Subsystem3/Subsystem2'
 * '<S220>' : 'MainStateMachine/T3_2_0_Updated/Subsystem8/Subsystem2'
 * '<S221>' : 'MainStateMachine/T3_2_0_Updated/Subsystem8/Subsystem3'
 * '<S222>' : 'MainStateMachine/T3_2_0_Updated/Subsystem8/Subsystem2/Subsystem4'
 * '<S223>' : 'MainStateMachine/T3_2_0_Updated/Subsystem8/Subsystem3/Subsystem4'
 * '<S224>' : 'MainStateMachine/T4_0_Updated/Subsystem'
 * '<S225>' : 'MainStateMachine/T4_0_Updated/Subsystem1'
 * '<S226>' : 'MainStateMachine/T4_0_Updated/Subsystem2'
 * '<S227>' : 'MainStateMachine/T4_0_Updated/Subsystem3'
 * '<S228>' : 'MainStateMachine/T4_0_Updated/Subsystem4'
 * '<S229>' : 'MainStateMachine/T4_0_Updated/Subsystem5'
 * '<S230>' : 'MainStateMachine/T4_0_Updated/Subsystem7'
 * '<S231>' : 'MainStateMachine/T4_0_Updated/subsytem1'
 * '<S232>' : 'MainStateMachine/T4_0_Updated/subsytem5'
 */
#endif                                 /* RTW_HEADER_MainStateMachine_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
