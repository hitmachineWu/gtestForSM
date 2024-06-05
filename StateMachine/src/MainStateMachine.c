/*
 * File: MainStateMachine.c
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

#include "MainStateMachine.h"
#include "rtwtypes.h"
#include <math.h>
#include "MainStateMachine_types.h"

/* Named constants for Chart: '<Root>/FunctionStateMachine' */
#define IN_Auto_Braking_For_EBCM_and_Ib ((uint8_T)2U)
#define M_IN_Auto_Braking_For_EBCM_Only ((uint8_T)1U)
#define MainStateMachine_IN_HBA1       ((uint8_T)3U)
#define MainStateMachine_IN_HBA2       ((uint8_T)4U)
#define MainStateMachine_IN_Hold       ((uint8_T)5U)
#define MainStateMachine_IN_Inactive   ((uint8_T)6U)
#define MainStateMachine_IN_Off        ((uint8_T)7U)

/* Block states (default storage) */
DW_MainStateMachine_T MainStateMachine_DW;

/* External inputs (root inport signals with default storage) */
ExtU_MainStateMachine_T MainStateMachine_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_MainStateMachine_T MainStateMachine_Y;

/* Real-time model */
static RT_MODEL_MainStateMachine_T MainStateMachine_M_;
RT_MODEL_MainStateMachine_T *const MainStateMachine_M = &MainStateMachine_M_;

/* Forward declaration for local functions */
static void Auto_Braking_For_EBCM_and_Iboos(const boolean_T *AND2, const
  boolean_T *RelationalOperator_e, const boolean_T *OR_o, const boolean_T
  *Switch1, real_T *CPSCBSC_CtrlAcc_FCM);
static void MainStateMachine_Inactive(const boolean_T *AND, const boolean_T
  *AND_d, const boolean_T *AND_b, const boolean_T *Switch1, real_T
  *CPSCBSC_CtrlAcc_FCM);

/* Function for Chart: '<Root>/FunctionStateMachine' */
static void Auto_Braking_For_EBCM_and_Iboos(const boolean_T *AND2, const
  boolean_T *RelationalOperator_e, const boolean_T *OR_o, const boolean_T
  *Switch1, real_T *CPSCBSC_CtrlAcc_FCM)
{
  /* Update for Outport: '<Root>/AEB_State' */
  MainStateMachine_Y.AEB_State = Auto_Braking_For_EBCM_and_Ibooster;

  /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
  MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 1.0;

  /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
  MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 0.0;

  /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
  MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 3.0;

  /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
  MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 3.0;
  *CPSCBSC_CtrlAcc_FCM = -1.0;

  /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
  MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 1.0;
  if (!*Switch1) {
    MainStateMachine_DW.is_c3_MainStateMachine = MainStateMachine_IN_Off;

    /* Update for Outport: '<Root>/AEB_State' */
    MainStateMachine_Y.AEB_State = Off;

    /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
    MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 0.0;

    /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
    MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 1.0;

    /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 0.0;

    /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 0.0;
    *CPSCBSC_CtrlAcc_FCM = -0.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
    MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 0.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' */
    MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM = 0.0;
  } else if (*OR_o) {
    MainStateMachine_DW.is_c3_MainStateMachine = MainStateMachine_IN_Inactive;

    /* Update for Outport: '<Root>/AEB_State' */
    MainStateMachine_Y.AEB_State = Inactive;

    /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
    MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 0.0;

    /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
    MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 1.0;

    /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 0.0;

    /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 0.0;
    *CPSCBSC_CtrlAcc_FCM = 0.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
    MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 0.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' */
    MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM = 0.0;
  } else if (*AND2) {
    MainStateMachine_DW.is_c3_MainStateMachine = MainStateMachine_IN_HBA1;

    /* Update for Outport: '<Root>/AEB_State' */
    MainStateMachine_Y.AEB_State = HBA1;

    /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 4.0;

    /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 4.0;
    *CPSCBSC_CtrlAcc_FCM = -1.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' incorporates:
     *  Inport: '<Root>/DrvIntndAxlTrqMin'
     */
    MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM =
      MainStateMachine_U.DrvIntndAxlTrqMin - 100.0;
  } else if (*RelationalOperator_e) {
    MainStateMachine_DW.is_c3_MainStateMachine = MainStateMachine_IN_Hold;

    /* Update for Outport: '<Root>/AEB_State' */
    MainStateMachine_Y.AEB_State = Hold;

    /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 5.0;

    /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 5.0;
    *CPSCBSC_CtrlAcc_FCM = 0.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' incorporates:
     *  Inport: '<Root>/DrvIntndAxlTrqMin'
     */
    MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM =
      MainStateMachine_U.DrvIntndAxlTrqMin - 100.0;
  }
}

/* Function for Chart: '<Root>/FunctionStateMachine' */
static void MainStateMachine_Inactive(const boolean_T *AND, const boolean_T
  *AND_d, const boolean_T *AND_b, const boolean_T *Switch1, real_T
  *CPSCBSC_CtrlAcc_FCM)
{
  /* Update for Outport: '<Root>/AEB_State' */
  MainStateMachine_Y.AEB_State = Inactive;

  /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
  MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 0.0;

  /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
  MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 1.0;

  /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
  MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 0.0;

  /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
  MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 0.0;
  *CPSCBSC_CtrlAcc_FCM = 0.0;

  /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
  MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 0.0;
  if (*AND) {
    MainStateMachine_DW.is_c3_MainStateMachine = MainStateMachine_IN_HBA2;

    /* Update for Outport: '<Root>/AEB_State' */
    MainStateMachine_Y.AEB_State = HBA2;

    /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
    MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 1.0;

    /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
    MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 0.0;

    /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 4.0;

    /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 4.0;
    *CPSCBSC_CtrlAcc_FCM = -1.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
    MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 1.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' incorporates:
     *  Inport: '<Root>/DrvIntndAxlTrqMin'
     */
    MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM =
      MainStateMachine_U.DrvIntndAxlTrqMin - 100.0;
  } else if (*AND_b) {
    MainStateMachine_DW.is_c3_MainStateMachine = M_IN_Auto_Braking_For_EBCM_Only;

    /* Update for Outport: '<Root>/AEB_State' */
    MainStateMachine_Y.AEB_State = Auto_Braking_For_EBCM_Only;

    /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
    MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 1.0;

    /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
    MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 0.0;

    /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 3.0;

    /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 3.0;
    *CPSCBSC_CtrlAcc_FCM = -1.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
    MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 1.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' incorporates:
     *  Inport: '<Root>/DrvIntndAxlTrqMin'
     */
    MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM =
      MainStateMachine_U.DrvIntndAxlTrqMin - 100.0;
  } else if (*AND_d) {
    MainStateMachine_DW.is_c3_MainStateMachine = IN_Auto_Braking_For_EBCM_and_Ib;

    /* Update for Outport: '<Root>/AEB_State' */
    MainStateMachine_Y.AEB_State = Auto_Braking_For_EBCM_and_Ibooster;

    /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
    MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 1.0;

    /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
    MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 0.0;

    /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 3.0;

    /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 3.0;
    *CPSCBSC_CtrlAcc_FCM = -1.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
    MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 1.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' incorporates:
     *  Inport: '<Root>/DrvIntndAxlTrqMin'
     */
    MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM =
      MainStateMachine_U.DrvIntndAxlTrqMin - 100.0;
  } else if (!*Switch1) {
    MainStateMachine_DW.is_c3_MainStateMachine = MainStateMachine_IN_Off;

    /* Update for Outport: '<Root>/AEB_State' */
    MainStateMachine_Y.AEB_State = Off;
    *CPSCBSC_CtrlAcc_FCM = -0.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' */
    MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM = 0.0;
  }
}

/* Model step function */
void MainStateMachine_step(void)
{
  real_T rtb_Product1;
  uint8_T tmp;
  boolean_T AND;
  boolean_T AND2;
  boolean_T AND_b;
  boolean_T AND_d;
  boolean_T OR_o;
  boolean_T OR_o_tmp;
  boolean_T OR_o_tmp_0;
  boolean_T OR_o_tmp_1;
  boolean_T OR_o_tmp_2;
  boolean_T OR_o_tmp_3;
  boolean_T OR_o_tmp_4;
  boolean_T OR_o_tmp_5;
  boolean_T OR_o_tmp_6;
  boolean_T OR_o_tmp_7;
  boolean_T OR_o_tmp_8;
  boolean_T RelationalOperator_e;
  boolean_T Switch1;
  boolean_T Switch4;
  boolean_T rtb_AND1;
  boolean_T rtb_AND1_b;
  boolean_T rtb_AND1_je;
  boolean_T rtb_AND2_dl;
  boolean_T rtb_AND2_gn;
  boolean_T rtb_AND3_n;
  boolean_T rtb_AND_a;
  boolean_T rtb_AND_jo;
  boolean_T rtb_AND_lx;
  boolean_T rtb_AND_mi;
  boolean_T rtb_AND_ml;
  boolean_T rtb_AND_nu;
  boolean_T rtb_AND_p;
  boolean_T rtb_Delay1;
  boolean_T rtb_Delay_n;
  boolean_T rtb_Equal1_dx;
  boolean_T rtb_Equal_d_tmp;
  boolean_T rtb_Equal_fu;
  boolean_T rtb_Equal_hmq;
  boolean_T rtb_Equal_kd;
  boolean_T rtb_Equal_mz;
  boolean_T rtb_Equal_oc;
  boolean_T rtb_GreaterThan1_b;
  boolean_T rtb_GreaterThan1_bg;
  boolean_T rtb_GreaterThan1_c;
  boolean_T rtb_GreaterThan1_cb;
  boolean_T rtb_GreaterThan1_cm;
  boolean_T rtb_GreaterThan1_cn;
  boolean_T rtb_GreaterThan1_d;
  boolean_T rtb_GreaterThan1_d2;
  boolean_T rtb_GreaterThan1_dj;
  boolean_T rtb_GreaterThan1_dr;
  boolean_T rtb_GreaterThan1_dt;
  boolean_T rtb_GreaterThan1_ef;
  boolean_T rtb_GreaterThan1_et;
  boolean_T rtb_GreaterThan1_eu;
  boolean_T rtb_GreaterThan1_gp;
  boolean_T rtb_GreaterThan1_gr;
  boolean_T rtb_GreaterThan1_h;
  boolean_T rtb_GreaterThan1_hg;
  boolean_T rtb_GreaterThan1_ho;
  boolean_T rtb_GreaterThan1_i;
  boolean_T rtb_GreaterThan1_ic;
  boolean_T rtb_GreaterThan1_j;
  boolean_T rtb_GreaterThan1_jj;
  boolean_T rtb_GreaterThan1_k;
  boolean_T rtb_GreaterThan1_l;
  boolean_T rtb_GreaterThan1_l4;
  boolean_T rtb_GreaterThan1_lk;
  boolean_T rtb_GreaterThan1_m;
  boolean_T rtb_GreaterThan1_m0;
  boolean_T rtb_GreaterThan1_mk;
  boolean_T rtb_GreaterThan1_mr;
  boolean_T rtb_GreaterThan1_n0;
  boolean_T rtb_GreaterThan1_o;
  boolean_T rtb_GreaterThan1_o0;
  boolean_T rtb_GreaterThan1_oo;
  boolean_T rtb_GreaterThan2_m;
  boolean_T rtb_GreaterThan3;
  boolean_T rtb_GreaterThan3_c;
  boolean_T rtb_GreaterThan4_l;
  boolean_T rtb_GreaterThan5;
  boolean_T rtb_GreaterThan6;
  boolean_T rtb_GreaterThan_jq;
  boolean_T rtb_NOT;
  boolean_T rtb_NOT1_c;
  boolean_T rtb_NOT1_m5;
  boolean_T rtb_NOT2;
  boolean_T rtb_NOT2_li;
  boolean_T rtb_NOT_n;
  boolean_T rtb_NotEqual1_av;
  boolean_T rtb_NotEqual1_e;
  boolean_T rtb_NotEqual1_hf;
  boolean_T rtb_NotEqual1_m;
  boolean_T rtb_OR1;
  boolean_T rtb_OR_pt;
  boolean_T rtb_RelationalOperator1;
  boolean_T rtb_RelationalOperator4;
  AEB_Customization_Setting rtb_Switch_dq;
  AEB_Customization_Setting rtb_Switch_hp;
  AEB_Customization_Setting rtb_Switch_pl;
  AEB_Scenario rtb_Switch_jae;

  /* Logic: '<S14>/AND1' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/K_dpct_IBA_Brake_Rate_Position'
   *  Inport: '<Root>/BrkPdlPosGrad'
   *  RelationalOperator: '<S14>/Equal'
   *  RelationalOperator: '<S14>/GreaterThan'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_AND1 = ((MainStateMachine_U.BrkPdlPosGrad > 20.0) &&
              (MainStateMachine_DW.UnitDelay_DSTATE ==
               Auto_Braking_For_EBCM_Only));

  /* Switch: '<S144>/Switch1' incorporates:
   *  Delay: '<S144>/Delay3'
   *  Logic: '<S144>/AND2'
   *  Logic: '<S144>/NOT1'
   */
  if (rtb_AND1 && (!MainStateMachine_DW.Delay3_DSTATE)) {
    /* Switch: '<S144>/Switch1' incorporates:
     *  Constant: '<S139>/K_t_IBA_Enable_Time'
     */
    MainStateMachine_DW.Delay4_DSTATE = 0.0;
  }

  /* End of Switch: '<S144>/Switch1' */

  /* RelationalOperator: '<S144>/GreaterThan1' incorporates:
   *  Constant: '<S144>/Upper_Limit4'
   */
  rtb_GreaterThan1_eu = (MainStateMachine_DW.Delay4_DSTATE > 0.0);

  /* Logic: '<S34>/Logical Operator' incorporates:
   *  Switch: '<S139>/Switch'
   */
  MainStateMachine_Y.All_Input_Signals_Validity = ((!rtb_GreaterThan1_eu) &&
    rtb_AND1);

  /* Logic: '<S141>/NOT' */
  rtb_NOT = !MainStateMachine_Y.All_Input_Signals_Validity;

  /* Switch: '<S146>/Switch1' incorporates:
   *  Delay: '<S146>/Delay3'
   *  Logic: '<S146>/AND2'
   *  Logic: '<S146>/NOT1'
   */
  if (rtb_NOT && (!MainStateMachine_DW.Delay3_DSTATE_n)) {
    /* Switch: '<S146>/Switch1' incorporates:
     *  Constant: '<S141>/Constant3'
     */
    MainStateMachine_DW.Delay4_DSTATE_b = 0.45;
  }

  /* End of Switch: '<S146>/Switch1' */

  /* RelationalOperator: '<S146>/GreaterThan1' incorporates:
   *  Constant: '<S146>/Upper_Limit4'
   */
  rtb_GreaterThan1_cb = (MainStateMachine_DW.Delay4_DSTATE_b > 0.0);

  /* Logic: '<S14>/AND2' incorporates:
   *  Constant: '<S14>/Constant8'
   *  Constant: '<S14>/K_p_IBA_Enable_Pressure (kPa)'
   *  Inport: '<Root>/BPDAPS_BkPDrvApP'
   *  RelationalOperator: '<S14>/Equal1'
   *  RelationalOperator: '<S14>/GreaterThan1'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_AND2_dl = ((MainStateMachine_U.BPDAPS_BkPDrvApP > 2475.0) &&
                 (MainStateMachine_DW.UnitDelay_DSTATE ==
                  Auto_Braking_For_EBCM_Only));

  /* Switch: '<S145>/Switch1' incorporates:
   *  Delay: '<S145>/Delay3'
   *  Logic: '<S145>/AND2'
   *  Logic: '<S145>/NOT1'
   */
  if (rtb_AND2_dl && (!MainStateMachine_DW.Delay3_DSTATE_j)) {
    /* Switch: '<S145>/Switch1' incorporates:
     *  Constant: '<S140>/K_t_IBA_Enable_Time1'
     */
    MainStateMachine_DW.Delay4_DSTATE_c = 0.0;
  }

  /* End of Switch: '<S145>/Switch1' */

  /* RelationalOperator: '<S145>/GreaterThan1' incorporates:
   *  Constant: '<S145>/Upper_Limit4'
   */
  rtb_GreaterThan1_hg = (MainStateMachine_DW.Delay4_DSTATE_c > 0.0);

  /* Switch: '<S140>/Switch1' */
  rtb_GreaterThan1_dr = ((!rtb_GreaterThan1_hg) && rtb_AND2_dl);

  /* Logic: '<S142>/NOT1' */
  rtb_NOT1_m5 = !rtb_GreaterThan1_dr;

  /* Switch: '<S147>/Switch1' incorporates:
   *  Delay: '<S147>/Delay3'
   *  Logic: '<S147>/AND2'
   *  Logic: '<S147>/NOT1'
   */
  if (rtb_NOT1_m5 && (!MainStateMachine_DW.Delay3_DSTATE_o)) {
    /* Switch: '<S147>/Switch1' incorporates:
     *  Constant: '<S142>/Constant4'
     */
    MainStateMachine_DW.Delay4_DSTATE_o = 0.45;
  }

  /* End of Switch: '<S147>/Switch1' */

  /* RelationalOperator: '<S147>/GreaterThan1' incorporates:
   *  Constant: '<S147>/Upper_Limit4'
   */
  rtb_GreaterThan1_m0 = (MainStateMachine_DW.Delay4_DSTATE_o > 0.0);

  /* Logic: '<S34>/Logical Operator' incorporates:
   *  Logic: '<S14>/Logical Operator1'
   *  Switch: '<S141>/Switch2'
   *  Switch: '<S142>/Switch3'
   */
  MainStateMachine_Y.All_Input_Signals_Validity = ((rtb_GreaterThan1_cb ||
    MainStateMachine_Y.All_Input_Signals_Validity) && (rtb_GreaterThan1_m0 ||
    rtb_GreaterThan1_dr));

  /* Logic: '<S143>/NOT2' */
  rtb_NOT2 = !MainStateMachine_Y.All_Input_Signals_Validity;

  /* Switch: '<S148>/Switch1' incorporates:
   *  Delay: '<S148>/Delay3'
   *  Logic: '<S148>/AND2'
   *  Logic: '<S148>/NOT1'
   */
  if (rtb_NOT2 && (!MainStateMachine_DW.Delay3_DSTATE_a)) {
    /* Switch: '<S148>/Switch1' incorporates:
     *  Constant: '<S143>/Constant7'
     */
    MainStateMachine_DW.Delay4_DSTATE_a = 0.45;
  }

  /* End of Switch: '<S148>/Switch1' */

  /* RelationalOperator: '<S148>/GreaterThan1' incorporates:
   *  Constant: '<S148>/Upper_Limit4'
   */
  rtb_GreaterThan1_dr = (MainStateMachine_DW.Delay4_DSTATE_a > 0.0);

  /* Switch: '<S143>/Switch4' */
  Switch4 = (rtb_GreaterThan1_dr ||
             MainStateMachine_Y.All_Input_Signals_Validity);

  /* Logic: '<S34>/Logical Operator' incorporates:
   *  Constant: '<S34>/2 Calibrated '
   *  Constant: '<S34>/Calibrated '
   *  Constant: '<S34>/Constant'
   *  Constant: '<S34>/Constant1'
   *  Constant: '<S34>/Constant10'
   *  Constant: '<S34>/Constant11'
   *  Constant: '<S34>/Constant12'
   *  Constant: '<S34>/Constant13'
   *  Constant: '<S34>/Constant14'
   *  Constant: '<S34>/Constant15'
   *  Constant: '<S34>/Constant16'
   *  Constant: '<S34>/Constant18'
   *  Constant: '<S34>/Constant19'
   *  Constant: '<S34>/Constant2'
   *  Constant: '<S34>/Constant20'
   *  Constant: '<S34>/Constant21'
   *  Constant: '<S34>/Constant22'
   *  Constant: '<S34>/Constant23'
   *  Constant: '<S34>/Constant29'
   *  Constant: '<S34>/Constant31'
   *  Constant: '<S34>/Constant4'
   *  Constant: '<S34>/Constant5'
   *  Constant: '<S34>/Constant6'
   *  Constant: '<S34>/Constant7'
   *  Constant: '<S34>/Constant8'
   *  Constant: '<S34>/Constant9'
   *  Inport: '<Root>/ABAAPS_AccPosV'
   *  Inport: '<Root>/AccActPosV'
   *  Inport: '<Root>/BPDAPS_BkPDrvApPV'
   *  Inport: '<Root>/BackUp_Speed_Diag'
   *  Inport: '<Root>/BrkPedAppV'
   *  Inport: '<Root>/DrSbltAtcV'
   *  Inport: '<Root>/DrvIntndAxlTrqMinV'
   *  Inport: '<Root>/FltMngmntOut'
   *  Inport: '<Root>/IMUDataMsk_1'
   *  Inport: '<Root>/IMULatAccPrimV'
   *  Inport: '<Root>/IMULonAccPriV'
   *  Inport: '<Root>/IMUXAxisClbrtd'
   *  Inport: '<Root>/IMUYawRtPriV'
   *  Inport: '<Root>/Major_Speed_Left_Rear_Diag'
   *  Inport: '<Root>/Major_Speed_Right_Rear_Diag'
   *  Inport: '<Root>/PsSbltAtcV'
   *  Inport: '<Root>/StrWhAngGrdMsk'
   *  Inport: '<Root>/StrWhAngGrdV'
   *  Inport: '<Root>/StrWhAngMsk'
   *  Inport: '<Root>/StrWhAngV'
   *  Inport: '<Root>/StrWhlAngSenCalStat'
   *  Inport: '<Root>/SysPwrMdV'
   *  Inport: '<Root>/TransEstGearV_TCM'
   *  Inport: '<Root>/VSEAct'
   *  Inport: '<Root>/VehSpdAvgNDrvnV'
   *  Inport: '<Root>/WhlAngVelLRrAuthV'
   *  Inport: '<Root>/WhlAngVelRRrAuthV'
   *  RelationalOperator: '<S34>/Equal'
   *  RelationalOperator: '<S34>/Equal1'
   *  RelationalOperator: '<S34>/Equal10'
   *  RelationalOperator: '<S34>/Equal11'
   *  RelationalOperator: '<S34>/Equal12'
   *  RelationalOperator: '<S34>/Equal13'
   *  RelationalOperator: '<S34>/Equal14'
   *  RelationalOperator: '<S34>/Equal15'
   *  RelationalOperator: '<S34>/Equal16'
   *  RelationalOperator: '<S34>/Equal17'
   *  RelationalOperator: '<S34>/Equal18'
   *  RelationalOperator: '<S34>/Equal19'
   *  RelationalOperator: '<S34>/Equal2'
   *  RelationalOperator: '<S34>/Equal20'
   *  RelationalOperator: '<S34>/Equal21'
   *  RelationalOperator: '<S34>/Equal22'
   *  RelationalOperator: '<S34>/Equal23'
   *  RelationalOperator: '<S34>/Equal29'
   *  RelationalOperator: '<S34>/Equal31'
   *  RelationalOperator: '<S34>/Equal32'
   *  RelationalOperator: '<S34>/Equal33'
   *  RelationalOperator: '<S34>/Equal4'
   *  RelationalOperator: '<S34>/Equal5'
   *  RelationalOperator: '<S34>/Equal6'
   *  RelationalOperator: '<S34>/Equal7'
   *  RelationalOperator: '<S34>/Equal8'
   *  RelationalOperator: '<S34>/Equal9'
   */
  MainStateMachine_Y.All_Input_Signals_Validity =
    ((MainStateMachine_U.IMUYawRtPriV == 0) && (MainStateMachine_U.AccActPosV ==
      0) && (MainStateMachine_U.IMULatAccPrimV == 0) &&
     (MainStateMachine_U.WhlAngVelRRrAuthV == 0) &&
     (MainStateMachine_U.WhlAngVelLRrAuthV == 0) &&
     (MainStateMachine_U.IMULonAccPriV == 0) && (MainStateMachine_U.StrWhAngGrdV
      == 0) && (MainStateMachine_U.VehSpdAvgNDrvnV == 0) &&
     (MainStateMachine_U.StrWhAngMsk == 1) && (MainStateMachine_U.IMUDataMsk_1 ==
      1) && (MainStateMachine_U.DrvIntndAxlTrqMinV == 0) &&
     (MainStateMachine_U.BrkPedAppV == 0) &&
     (MainStateMachine_U.BPDAPS_BkPDrvApPV == 0) && (!MainStateMachine_U.VSEAct)
     && (MainStateMachine_U.TransEstGearV_TCM == 0) &&
     (MainStateMachine_U.SysPwrMdV == 0) && (MainStateMachine_U.DrSbltAtcV == 0)
     && (MainStateMachine_U.PsSbltAtcV == 0) &&
     (MainStateMachine_U.ABAAPS_AccPosV == 0) &&
     (MainStateMachine_U.StrWhAngGrdMsk == 1) &&
     (MainStateMachine_U.Major_Speed_Right_Rear_Diag == 1) &&
     (MainStateMachine_U.Major_Speed_Left_Rear_Diag == 1) &&
     (MainStateMachine_U.BackUp_Speed_Diag == 1) &&
     (MainStateMachine_U.StrWhAngV == 0) && (MainStateMachine_U.FltMngmntOut ==
      0) && (MainStateMachine_U.StrWhlAngSenCalStat == 2) &&
     (MainStateMachine_U.IMUXAxisClbrtd == 1));

  /* Logic: '<S32>/AND6' incorporates:
   *  Constant: '<S32>/Constant10'
   *  Constant: '<S32>/Constant11'
   *  Constant: '<S32>/Constant12'
   *  Constant: '<S32>/Constant7'
   *  Constant: '<S32>/Constant8'
   *  Constant: '<S32>/Constant9'
   *  Inport: '<Root>/FS_CALIBRATION_MISALIGNMENT'
   *  Inport: '<Root>/FS_FULL_BLOCKAGE_BIT'
   *  Inport: '<Root>/FS_Impaired_VD'
   *  Inport: '<Root>/FS_OUT_OF_CALIBRATION'
   *  Inport: '<Root>/ILRR_SP_CalibrationState'
   *  Inport: '<Root>/ILRR_SP_OperationMode'
   *  Logic: '<S32>/AND4'
   *  Logic: '<S32>/AND5'
   *  RelationalOperator: '<S32>/Equal10'
   *  RelationalOperator: '<S32>/Equal11'
   *  RelationalOperator: '<S32>/Equal12'
   *  RelationalOperator: '<S32>/Equal7'
   *  RelationalOperator: '<S32>/Equal8'
   *  RelationalOperator: '<S32>/Equal9'
   */
  MainStateMachine_Y.Sensors_Ready = (((MainStateMachine_U.ILRR_SP_OperationMode
    == 2) && (MainStateMachine_U.ILRR_SP_CalibrationState == 1)) ||
    ((MainStateMachine_U.FS_FULL_BLOCKAGE_BIT == 0) &&
     (MainStateMachine_U.FS_Impaired_VD == 0) &&
     (MainStateMachine_U.FS_OUT_OF_CALIBRATION == 0) &&
     (MainStateMachine_U.FS_CALIBRATION_MISALIGNMENT == 0)));

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   *  Constant: '<S7>/Constant2'
   *  Constant: '<S7>/Constant4'
   *  Constant: '<S7>/Constant6'
   *  Inport: '<Root>/ColPrSysCstChgSetReq'
   *  RelationalOperator: '<S7>/Equal'
   *  RelationalOperator: '<S7>/Equal1'
   *  RelationalOperator: '<S7>/Equal2'
   *  RelationalOperator: '<S7>/Equal3'
   *  Switch: '<S7>/Switch1'
   *  Switch: '<S7>/Switch2'
   *  Switch: '<S7>/Switch3'
   */
  if (MainStateMachine_U.ColPrSysCstChgSetReq == 0) {
    rtb_Switch_dq = No_Action;
  } else if (MainStateMachine_U.ColPrSysCstChgSetReq == 1) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant3'
     */
    rtb_Switch_dq = OFF;
  } else if (MainStateMachine_U.ColPrSysCstChgSetReq == 2) {
    /* Switch: '<S7>/Switch2' incorporates:
     *  Constant: '<S7>/Constant5'
     *  Switch: '<S7>/Switch1'
     */
    rtb_Switch_dq = Alert;
  } else if (MainStateMachine_U.ColPrSysCstChgSetReq == 3) {
    /* Switch: '<S7>/Switch3' incorporates:
     *  Constant: '<S7>/Constant7'
     *  Switch: '<S7>/Switch1'
     *  Switch: '<S7>/Switch2'
     */
    rtb_Switch_dq = Alert_Brake;
  } else {
    /* Switch: '<S7>/Switch2' incorporates:
     *  Constant: '<S7>/Constant8'
     *  Switch: '<S7>/Switch1'
     *  Switch: '<S7>/Switch3'
     */
    rtb_Switch_dq = Alert_Brake_Steer;
  }

  /* End of Switch: '<S7>/Switch' */

  /* Product: '<S29>/Product1' incorporates:
   *  Constant: '<S29>/Constant1'
   *  Inport: '<Root>/WhlAngVelRRrAuth'
   *  Inport: '<Root>/WhlDstPrRvlRrAuth'
   */
  rtb_Product1 = MainStateMachine_U.WhlAngVelRRrAuth *
    MainStateMachine_U.WhlDstPrRvlRrAuth * 0.0036;

  /* Switch: '<S36>/Switch1' incorporates:
   *  Constant: '<S29>/Constant'
   *  Constant: '<S37>/Not_Failed'
   *  Constant: '<S38>/Not_Failed'
   *  Constant: '<S39>/Not_failed'
   *  Constant: '<S40>/Not_Failed'
   *  Delay: '<S29>/Delay'
   *  Gain: '<S36>/Gain'
   *  Inport: '<Root>/BackUp_Speed_Diag'
   *  Inport: '<Root>/Major_Speed_Left_Rear_Diag'
   *  Inport: '<Root>/Major_Speed_Right_Rear_Diag'
   *  Inport: '<Root>/WhlAngVelLRrAuth'
   *  Inport: '<Root>/WhlDstPrRvlRrAuth'
   *  Logic: '<S38>/AND1'
   *  Logic: '<S39>/AND'
   *  Logic: '<S40>/AND1'
   *  Product: '<S29>/Product'
   *  RelationalOperator: '<S37>/Equal'
   *  RelationalOperator: '<S38>/Equal3'
   *  RelationalOperator: '<S38>/Equal4'
   *  RelationalOperator: '<S39>/Equal1'
   *  RelationalOperator: '<S39>/Equal2'
   *  RelationalOperator: '<S40>/Equal3'
   *  RelationalOperator: '<S40>/Equal4'
   *  Sum: '<S36>/Add'
   *  Switch: '<S35>/Switch'
   *  Switch: '<S36>/Switch2'
   *  Switch: '<S36>/Switch3'
   */
  if ((MainStateMachine_U.Major_Speed_Left_Rear_Diag == 1) &&
      (MainStateMachine_U.Major_Speed_Right_Rear_Diag == 1)) {
    MainStateMachine_Y.EgoVehSpeed = (MainStateMachine_U.WhlAngVelLRrAuth *
      MainStateMachine_U.WhlDstPrRvlRrAuth * 0.0036 + rtb_Product1) * 0.5;
  } else if ((MainStateMachine_U.Major_Speed_Left_Rear_Diag != 1) &&
             (MainStateMachine_U.Major_Speed_Right_Rear_Diag == 1)) {
    /* Delay: '<S29>/Delay' incorporates:
     *  Switch: '<S36>/Switch2'
     */
    MainStateMachine_Y.EgoVehSpeed = rtb_Product1;
  } else if ((MainStateMachine_U.Major_Speed_Left_Rear_Diag == 1) &&
             (MainStateMachine_U.Major_Speed_Right_Rear_Diag != 1)) {
    /* Delay: '<S29>/Delay' incorporates:
     *  Switch: '<S36>/Switch2'
     *  Switch: '<S36>/Switch3'
     */
    MainStateMachine_Y.EgoVehSpeed = rtb_Product1;
  } else if (MainStateMachine_U.BackUp_Speed_Diag == 1) {
    /* Switch: '<S35>/Switch' incorporates:
     *  Delay: '<S29>/Delay'
     *  Inport: '<Root>/VehSpdAvgNDrvn '
     *  Switch: '<S36>/Switch2'
     *  Switch: '<S36>/Switch3'
     */
    MainStateMachine_Y.EgoVehSpeed = MainStateMachine_U.VehSpdAvgNDrvn;
  }

  /* End of Switch: '<S36>/Switch1' */

  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant1'
   *  Constant: '<S9>/Constant2'
   *  Constant: '<S9>/Constant4'
   *  Inport: '<Root>/AEB_Scenario'
   *  RelationalOperator: '<S9>/Equal'
   *  RelationalOperator: '<S9>/Equal1'
   *  RelationalOperator: '<S9>/Equal2'
   *  Switch: '<S9>/Switch1'
   *  Switch: '<S9>/Switch2'
   */
  if (MainStateMachine_U.AEB_Scenario == 0) {
    rtb_Switch_jae = None;
  } else if (MainStateMachine_U.AEB_Scenario == 1) {
    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/Constant3'
     */
    rtb_Switch_jae = CIB;
  } else if (MainStateMachine_U.AEB_Scenario == 2) {
    /* Switch: '<S9>/Switch2' incorporates:
     *  Constant: '<S9>/Constant5'
     *  Switch: '<S9>/Switch1'
     */
    rtb_Switch_jae = VRU;
  } else {
    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/Constant7'
     *  Switch: '<S9>/Switch2'
     */
    rtb_Switch_jae = ICM;
  }

  /* End of Switch: '<S9>/Switch' */

  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/Constant2'
   *  Constant: '<S6>/Constant4'
   *  Constant: '<S6>/Constant6'
   *  Inport: '<Root>/ICMCstChgStReq'
   *  RelationalOperator: '<S6>/Equal'
   *  RelationalOperator: '<S6>/Equal1'
   *  RelationalOperator: '<S6>/Equal2'
   *  RelationalOperator: '<S6>/Equal3'
   *  Switch: '<S6>/Switch1'
   *  Switch: '<S6>/Switch2'
   *  Switch: '<S6>/Switch3'
   */
  if (MainStateMachine_U.ICMCstChgStReq == 0) {
    rtb_Switch_hp = No_Action;
  } else if (MainStateMachine_U.ICMCstChgStReq == 1) {
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant3'
     */
    rtb_Switch_hp = OFF;
  } else if (MainStateMachine_U.ICMCstChgStReq == 2) {
    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S6>/Constant5'
     *  Switch: '<S6>/Switch1'
     */
    rtb_Switch_hp = Alert;
  } else if (MainStateMachine_U.ICMCstChgStReq == 3) {
    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S6>/Constant7'
     *  Switch: '<S6>/Switch1'
     *  Switch: '<S6>/Switch2'
     */
    rtb_Switch_hp = Alert_Brake;
  } else {
    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S6>/Constant8'
     *  Switch: '<S6>/Switch1'
     *  Switch: '<S6>/Switch3'
     */
    rtb_Switch_hp = Alert_Brake_Steer;
  }

  /* End of Switch: '<S6>/Switch' */

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Constant: '<S8>/Constant2'
   *  Constant: '<S8>/Constant4'
   *  Constant: '<S8>/Constant6'
   *  Inport: '<Root>/FrntPCMRspTypCstChgSetReq'
   *  RelationalOperator: '<S8>/Equal'
   *  RelationalOperator: '<S8>/Equal1'
   *  RelationalOperator: '<S8>/Equal2'
   *  RelationalOperator: '<S8>/Equal3'
   *  Switch: '<S8>/Switch1'
   *  Switch: '<S8>/Switch2'
   *  Switch: '<S8>/Switch3'
   */
  if (MainStateMachine_U.FrntPCMRspTypCstChgSetReq == 0) {
    rtb_Switch_pl = No_Action;
  } else if (MainStateMachine_U.FrntPCMRspTypCstChgSetReq == 1) {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S8>/Constant3'
     */
    rtb_Switch_pl = OFF;
  } else if (MainStateMachine_U.FrntPCMRspTypCstChgSetReq == 2) {
    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S8>/Constant5'
     *  Switch: '<S8>/Switch1'
     */
    rtb_Switch_pl = Alert;
  } else if (MainStateMachine_U.FrntPCMRspTypCstChgSetReq == 3) {
    /* Switch: '<S8>/Switch3' incorporates:
     *  Constant: '<S8>/Constant7'
     *  Switch: '<S8>/Switch1'
     *  Switch: '<S8>/Switch2'
     */
    rtb_Switch_pl = Alert_Brake;
  } else {
    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S8>/Constant8'
     *  Switch: '<S8>/Switch1'
     *  Switch: '<S8>/Switch3'
     */
    rtb_Switch_pl = Alert_Brake_Steer;
  }

  /* End of Switch: '<S8>/Switch' */

  /* Switch: '<S41>/Switch' incorporates:
   *  Constant: '<S49>/%'
   *  Constant: '<S50>/Constant1'
   *  Constant: '<S51>/ (m//s^2)'
   *  Inport: '<Root>/AccActPos'
   *  Inport: '<Root>/AccActPosGrad'
   *  Inport: '<Root>/IMULonAccPri'
   *  Logic: '<S41>/AND'
   *  RelationalOperator: '<S49>/GreaterThan'
   *  RelationalOperator: '<S50>/GreaterThan'
   *  RelationalOperator: '<S51>/GreaterThan'
   */
  MainStateMachine_Y.Accelerator_Pedal_Inhibit = ((MainStateMachine_U.AccActPos >
    30.0) && (MainStateMachine_U.AccActPosGrad > 40.0) &&
    (MainStateMachine_U.IMULonAccPri > 0.6));

  /* RelationalOperator: '<S41>/Equal' */
  rtb_Equal_fu = !MainStateMachine_Y.Accelerator_Pedal_Inhibit;

  /* Switch: '<S52>/Switch1' incorporates:
   *  Delay: '<S52>/Delay'
   *  Logic: '<S52>/AND'
   */
  if (rtb_Equal_fu && MainStateMachine_DW.Delay_DSTATE_b) {
    /* Switch: '<S52>/Switch1' incorporates:
     *  Constant: '<S41>/Constant1'
     */
    MainStateMachine_DW.Delay4_DSTATE_h = 4.0;
  }

  /* End of Switch: '<S52>/Switch1' */

  /* RelationalOperator: '<S52>/GreaterThan1' incorporates:
   *  Constant: '<S52>/Upper_Limit4'
   */
  rtb_GreaterThan1_l = (MainStateMachine_DW.Delay4_DSTATE_h > 0.0);

  /* Switch: '<S41>/Switch' */
  MainStateMachine_Y.Accelerator_Pedal_Inhibit = (rtb_GreaterThan1_l ||
    MainStateMachine_Y.Accelerator_Pedal_Inhibit);

  /* Logic: '<S46>/OR' incorporates:
   *  Constant: '<S64>/Valid'
   *  Constant: '<S65>/Occupied'
   *  Constant: '<S65>/Valid'
   *  Inport: '<Root>/DrSbltAtc'
   *  Inport: '<Root>/DrSbltAtcV'
   *  Inport: '<Root>/FrntPasSeatOccSta'
   *  Inport: '<Root>/PsSbltAtc'
   *  Inport: '<Root>/PsSbltAtcV'
   *  Logic: '<S64>/AND'
   *  Logic: '<S65>/AND'
   *  Logic: '<S65>/OR'
   *  RelationalOperator: '<S64>/Equal'
   *  RelationalOperator: '<S64>/Equal1'
   *  RelationalOperator: '<S65>/Equal'
   *  RelationalOperator: '<S65>/Equal1'
   *  RelationalOperator: '<S65>/Equal2'
   */
  MainStateMachine_Y.SeatBelt_Inhibit = ((!MainStateMachine_U.DrSbltAtc) ||
    (MainStateMachine_U.DrSbltAtcV == 1) ||
    (((MainStateMachine_U.FrntPasSeatOccSta == 2) &&
      (!MainStateMachine_U.PsSbltAtc)) || (MainStateMachine_U.PsSbltAtcV == 1)));

  /* Abs: '<Root>/Abs' incorporates:
   *  Inport: '<Root>/StrWhAngGrd'
   */
  rtb_Product1 = fabs(MainStateMachine_U.StrWhAngGrd);

  /* Logic: '<S47>/OR' incorporates:
   *  Constant: '<S66>/CIB'
   *  Constant: '<S66>/CIB(rad//s)'
   *  Constant: '<S69>/CIB(rad//s)'
   *  Constant: '<S69>/VRU'
   *  Logic: '<S66>/AND'
   *  Logic: '<S69>/AND'
   *  Logic: '<S76>/OR'
   *  RelationalOperator: '<S66>/Equal'
   *  RelationalOperator: '<S66>/Equal1'
   *  RelationalOperator: '<S69>/Equal'
   *  RelationalOperator: '<S69>/Equal1'
   */
  rtb_NotEqual1_av = (((rtb_Product1 > 170.0) && (rtb_Switch_jae == CIB)) ||
                      ((rtb_Product1 > 170.0) && (rtb_Switch_jae == VRU)));

  /* Switch: '<S47>/Switch3' incorporates:
   *  Constant: '<S67>/CIB(rad//s)'
   *  Constant: '<S67>/ICM'
   *  Logic: '<S47>/OR'
   *  Logic: '<S67>/AND'
   *  RelationalOperator: '<S67>/Equal'
   *  RelationalOperator: '<S67>/Equal1'
   */
  MainStateMachine_Y.Steering_Wheel_Inhibit = (rtb_NotEqual1_av ||
    ((rtb_Product1 > 343.0) && (rtb_Switch_jae == ICM)));

  /* RelationalOperator: '<S47>/Equal' */
  rtb_Equal_oc = !MainStateMachine_Y.Steering_Wheel_Inhibit;

  /* Switch: '<S68>/Switch1' incorporates:
   *  Delay: '<S68>/Delay'
   *  Logic: '<S68>/AND'
   */
  if (rtb_Equal_oc && MainStateMachine_DW.Delay_DSTATE_k) {
    /* Switch: '<S68>/Switch1' incorporates:
     *  Constant: '<S47>/Constant6'
     */
    MainStateMachine_DW.Delay4_DSTATE_om = 4.0;
  }

  /* End of Switch: '<S68>/Switch1' */

  /* RelationalOperator: '<S68>/GreaterThan1' incorporates:
   *  Constant: '<S68>/Upper_Limit4'
   */
  rtb_GreaterThan1_i = (MainStateMachine_DW.Delay4_DSTATE_om > 0.0);

  /* Switch: '<S47>/Switch3' */
  MainStateMachine_Y.Steering_Wheel_Inhibit = (rtb_GreaterThan1_i ||
    MainStateMachine_Y.Steering_Wheel_Inhibit);

  /* Logic: '<S30>/OR1' */
  rtb_OR1 = (MainStateMachine_Y.Accelerator_Pedal_Inhibit ||
             MainStateMachine_Y.SeatBelt_Inhibit ||
             MainStateMachine_Y.Steering_Wheel_Inhibit);

  /* Delay: '<S30>/Delay1' */
  rtb_Delay1 = MainStateMachine_Y.AEB_Inhibition;

  /* RelationalOperator: '<S45>/Equal' incorporates:
   *  Delay: '<S30>/Delay1'
   */
  rtb_Equal_mz = !MainStateMachine_Y.AEB_Inhibition;

  /* Switch: '<S60>/Switch1' incorporates:
   *  Delay: '<S60>/Delay'
   *  Logic: '<S60>/AND'
   */
  if (rtb_Equal_mz && MainStateMachine_DW.Delay_DSTATE_m) {
    /* Switch: '<S60>/Switch1' incorporates:
     *  Constant: '<S45>/Constant1'
     */
    MainStateMachine_DW.Delay4_DSTATE_ah = 0.0;
  }

  /* End of Switch: '<S60>/Switch1' */

  /* RelationalOperator: '<S60>/GreaterThan1' incorporates:
   *  Constant: '<S60>/Upper_Limit4'
   */
  rtb_GreaterThan1_mr = (MainStateMachine_DW.Delay4_DSTATE_ah > 0.0);

  /* Switch: '<S45>/Switch' */
  MainStateMachine_Y.AEB_IBA_Inhibition_Off = !rtb_GreaterThan1_mr;

  /* Delay: '<S30>/Delay' */
  rtb_Delay_n = MainStateMachine_Y.IBA_Inhibition;

  /* Switch: '<S59>/Switch15' incorporates:
   *  Delay: '<S30>/Delay'
   *  Delay: '<S59>/Delay9'
   *  Logic: '<S59>/AND7'
   *  Logic: '<S59>/NOT5'
   */
  if (MainStateMachine_Y.IBA_Inhibition && (!MainStateMachine_DW.Delay9_DSTATE))
  {
    /* Switch: '<S59>/Switch15' incorporates:
     *  Constant: '<S44>/Constant'
     */
    MainStateMachine_DW.Delay10_DSTATE = 4.0;
  }

  /* End of Switch: '<S59>/Switch15' */

  /* RelationalOperator: '<S59>/GreaterThan6' incorporates:
   *  Constant: '<S59>/Upper_Limit15'
   */
  rtb_GreaterThan6 = (MainStateMachine_DW.Delay10_DSTATE > 0.0);

  /* Switch: '<S44>/Switch1' incorporates:
   *  Delay: '<S30>/Delay'
   */
  MainStateMachine_Y.IBA_Inhibition_Min_Stay = (rtb_GreaterThan6 ||
    MainStateMachine_Y.IBA_Inhibition);

  /* Switch: '<S57>/Switch9' incorporates:
   *  Delay: '<S30>/Delay'
   *  Delay: '<S57>/Delay5'
   *  Logic: '<S57>/AND3'
   *  Logic: '<S57>/NOT3'
   */
  if (MainStateMachine_Y.IBA_Inhibition && (!MainStateMachine_DW.Delay5_DSTATE))
  {
    /* Switch: '<S57>/Switch9' incorporates:
     *  Constant: '<S43>/Constant'
     */
    MainStateMachine_DW.Delay6_DSTATE = 4.0;
  }

  /* End of Switch: '<S57>/Switch9' */

  /* RelationalOperator: '<S57>/GreaterThan4' incorporates:
   *  Constant: '<S57>/Upper_Limit9'
   */
  rtb_GreaterThan4_l = (MainStateMachine_DW.Delay6_DSTATE > 0.0);

  /* Switch: '<S43>/Switch1' incorporates:
   *  Delay: '<S30>/Delay'
   */
  MainStateMachine_Y.IBA_Inhibition_MAX_Hold = (rtb_GreaterThan4_l &&
    MainStateMachine_Y.IBA_Inhibition);

  /* Switch: '<S71>/Switch1' incorporates:
   *  Delay: '<S73>/Delay15'
   *  Logic: '<S73>/AND10'
   *  Logic: '<S73>/AND11'
   *  Logic: '<S73>/NOT7'
   *  RelationalOperator: '<S73>/Equal1'
   */
  if (rtb_OR1 && (!MainStateMachine_DW.Delay15_DSTATE) &&
      MainStateMachine_Y.AEB_IBA_Inhibition_Off) {
    /* Switch: '<S71>/Switch1' */
    MainStateMachine_Y.IBA_Inhibition = true;
  } else {
    /* Switch: '<S71>/Switch1' incorporates:
     *  Logic: '<S71>/AND'
     */
    MainStateMachine_Y.IBA_Inhibition =
      (MainStateMachine_Y.AEB_IBA_Inhibition_Off &&
       MainStateMachine_Y.IBA_Inhibition_Min_Stay &&
       MainStateMachine_Y.IBA_Inhibition_MAX_Hold && rtb_OR1);
  }

  /* End of Switch: '<S71>/Switch1' */

  /* Switch: '<S24>/Switch' incorporates:
   *  Abs: '<Root>/Abs1'
   *  Inport: '<Root>/TiToCllsn'
   */
  MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = fabs(MainStateMachine_U.TiToCllsn);

  /* Logic: '<S119>/AND1' incorporates:
   *  Constant: '<S119>/Constant'
   *  Constant: '<S119>/K_dpct_IBA_Brake_Rate_Position'
   *  Inport: '<Root>/BrkPdlPosGrad'
   *  RelationalOperator: '<S119>/Equal'
   *  RelationalOperator: '<S119>/GreaterThan'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_AND1_je = ((MainStateMachine_U.BrkPdlPosGrad > 20.0) &&
                 (MainStateMachine_DW.UnitDelay_DSTATE == Inactive));

  /* Switch: '<S134>/Switch1' incorporates:
   *  Delay: '<S134>/Delay3'
   *  Logic: '<S134>/AND2'
   *  Logic: '<S134>/NOT1'
   */
  if (rtb_AND1_je && (!MainStateMachine_DW.Delay3_DSTATE_b)) {
    /* Switch: '<S134>/Switch1' incorporates:
     *  Constant: '<S129>/K_t_IBA_Enable_Time'
     */
    MainStateMachine_DW.Delay4_DSTATE_d = 0.0;
  }

  /* End of Switch: '<S134>/Switch1' */

  /* RelationalOperator: '<S134>/GreaterThan1' incorporates:
   *  Constant: '<S134>/Upper_Limit4'
   */
  rtb_GreaterThan1_ic = (MainStateMachine_DW.Delay4_DSTATE_d > 0.0);

  /* Switch: '<S129>/Switch' */
  rtb_GreaterThan1_o = ((!rtb_GreaterThan1_ic) && rtb_AND1_je);

  /* Logic: '<S131>/NOT' */
  rtb_NOT_n = !rtb_GreaterThan1_o;

  /* Switch: '<S136>/Switch1' incorporates:
   *  Delay: '<S136>/Delay3'
   *  Logic: '<S136>/AND2'
   *  Logic: '<S136>/NOT1'
   */
  if (rtb_NOT_n && (!MainStateMachine_DW.Delay3_DSTATE_bm)) {
    /* Switch: '<S136>/Switch1' incorporates:
     *  Constant: '<S131>/Constant3'
     */
    MainStateMachine_DW.Delay4_DSTATE_g = 0.45;
  }

  /* End of Switch: '<S136>/Switch1' */

  /* RelationalOperator: '<S136>/GreaterThan1' incorporates:
   *  Constant: '<S136>/Upper_Limit4'
   */
  rtb_GreaterThan1_o0 = (MainStateMachine_DW.Delay4_DSTATE_g > 0.0);

  /* Logic: '<S119>/AND2' incorporates:
   *  Constant: '<S119>/Constant8'
   *  Constant: '<S119>/K_p_IBA_Enable_Pressure (kPa)'
   *  Inport: '<Root>/BPDAPS_BkPDrvApP'
   *  RelationalOperator: '<S119>/Equal1'
   *  RelationalOperator: '<S119>/GreaterThan1'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_AND2_gn = ((MainStateMachine_U.BPDAPS_BkPDrvApP > 2475.0) &&
                 (MainStateMachine_DW.UnitDelay_DSTATE == Inactive));

  /* Switch: '<S135>/Switch1' incorporates:
   *  Delay: '<S135>/Delay3'
   *  Logic: '<S135>/AND2'
   *  Logic: '<S135>/NOT1'
   */
  if (rtb_AND2_gn && (!MainStateMachine_DW.Delay3_DSTATE_aj)) {
    /* Switch: '<S135>/Switch1' incorporates:
     *  Constant: '<S130>/K_t_IBA_Enable_Time1'
     */
    MainStateMachine_DW.Delay4_DSTATE_c0 = 0.0;
  }

  /* End of Switch: '<S135>/Switch1' */

  /* RelationalOperator: '<S135>/GreaterThan1' incorporates:
   *  Constant: '<S135>/Upper_Limit4'
   */
  rtb_GreaterThan1_gr = (MainStateMachine_DW.Delay4_DSTATE_c0 > 0.0);

  /* Switch: '<S130>/Switch1' */
  rtb_GreaterThan1_cm = ((!rtb_GreaterThan1_gr) && rtb_AND2_gn);

  /* Logic: '<S132>/NOT1' */
  rtb_NOT1_c = !rtb_GreaterThan1_cm;

  /* Switch: '<S137>/Switch1' incorporates:
   *  Delay: '<S137>/Delay3'
   *  Logic: '<S137>/AND2'
   *  Logic: '<S137>/NOT1'
   */
  if (rtb_NOT1_c && (!MainStateMachine_DW.Delay3_DSTATE_c)) {
    /* Switch: '<S137>/Switch1' incorporates:
     *  Constant: '<S132>/Constant4'
     */
    MainStateMachine_DW.Delay4_DSTATE_oh = 0.45;
  }

  /* End of Switch: '<S137>/Switch1' */

  /* RelationalOperator: '<S137>/GreaterThan1' incorporates:
   *  Constant: '<S137>/Upper_Limit4'
   */
  rtb_GreaterThan1_d2 = (MainStateMachine_DW.Delay4_DSTATE_oh > 0.0);

  /* Logic: '<S119>/Logical Operator1' incorporates:
   *  Switch: '<S131>/Switch2'
   *  Switch: '<S132>/Switch3'
   */
  rtb_GreaterThan1_o = ((rtb_GreaterThan1_o0 || rtb_GreaterThan1_o) &&
                        (rtb_GreaterThan1_d2 || rtb_GreaterThan1_cm));

  /* Logic: '<S133>/NOT2' */
  rtb_NOT2_li = !rtb_GreaterThan1_o;

  /* Switch: '<S138>/Switch1' incorporates:
   *  Delay: '<S138>/Delay3'
   *  Logic: '<S138>/AND2'
   *  Logic: '<S138>/NOT1'
   */
  if (rtb_NOT2_li && (!MainStateMachine_DW.Delay3_DSTATE_as)) {
    /* Switch: '<S138>/Switch1' incorporates:
     *  Constant: '<S133>/Constant7'
     */
    MainStateMachine_DW.Delay4_DSTATE_g4 = 0.45;
  }

  /* End of Switch: '<S138>/Switch1' */

  /* RelationalOperator: '<S138>/GreaterThan1' incorporates:
   *  Constant: '<S138>/Upper_Limit4'
   */
  rtb_GreaterThan1_cm = (MainStateMachine_DW.Delay4_DSTATE_g4 > 0.0);

  /* Logic: '<S126>/Logical Operator' incorporates:
   *  Constant: '<S126>/Constant'
   *  Constant: '<S126>/Constant1'
   *  Delay: '<S29>/Delay'
   *  Logic: '<S106>/Logical Operator1'
   *  Logic: '<S107>/Logical Operator1'
   *  Logic: '<S127>/Logical Operator'
   *  RelationalOperator: '<S126>/Equal1'
   *  RelationalOperator: '<S126>/Equal2'
   */
  rtb_AND_p = ((MainStateMachine_Y.EgoVehSpeed >= 8.0) &&
               (MainStateMachine_Y.EgoVehSpeed <= 80.0));

  /* Logic: '<S13>/AND' incorporates:
   *  Logic: '<S11>/AND'
   *  Logic: '<S12>/AND'
   *  RelationalOperator: '<S120>/Equal1'
   *  RelationalOperator: '<S124>/Equal'
   */
  rtb_NotEqual1_e = (MainStateMachine_Y.All_Input_Signals_Validity &&
                     MainStateMachine_Y.Sensors_Ready);

  /* Logic: '<S125>/Logical Operator' incorporates:
   *  Constant: '<S125>/Constant'
   *  Constant: '<S125>/Constant1'
   *  Delay: '<S29>/Delay'
   *  Logic: '<S105>/Logical Operator1'
   *  RelationalOperator: '<S125>/Equal1'
   *  RelationalOperator: '<S125>/Equal4'
   */
  rtb_AND_nu = ((MainStateMachine_Y.EgoVehSpeed >= 8.0) &&
                (MainStateMachine_Y.EgoVehSpeed <= 140.0));

  /* RelationalOperator: '<S128>/NotEqual1' incorporates:
   *  Inport: '<Root>/ABFI_CollPrepSysInhbt'
   *  RelationalOperator: '<S109>/NotEqual2'
   */
  rtb_NotEqual1_hf = !MainStateMachine_U.ABFI_CollPrepSysInhbt;

  /* Logic: '<S121>/Logical Operator' incorporates:
   *  Constant: '<S121>/Not Supported'
   *  Constant: '<S121>/Park Gear'
   *  Constant: '<S121>/Reverse Gear'
   *  Inport: '<Root>/TransEstGear_TCM'
   *  Logic: '<S108>/Logical Operator'
   *  Logic: '<S118>/Logical Operator'
   *  RelationalOperator: '<S121>/NotEqual'
   *  RelationalOperator: '<S121>/NotEqual1'
   *  RelationalOperator: '<S121>/NotEqual2'
   */
  rtb_RelationalOperator1 = ((MainStateMachine_U.TransEstGear_TCM != 15) &&
    (MainStateMachine_U.TransEstGear_TCM != 14) &&
    (MainStateMachine_U.TransEstGear_TCM != 0));

  /* Logic: '<S13>/AND' incorporates:
   *  Constant: '<S122>/No iBooster and No EBCM'
   *  Constant: '<S123>/TTC_Threshold'
   *  Constant: '<S125>/Alert and Brake'
   *  Constant: '<S125>/CIB'
   *  Constant: '<S126>/Alert and Brake'
   *  Constant: '<S126>/ICM'
   *  Constant: '<S127>/Alert and Brake'
   *  Constant: '<S127>/VRU'
   *  Inport: '<Root>/ExtBrkReqBackupEBCM'
   *  Logic: '<S121>/Logical Operator'
   *  Logic: '<S125>/AND'
   *  Logic: '<S125>/Logical Operator'
   *  Logic: '<S125>/Logical Operator1'
   *  Logic: '<S126>/AND'
   *  Logic: '<S126>/Logical Operator'
   *  Logic: '<S126>/Logical Operator1'
   *  Logic: '<S127>/AND'
   *  Logic: '<S127>/Logical Operator1'
   *  Logic: '<S128>/Logical Operator'
   *  Logic: '<S13>/OR'
   *  RelationalOperator: '<S122>/Equal12'
   *  RelationalOperator: '<S123>/NotEqual1'
   *  RelationalOperator: '<S125>/Equal2'
   *  RelationalOperator: '<S125>/Equal5'
   *  RelationalOperator: '<S126>/Equal'
   *  RelationalOperator: '<S126>/Equal3'
   *  RelationalOperator: '<S127>/Equal3'
   *  RelationalOperator: '<S127>/Equal4'
   *  RelationalOperator: '<S128>/NotEqual1'
   *  RelationalOperator: '<S128>/NotEqual3'
   *  Switch: '<S133>/Switch4'
   */
  AND = (rtb_NotEqual1_e && (((rtb_Switch_dq == Alert_Brake) && rtb_AND_nu &&
           (rtb_Switch_jae == CIB)) || ((rtb_Switch_hp == Alert_Brake) &&
           rtb_AND_p && (rtb_Switch_jae == ICM)) || ((rtb_Switch_pl ==
            Alert_Brake) && rtb_AND_p && (rtb_Switch_jae == VRU))) &&
         ((!MainStateMachine_Y.IBA_Inhibition) && rtb_NotEqual1_hf) &&
         rtb_RelationalOperator1 && (MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM <
          1.0) && (MainStateMachine_U.ExtBrkReqBackupEBCM == 0) &&
         (rtb_GreaterThan1_cm || rtb_GreaterThan1_o));

  /* RelationalOperator: '<S74>/GreaterThan' incorporates:
   *  Constant: '<S74>/(%)'
   *  Inport: '<Root>/AccActPos'
   */
  rtb_GreaterThan_jq = (MainStateMachine_U.AccActPos > 80.0);

  /* Switch: '<S77>/Switch1' incorporates:
   *  Delay: '<S77>/Delay3'
   *  Logic: '<S77>/AND2'
   *  Logic: '<S77>/NOT2'
   */
  if (rtb_GreaterThan_jq && (!MainStateMachine_DW.Delay3_DSTATE_p)) {
    /* Switch: '<S77>/Switch1' incorporates:
     *  Constant: '<S74>/Temp_Hold_Time'
     */
    MainStateMachine_DW.Delay4_DSTATE_l = 1.0;
  }

  /* End of Switch: '<S77>/Switch1' */

  /* RelationalOperator: '<S77>/GreaterThan1' incorporates:
   *  Constant: '<S77>/Upper_Limit4'
   */
  rtb_GreaterThan1_o = (MainStateMachine_DW.Delay4_DSTATE_l > 0.0);

  /* Logic: '<S80>/AND3' incorporates:
   *  Constant: '<S80>/Constant'
   *  Constant: '<S80>/Constant1'
   *  Constant: '<S80>/Constant2'
   *  RelationalOperator: '<S80>/Equal'
   *  RelationalOperator: '<S80>/Equal1'
   *  RelationalOperator: '<S80>/Equal2'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_AND3_n = ((MainStateMachine_DW.UnitDelay_DSTATE != Hold) &&
                (MainStateMachine_DW.UnitDelay_DSTATE != Off) &&
                (MainStateMachine_DW.UnitDelay_DSTATE != Inactive));

  /* RelationalOperator: '<S79>/GreaterThan3' incorporates:
   *  Constant: '<S79>/ (%)'
   *  Delay: '<S79>/Delay'
   *  Inport: '<Root>/AccActPos'
   *  Sum: '<S79>/Add'
   */
  rtb_GreaterThan3 = (MainStateMachine_U.AccActPos -
                      MainStateMachine_DW.Delay_DSTATE_p > 20.0);

  /* Switch: '<S82>/Switch1' incorporates:
   *  Delay: '<S82>/Delay3'
   *  Logic: '<S82>/AND2'
   *  Logic: '<S82>/NOT2'
   */
  if (rtb_GreaterThan3 && (!MainStateMachine_DW.Delay3_DSTATE_g)) {
    /* Switch: '<S82>/Switch1' incorporates:
     *  Constant: '<S74>/Temp: Hold_Time1'
     */
    MainStateMachine_DW.Delay4_DSTATE_lh = 1.0;
  }

  /* End of Switch: '<S82>/Switch1' */

  /* RelationalOperator: '<S82>/GreaterThan1' incorporates:
   *  Constant: '<S82>/Upper_Limit4'
   */
  rtb_GreaterThan1_n0 = (MainStateMachine_DW.Delay4_DSTATE_lh > 0.0);

  /* RelationalOperator: '<S74>/Relational Operator4' incorporates:
   *  Constant: '<S74>/Lower_Limit (%)1'
   *  Inport: '<Root>/AccActPos'
   */
  rtb_RelationalOperator4 = (MainStateMachine_U.AccActPos > 15.0);

  /* Switch: '<S78>/Switch1' incorporates:
   *  Delay: '<S78>/Delay3'
   *  Logic: '<S78>/AND2'
   *  Logic: '<S78>/NOT2'
   */
  if (rtb_RelationalOperator4 && (!MainStateMachine_DW.Delay3_DSTATE_bj)) {
    /* Switch: '<S78>/Switch1' incorporates:
     *  Constant: '<S74>/Temp_Hold_Time2'
     */
    MainStateMachine_DW.Delay4_DSTATE_o2 = 1.0;
  }

  /* End of Switch: '<S78>/Switch1' */

  /* RelationalOperator: '<S78>/GreaterThan1' incorporates:
   *  Constant: '<S78>/Upper_Limit4'
   */
  rtb_GreaterThan1_dj = (MainStateMachine_DW.Delay4_DSTATE_o2 > 0.0);

  /* Logic: '<S74>/OR' incorporates:
   *  Constant: '<S81>/Constant2'
   *  Logic: '<S74>/AND'
   *  Logic: '<S74>/AND1'
   *  Logic: '<S79>/AND'
   *  RelationalOperator: '<S81>/Equal2'
   *  Switch: '<S74>/Switch'
   *  Switch: '<S74>/Switch1'
   *  Switch: '<S79>/Switch'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  MainStateMachine_Y.AccelPedalOverrd = (((!rtb_GreaterThan1_o) &&
    rtb_GreaterThan_jq && rtb_AND3_n) || ((!rtb_GreaterThan1_n0) &&
    rtb_GreaterThan3 && rtb_AND3_n) || ((!rtb_GreaterThan1_dj) &&
    rtb_RelationalOperator4 && (MainStateMachine_DW.UnitDelay_DSTATE == Hold)));

  /* Logic: '<S76>/OR' incorporates:
   *  Constant: '<S85>/ICM'
   *  Constant: '<S85>/rad//s'
   *  Logic: '<S85>/AND'
   *  RelationalOperator: '<S85>/Equal'
   *  RelationalOperator: '<S85>/Equal1'
   */
  MainStateMachine_Y.Steering_Wheel_Override = (rtb_NotEqual1_av ||
    ((rtb_Product1 > 400.0) && (rtb_Switch_jae == ICM)));

  /* RelationalOperator: '<S220>/NotEqual1' incorporates:
   *  Constant: '<S220>/TTC_Threshold'
   */
  rtb_NotEqual1_av = (MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM >= 1.0);

  /* Switch: '<S222>/Switch1' incorporates:
   *  Delay: '<S222>/Delay3'
   *  Logic: '<S222>/AND2'
   *  Logic: '<S222>/NOT1'
   */
  if (rtb_NotEqual1_av && (!MainStateMachine_DW.Delay3_DSTATE_cv)) {
    /* Switch: '<S222>/Switch1' incorporates:
     *  Constant: '<S220>/K_t _CIB_Disable_Time'
     */
    MainStateMachine_DW.Delay4_DSTATE_av = 0.155;
  }

  /* End of Switch: '<S222>/Switch1' */

  /* RelationalOperator: '<S222>/GreaterThan1' incorporates:
   *  Constant: '<S222>/Upper_Limit4'
   */
  rtb_GreaterThan1_cn = (MainStateMachine_DW.Delay4_DSTATE_av > 0.0);

  /* RelationalOperator: '<S221>/Equal' incorporates:
   *  Inport: '<Root>/ObjOfInterest_Present'
   *  RelationalOperator: '<S163>/Equal'
   *  RelationalOperator: '<S205>/Equal'
   */
  rtb_Equal_d_tmp = !MainStateMachine_U.ObjOfInterest_Present;

  /* Switch: '<S223>/Switch1' incorporates:
   *  Delay: '<S223>/Delay3'
   *  Logic: '<S223>/AND2'
   *  Logic: '<S223>/NOT1'
   *  RelationalOperator: '<S221>/Equal'
   */
  if (rtb_Equal_d_tmp && (!MainStateMachine_DW.Delay3_DSTATE_ns)) {
    /* Switch: '<S223>/Switch1' incorporates:
     *  Constant: '<S221>/Constant'
     */
    MainStateMachine_DW.Delay4_DSTATE_avo = 0.155;
  }

  /* End of Switch: '<S223>/Switch1' */

  /* RelationalOperator: '<S223>/GreaterThan1' incorporates:
   *  Constant: '<S223>/Upper_Limit4'
   */
  rtb_GreaterThan1_gp = (MainStateMachine_DW.Delay4_DSTATE_avo > 0.0);

  /* Logic: '<S212>/AND' incorporates:
   *  Constant: '<S212>/ kPa'
   *  Constant: '<S212>/Constant2'
   *  Inport: '<Root>/BPDAPS_BkPDrvApP'
   *  RelationalOperator: '<S212>/Equal1'
   *  RelationalOperator: '<S212>/GreaterThan'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_AND_ml = ((MainStateMachine_U.BPDAPS_BkPDrvApP <= 500.0) &&
                (MainStateMachine_DW.UnitDelay_DSTATE == HBA2));

  /* Switch: '<S219>/Switch1' incorporates:
   *  Delay: '<S219>/Delay3'
   *  Logic: '<S219>/AND2'
   *  Logic: '<S219>/NOT1'
   */
  if (rtb_AND_ml && (!MainStateMachine_DW.Delay3_DSTATE_f)) {
    /* Switch: '<S219>/Switch1' incorporates:
     *  Constant: '<S212>/Constant'
     */
    MainStateMachine_DW.Delay4_DSTATE_dm = 0.2;
  }

  /* End of Switch: '<S219>/Switch1' */

  /* RelationalOperator: '<S219>/GreaterThan1' incorporates:
   *  Constant: '<S219>/Upper_Limit4'
   */
  rtb_GreaterThan1_bg = (MainStateMachine_DW.Delay4_DSTATE_dm > 0.0);

  /* Logic: '<S90>/AND' incorporates:
   *  Constant: '<S90>/Constant'
   *  Constant: '<S90>/Constant1'
   *  RelationalOperator: '<S90>/Equal'
   *  RelationalOperator: '<S90>/Equal1'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_AND_lx = ((MainStateMachine_DW.UnitDelay_DSTATE == HBA1) ||
                (MainStateMachine_DW.UnitDelay_DSTATE == HBA2));

  /* Switch: '<S91>/Switch1' incorporates:
   *  Delay: '<S91>/Delay3'
   *  Logic: '<S91>/AND2'
   *  Logic: '<S91>/NOT2'
   */
  if (rtb_AND_lx && (!MainStateMachine_DW.Delay3_DSTATE_au)) {
    /* Switch: '<S91>/Switch1' */
    MainStateMachine_DW.Delay4_DSTATE_lp = MainStateMachine_ConstB.Add2;
  }

  /* End of Switch: '<S91>/Switch1' */

  /* RelationalOperator: '<S91>/GreaterThan1' incorporates:
   *  Constant: '<S91>/Upper_Limit4'
   */
  rtb_GreaterThan1_d = (MainStateMachine_DW.Delay4_DSTATE_lp > 0.0);

  /* Switch: '<S87>/Switch' */
  MainStateMachine_Y.IBA_MAX_State = ((!rtb_GreaterThan1_d) && rtb_AND_lx);

  /* Logic: '<S170>/AND' incorporates:
   *  Constant: '<S170>/Constant'
   *  Constant: '<S170>/VRU'
   *  Inport: '<Root>/BrkPedApp'
   *  RelationalOperator: '<S170>/GreaterThan1'
   *  RelationalOperator: '<S170>/GreaterThan2'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_AND_jo = (MainStateMachine_U.BrkPedApp && (rtb_Switch_jae == VRU) &&
                (MainStateMachine_DW.UnitDelay_DSTATE ==
                 Auto_Braking_For_EBCM_and_Ibooster));

  /* Switch: '<S174>/Switch1' incorporates:
   *  Delay: '<S174>/Delay3'
   *  Logic: '<S174>/AND2'
   *  Logic: '<S174>/NOT1'
   */
  if (rtb_AND_jo && (!MainStateMachine_DW.Delay3_DSTATE_pf)) {
    /* Switch: '<S174>/Switch1' incorporates:
     *  Constant: '<S170>/K_t_IBA_Enable_Time_VRU'
     */
    MainStateMachine_DW.Delay4_DSTATE_f = 0.2;
  }

  /* End of Switch: '<S174>/Switch1' */

  /* RelationalOperator: '<S174>/GreaterThan1' incorporates:
   *  Constant: '<S174>/Upper_Limit4'
   */
  rtb_GreaterThan1_b = (MainStateMachine_DW.Delay4_DSTATE_f > 0.0);

  /* Logic: '<S169>/AND' incorporates:
   *  Constant: '<S169>/CIB'
   *  Constant: '<S169>/Constant'
   *  Constant: '<S169>/ICM'
   *  Inport: '<Root>/BrkPedApp'
   *  Logic: '<S169>/OR'
   *  RelationalOperator: '<S169>/GreaterThan1'
   *  RelationalOperator: '<S169>/GreaterThan2'
   *  RelationalOperator: '<S169>/GreaterThan3'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_AND_mi = (MainStateMachine_U.BrkPedApp && ((rtb_Switch_jae == CIB) ||
    (rtb_Switch_jae == ICM)) && (MainStateMachine_DW.UnitDelay_DSTATE ==
    Auto_Braking_For_EBCM_and_Ibooster));

  /* Switch: '<S172>/Switch1' incorporates:
   *  Delay: '<S172>/Delay3'
   *  Logic: '<S172>/AND2'
   *  Logic: '<S172>/NOT1'
   */
  if (rtb_AND_mi && (!MainStateMachine_DW.Delay3_DSTATE_fg)) {
    /* Switch: '<S172>/Switch1' incorporates:
     *  Constant: '<S169>/K_t_IBA_Enable_Time'
     */
    MainStateMachine_DW.Delay4_DSTATE_bi = 0.0;
  }

  /* End of Switch: '<S172>/Switch1' */

  /* RelationalOperator: '<S172>/GreaterThan1' incorporates:
   *  Constant: '<S172>/Upper_Limit4'
   */
  rtb_GreaterThan1_lk = (MainStateMachine_DW.Delay4_DSTATE_bi > 0.0);

  /* Logic: '<S16>/AND2' incorporates:
   *  Constant: '<S168>/EBCM build pressure, No iBooster'
   *  Inport: '<Root>/ExtBrkReqBackupEBCM'
   *  Logic: '<S167>/OR'
   *  RelationalOperator: '<S168>/GreaterThan4'
   *  Switch: '<S169>/Switch'
   *  Switch: '<S170>/Switch'
   */
  AND2 = ((((!rtb_GreaterThan1_b) && rtb_AND_jo) || ((!rtb_GreaterThan1_lk) &&
            rtb_AND_mi)) && (MainStateMachine_U.ExtBrkReqBackupEBCM != 1));

  /* RelationalOperator: '<S19>/Relational Operator' incorporates:
   *  Constant: '<S19>/kph'
   *  Delay: '<S29>/Delay'
   */
  RelationalOperator_e = (MainStateMachine_Y.EgoVehSpeed < 1.8);

  /* Switch: '<S42>/Switch' incorporates:
   *  Constant: '<S53>/ (kPa)'
   *  Constant: '<S54>/ (%)'
   *  Inport: '<Root>/BPDAPS_BkPDrvApP'
   *  Inport: '<Root>/BrkPdlPos'
   *  Logic: '<S42>/OR'
   *  RelationalOperator: '<S53>/GreaterThan'
   *  RelationalOperator: '<S54>/GreaterThan1'
   */
  MainStateMachine_Y.Brake_Pedal_Inhibit = ((MainStateMachine_U.BrkPdlPos > 10.0)
    || (MainStateMachine_U.BPDAPS_BkPDrvApP > 250.0));

  /* RelationalOperator: '<S42>/Equal' */
  rtb_Equal_hmq = !MainStateMachine_Y.Brake_Pedal_Inhibit;

  /* Switch: '<S55>/Switch1' incorporates:
   *  Delay: '<S55>/Delay'
   *  Logic: '<S55>/AND'
   */
  if (rtb_Equal_hmq && MainStateMachine_DW.Delay_DSTATE_ej) {
    /* Switch: '<S55>/Switch1' incorporates:
     *  Constant: '<S42>/Constant1'
     */
    MainStateMachine_DW.Delay4_DSTATE_a1 = 4.0;
  }

  /* End of Switch: '<S55>/Switch1' */

  /* RelationalOperator: '<S55>/GreaterThan1' incorporates:
   *  Constant: '<S55>/Upper_Limit4'
   */
  rtb_GreaterThan1_h = (MainStateMachine_DW.Delay4_DSTATE_a1 > 0.0);

  /* Switch: '<S42>/Switch' */
  MainStateMachine_Y.Brake_Pedal_Inhibit = (rtb_GreaterThan1_h ||
    MainStateMachine_Y.Brake_Pedal_Inhibit);

  /* Logic: '<S30>/OR' */
  rtb_OR_pt = (MainStateMachine_Y.Brake_Pedal_Inhibit ||
               MainStateMachine_Y.Accelerator_Pedal_Inhibit ||
               MainStateMachine_Y.Steering_Wheel_Inhibit ||
               MainStateMachine_Y.SeatBelt_Inhibit);

  /* RelationalOperator: '<S45>/Equal1' */
  rtb_Equal1_dx = !rtb_Delay_n;

  /* Switch: '<S61>/Switch3' incorporates:
   *  Delay: '<S61>/Delay1'
   *  Logic: '<S61>/AND1'
   */
  if (rtb_Equal1_dx && MainStateMachine_DW.Delay1_DSTATE_l) {
    /* Switch: '<S61>/Switch3' incorporates:
     *  Constant: '<S45>/Constant1'
     */
    MainStateMachine_DW.Delay2_DSTATE = 0.0;
  }

  /* End of Switch: '<S61>/Switch3' */

  /* RelationalOperator: '<S61>/GreaterThan2' incorporates:
   *  Constant: '<S61>/Upper_Limit3'
   */
  rtb_GreaterThan2_m = (MainStateMachine_DW.Delay2_DSTATE > 0.0);

  /* Switch: '<S45>/Switch1' */
  MainStateMachine_Y.IBA_AEB_Inhibition_Off = !rtb_GreaterThan2_m;

  /* Switch: '<S58>/Switch13' incorporates:
   *  Delay: '<S30>/Delay1'
   *  Delay: '<S58>/Delay8'
   *  Logic: '<S58>/AND6'
   *  Logic: '<S58>/NOT4'
   */
  if (MainStateMachine_Y.AEB_Inhibition && (!MainStateMachine_DW.Delay8_DSTATE))
  {
    /* Switch: '<S58>/Switch13' incorporates:
     *  Constant: '<S44>/Constant'
     */
    MainStateMachine_DW.Delay11_DSTATE = 4.0;
  }

  /* End of Switch: '<S58>/Switch13' */

  /* RelationalOperator: '<S58>/GreaterThan5' incorporates:
   *  Constant: '<S58>/Upper_Limit16'
   */
  rtb_GreaterThan5 = (MainStateMachine_DW.Delay11_DSTATE > 0.0);

  /* Switch: '<S44>/Switch' incorporates:
   *  Delay: '<S30>/Delay1'
   */
  MainStateMachine_Y.AEB_Inhibition_Min_Stay = (rtb_GreaterThan5 ||
    MainStateMachine_Y.AEB_Inhibition);

  /* Switch: '<S56>/Switch7' incorporates:
   *  Delay: '<S30>/Delay1'
   *  Delay: '<S56>/Delay3'
   *  Logic: '<S56>/AND2'
   *  Logic: '<S56>/NOT2'
   */
  if (MainStateMachine_Y.AEB_Inhibition &&
      (!MainStateMachine_DW.Delay3_DSTATE_of)) {
    /* Switch: '<S56>/Switch7' incorporates:
     *  Constant: '<S43>/Constant'
     */
    MainStateMachine_DW.Delay7_DSTATE = 4.0;
  }

  /* End of Switch: '<S56>/Switch7' */

  /* RelationalOperator: '<S56>/GreaterThan3' incorporates:
   *  Constant: '<S56>/Upper_Limit10'
   */
  rtb_GreaterThan3_c = (MainStateMachine_DW.Delay7_DSTATE > 0.0);

  /* Switch: '<S43>/Switch' incorporates:
   *  Delay: '<S30>/Delay1'
   */
  MainStateMachine_Y.AEB_Inhibition_MAX_Hold = (rtb_GreaterThan3_c &&
    MainStateMachine_Y.AEB_Inhibition);

  /* Switch: '<S70>/Switch4' incorporates:
   *  Delay: '<S72>/Delay15'
   *  Logic: '<S72>/AND10'
   *  Logic: '<S72>/AND11'
   *  Logic: '<S72>/NOT7'
   *  RelationalOperator: '<S72>/Equal1'
   */
  if (rtb_OR_pt && (!MainStateMachine_DW.Delay15_DSTATE_e) &&
      MainStateMachine_Y.IBA_AEB_Inhibition_Off) {
    /* Switch: '<S70>/Switch4' */
    MainStateMachine_Y.AEB_Inhibition = true;
  } else {
    /* Switch: '<S70>/Switch4' incorporates:
     *  Logic: '<S70>/AND'
     */
    MainStateMachine_Y.AEB_Inhibition =
      (MainStateMachine_Y.IBA_AEB_Inhibition_Off &&
       MainStateMachine_Y.AEB_Inhibition_Min_Stay &&
       MainStateMachine_Y.AEB_Inhibition_MAX_Hold && rtb_OR_pt);
  }

  /* End of Switch: '<S70>/Switch4' */

  /* Logic: '<S106>/Logical Operator2' incorporates:
   *  Constant: '<S106>/Alert and Brake'
   *  Constant: '<S106>/ICM'
   *  Logic: '<S106>/Logical Operator'
   *  Logic: '<S115>/AND'
   *  RelationalOperator: '<S106>/Equal1'
   *  RelationalOperator: '<S106>/Equal3'
   */
  rtb_AND1_b = (rtb_AND_p && (rtb_Switch_hp == Alert_Brake) && (rtb_Switch_jae ==
    ICM));

  /* Logic: '<S107>/Logical Operator2' incorporates:
   *  Constant: '<S107>/Alert and Brake'
   *  Constant: '<S107>/VRU'
   *  Logic: '<S107>/Logical Operator'
   *  Logic: '<S116>/AND'
   *  RelationalOperator: '<S107>/Equal1'
   *  RelationalOperator: '<S107>/Equal3'
   */
  rtb_NotEqual1_m = (rtb_AND_p && (rtb_Switch_pl == Alert_Brake) &&
                     (rtb_Switch_jae == VRU));

  /* Logic: '<S109>/Logical Operator' incorporates:
   *  Logic: '<S117>/OR'
   *  RelationalOperator: '<S109>/NotEqual1'
   */
  rtb_AND_a = ((!MainStateMachine_Y.AEB_Inhibition) && rtb_NotEqual1_hf);

  /* Logic: '<S11>/AND' incorporates:
   *  Constant: '<S102>/TTC_Threshold'
   *  Constant: '<S103>/$0 = No iBooster and No EBCM'
   *  Constant: '<S105>/Alert and Brake'
   *  Constant: '<S105>/CIB'
   *  Inport: '<Root>/ExtBrkReqBackupEBCM'
   *  Logic: '<S105>/Logical Operator'
   *  Logic: '<S105>/Logical Operator2'
   *  Logic: '<S106>/Logical Operator2'
   *  Logic: '<S107>/Logical Operator2'
   *  Logic: '<S109>/Logical Operator'
   *  Logic: '<S11>/OR'
   *  RelationalOperator: '<S102>/NotEqual1'
   *  RelationalOperator: '<S103>/Equal'
   *  RelationalOperator: '<S105>/Equal1'
   *  RelationalOperator: '<S105>/Equal3'
   */
  AND_d = (rtb_NotEqual1_e && ((rtb_AND_nu && (rtb_Switch_dq == Alert_Brake) &&
             (rtb_Switch_jae == CIB)) || rtb_AND1_b || rtb_NotEqual1_m) &&
           rtb_AND_a && rtb_RelationalOperator1 &&
           (MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM < 1.0) &&
           (MainStateMachine_U.ExtBrkReqBackupEBCM == 0));

  /* RelationalOperator: '<S75>/GreaterThan' incorporates:
   *  Constant: '<S75>/ %'
   *  Inport: '<Root>/BrkPdlPos'
   */
  MainStateMachine_Y.Brake_Pedal_Override = (MainStateMachine_U.BrkPdlPos > 85.0);

  /* Logic: '<S92>/AND' incorporates:
   *  Constant: '<S92>/Constant'
   *  Constant: '<S92>/Constant1'
   *  RelationalOperator: '<S92>/Equal'
   *  RelationalOperator: '<S92>/Equal1'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_AND_nu = ((MainStateMachine_DW.UnitDelay_DSTATE ==
                 Auto_Braking_For_EBCM_Only) ||
                (MainStateMachine_DW.UnitDelay_DSTATE ==
                 Auto_Braking_For_EBCM_and_Ibooster));

  /* Switch: '<S93>/Switch1' incorporates:
   *  Delay: '<S93>/Delay3'
   *  Logic: '<S93>/AND2'
   *  Logic: '<S93>/NOT2'
   */
  if (rtb_AND_nu && (!MainStateMachine_DW.Delay3_DSTATE_gu)) {
    /* Switch: '<S93>/Switch1' */
    MainStateMachine_DW.Delay4_DSTATE_cd = MainStateMachine_ConstB.Add2_j;
  }

  /* End of Switch: '<S93>/Switch1' */

  /* RelationalOperator: '<S93>/GreaterThan1' incorporates:
   *  Constant: '<S93>/Upper_Limit4'
   */
  rtb_GreaterThan1_j = (MainStateMachine_DW.Delay4_DSTATE_cd > 0.0);

  /* Switch: '<S88>/Switch' */
  MainStateMachine_Y.Max_Auto_Braking_State = ((!rtb_GreaterThan1_j) &&
    rtb_AND_nu);

  /* RelationalOperator: '<S187>/NotEqual1' incorporates:
   *  Constant: '<S187>/TTC_Threshold'
   */
  rtb_NotEqual1_hf = (MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM >= 1.0);

  /* Switch: '<S189>/Switch1' incorporates:
   *  Delay: '<S189>/Delay3'
   *  Logic: '<S189>/AND2'
   *  Logic: '<S189>/NOT1'
   */
  if (rtb_NotEqual1_hf && (!MainStateMachine_DW.Delay3_DSTATE_l)) {
    /* Switch: '<S189>/Switch1' incorporates:
     *  Constant: '<S187>/K_t _CIB_Disable_Time'
     */
    MainStateMachine_DW.Delay4_DSTATE_gp = 0.155;
  }

  /* End of Switch: '<S189>/Switch1' */

  /* RelationalOperator: '<S189>/GreaterThan1' incorporates:
   *  Constant: '<S189>/Upper_Limit4'
   */
  rtb_GreaterThan1_jj = (MainStateMachine_DW.Delay4_DSTATE_gp > 0.0);

  /* Switch: '<S190>/Switch1' incorporates:
   *  Delay: '<S190>/Delay3'
   *  Logic: '<S190>/AND2'
   *  Logic: '<S190>/NOT1'
   */
  if (MainStateMachine_ConstB.Equal && (!MainStateMachine_DW.Delay3_DSTATE_ay))
  {
    /* Switch: '<S190>/Switch1' incorporates:
     *  Constant: '<S188>/Constant'
     */
    MainStateMachine_DW.Delay4_DSTATE_i = 0.155;
  }

  /* End of Switch: '<S190>/Switch1' */

  /* RelationalOperator: '<S190>/GreaterThan1' incorporates:
   *  Constant: '<S190>/Upper_Limit4'
   */
  rtb_GreaterThan1_et = (MainStateMachine_DW.Delay4_DSTATE_i > 0.0);

  /* Logic: '<S178>/AND' incorporates:
   *  Constant: '<S178>/Constant1'
   *  Constant: '<S178>/No iBooster and No EBCM'
   *  Inport: '<Root>/ExtBrkReqBackupEBCM'
   *  RelationalOperator: '<S178>/Equal1'
   *  RelationalOperator: '<S178>/Equal2'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_AND_p = ((MainStateMachine_U.ExtBrkReqBackupEBCM == 0) &&
               (MainStateMachine_DW.UnitDelay_DSTATE ==
                Auto_Braking_For_EBCM_Only));

  /* Switch: '<S191>/Switch1' incorporates:
   *  Delay: '<S191>/Delay3'
   *  Logic: '<S191>/AND2'
   *  Logic: '<S191>/NOT1'
   */
  if (rtb_AND_p && (!MainStateMachine_DW.Delay3_DSTATE_ju)) {
    /* Switch: '<S191>/Switch1' incorporates:
     *  Constant: '<S178>/s'
     */
    MainStateMachine_DW.Delay4_DSTATE_lhl = 2.0;
  }

  /* End of Switch: '<S191>/Switch1' */

  /* RelationalOperator: '<S191>/GreaterThan1' incorporates:
   *  Constant: '<S191>/Upper_Limit4'
   */
  rtb_GreaterThan1_ef = (MainStateMachine_DW.Delay4_DSTATE_lhl > 0.0);

  /* Logic: '<S12>/AND' incorporates:
   *  Constant: '<S111>/Temp_TTC_Threshold'
   *  Constant: '<S112>/EBCM build pressure, No iBooster'
   *  Constant: '<S114>/AlertBrake'
   *  Constant: '<S114>/CIB'
   *  Constant: '<S114>/Constant'
   *  Constant: '<S114>/Constant1'
   *  Delay: '<S29>/Delay'
   *  Inport: '<Root>/ExtBrkReqBackupEBCM'
   *  Logic: '<S114>/AND'
   *  Logic: '<S114>/Logical Operator'
   *  Logic: '<S114>/Logical Operator1'
   *  Logic: '<S12>/OR'
   *  RelationalOperator: '<S111>/NotEqual1'
   *  RelationalOperator: '<S112>/Equal'
   *  RelationalOperator: '<S114>/Equal1'
   *  RelationalOperator: '<S114>/Equal2'
   *  RelationalOperator: '<S114>/Equal4'
   *  RelationalOperator: '<S114>/Equal5'
   */
  AND_b = (rtb_NotEqual1_e && (((MainStateMachine_Y.EgoVehSpeed > 8.0) &&
             (MainStateMachine_Y.EgoVehSpeed < 140.0) && (rtb_Switch_dq ==
              Alert_Brake) && (rtb_Switch_jae == CIB)) || rtb_AND1_b ||
            rtb_NotEqual1_m) && rtb_AND_a && rtb_RelationalOperator1 &&
           (MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM < 1.0) &&
           (MainStateMachine_U.ExtBrkReqBackupEBCM == 1));

  /* RelationalOperator: '<S162>/NotEqual1' incorporates:
   *  Constant: '<S162>/TTC_Threshold'
   */
  rtb_NotEqual1_e = (MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM >= 1.0);

  /* Switch: '<S164>/Switch1' incorporates:
   *  Delay: '<S164>/Delay3'
   *  Logic: '<S164>/AND2'
   *  Logic: '<S164>/NOT1'
   */
  if (rtb_NotEqual1_e && (!MainStateMachine_DW.Delay3_DSTATE_jp)) {
    /* Switch: '<S164>/Switch1' incorporates:
     *  Constant: '<S162>/K_t _CIB_Disable_Time'
     */
    MainStateMachine_DW.Delay4_DSTATE_f1 = 0.155;
  }

  /* End of Switch: '<S164>/Switch1' */

  /* RelationalOperator: '<S164>/GreaterThan1' incorporates:
   *  Constant: '<S164>/Upper_Limit4'
   */
  rtb_GreaterThan1_l4 = (MainStateMachine_DW.Delay4_DSTATE_f1 > 0.0);

  /* Switch: '<S165>/Switch1' incorporates:
   *  Delay: '<S165>/Delay3'
   *  Logic: '<S165>/AND2'
   *  Logic: '<S165>/NOT1'
   */
  if (rtb_Equal_d_tmp && (!MainStateMachine_DW.Delay3_DSTATE_nq)) {
    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S163>/Constant'
     */
    MainStateMachine_DW.Delay4_DSTATE_in = 0.155;
  }

  /* End of Switch: '<S165>/Switch1' */

  /* RelationalOperator: '<S165>/GreaterThan1' incorporates:
   *  Constant: '<S165>/Upper_Limit4'
   */
  rtb_GreaterThan1_ho = (MainStateMachine_DW.Delay4_DSTATE_in > 0.0);

  /* RelationalOperator: '<S153>/Relational Operator1' incorporates:
   *  Constant: '<S153>/kPa '
   *  Inport: '<Root>/BPDAPS_BkPDrvApP'
   *  Inport: '<Root>/EBRTarPre'
   *  Sum: '<S153>/Subtract2'
   */
  rtb_RelationalOperator1 = (MainStateMachine_U.BPDAPS_BkPDrvApP -
    MainStateMachine_U.EBRTarPre >= 1500.0);

  /* Switch: '<S166>/Switch1' incorporates:
   *  Delay: '<S166>/Delay3'
   *  Logic: '<S166>/AND2'
   *  Logic: '<S166>/NOT1'
   */
  if (rtb_RelationalOperator1 && (!MainStateMachine_DW.Delay3_DSTATE_e)) {
    /* Switch: '<S166>/Switch1' incorporates:
     *  Constant: '<S153>/Constant1'
     */
    MainStateMachine_DW.Delay4_DSTATE_go = 0.0;
  }

  /* End of Switch: '<S166>/Switch1' */

  /* RelationalOperator: '<S166>/GreaterThan1' incorporates:
   *  Constant: '<S166>/Upper_Limit4'
   */
  rtb_GreaterThan1_m = (MainStateMachine_DW.Delay4_DSTATE_go > 0.0);

  /* Logic: '<S149>/AND1' incorporates:
   *  Constant: '<S149>/Constant1'
   *  Constant: '<S149>/No iBooster and No EBCM'
   *  Inport: '<Root>/ExtBrkReqBackupEBCM'
   *  RelationalOperator: '<S149>/Equal'
   *  RelationalOperator: '<S149>/Equal1'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_AND1_b = ((MainStateMachine_U.ExtBrkReqBackupEBCM == 0) &&
                (MainStateMachine_DW.UnitDelay_DSTATE ==
                 Auto_Braking_For_EBCM_and_Ibooster));

  /* Switch: '<S161>/Switch1' incorporates:
   *  Delay: '<S161>/Delay3'
   *  Logic: '<S161>/AND2'
   *  Logic: '<S161>/NOT1'
   */
  if (rtb_AND1_b && (!MainStateMachine_DW.Delay3_DSTATE_c2)) {
    /* Switch: '<S161>/Switch1' incorporates:
     *  Constant: '<S149>/Hold_Time'
     */
    MainStateMachine_DW.Delay4_DSTATE_oz = 2.0;
  }

  /* End of Switch: '<S161>/Switch1' */

  /* RelationalOperator: '<S161>/GreaterThan1' incorporates:
   *  Constant: '<S161>/Upper_Limit4'
   */
  rtb_GreaterThan1_c = (MainStateMachine_DW.Delay4_DSTATE_oz > 0.0);

  /* RelationalOperator: '<S150>/NotEqual3' incorporates:
   *  Constant: '<S150>/Not Supported'
   *  Constant: '<S150>/Park Gear'
   *  Constant: '<S150>/Reverse Gear'
   *  Inport: '<Root>/TransEstGear_TCM'
   *  Logic: '<S150>/Logical Operator'
   *  Logic: '<S184>/Logical Operator'
   *  Logic: '<S199>/OR'
   *  Logic: '<S213>/OR'
   *  Logic: '<S224>/OR'
   *  RelationalOperator: '<S150>/NotEqual'
   *  RelationalOperator: '<S150>/NotEqual1'
   *  RelationalOperator: '<S150>/NotEqual2'
   *  RelationalOperator: '<S184>/NotEqual3'
   */
  OR_o_tmp = ((MainStateMachine_U.TransEstGear_TCM == 15) ||
              (MainStateMachine_U.TransEstGear_TCM == 14) ||
              (MainStateMachine_U.TransEstGear_TCM == 0));

  /* RelationalOperator: '<S152>/Equal' incorporates:
   *  RelationalOperator: '<S177>/Equal'
   *  RelationalOperator: '<S192>/Equal10'
   *  RelationalOperator: '<S216>/Equal10'
   *  RelationalOperator: '<S230>/Equal10'
   */
  OR_o_tmp_0 = !MainStateMachine_Y.All_Input_Signals_Validity;

  /* RelationalOperator: '<S155>/Equal1' incorporates:
   *  RelationalOperator: '<S180>/Equal1'
   *  RelationalOperator: '<S201>/Equal11'
   *  RelationalOperator: '<S215>/Equal11'
   */
  OR_o_tmp_1 = !MainStateMachine_Y.Sensors_Ready;

  /* Logic: '<S156>/Logical Operator1' incorporates:
   *  Constant: '<S156>/Alert'
   *  Constant: '<S156>/Off'
   *  Logic: '<S196>/AND1'
   *  Logic: '<S214>/AND1'
   *  RelationalOperator: '<S156>/Equal2'
   *  RelationalOperator: '<S156>/Equal3'
   */
  OR_o_tmp_2 = ((rtb_Switch_dq == OFF) || (rtb_Switch_dq == Alert));

  /* Logic: '<S158>/Logical Operator2' incorporates:
   *  Constant: '<S158>/Alert'
   *  Constant: '<S158>/Off'
   *  Logic: '<S197>/AND1'
   *  Logic: '<S210>/AND1'
   *  RelationalOperator: '<S158>/Equal1'
   *  RelationalOperator: '<S158>/Equal3'
   */
  OR_o_tmp_3 = ((rtb_Switch_pl == OFF) || (rtb_Switch_pl == Alert));

  /* Logic: '<S157>/Logical Operator1' incorporates:
   *  Constant: '<S157>/Alert'
   *  Constant: '<S157>/Off'
   *  Logic: '<S198>/AND2'
   *  Logic: '<S208>/AND2'
   *  RelationalOperator: '<S157>/Equal2'
   *  RelationalOperator: '<S157>/Equal3'
   */
  OR_o_tmp_4 = ((rtb_Switch_hp == OFF) || (rtb_Switch_hp == Alert));

  /* Logic: '<S156>/Logical Operator' incorporates:
   *  Constant: '<S156>/CIB'
   *  Logic: '<S156>/Logical Operator1'
   *  Logic: '<S185>/Logical Operator1'
   *  RelationalOperator: '<S156>/Equal1'
   */
  OR_o_tmp_5 = ((rtb_Switch_jae == CIB) && OR_o_tmp_2);

  /* Logic: '<S157>/Logical Operator' incorporates:
   *  Constant: '<S157>/ICM'
   *  Logic: '<S157>/Logical Operator1'
   *  Logic: '<S181>/Logical Operator1'
   *  RelationalOperator: '<S157>/Equal1'
   */
  OR_o_tmp_6 = ((rtb_Switch_jae == ICM) && OR_o_tmp_4);

  /* Logic: '<S158>/Logical Operator' incorporates:
   *  Constant: '<S158>/VRU'
   *  Logic: '<S158>/Logical Operator2'
   *  Logic: '<S182>/Logical Operator1'
   *  RelationalOperator: '<S158>/Equal'
   */
  OR_o_tmp_7 = ((rtb_Switch_jae == VRU) && OR_o_tmp_3);

  /* Logic: '<S159>/Logical Operator' incorporates:
   *  Logic: '<S186>/Logical Operator'
   *  RelationalOperator: '<S159>/Equal'
   *  RelationalOperator: '<S159>/Equal1'
   */
  OR_o_tmp_8 = (MainStateMachine_Y.Steering_Wheel_Override ||
                MainStateMachine_Y.AccelPedalOverrd);

  /* Logic: '<S15>/OR' incorporates:
   *  Constant: '<S154>/$2=iBooster build pressure '
   *  Constant: '<S154>/$3=EBCM build pressure '
   *  Inport: '<Root>/BrkOveByDri'
   *  Inport: '<Root>/ExtBrkReqBackupEBCM'
   *  Logic: '<S150>/Logical Operator'
   *  Logic: '<S151>/OR1'
   *  Logic: '<S154>/Logical Operator1'
   *  Logic: '<S154>/Logical Operator2'
   *  Logic: '<S156>/Logical Operator'
   *  Logic: '<S157>/Logical Operator'
   *  Logic: '<S158>/Logical Operator'
   *  Logic: '<S159>/Logical Operator'
   *  Logic: '<S15>/AND'
   *  RelationalOperator: '<S150>/NotEqual3'
   *  RelationalOperator: '<S152>/Equal'
   *  RelationalOperator: '<S154>/Equal1'
   *  RelationalOperator: '<S154>/Equal2'
   *  RelationalOperator: '<S154>/Equal4'
   *  RelationalOperator: '<S155>/Equal1'
   *  RelationalOperator: '<S160>/Equal1'
   *  Switch: '<S149>/Switch'
   *  Switch: '<S153>/Switch'
   *  Switch: '<S162>/Switch'
   *  Switch: '<S163>/Switch'
   */
  OR_o = (OR_o_tmp_1 || (OR_o_tmp_5 || OR_o_tmp_6 || OR_o_tmp_7) || OR_o_tmp ||
          OR_o_tmp_8 || MainStateMachine_Y.Max_Auto_Braking_State ||
          (((!rtb_GreaterThan1_l4) && rtb_NotEqual1_e) || ((!rtb_GreaterThan1_ho)
            && rtb_Equal_d_tmp)) || ((!rtb_GreaterThan1_m) &&
           rtb_RelationalOperator1) || (((MainStateMachine_U.ExtBrkReqBackupEBCM
             == 2) || (MainStateMachine_U.ExtBrkReqBackupEBCM == 3)) &&
           MainStateMachine_U.BrkOveByDri && (!AND2)) || OR_o_tmp_0 ||
          ((!rtb_GreaterThan1_c) && rtb_AND1_b));

  /* RelationalOperator: '<S204>/NotEqual1' incorporates:
   *  Constant: '<S204>/TTC_Threshold'
   */
  rtb_NotEqual1_m = (MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM >= 1.0);

  /* Switch: '<S206>/Switch1' incorporates:
   *  Delay: '<S206>/Delay3'
   *  Logic: '<S206>/AND2'
   *  Logic: '<S206>/NOT1'
   */
  if (rtb_NotEqual1_m && (!MainStateMachine_DW.Delay3_DSTATE_i)) {
    /* Switch: '<S206>/Switch1' incorporates:
     *  Constant: '<S204>/K_t _CIB_Disable_Time'
     */
    MainStateMachine_DW.Delay4_DSTATE_k = 0.155;
  }

  /* End of Switch: '<S206>/Switch1' */

  /* RelationalOperator: '<S206>/GreaterThan1' incorporates:
   *  Constant: '<S206>/Upper_Limit4'
   */
  rtb_GreaterThan1_mk = (MainStateMachine_DW.Delay4_DSTATE_k > 0.0);

  /* Switch: '<S207>/Switch1' incorporates:
   *  Delay: '<S207>/Delay3'
   *  Logic: '<S207>/AND2'
   *  Logic: '<S207>/NOT1'
   */
  if (rtb_Equal_d_tmp && (!MainStateMachine_DW.Delay3_DSTATE_ab)) {
    /* Switch: '<S207>/Switch1' incorporates:
     *  Constant: '<S205>/Constant'
     */
    MainStateMachine_DW.Delay4_DSTATE_p = 0.155;
  }

  /* End of Switch: '<S207>/Switch1' */

  /* RelationalOperator: '<S207>/GreaterThan1' incorporates:
   *  Constant: '<S207>/Upper_Limit4'
   */
  rtb_GreaterThan1_oo = (MainStateMachine_DW.Delay4_DSTATE_p > 0.0);

  /* Logic: '<S193>/AND' incorporates:
   *  Constant: '<S193>/Constant1'
   *  Inport: '<Root>/BrkPedApp'
   *  RelationalOperator: '<S193>/Equal1'
   *  RelationalOperator: '<S193>/GreaterThan'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_AND_a = ((!MainStateMachine_U.BrkPedApp) &&
               (MainStateMachine_DW.UnitDelay_DSTATE == HBA1));

  /* Switch: '<S203>/Switch1' incorporates:
   *  Delay: '<S203>/Delay3'
   *  Logic: '<S203>/AND2'
   *  Logic: '<S203>/NOT1'
   */
  if (rtb_AND_a && (!MainStateMachine_DW.Delay3_DSTATE_m)) {
    /* Switch: '<S203>/Switch1' incorporates:
     *  Constant: '<S193>/s'
     */
    MainStateMachine_DW.Delay4_DSTATE_at = 0.2;
  }

  /* End of Switch: '<S203>/Switch1' */

  /* RelationalOperator: '<S203>/GreaterThan1' incorporates:
   *  Constant: '<S203>/Upper_Limit4'
   */
  rtb_GreaterThan1_k = (MainStateMachine_DW.Delay4_DSTATE_at > 0.0);

  /* RelationalOperator: '<S94>/Equal' incorporates:
   *  Constant: '<S94>/Constant'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Equal_kd = (MainStateMachine_DW.UnitDelay_DSTATE == Hold);

  /* Switch: '<S95>/Switch1' incorporates:
   *  Delay: '<S95>/Delay3'
   *  Logic: '<S95>/AND2'
   *  Logic: '<S95>/NOT2'
   */
  if (rtb_Equal_kd && (!MainStateMachine_DW.Delay3_DSTATE_ec)) {
    /* Switch: '<S95>/Switch1' */
    MainStateMachine_DW.Delay4_DSTATE_m = MainStateMachine_ConstB.Add2_m;
  }

  /* End of Switch: '<S95>/Switch1' */

  /* RelationalOperator: '<S95>/GreaterThan1' incorporates:
   *  Constant: '<S95>/Upper_Limit4'
   */
  rtb_GreaterThan1_dt = (MainStateMachine_DW.Delay4_DSTATE_m > 0.0);

  /* Switch: '<S89>/Switch' */
  MainStateMachine_Y.Max_Hold_State = ((!rtb_GreaterThan1_dt) && rtb_Equal_kd);

  /* Switch: '<S10>/Switch' incorporates:
   *  Constant: '<S10>/Off'
   *  Constant: '<S10>/Valid'
   *  Inport: '<Root>/SysPwrMd'
   *  Inport: '<Root>/SysPwrMdV'
   *  RelationalOperator: '<S10>/Equal'
   */
  if (MainStateMachine_U.SysPwrMdV == 0) {
    tmp = MainStateMachine_U.SysPwrMd;
  } else {
    tmp = 0U;
  }

  /* Switch: '<S10>/Switch1' incorporates:
   *  Constant: '<S10>/On'
   *  RelationalOperator: '<S10>/Equal1'
   *  Switch: '<S10>/Switch'
   */
  Switch1 = (tmp == 2);

  /* Chart: '<Root>/FunctionStateMachine' incorporates:
   *  Constant: '<S176>/EBCM build pressure, iBooster hold pressure'
   *  Constant: '<S179>/iBooster build pressure, No EBCM'
   *  Constant: '<S18>/kph'
   *  Constant: '<S196>/CIB'
   *  Constant: '<S197>/VRU'
   *  Constant: '<S198>/ICM'
   *  Constant: '<S208>/OBJ:ICM'
   *  Constant: '<S210>/VRU'
   *  Constant: '<S214>/CIB'
   *  Constant: '<S225>/Applied'
   *  Constant: '<S226>/kPa'
   *  Constant: '<S229>/fault'
   *  Delay: '<S29>/Delay'
   *  Delay: '<S3>/Delay'
   *  Inport: '<Root>/BPDAPS_BkPDrvApP'
   *  Inport: '<Root>/BrkPedApp'
   *  Inport: '<Root>/BrkSysExtHldCpbltyFld'
   *  Inport: '<Root>/ElecPrkBrkStat'
   *  Inport: '<Root>/ExtBrkReqBackupEBCM'
   *  Logic: '<S175>/OR1'
   *  Logic: '<S17>/OR'
   *  Logic: '<S186>/Logical Operator'
   *  Logic: '<S196>/AND2'
   *  Logic: '<S197>/AND3'
   *  Logic: '<S198>/AND1'
   *  Logic: '<S200>/OR1'
   *  Logic: '<S208>/AND1'
   *  Logic: '<S20>/OR2'
   *  Logic: '<S210>/AND3'
   *  Logic: '<S214>/AND2'
   *  Logic: '<S217>/OR1'
   *  Logic: '<S21>/OR2'
   *  Logic: '<S229>/OR'
   *  Logic: '<S22>/OR'
   *  RelationalOperator: '<S176>/Equal'
   *  RelationalOperator: '<S179>/Equal1'
   *  RelationalOperator: '<S183>/Equal'
   *  RelationalOperator: '<S186>/Equal2'
   *  RelationalOperator: '<S18>/Relational Operator'
   *  RelationalOperator: '<S194>/Equal'
   *  RelationalOperator: '<S195>/Equal'
   *  RelationalOperator: '<S196>/Equal5'
   *  RelationalOperator: '<S197>/Equal6'
   *  RelationalOperator: '<S198>/Equal2'
   *  RelationalOperator: '<S202>/Equal'
   *  RelationalOperator: '<S208>/Equal2'
   *  RelationalOperator: '<S209>/Equal'
   *  RelationalOperator: '<S210>/Equal6'
   *  RelationalOperator: '<S211>/Equal'
   *  RelationalOperator: '<S214>/Equal5'
   *  RelationalOperator: '<S218>/Equal'
   *  RelationalOperator: '<S221>/Equal'
   *  RelationalOperator: '<S225>/Equal1'
   *  RelationalOperator: '<S226>/Equal17'
   *  RelationalOperator: '<S228>/Equal'
   *  RelationalOperator: '<S229>/Equal1'
   *  RelationalOperator: '<S231>/Equal'
   *  RelationalOperator: '<S232>/Equal'
   *  Switch: '<S178>/Switch'
   *  Switch: '<S187>/Switch'
   *  Switch: '<S188>/Switch'
   *  Switch: '<S193>/Switch'
   *  Switch: '<S204>/Switch'
   *  Switch: '<S205>/Switch'
   *  Switch: '<S212>/Switch'
   *  Switch: '<S220>/Switch'
   *  Switch: '<S221>/Switch'
   */
  if (MainStateMachine_DW.is_active_c3_MainStateMachine == 0U) {
    MainStateMachine_DW.is_active_c3_MainStateMachine = 1U;
    MainStateMachine_DW.is_c3_MainStateMachine = MainStateMachine_IN_Off;

    /* Outport: '<Root>/AEB_State' */
    MainStateMachine_Y.AEB_State = Off;

    /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
    MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 0.0;

    /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
    MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 1.0;

    /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 0.0;

    /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
    MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 0.0;

    /* Switch: '<S24>/Switch' */
    MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = -0.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
    MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 0.0;

    /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' */
    MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM = 0.0;
  } else {
    switch (MainStateMachine_DW.is_c3_MainStateMachine) {
     case M_IN_Auto_Braking_For_EBCM_Only:
      /* Outport: '<Root>/AEB_State' */
      MainStateMachine_Y.AEB_State = Auto_Braking_For_EBCM_Only;

      /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
      MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 1.0;

      /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
      MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 0.0;

      /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
      MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 3.0;

      /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
      MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 3.0;

      /* Switch: '<S24>/Switch' */
      MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = -1.0;

      /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
      MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 1.0;
      if (!Switch1) {
        MainStateMachine_DW.is_c3_MainStateMachine = MainStateMachine_IN_Off;

        /* Outport: '<Root>/AEB_State' */
        MainStateMachine_Y.AEB_State = Off;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 1.0;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Switch: '<S24>/Switch' */
        MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = -0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM = 0.0;
      } else if (OR_o_tmp_1 || OR_o_tmp_5 || OR_o_tmp_6 || OR_o_tmp_7 ||
                 OR_o_tmp || (OR_o_tmp_8 ||
                              MainStateMachine_Y.Brake_Pedal_Override) ||
                 MainStateMachine_Y.Max_Auto_Braking_State ||
                 (((!rtb_GreaterThan1_jj) && rtb_NotEqual1_hf) ||
                  ((!rtb_GreaterThan1_et) && MainStateMachine_ConstB.Equal)) ||
                 OR_o_tmp_0 || (MainStateMachine_U.ExtBrkReqBackupEBCM == 2) ||
                 (MainStateMachine_U.ExtBrkReqBackupEBCM == 3) ||
                 ((!rtb_GreaterThan1_ef) && rtb_AND_p)) {
        MainStateMachine_DW.is_c3_MainStateMachine =
          MainStateMachine_IN_Inactive;

        /* Outport: '<Root>/AEB_State' */
        MainStateMachine_Y.AEB_State = Inactive;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 1.0;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Switch: '<S24>/Switch' */
        MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = 0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM = 0.0;
      } else if (Switch4) {
        MainStateMachine_DW.is_c3_MainStateMachine = MainStateMachine_IN_HBA2;

        /* Outport: '<Root>/AEB_State' */
        MainStateMachine_Y.AEB_State = HBA2;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 4.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 4.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' incorporates:
         *  Inport: '<Root>/DrvIntndAxlTrqMin'
         */
        MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM =
          MainStateMachine_U.DrvIntndAxlTrqMin - 100.0;
      } else if (MainStateMachine_Y.EgoVehSpeed < 1.8) {
        MainStateMachine_DW.is_c3_MainStateMachine = MainStateMachine_IN_Hold;

        /* Outport: '<Root>/AEB_State' */
        MainStateMachine_Y.AEB_State = Hold;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 5.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 5.0;

        /* Switch: '<S24>/Switch' */
        MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = 0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' incorporates:
         *  Inport: '<Root>/DrvIntndAxlTrqMin'
         */
        MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM =
          MainStateMachine_U.DrvIntndAxlTrqMin - 100.0;
      }
      break;

     case IN_Auto_Braking_For_EBCM_and_Ib:
      Auto_Braking_For_EBCM_and_Iboos(&AND2, &RelationalOperator_e, &OR_o,
        &Switch1, &MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM);
      break;

     case MainStateMachine_IN_HBA1:
      /* Outport: '<Root>/AEB_State' */
      MainStateMachine_Y.AEB_State = HBA1;

      /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
      MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 1.0;

      /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
      MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 0.0;

      /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
      MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 4.0;

      /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
      MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 4.0;

      /* Switch: '<S24>/Switch' */
      MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = -1.0;

      /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
      MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 1.0;
      if (OR_o_tmp_1 || (OR_o_tmp_2 && (rtb_Switch_jae == CIB)) || (OR_o_tmp_3 &&
           (rtb_Switch_jae == VRU)) || (OR_o_tmp_4 && (rtb_Switch_jae == ICM)) ||
          OR_o_tmp || MainStateMachine_Y.AccelPedalOverrd ||
          MainStateMachine_Y.Steering_Wheel_Override || (((!rtb_GreaterThan1_mk)
            && rtb_NotEqual1_m) || ((!rtb_GreaterThan1_oo) && rtb_Equal_d_tmp)) ||
          OR_o_tmp_0 || MainStateMachine_Y.IBA_MAX_State ||
          ((!rtb_GreaterThan1_k) && rtb_AND_a)) {
        MainStateMachine_DW.is_c3_MainStateMachine =
          MainStateMachine_IN_Inactive;

        /* Outport: '<Root>/AEB_State' */
        MainStateMachine_Y.AEB_State = Inactive;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 1.0;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Switch: '<S24>/Switch' */
        MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = 0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM = 0.0;
      } else if (!Switch1) {
        MainStateMachine_DW.is_c3_MainStateMachine = MainStateMachine_IN_Off;

        /* Outport: '<Root>/AEB_State' */
        MainStateMachine_Y.AEB_State = Off;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 1.0;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Switch: '<S24>/Switch' */
        MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = -0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM = 0.0;
      }
      break;

     case MainStateMachine_IN_HBA2:
      /* Outport: '<Root>/AEB_State' */
      MainStateMachine_Y.AEB_State = HBA2;

      /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
      MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 1.0;

      /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
      MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 0.0;

      /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
      MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 4.0;

      /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
      MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 4.0;

      /* Switch: '<S24>/Switch' */
      MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = -1.0;

      /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
      MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 1.0;
      if (!Switch1) {
        MainStateMachine_DW.is_c3_MainStateMachine = MainStateMachine_IN_Off;

        /* Outport: '<Root>/AEB_State' */
        MainStateMachine_Y.AEB_State = Off;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 1.0;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Switch: '<S24>/Switch' */
        MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = -0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM = 0.0;
      } else if (OR_o_tmp_1 || (OR_o_tmp_2 && (rtb_Switch_jae == CIB)) ||
                 (OR_o_tmp_3 && (rtb_Switch_jae == VRU)) || (OR_o_tmp_4 &&
                  (rtb_Switch_jae == ICM)) || OR_o_tmp ||
                 MainStateMachine_Y.AccelPedalOverrd ||
                 MainStateMachine_Y.Steering_Wheel_Override ||
                 (((!rtb_GreaterThan1_cn) && rtb_NotEqual1_av) ||
                  ((!rtb_GreaterThan1_gp) && rtb_Equal_d_tmp)) || OR_o_tmp_0 ||
                 ((!rtb_GreaterThan1_bg) && rtb_AND_ml) ||
                 MainStateMachine_Y.IBA_MAX_State) {
        MainStateMachine_DW.is_c3_MainStateMachine =
          MainStateMachine_IN_Inactive;

        /* Outport: '<Root>/AEB_State' */
        MainStateMachine_Y.AEB_State = Inactive;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 1.0;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Switch: '<S24>/Switch' */
        MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = 0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM = 0.0;
      }
      break;

     case MainStateMachine_IN_Hold:
      /* Outport: '<Root>/AEB_State' */
      MainStateMachine_Y.AEB_State = Hold;

      /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
      MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 1.0;

      /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
      MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 0.0;

      /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
      MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 5.0;

      /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
      MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 5.0;

      /* Switch: '<S24>/Switch' */
      MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = 0.0;

      /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
      MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 1.0;
      if (!Switch1) {
        MainStateMachine_DW.is_c3_MainStateMachine = MainStateMachine_IN_Off;

        /* Outport: '<Root>/AEB_State' */
        MainStateMachine_Y.AEB_State = Off;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 1.0;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Switch: '<S24>/Switch' */
        MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = -0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM = 0.0;
      } else if (OR_o_tmp || MainStateMachine_Y.AccelPedalOverrd ||
                 (MainStateMachine_U.ElecPrkBrkStat == 1) ||
                 (MainStateMachine_U.BPDAPS_BkPDrvApP >= 500.0) ||
                 MainStateMachine_U.BrkPedApp ||
                 ((MainStateMachine_U.ElecPrkBrkStat == 2) ||
                  MainStateMachine_U.BrkSysExtHldCpbltyFld) ||
                 MainStateMachine_Y.Max_Hold_State ||
                 MainStateMachine_DW.Delay_DSTATE_i || OR_o_tmp_0) {
        MainStateMachine_DW.is_c3_MainStateMachine =
          MainStateMachine_IN_Inactive;

        /* Outport: '<Root>/AEB_State' */
        MainStateMachine_Y.AEB_State = Inactive;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 1.0;

        /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
        MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM = 0.0;
      }
      break;

     case MainStateMachine_IN_Inactive:
      MainStateMachine_Inactive(&AND, &AND_d, &AND_b, &Switch1,
        &MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM);
      break;

     default:
      /* Outport: '<Root>/AEB_State' */
      /* case IN_Off: */
      MainStateMachine_Y.AEB_State = Off;

      /* Outport: '<Root>/CPSCBSC_AutoBrkReq_FCM' */
      MainStateMachine_Y.CPSCBSC_AutoBrkReq_FCM = 0.0;

      /* Outport: '<Root>/RDCPSCBSC_AutoBrkReq_FCM' */
      MainStateMachine_Y.RDCPSCBSC_AutoBrkReq_FCM = 1.0;

      /* Outport: '<Root>/CPSCBSC_AutoBrkReqTyp_FCM' */
      MainStateMachine_Y.CPSCBSC_AutoBrkReqTyp_FCM = 0.0;

      /* Outport: '<Root>/RDCPSCBSC_AutoBrkReqTyp_FCM' */
      MainStateMachine_Y.RDCPSCBSC_AutoBrkReqTyp_FCM = 0.0;

      /* Switch: '<S24>/Switch' */
      MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = -0.0;

      /* Outport: '<Root>/CPSATC_AxlTrqRqstAct_FCM' */
      MainStateMachine_Y.CPSATC_AxlTrqRqstAct_FCM = 0.0;
      if (Switch1) {
        MainStateMachine_DW.is_c3_MainStateMachine =
          MainStateMachine_IN_Inactive;

        /* Outport: '<Root>/AEB_State' */
        MainStateMachine_Y.AEB_State = Inactive;

        /* Switch: '<S24>/Switch' */
        MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = 0.0;

        /* Outport: '<Root>/CPSATC_AxlTrqRqst_FCM' */
        MainStateMachine_Y.CPSATC_AxlTrqRqst_FCM = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/FunctionStateMachine' */

  /* Logic: '<S27>/AND' incorporates:
   *  Constant: '<S27>/Constant'
   *  Constant: '<S28>/fault'
   *  Delay: '<S3>/Delay'
   *  Inport: '<Root>/BrkSysExtHldCpbltyFld'
   *  Inport: '<Root>/ElecPrkBrkStat'
   *  Logic: '<S28>/OR'
   *  Outport: '<Root>/AEB_State'
   *  RelationalOperator: '<S27>/Equal'
   *  RelationalOperator: '<S28>/Equal1'
   */
  MainStateMachine_DW.Delay_DSTATE_i = ((MainStateMachine_Y.AEB_State == Hold) &&
    ((MainStateMachine_U.ElecPrkBrkStat == 2) ||
     MainStateMachine_U.BrkSysExtHldCpbltyFld));

  /* Switch: '<S25>/Switch1' incorporates:
   *  Delay: '<S25>/Delay3'
   *  Delay: '<S3>/Delay'
   *  Logic: '<S25>/AND2'
   *  Logic: '<S25>/NOT2'
   */
  if (MainStateMachine_DW.Delay_DSTATE_i &&
      (!MainStateMachine_DW.Delay3_DSTATE_c3)) {
    /* Switch: '<S25>/Switch1' incorporates:
     *  Constant: '<S23>/s'
     */
    MainStateMachine_DW.Delay4_DSTATE_b1 = 30.0;
  }

  /* End of Switch: '<S25>/Switch1' */

  /* RelationalOperator: '<S25>/GreaterThan1' incorporates:
   *  Constant: '<S25>/Upper_Limit4'
   */
  MainStateMachine_Y.AutoBrkRlsIO = (MainStateMachine_DW.Delay4_DSTATE_b1 > 0.0);

  /* Switch: '<S25>/Switch' */
  if (MainStateMachine_Y.AutoBrkRlsIO) {
    /* Switch: '<S25>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S25>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_b1 -= 0.025;
  } else {
    /* Switch: '<S25>/Switch1' incorporates:
     *  Constant: '<S25>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_b1 = 0.0;
  }

  /* End of Switch: '<S25>/Switch' */

  /* Switch: '<S26>/Switch1' incorporates:
   *  Delay: '<S26>/Delay3'
   *  Delay: '<S3>/Delay'
   *  Logic: '<S26>/AND1'
   *  Logic: '<S26>/NOT2'
   */
  if (MainStateMachine_DW.Delay_DSTATE_i &&
      (!MainStateMachine_DW.Delay3_DSTATE_d)) {
    /* Outport: '<Root>/EPBFldChmEvntStat' incorporates:
     *  Constant: '<S26>/Active'
     */
    MainStateMachine_Y.EPBFldChmEvntStat = 1U;
  } else {
    /* Outport: '<Root>/EPBFldChmEvntStat' incorporates:
     *  Constant: '<S26>/Cancel'
     */
    MainStateMachine_Y.EPBFldChmEvntStat = 3U;
  }

  /* End of Switch: '<S26>/Switch1' */

  /* Switch: '<S24>/Switch' incorporates:
   *  Constant: '<S24>/Failed'
   *  Constant: '<S24>/Failed1'
   *  Inport: '<Root>/BackUp_Speed_Diag'
   *  Inport: '<Root>/Major_Speed_Left_Rear_Diag'
   *  Inport: '<Root>/Major_Speed_Right_Rear_Diag'
   *  Logic: '<S24>/AND'
   *  Logic: '<S24>/OR'
   *  RelationalOperator: '<S24>/Equal'
   *  RelationalOperator: '<S24>/Equal1'
   *  RelationalOperator: '<S24>/Equal2'
   */
  if (((MainStateMachine_U.Major_Speed_Right_Rear_Diag == 0) &&
       (MainStateMachine_U.Major_Speed_Left_Rear_Diag == 0)) ||
      (MainStateMachine_U.BackUp_Speed_Diag == 0)) {
    /* Switch: '<S24>/Switch' incorporates:
     *  Inport: '<Root>/DecelReqVal'
     *  Product: '<S24>/Product'
     */
    MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM *= MainStateMachine_U.DecelReqVal;

    /* Saturate: '<S24>/Saturation' */
    if (MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM > 4.905) {
      /* Switch: '<S24>/Switch' */
      MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = 4.905;
    } else if (MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM < -4.905) {
      /* Switch: '<S24>/Switch' */
      MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM = -4.905;
    }

    /* End of Saturate: '<S24>/Saturation' */
  } else {
    /* Switch: '<S24>/Switch' incorporates:
     *  Inport: '<Root>/DecelReqVal'
     *  Product: '<S24>/Product'
     */
    MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM *= MainStateMachine_U.DecelReqVal;
  }

  /* End of Switch: '<S24>/Switch' */

  /* Outport: '<Root>/RDCPSCBSC_CtrlAcc_FCM' */
  MainStateMachine_Y.RDCPSCBSC_CtrlAcc_FCM =
    MainStateMachine_Y.CPSCBSC_CtrlAcc_FCM;

  /* Switch: '<S95>/Switch' */
  if (rtb_GreaterThan1_dt) {
    /* Switch: '<S95>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S95>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_m -= 0.025;
  } else {
    /* Switch: '<S95>/Switch1' incorporates:
     *  Constant: '<S95>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_m = 0.0;
  }

  /* End of Switch: '<S95>/Switch' */

  /* Switch: '<S203>/Switch' */
  if (rtb_GreaterThan1_k) {
    /* Switch: '<S203>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S203>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_at -= 0.025;
  } else {
    /* Switch: '<S203>/Switch1' incorporates:
     *  Constant: '<S203>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_at = 0.0;
  }

  /* End of Switch: '<S203>/Switch' */

  /* Switch: '<S207>/Switch' */
  if (rtb_GreaterThan1_oo) {
    /* Switch: '<S207>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S207>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_p -= 0.025;
  } else {
    /* Switch: '<S207>/Switch1' incorporates:
     *  Constant: '<S207>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_p = 0.0;
  }

  /* End of Switch: '<S207>/Switch' */

  /* Switch: '<S206>/Switch' */
  if (rtb_GreaterThan1_mk) {
    /* Switch: '<S206>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S206>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_k -= 0.025;
  } else {
    /* Switch: '<S206>/Switch1' incorporates:
     *  Constant: '<S206>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_k = 0.0;
  }

  /* End of Switch: '<S206>/Switch' */

  /* Switch: '<S161>/Switch' */
  if (rtb_GreaterThan1_c) {
    /* Switch: '<S161>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S161>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_oz -= 0.025;
  } else {
    /* Switch: '<S161>/Switch1' incorporates:
     *  Constant: '<S161>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_oz = 0.0;
  }

  /* End of Switch: '<S161>/Switch' */

  /* Switch: '<S166>/Switch' */
  if (rtb_GreaterThan1_m) {
    /* Switch: '<S166>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S166>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_go -= 0.025;
  } else {
    /* Switch: '<S166>/Switch1' incorporates:
     *  Constant: '<S166>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_go = 0.0;
  }

  /* End of Switch: '<S166>/Switch' */

  /* Switch: '<S165>/Switch' */
  if (rtb_GreaterThan1_ho) {
    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S165>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_in -= 0.025;
  } else {
    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S165>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_in = 0.0;
  }

  /* End of Switch: '<S165>/Switch' */

  /* Switch: '<S164>/Switch' */
  if (rtb_GreaterThan1_l4) {
    /* Switch: '<S164>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S164>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_f1 -= 0.025;
  } else {
    /* Switch: '<S164>/Switch1' incorporates:
     *  Constant: '<S164>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_f1 = 0.0;
  }

  /* End of Switch: '<S164>/Switch' */

  /* Switch: '<S191>/Switch' */
  if (rtb_GreaterThan1_ef) {
    /* Switch: '<S191>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S191>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_lhl -= 0.025;
  } else {
    /* Switch: '<S191>/Switch1' incorporates:
     *  Constant: '<S191>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_lhl = 0.0;
  }

  /* End of Switch: '<S191>/Switch' */

  /* Switch: '<S190>/Switch' */
  if (rtb_GreaterThan1_et) {
    /* Switch: '<S190>/Switch1' incorporates:
     *  Inport: '<Root>/ObjOfInterest_Present'
     *  Sum: '<S190>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_i -= (real_T)
      MainStateMachine_U.ObjOfInterest_Present;
  } else {
    /* Switch: '<S190>/Switch1' incorporates:
     *  Constant: '<S190>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_i = 0.0;
  }

  /* End of Switch: '<S190>/Switch' */

  /* Switch: '<S189>/Switch' */
  if (rtb_GreaterThan1_jj) {
    /* Switch: '<S189>/Switch1' incorporates:
     *  Inport: '<Root>/ObjOfInterest_Present'
     *  Sum: '<S189>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_gp -= (real_T)
      MainStateMachine_U.ObjOfInterest_Present;
  } else {
    /* Switch: '<S189>/Switch1' incorporates:
     *  Constant: '<S189>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_gp = 0.0;
  }

  /* End of Switch: '<S189>/Switch' */

  /* Switch: '<S93>/Switch' */
  if (rtb_GreaterThan1_j) {
    /* Switch: '<S93>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S93>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_cd -= 0.025;
  } else {
    /* Switch: '<S93>/Switch1' incorporates:
     *  Constant: '<S93>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_cd = 0.0;
  }

  /* End of Switch: '<S93>/Switch' */

  /* Switch: '<S56>/Switch6' */
  if (rtb_GreaterThan3_c) {
    /* Switch: '<S56>/Switch7' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S56>/Add3'
     */
    MainStateMachine_DW.Delay7_DSTATE -= 0.025;
  } else {
    /* Switch: '<S56>/Switch7' incorporates:
     *  Constant: '<S56>/Upper_Limit11'
     */
    MainStateMachine_DW.Delay7_DSTATE = 0.0;
  }

  /* End of Switch: '<S56>/Switch6' */

  /* Switch: '<S58>/Switch12' */
  if (rtb_GreaterThan5) {
    /* Switch: '<S58>/Switch13' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S58>/Add5'
     */
    MainStateMachine_DW.Delay11_DSTATE -= 0.025;
  } else {
    /* Switch: '<S58>/Switch13' incorporates:
     *  Constant: '<S58>/Upper_Limit17'
     */
    MainStateMachine_DW.Delay11_DSTATE = 0.0;
  }

  /* End of Switch: '<S58>/Switch12' */

  /* Switch: '<S61>/Switch2' */
  if (rtb_GreaterThan2_m) {
    /* Switch: '<S61>/Switch3' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S61>/Add2'
     */
    MainStateMachine_DW.Delay2_DSTATE -= 0.025;
  } else {
    /* Switch: '<S61>/Switch3' incorporates:
     *  Constant: '<S61>/Upper_Limit6'
     */
    MainStateMachine_DW.Delay2_DSTATE = 0.0;
  }

  /* End of Switch: '<S61>/Switch2' */

  /* Logic: '<S61>/NOT2' incorporates:
   *  Delay: '<S61>/Delay1'
   */
  MainStateMachine_DW.Delay1_DSTATE_l = !rtb_Equal1_dx;

  /* Switch: '<S55>/Switch' */
  if (rtb_GreaterThan1_h) {
    /* Switch: '<S55>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S55>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_a1 -= 0.025;
  } else {
    /* Switch: '<S55>/Switch1' incorporates:
     *  Constant: '<S55>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_a1 = 0.0;
  }

  /* End of Switch: '<S55>/Switch' */

  /* Logic: '<S55>/NOT' incorporates:
   *  Delay: '<S55>/Delay'
   */
  MainStateMachine_DW.Delay_DSTATE_ej = !rtb_Equal_hmq;

  /* Switch: '<S172>/Switch' */
  if (rtb_GreaterThan1_lk) {
    /* Switch: '<S172>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S172>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_bi -= 0.025;
  } else {
    /* Switch: '<S172>/Switch1' incorporates:
     *  Constant: '<S172>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_bi = 0.0;
  }

  /* End of Switch: '<S172>/Switch' */

  /* Switch: '<S174>/Switch' */
  if (rtb_GreaterThan1_b) {
    /* Switch: '<S174>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S174>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_f -= 0.025;
  } else {
    /* Switch: '<S174>/Switch1' incorporates:
     *  Constant: '<S174>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_f = 0.0;
  }

  /* End of Switch: '<S174>/Switch' */

  /* Switch: '<S91>/Switch' */
  if (rtb_GreaterThan1_d) {
    /* Switch: '<S91>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S91>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_lp -= 0.025;
  } else {
    /* Switch: '<S91>/Switch1' incorporates:
     *  Constant: '<S91>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_lp = 0.0;
  }

  /* End of Switch: '<S91>/Switch' */

  /* Switch: '<S57>/Switch8' */
  if (rtb_GreaterThan4_l) {
    /* Switch: '<S57>/Switch9' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S57>/Add4'
     */
    MainStateMachine_DW.Delay6_DSTATE -= 0.025;
  } else {
    /* Switch: '<S57>/Switch9' incorporates:
     *  Constant: '<S57>/Upper_Limit12'
     */
    MainStateMachine_DW.Delay6_DSTATE = 0.0;
  }

  /* End of Switch: '<S57>/Switch8' */

  /* Switch: '<S59>/Switch14' */
  if (rtb_GreaterThan6) {
    /* Switch: '<S59>/Switch15' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S59>/Add6'
     */
    MainStateMachine_DW.Delay10_DSTATE -= 0.025;
  } else {
    /* Switch: '<S59>/Switch15' incorporates:
     *  Constant: '<S59>/Upper_Limit18'
     */
    MainStateMachine_DW.Delay10_DSTATE = 0.0;
  }

  /* End of Switch: '<S59>/Switch14' */

  /* Switch: '<S60>/Switch' */
  if (rtb_GreaterThan1_mr) {
    /* Switch: '<S60>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S60>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_ah -= 0.025;
  } else {
    /* Switch: '<S60>/Switch1' incorporates:
     *  Constant: '<S60>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_ah = 0.0;
  }

  /* End of Switch: '<S60>/Switch' */

  /* Switch: '<S77>/Switch' */
  if (rtb_GreaterThan1_o) {
    /* Switch: '<S77>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S77>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_l -= 0.025;
  } else {
    /* Switch: '<S77>/Switch1' incorporates:
     *  Constant: '<S77>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_l = 0.0;
  }

  /* End of Switch: '<S77>/Switch' */

  /* Switch: '<S78>/Switch' */
  if (rtb_GreaterThan1_dj) {
    /* Switch: '<S78>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S78>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_o2 -= 0.025;
  } else {
    /* Switch: '<S78>/Switch1' incorporates:
     *  Constant: '<S78>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_o2 = 0.0;
  }

  /* End of Switch: '<S78>/Switch' */

  /* Switch: '<S222>/Switch' */
  if (rtb_GreaterThan1_cn) {
    /* Switch: '<S222>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S222>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_av -= 0.025;
  } else {
    /* Switch: '<S222>/Switch1' incorporates:
     *  Constant: '<S222>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_av = 0.0;
  }

  /* End of Switch: '<S222>/Switch' */

  /* Switch: '<S223>/Switch' */
  if (rtb_GreaterThan1_gp) {
    /* Switch: '<S223>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S223>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_avo -= 0.025;
  } else {
    /* Switch: '<S223>/Switch1' incorporates:
     *  Constant: '<S223>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_avo = 0.0;
  }

  /* End of Switch: '<S223>/Switch' */

  /* Switch: '<S82>/Switch' */
  if (rtb_GreaterThan1_n0) {
    /* Switch: '<S82>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S82>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_lh -= 0.025;
  } else {
    /* Switch: '<S82>/Switch1' incorporates:
     *  Constant: '<S82>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_lh = 0.0;
  }

  /* End of Switch: '<S82>/Switch' */

  /* Switch: '<S134>/Switch' */
  if (rtb_GreaterThan1_ic) {
    /* Switch: '<S134>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S134>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_d -= 0.025;
  } else {
    /* Switch: '<S134>/Switch1' incorporates:
     *  Constant: '<S134>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_d = 0.0;
  }

  /* End of Switch: '<S134>/Switch' */

  /* Switch: '<S135>/Switch' */
  if (rtb_GreaterThan1_gr) {
    /* Switch: '<S135>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S135>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_c0 -= 0.025;
  } else {
    /* Switch: '<S135>/Switch1' incorporates:
     *  Constant: '<S135>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_c0 = 0.0;
  }

  /* End of Switch: '<S135>/Switch' */

  /* Switch: '<S144>/Switch' */
  if (rtb_GreaterThan1_eu) {
    /* Switch: '<S144>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S144>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE -= 0.025;
  } else {
    /* Switch: '<S144>/Switch1' incorporates:
     *  Constant: '<S144>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE = 0.0;
  }

  /* End of Switch: '<S144>/Switch' */

  /* Switch: '<S145>/Switch' */
  if (rtb_GreaterThan1_hg) {
    /* Switch: '<S145>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S145>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_c -= 0.025;
  } else {
    /* Switch: '<S145>/Switch1' incorporates:
     *  Constant: '<S145>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_c = 0.0;
  }

  /* End of Switch: '<S145>/Switch' */

  /* Switch: '<S219>/Switch' */
  if (rtb_GreaterThan1_bg) {
    /* Switch: '<S219>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S219>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_dm -= 0.025;
  } else {
    /* Switch: '<S219>/Switch1' incorporates:
     *  Constant: '<S219>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_dm = 0.0;
  }

  /* End of Switch: '<S219>/Switch' */

  /* Switch: '<S52>/Switch' */
  if (rtb_GreaterThan1_l) {
    /* Switch: '<S52>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S52>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_h -= 0.025;
  } else {
    /* Switch: '<S52>/Switch1' incorporates:
     *  Constant: '<S52>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_h = 0.0;
  }

  /* End of Switch: '<S52>/Switch' */

  /* Switch: '<S136>/Switch' */
  if (rtb_GreaterThan1_o0) {
    /* Switch: '<S136>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S136>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_g -= 0.025;
  } else {
    /* Switch: '<S136>/Switch1' incorporates:
     *  Constant: '<S136>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_g = 0.0;
  }

  /* End of Switch: '<S136>/Switch' */

  /* Switch: '<S137>/Switch' */
  if (rtb_GreaterThan1_d2) {
    /* Switch: '<S137>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S137>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_oh -= 0.025;
  } else {
    /* Switch: '<S137>/Switch1' incorporates:
     *  Constant: '<S137>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_oh = 0.0;
  }

  /* End of Switch: '<S137>/Switch' */

  /* Switch: '<S146>/Switch' */
  if (rtb_GreaterThan1_cb) {
    /* Switch: '<S146>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S146>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_b -= 0.025;
  } else {
    /* Switch: '<S146>/Switch1' incorporates:
     *  Constant: '<S146>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_b = 0.0;
  }

  /* End of Switch: '<S146>/Switch' */

  /* Switch: '<S147>/Switch' */
  if (rtb_GreaterThan1_m0) {
    /* Switch: '<S147>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S147>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_o -= 0.025;
  } else {
    /* Switch: '<S147>/Switch1' incorporates:
     *  Constant: '<S147>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_o = 0.0;
  }

  /* End of Switch: '<S147>/Switch' */

  /* Switch: '<S68>/Switch' */
  if (rtb_GreaterThan1_i) {
    /* Switch: '<S68>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S68>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_om -= 0.025;
  } else {
    /* Switch: '<S68>/Switch1' incorporates:
     *  Constant: '<S68>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_om = 0.0;
  }

  /* End of Switch: '<S68>/Switch' */

  /* Switch: '<S138>/Switch' */
  if (rtb_GreaterThan1_cm) {
    /* Switch: '<S138>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S138>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_g4 -= 0.025;
  } else {
    /* Switch: '<S138>/Switch1' incorporates:
     *  Constant: '<S138>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_g4 = 0.0;
  }

  /* End of Switch: '<S138>/Switch' */

  /* Switch: '<S148>/Switch' */
  if (rtb_GreaterThan1_dr) {
    /* Switch: '<S148>/Switch1' incorporates:
     *  Constant: '<Root>/dT'
     *  Sum: '<S148>/Add1'
     */
    MainStateMachine_DW.Delay4_DSTATE_a -= 0.025;
  } else {
    /* Switch: '<S148>/Switch1' incorporates:
     *  Constant: '<S148>/Upper_Limit5'
     */
    MainStateMachine_DW.Delay4_DSTATE_a = 0.0;
  }

  /* End of Switch: '<S148>/Switch' */

  /* Switch: '<S83>/Switch2' incorporates:
   *  Delay: '<S83>/Delay2'
   *  Delay: '<S83>/Delay3'
   *  Inport: '<Root>/AccActPos'
   *  Logic: '<S83>/AND2'
   *  Logic: '<S83>/NOT2'
   *  RelationalOperator: '<S83>/GreaterThan2'
   *  Switch: '<S83>/Switch3'
   */
  if (rtb_AND3_n && (!MainStateMachine_DW.Delay3_DSTATE_ia)) {
    MainStateMachine_DW.Delay2_DSTATE_n = MainStateMachine_U.AccActPos;
  } else if (MainStateMachine_U.AccActPos < MainStateMachine_DW.Delay2_DSTATE_n)
  {
    /* Switch: '<S83>/Switch3' incorporates:
     *  Delay: '<S83>/Delay2'
     *  Inport: '<Root>/AccActPos'
     */
    MainStateMachine_DW.Delay2_DSTATE_n = MainStateMachine_U.AccActPos;
  }

  /* End of Switch: '<S83>/Switch2' */

  /* Logic: '<S60>/NOT' incorporates:
   *  Delay: '<S60>/Delay'
   */
  MainStateMachine_DW.Delay_DSTATE_m = !rtb_Equal_mz;

  /* Logic: '<S68>/NOT' incorporates:
   *  Delay: '<S68>/Delay'
   */
  MainStateMachine_DW.Delay_DSTATE_k = !rtb_Equal_oc;

  /* Logic: '<S52>/NOT' incorporates:
   *  Delay: '<S52>/Delay'
   */
  MainStateMachine_DW.Delay_DSTATE_b = !rtb_Equal_fu;

  /* Update for UnitDelay: '<Root>/Unit Delay' incorporates:
   *  Outport: '<Root>/AEB_State'
   */
  MainStateMachine_DW.UnitDelay_DSTATE = MainStateMachine_Y.AEB_State;

  /* Update for Delay: '<S144>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE = rtb_AND1;

  /* Update for Delay: '<S146>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_n = rtb_NOT;

  /* Update for Delay: '<S145>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_j = rtb_AND2_dl;

  /* Update for Delay: '<S147>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_o = rtb_NOT1_m5;

  /* Update for Delay: '<S148>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_a = rtb_NOT2;

  /* Update for Delay: '<S73>/Delay15' */
  MainStateMachine_DW.Delay15_DSTATE = rtb_OR1;

  /* Update for Delay: '<S59>/Delay9' */
  MainStateMachine_DW.Delay9_DSTATE = rtb_Delay_n;

  /* Update for Delay: '<S57>/Delay5' */
  MainStateMachine_DW.Delay5_DSTATE = rtb_Delay_n;

  /* Update for Delay: '<S134>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_b = rtb_AND1_je;

  /* Update for Delay: '<S136>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_bm = rtb_NOT_n;

  /* Update for Delay: '<S135>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_aj = rtb_AND2_gn;

  /* Update for Delay: '<S137>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_c = rtb_NOT1_c;

  /* Update for Delay: '<S138>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_as = rtb_NOT2_li;

  /* Update for Delay: '<S77>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_p = rtb_GreaterThan_jq;

  /* Update for Delay: '<S79>/Delay' incorporates:
   *  Delay: '<S83>/Delay2'
   */
  MainStateMachine_DW.Delay_DSTATE_p = MainStateMachine_DW.Delay2_DSTATE_n;

  /* Update for Delay: '<S82>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_g = rtb_GreaterThan3;

  /* Update for Delay: '<S78>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_bj = rtb_RelationalOperator4;

  /* Update for Delay: '<S222>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_cv = rtb_NotEqual1_av;

  /* Update for Delay: '<S223>/Delay3' incorporates:
   *  RelationalOperator: '<S221>/Equal'
   */
  MainStateMachine_DW.Delay3_DSTATE_ns = rtb_Equal_d_tmp;

  /* Update for Delay: '<S219>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_f = rtb_AND_ml;

  /* Update for Delay: '<S91>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_au = rtb_AND_lx;

  /* Update for Delay: '<S174>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_pf = rtb_AND_jo;

  /* Update for Delay: '<S172>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_fg = rtb_AND_mi;

  /* Update for Delay: '<S72>/Delay15' */
  MainStateMachine_DW.Delay15_DSTATE_e = rtb_OR_pt;

  /* Update for Delay: '<S58>/Delay8' */
  MainStateMachine_DW.Delay8_DSTATE = rtb_Delay1;

  /* Update for Delay: '<S56>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_of = rtb_Delay1;

  /* Update for Delay: '<S93>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_gu = rtb_AND_nu;

  /* Update for Delay: '<S189>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_l = rtb_NotEqual1_hf;

  /* Update for Delay: '<S190>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_ay = MainStateMachine_ConstB.Equal;

  /* Update for Delay: '<S191>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_ju = rtb_AND_p;

  /* Update for Delay: '<S164>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_jp = rtb_NotEqual1_e;

  /* Update for Delay: '<S165>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_nq = rtb_Equal_d_tmp;

  /* Update for Delay: '<S166>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_e = rtb_RelationalOperator1;

  /* Update for Delay: '<S161>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_c2 = rtb_AND1_b;

  /* Update for Delay: '<S206>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_i = rtb_NotEqual1_m;

  /* Update for Delay: '<S207>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_ab = rtb_Equal_d_tmp;

  /* Update for Delay: '<S203>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_m = rtb_AND_a;

  /* Update for Delay: '<S95>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_ec = rtb_Equal_kd;

  /* Update for Delay: '<S25>/Delay3' incorporates:
   *  Delay: '<S3>/Delay'
   */
  MainStateMachine_DW.Delay3_DSTATE_c3 = MainStateMachine_DW.Delay_DSTATE_i;

  /* Update for Delay: '<S26>/Delay3' incorporates:
   *  Delay: '<S3>/Delay'
   */
  MainStateMachine_DW.Delay3_DSTATE_d = MainStateMachine_DW.Delay_DSTATE_i;

  /* Update for Delay: '<S83>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_ia = rtb_AND3_n;
}

/* Model initialize function */
void MainStateMachine_initialize(void)
{
  /* InitializeConditions for Delay: '<S146>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_n = true;

  /* InitializeConditions for Delay: '<S147>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_o = true;

  /* InitializeConditions for Delay: '<S148>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_a = true;

  /* InitializeConditions for Delay: '<S60>/Delay' */
  MainStateMachine_DW.Delay_DSTATE_m = true;

  /* InitializeConditions for Delay: '<S136>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_bm = true;

  /* InitializeConditions for Delay: '<S137>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_c = true;

  /* InitializeConditions for Delay: '<S138>/Delay3' */
  MainStateMachine_DW.Delay3_DSTATE_as = true;

  /* InitializeConditions for Delay: '<S61>/Delay1' */
  MainStateMachine_DW.Delay1_DSTATE_l = true;
}

/* Model terminate function */
void MainStateMachine_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
