/**************************************************************************
   Code generated for Simulink model: chibiOS_Config_Test_PWM.
   Model version                    : 1.210
   Simulink Coder version           : 8.9 (R2015b) 13-Aug-2015
   TLC version                      : 8.9 (Jul 31 2015)
   C/C++ source code generated on   : Sat May 27 00:58:14 2017
 ***************************************************************************
 *
 * Target selection: ChibiOS.tlc
 * Embedded hardware selection: STMicroelectronics->STM32F4xx 32-bit Cortex-M4
 * Code generation objectives: Unspecified
 * Validation result: Not run

 ***************************************************************************
   ChibiOS/RT Simulink Blockset - Copyright (c) 2013, Jedediah Frey
   All rights reserved.
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:
   - Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.
   - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
   - Neither the name of Jedediah Frey nor the names of its contributors may
   be used to endorse or promote products derived from this software
   without specific prior written permission.
   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.
 ***************************************************************************
   ChibiOS/RT - Copyright (C) 2006-2013 Giovanni Di Sirio
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
   http://www.apache.org/licenses/LICENSE-2.0
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 **************************************************************************/
/* Includes */

/* Includes - BlockInstanceSetup (<S1>/pwm_Config3)*/
#include "chibiOS_Config_Test_PWM.h"
#include "chibiOS_Config_Test_PWM_private.h"

/* Defines */

/* Defines - BlockInstanceSetup (<S1>/pwm_Config3)*/

/* Types */

/* IntrinsicTypes - BlockInstanceSetup (<S1>/pwm_Config3)*/

/* PrimitiveTypedefs - BlockInstanceSetup (<S1>/pwm_Config3)*/

/* UserTop - BlockInstanceSetup (<S1>/pwm_Config3)*/

/* Typedefs - BlockInstanceSetup (<S1>/pwm_Config3)*/

/* Enums */

/* Enums - BlockInstanceSetup (<S1>/pwm_Config3)*/

/* Definitions */

/* Block signals (auto storage) */
BlockIO_chibiOS_Config_Test_PWM chibiOS_Config_Test_PWM_B;

/* Block states (auto storage) */
D_Work_chibiOS_Config_Test_PWM chibiOS_Config_Test_PWM_DWork;

/* Real-time model */
RT_MODEL_chibiOS_Config_Test_PW chibiOS_Config_Test_PWM_M_;
RT_MODEL_chibiOS_Config_Test_PW *const chibiOS_Config_Test_PWM_M =
  &chibiOS_Config_Test_PWM_M_;

/* Declarations */
static void rate_scheduler(void);

/* Declarations - BlockInstanceSetup (<S1>/pwm_Config3)*/
static PWMConfig pwmcfg4 = {
  10000,
  10000,
  NULL,

  {
    { PWM_OUTPUT_ACTIVE_HIGH, NULL },

    { PWM_OUTPUT_ACTIVE_HIGH, NULL },

    { PWM_OUTPUT_ACTIVE_HIGH, NULL },

    { PWM_OUTPUT_ACTIVE_HIGH, NULL }
  },

  /* HW dependent part.*/
  0,
  0
};

/* Functions */

/* Functions - BlockInstanceSetup (<S1>/pwm_Config3)*/

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[1])++;
  if ((chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[1]) > 19) {/* Sample time: [1.0s, 0.0s] */
    chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[1] = 0;
  }

  (chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[2])++;
  if ((chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[2]) > 21) {/* Sample time: [1.1s, 0.0s] */
    chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[2] = 0;
  }

  (chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[3])++;
  if ((chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[3]) > 39) {/* Sample time: [2.0s, 0.0s] */
    chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[3] = 0;
  }

  (chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[4])++;
  if ((chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[4]) > 119) {/* Sample time: [6.0s, 0.0s] */
    chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[4] = 0;
  }
}

/* Model step function */
void chibiOS_Config_Test_PWM_step(void)
{
  real_T currentTime;
  real_T rtb_Step;
  real_T rtb_Step1;

  /* Step: '<Root>/Step' */
  currentTime = ((chibiOS_Config_Test_PWM_M->Timing.clockTick0) * 0.05);
  if (currentTime < chibiOS_Config_Test_PWM_P.Step_Time) {
    rtb_Step = chibiOS_Config_Test_PWM_P.Step_Y0;
  } else {
    rtb_Step = chibiOS_Config_Test_PWM_P.Step_YFinal;
  }

  /* End of Step: '<Root>/Step' */

  /* Step: '<Root>/Step1' */
  currentTime = ((chibiOS_Config_Test_PWM_M->Timing.clockTick0) * 0.05);
  if (currentTime < chibiOS_Config_Test_PWM_P.Step1_Time) {
    rtb_Step1 = chibiOS_Config_Test_PWM_P.Step1_Y0;
  } else {
    rtb_Step1 = chibiOS_Config_Test_PWM_P.Step1_YFinal;
  }

  /* End of Step: '<Root>/Step1' */

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  /* Sum: '<Root>/Sum' */
  if ((rtb_Step + rtb_Step1) > 0.0) {
    if (!chibiOS_Config_Test_PWM_DWork.Subsystem_MODE) {
      /* Enable Block: <S1>/pwm_Config3 */
      pwmStart(&PWMD4, &pwmcfg4);
      chibiOS_Config_Test_PWM_DWork.Subsystem_MODE = true;
    }

    /* RateTransition: '<S1>/Rate Transition' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    if (chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[3] == 0) {
      chibiOS_Config_Test_PWM_B.RateTransition =
        chibiOS_Config_Test_PWM_P.Constant1_Value;

      /* RateTransition: '<S1>/Rate Transition1' incorporates:
       *  Constant: '<S1>/Constant1'
       *  Constant: '<S1>/Constant2'
       */
      chibiOS_Config_Test_PWM_B.RateTransition1 =
        chibiOS_Config_Test_PWM_P.Constant2_Value;
    }

    /* End of RateTransition: '<S1>/Rate Transition' */
    if (chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[2] == 0) {
      /* Sum: '<S1>/Sum' incorporates:
       *  Constant: '<S1>/Constant5'
       *  Constant: '<S1>/Constant6'
       */
      chibiOS_Config_Test_PWM_B.Sum = chibiOS_Config_Test_PWM_P.Constant5_Value
        + chibiOS_Config_Test_PWM_P.Constant6_Value;
    }

    /* RateTransition: '<S1>/Rate Transition2' */
    if (chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[3] == 0) {
      chibiOS_Config_Test_PWM_B.RateTransition2 = chibiOS_Config_Test_PWM_B.Sum;
    }

    /* End of RateTransition: '<S1>/Rate Transition2' */
    if (chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[1] == 0) {
      /* Outputs for Atomic SubSystem: '<S1>/AtomicSubsystem' */
      chibiOS_Config__AtomicSubsystem();

      /* End of Outputs for SubSystem: '<S1>/AtomicSubsystem' */
    }

    /* RateTransition: '<S1>/Rate Transition3' */
    if (chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[3] == 0) {
      chibiOS_Config_Test_PWM_B.RateTransition3 =
        chibiOS_Config_Test_PWM_B.Product;

      /* Output Block: <S1>/pwm_Config3 */
    }

    /* End of RateTransition: '<S1>/Rate Transition3' */
    if (chibiOS_Config_Test_PWM_M->Timing.TaskCounters.TID[3] == 0) {
      /* Update Block: <S1>/pwm_Config3 */
      pwmEnableChannel(&PWMD4, 0, PWM_PERCENTAGE_TO_WIDTH(&PWMD4,
        chibiOS_Config_Test_PWM_B.RateTransition));
      pwmEnableChannel(&PWMD4, 1, PWM_PERCENTAGE_TO_WIDTH(&PWMD4,
        chibiOS_Config_Test_PWM_B.RateTransition1));
      pwmEnableChannel(&PWMD4, 2, PWM_PERCENTAGE_TO_WIDTH(&PWMD4,
        chibiOS_Config_Test_PWM_B.RateTransition2));
      pwmEnableChannel(&PWMD4, 3, PWM_PERCENTAGE_TO_WIDTH(&PWMD4,
        chibiOS_Config_Test_PWM_B.RateTransition3));
    }
  } else {
    if (chibiOS_Config_Test_PWM_DWork.Subsystem_MODE) {
      /* Disable Block: <S1>/pwm_Config3 */
      pwmStop(&PWMD4);
      chibiOS_Config_Test_PWM_DWork.Subsystem_MODE = false;
    }
  }

  /* End of Sum: '<Root>/Sum' */
  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.05, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  chibiOS_Config_Test_PWM_M->Timing.clockTick0++;
  rate_scheduler();
}

/* Model initialize function */
void chibiOS_Config_Test_PWM_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)chibiOS_Config_Test_PWM_M, 0,
                sizeof(RT_MODEL_chibiOS_Config_Test_PW));

  /* block I/O */
  (void) memset(((void *) &chibiOS_Config_Test_PWM_B), 0,
                sizeof(BlockIO_chibiOS_Config_Test_PWM));

  /* states (dwork) */
  (void) memset((void *)&chibiOS_Config_Test_PWM_DWork, 0,
                sizeof(D_Work_chibiOS_Config_Test_PWM));

  /* Start for Enabled SubSystem: '<Root>/Subsystem' */

  /* Start Block: <S1>/pwm_Config3 */

  /* End of Start for SubSystem: '<Root>/Subsystem' */

  /* InitializeConditions for Enabled SubSystem: '<Root>/Subsystem' */

  /* InitializeConditions Block: <S1>/pwm_Config3 */
  pwmStart(&PWMD4, &pwmcfg4);
  palSetPadMode(GPIOD, 12, PAL_MODE_ALTERNATE(2));
  palSetPadMode(GPIOD, 13, PAL_MODE_ALTERNATE(2));
  palSetPadMode(GPIOD, 14, PAL_MODE_ALTERNATE(2));
  palSetPadMode(GPIOD, 15, PAL_MODE_ALTERNATE(2));

  /* End of InitializeConditions for SubSystem: '<Root>/Subsystem' */
}

/* CompilerErrors - BlockInstanceSetup (<S1>/pwm_Config3)*/

/* CompilerWarnings - BlockInstanceSetup (<S1>/pwm_Config3)*/

/* Documentation - BlockInstanceSetup (<S1>/pwm_Config3)*/

/* UserBottom - BlockTypeSetup .c */
/* UserBottom - BlockInstanceSetup (<S1>/pwm_Config3).c */

/* [EOF] chibiOS_Config_Test_PWM.c */
