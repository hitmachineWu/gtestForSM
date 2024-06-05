/*
 * File: MainStateMachine_types.h
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

#ifndef RTW_HEADER_MainStateMachine_types_h_
#define RTW_HEADER_MainStateMachine_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_State_
#define DEFINED_TYPEDEF_FOR_State_

typedef enum {
  Off = 0,                             /* Default value */
  Inactive,
  Auto_Braking_For_EBCM_Only,
  Auto_Braking_For_EBCM_and_Ibooster,
  Hold,
  HBA1,
  HBA2
} State;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_Scenario_
#define DEFINED_TYPEDEF_FOR_AEB_Scenario_

typedef enum {
  None = 0,                            /* Default value */
  CIB,
  VRU,
  ICM
} AEB_Scenario;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_Customization_Setting_
#define DEFINED_TYPEDEF_FOR_AEB_Customization_Setting_

typedef enum {
  No_Action = 0,                       /* Default value */
  OFF,
  Alert,
  Alert_Brake,
  Alert_Brake_Steer
} AEB_Customization_Setting;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_MainStateMachine_T RT_MODEL_MainStateMachine_T;

#endif                                /* RTW_HEADER_MainStateMachine_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
