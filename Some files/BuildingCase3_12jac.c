/* Jacobians 8 */
#include "BuildingCase3_model.h"
#include "BuildingCase3_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 1333
type: SIMPLE_ASSIGN
body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[3] = (bodyBox.frame_b.R.T[3,2] * bodyBox.a_0.SeedLSJac0[2] + body.z_a.SeedLSJac0[1] * body.r_CM[2] - body.z_a.SeedLSJac0[2] * body.r_CM[1]) * body.m
*/
void BuildingCase3_eqFunction_1333(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1333};
  jacobian->tmpVars[12] /* body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */ = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * (jacobian->seedVars[1] /* bodyBox.a_0.SeedLSJac0[2] SEED_VAR */) + (jacobian->seedVars[2] /* body.z_a.SeedLSJac0[1] SEED_VAR */) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) - ((jacobian->seedVars[0] /* body.z_a.SeedLSJac0[2] SEED_VAR */) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)))) * ((data->simulationInfo->realParameter[93] /* body.m PARAM */));
  TRACE_POP
}

/*
equation index: 1334
type: SIMPLE_ASSIGN
bodyBox.frame_a.t.$pDERLSJac0.dummyVarLSJac0[2] = bodyBox.body.I[2,1] * body.z_a.SeedLSJac0[1] + bodyBox.body.I[2,2] * body.z_a.SeedLSJac0[2] + bodyBox.body.I[2,3] * body.z_a.SeedLSJac0[3]
*/
void BuildingCase3_eqFunction_1334(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1334};
  jacobian->tmpVars[11] /* bodyBox.frame_a.t.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[197] /* bodyBox.body.I[2,1] PARAM */)) * (jacobian->seedVars[2] /* body.z_a.SeedLSJac0[1] SEED_VAR */) + ((data->simulationInfo->realParameter[198] /* bodyBox.body.I[2,2] PARAM */)) * (jacobian->seedVars[0] /* body.z_a.SeedLSJac0[2] SEED_VAR */) + ((data->simulationInfo->realParameter[199] /* bodyBox.body.I[2,3] PARAM */)) * (jacobian->seedVars[3] /* body.z_a.SeedLSJac0[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1335
type: SIMPLE_ASSIGN
body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[1] = (bodyBox.frame_b.R.T[1,2] * bodyBox.a_0.SeedLSJac0[2] + body.z_a.SeedLSJac0[2] * body.r_CM[3] - body.z_a.SeedLSJac0[3] * body.r_CM[2]) * body.m
*/
void BuildingCase3_eqFunction_1335(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1335};
  jacobian->tmpVars[9] /* body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */ = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * (jacobian->seedVars[1] /* bodyBox.a_0.SeedLSJac0[2] SEED_VAR */) + (jacobian->seedVars[0] /* body.z_a.SeedLSJac0[2] SEED_VAR */) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) - ((jacobian->seedVars[3] /* body.z_a.SeedLSJac0[3] SEED_VAR */) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)))) * ((data->simulationInfo->realParameter[93] /* body.m PARAM */));
  TRACE_POP
}

/*
equation index: 1336
type: SIMPLE_ASSIGN
body.frame_a.t.$pDERLSJac0.dummyVarLSJac0[2] = body.I[2,1] * body.z_a.SeedLSJac0[1] + body.I[2,2] * body.z_a.SeedLSJac0[2] + body.I[2,3] * body.z_a.SeedLSJac0[3] + body.r_CM[3] * body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[1] - body.r_CM[1] * body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[3]
*/
void BuildingCase3_eqFunction_1336(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1336};
  jacobian->tmpVars[13] /* body.frame_a.t.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[55] /* body.I[2,1] PARAM */)) * (jacobian->seedVars[2] /* body.z_a.SeedLSJac0[1] SEED_VAR */) + ((data->simulationInfo->realParameter[56] /* body.I[2,2] PARAM */)) * (jacobian->seedVars[0] /* body.z_a.SeedLSJac0[2] SEED_VAR */) + ((data->simulationInfo->realParameter[57] /* body.I[2,3] PARAM */)) * (jacobian->seedVars[3] /* body.z_a.SeedLSJac0[3] SEED_VAR */) + ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) * (jacobian->tmpVars[9] /* body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) * (jacobian->tmpVars[12] /* body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */));
  TRACE_POP
}

/*
equation index: 1337
type: SIMPLE_ASSIGN
revolute.frame_b.t.$pDERLSJac0.dummyVarLSJac0[2] = (-bodyBox.frame_a.t.$pDERLSJac0.dummyVarLSJac0[2]) - body.frame_a.t.$pDERLSJac0.dummyVarLSJac0[2]
*/
void BuildingCase3_eqFunction_1337(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,1337};
  jacobian->tmpVars[18] /* revolute.frame_b.t.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[11] /* bodyBox.frame_a.t.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */) - jacobian->tmpVars[13] /* body.frame_a.t.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1338
type: SIMPLE_ASSIGN
bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[2] = bodyBox.frame_b.R.T[2,2] * bodyBox.a_0.SeedLSJac0[2] * bodyBox.body.m
*/
void BuildingCase3_eqFunction_1338(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,1338};
  jacobian->tmpVars[5] /* bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * ((jacobian->seedVars[1] /* bodyBox.a_0.SeedLSJac0[2] SEED_VAR */) * ((data->simulationInfo->realParameter[229] /* bodyBox.body.m PARAM */)));
  TRACE_POP
}

/*
equation index: 1339
type: SIMPLE_ASSIGN
bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[1] = (bodyBox.frame_b.R.T[1,2] * bodyBox.a_0.SeedLSJac0[2] - body.z_a.SeedLSJac0[3] * bodyBox.body.r_CM[2]) * bodyBox.body.m
*/
void BuildingCase3_eqFunction_1339(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,1339};
  jacobian->tmpVars[4] /* bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */ = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * (jacobian->seedVars[1] /* bodyBox.a_0.SeedLSJac0[2] SEED_VAR */) - ((jacobian->seedVars[3] /* body.z_a.SeedLSJac0[3] SEED_VAR */) * ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)))) * ((data->simulationInfo->realParameter[229] /* bodyBox.body.m PARAM */));
  TRACE_POP
}

/*
equation index: 1340
type: SIMPLE_ASSIGN
bodyBox.frame_a.t.$pDERLSJac0.dummyVarLSJac0[3] = bodyBox.body.I[3,1] * body.z_a.SeedLSJac0[1] + bodyBox.body.I[3,2] * body.z_a.SeedLSJac0[2] + bodyBox.body.I[3,3] * body.z_a.SeedLSJac0[3] - bodyBox.body.r_CM[2] * bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[1]
*/
void BuildingCase3_eqFunction_1340(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,1340};
  jacobian->tmpVars[8] /* bodyBox.frame_a.t.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[200] /* bodyBox.body.I[3,1] PARAM */)) * (jacobian->seedVars[2] /* body.z_a.SeedLSJac0[1] SEED_VAR */) + ((data->simulationInfo->realParameter[201] /* bodyBox.body.I[3,2] PARAM */)) * (jacobian->seedVars[0] /* body.z_a.SeedLSJac0[2] SEED_VAR */) + ((data->simulationInfo->realParameter[202] /* bodyBox.body.I[3,3] PARAM */)) * (jacobian->seedVars[3] /* body.z_a.SeedLSJac0[3] SEED_VAR */) - (((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)) * (jacobian->tmpVars[4] /* bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */));
  TRACE_POP
}

/*
equation index: 1341
type: SIMPLE_ASSIGN
revolute.frame_b.f.$pDERLSJac0.dummyVarLSJac0[1] = (-bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[1]) - body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[1]
*/
void BuildingCase3_eqFunction_1341(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,1341};
  jacobian->tmpVars[16] /* revolute.frame_b.f.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[4] /* bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */) - jacobian->tmpVars[9] /* body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1342
type: SIMPLE_ASSIGN
bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[3] = (bodyBox.frame_b.R.T[3,2] * bodyBox.a_0.SeedLSJac0[2] + body.z_a.SeedLSJac0[1] * bodyBox.body.r_CM[2]) * bodyBox.body.m
*/
void BuildingCase3_eqFunction_1342(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,1342};
  jacobian->tmpVars[3] /* bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */ = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * (jacobian->seedVars[1] /* bodyBox.a_0.SeedLSJac0[2] SEED_VAR */) + (jacobian->seedVars[2] /* body.z_a.SeedLSJac0[1] SEED_VAR */) * ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */))) * ((data->simulationInfo->realParameter[229] /* bodyBox.body.m PARAM */));
  TRACE_POP
}

/*
equation index: 1343
type: SIMPLE_ASSIGN
bodyBox.frame_a.t.$pDERLSJac0.dummyVarLSJac0[1] = bodyBox.body.I[1,1] * body.z_a.SeedLSJac0[1] + bodyBox.body.I[1,2] * body.z_a.SeedLSJac0[2] + bodyBox.body.I[1,3] * body.z_a.SeedLSJac0[3] + bodyBox.body.r_CM[2] * bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[3]
*/
void BuildingCase3_eqFunction_1343(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,1343};
  jacobian->tmpVars[7] /* bodyBox.frame_a.t.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[194] /* bodyBox.body.I[1,1] PARAM */)) * (jacobian->seedVars[2] /* body.z_a.SeedLSJac0[1] SEED_VAR */) + ((data->simulationInfo->realParameter[195] /* bodyBox.body.I[1,2] PARAM */)) * (jacobian->seedVars[0] /* body.z_a.SeedLSJac0[2] SEED_VAR */) + ((data->simulationInfo->realParameter[196] /* bodyBox.body.I[1,3] PARAM */)) * (jacobian->seedVars[3] /* body.z_a.SeedLSJac0[3] SEED_VAR */) + ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)) * (jacobian->tmpVars[3] /* bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */);
  TRACE_POP
}

/*
equation index: 1344
type: SIMPLE_ASSIGN
revolute.frame_b.f.$pDERLSJac0.dummyVarLSJac0[3] = (-bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[3]) - body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[3]
*/
void BuildingCase3_eqFunction_1344(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,1344};
  jacobian->tmpVars[20] /* revolute.frame_b.f.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[3] /* bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */) - jacobian->tmpVars[12] /* body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1345
type: SIMPLE_ASSIGN
body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[2] = (bodyBox.frame_b.R.T[2,2] * bodyBox.a_0.SeedLSJac0[2] + body.z_a.SeedLSJac0[3] * body.r_CM[1] - body.z_a.SeedLSJac0[1] * body.r_CM[3]) * body.m
*/
void BuildingCase3_eqFunction_1345(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,1345};
  jacobian->tmpVars[2] /* body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */ = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * (jacobian->seedVars[1] /* bodyBox.a_0.SeedLSJac0[2] SEED_VAR */) + (jacobian->seedVars[3] /* body.z_a.SeedLSJac0[3] SEED_VAR */) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) - ((jacobian->seedVars[2] /* body.z_a.SeedLSJac0[1] SEED_VAR */) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)))) * ((data->simulationInfo->realParameter[93] /* body.m PARAM */));
  TRACE_POP
}

/*
equation index: 1346
type: SIMPLE_ASSIGN
revolute.frame_b.f.$pDERLSJac0.dummyVarLSJac0[2] = (-bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[2]) - body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[2]
*/
void BuildingCase3_eqFunction_1346(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,1346};
  jacobian->tmpVars[6] /* revolute.frame_b.f.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[5] /* bodyBox.frame_a.f.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */) - jacobian->tmpVars[2] /* body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1347
type: SIMPLE_ASSIGN
prismatic.f.$pDERLSJac0.dummyVarLSJac0 = (-bodyBox.frame_b.R.T[3,2]) * revolute.frame_b.f.$pDERLSJac0.dummyVarLSJac0[3] - bodyBox.frame_b.R.T[1,2] * revolute.frame_b.f.$pDERLSJac0.dummyVarLSJac0[1] - bodyBox.frame_b.R.T[2,2] * revolute.frame_b.f.$pDERLSJac0.dummyVarLSJac0[2]
*/
void BuildingCase3_eqFunction_1347(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,1347};
  jacobian->tmpVars[21] /* prismatic.f.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */))) * (jacobian->tmpVars[20] /* revolute.frame_b.f.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * (jacobian->tmpVars[16] /* revolute.frame_b.f.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * (jacobian->tmpVars[6] /* revolute.frame_b.f.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */));
  TRACE_POP
}

/*
equation index: 1348
type: SIMPLE_ASSIGN
idealGearR2T.flangeR.tau.$pDERLSJac0.dummyVarLSJac0 = prismatic.f.$pDERLSJac0.dummyVarLSJac0 / idealGearR2T.ratio
*/
void BuildingCase3_eqFunction_1348(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,1348};
  jacobian->tmpVars[23] /* idealGearR2T.flangeR.tau.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[21] /* prismatic.f.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[308] /* idealGearR2T.ratio PARAM */),"idealGearR2T.ratio");
  TRACE_POP
}

/*
equation index: 1349
type: SIMPLE_ASSIGN
body1.a_0.$pDERLSJac0.dummyVarLSJac0[2] = (-prismatic.f.$pDERLSJac0.dummyVarLSJac0) / body1.m
*/
void BuildingCase3_eqFunction_1349(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,1349};
  jacobian->tmpVars[30] /* body1.a_0.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */ = DIVISION((-jacobian->tmpVars[21] /* prismatic.f.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */),(data->simulationInfo->realParameter[152] /* body1.m PARAM */),"body1.m");
  TRACE_POP
}

/*
equation index: 1350
type: SIMPLE_ASSIGN
body.frame_a.t.$pDERLSJac0.dummyVarLSJac0[3] = body.I[3,1] * body.z_a.SeedLSJac0[1] + body.I[3,2] * body.z_a.SeedLSJac0[2] + body.I[3,3] * body.z_a.SeedLSJac0[3] + body.r_CM[1] * body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[2] - body.r_CM[2] * body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[1]
*/
void BuildingCase3_eqFunction_1350(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,1350};
  jacobian->tmpVars[10] /* body.frame_a.t.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[58] /* body.I[3,1] PARAM */)) * (jacobian->seedVars[2] /* body.z_a.SeedLSJac0[1] SEED_VAR */) + ((data->simulationInfo->realParameter[59] /* body.I[3,2] PARAM */)) * (jacobian->seedVars[0] /* body.z_a.SeedLSJac0[2] SEED_VAR */) + ((data->simulationInfo->realParameter[60] /* body.I[3,3] PARAM */)) * (jacobian->seedVars[3] /* body.z_a.SeedLSJac0[3] SEED_VAR */) + ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) * (jacobian->tmpVars[2] /* body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) * (jacobian->tmpVars[9] /* body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */));
  TRACE_POP
}

/*
equation index: 1351
type: SIMPLE_ASSIGN
revolute.frame_b.t.$pDERLSJac0.dummyVarLSJac0[3] = (-bodyBox.frame_a.t.$pDERLSJac0.dummyVarLSJac0[3]) - body.frame_a.t.$pDERLSJac0.dummyVarLSJac0[3]
*/
void BuildingCase3_eqFunction_1351(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,1351};
  jacobian->tmpVars[17] /* revolute.frame_b.t.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[8] /* bodyBox.frame_a.t.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */) - jacobian->tmpVars[10] /* body.frame_a.t.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1352
type: SIMPLE_ASSIGN
body.frame_a.t.$pDERLSJac0.dummyVarLSJac0[1] = body.I[1,1] * body.z_a.SeedLSJac0[1] + body.I[1,2] * body.z_a.SeedLSJac0[2] + body.I[1,3] * body.z_a.SeedLSJac0[3] + body.r_CM[2] * body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[3] - body.r_CM[3] * body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[2]
*/
void BuildingCase3_eqFunction_1352(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,1352};
  jacobian->tmpVars[14] /* body.frame_a.t.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[52] /* body.I[1,1] PARAM */)) * (jacobian->seedVars[2] /* body.z_a.SeedLSJac0[1] SEED_VAR */) + ((data->simulationInfo->realParameter[53] /* body.I[1,2] PARAM */)) * (jacobian->seedVars[0] /* body.z_a.SeedLSJac0[2] SEED_VAR */) + ((data->simulationInfo->realParameter[54] /* body.I[1,3] PARAM */)) * (jacobian->seedVars[3] /* body.z_a.SeedLSJac0[3] SEED_VAR */) + ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) * (jacobian->tmpVars[12] /* body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) * (jacobian->tmpVars[2] /* body.frame_a.f.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */));
  TRACE_POP
}

/*
equation index: 1353
type: SIMPLE_ASSIGN
revolute.frame_b.t.$pDERLSJac0.dummyVarLSJac0[1] = (-bodyBox.frame_a.t.$pDERLSJac0.dummyVarLSJac0[1]) - body.frame_a.t.$pDERLSJac0.dummyVarLSJac0[1]
*/
void BuildingCase3_eqFunction_1353(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,1353};
  jacobian->tmpVars[15] /* revolute.frame_b.t.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[7] /* bodyBox.frame_a.t.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */) - jacobian->tmpVars[14] /* body.frame_a.t.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1354
type: SIMPLE_ASSIGN
revolute.tau.$pDERLSJac0.dummyVarLSJac0 = (-revolute.frame_b.t.$pDERLSJac0.dummyVarLSJac0[3]) * revolute.e[3] - revolute.frame_b.t.$pDERLSJac0.dummyVarLSJac0[1] * revolute.e[1] - revolute.frame_b.t.$pDERLSJac0.dummyVarLSJac0[2] * revolute.e[2]
*/
void BuildingCase3_eqFunction_1354(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,1354};
  jacobian->tmpVars[19] /* revolute.tau.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */ = ((-jacobian->tmpVars[17] /* revolute.frame_b.t.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_TMP_VAR */)) * ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) - ((jacobian->tmpVars[15] /* revolute.frame_b.t.$pDERLSJac0.dummyVarLSJac0[1] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */))) - ((jacobian->tmpVars[18] /* revolute.frame_b.t.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)));
  TRACE_POP
}

/*
equation index: 1355
type: SIMPLE_ASSIGN
inertia.flange_a.tau.$pDERLSJac0.dummyVarLSJac0 = (-idealGearR2T.flangeR.tau.$pDERLSJac0.dummyVarLSJac0) - revolute.tau.$pDERLSJac0.dummyVarLSJac0
*/
void BuildingCase3_eqFunction_1355(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,1355};
  jacobian->tmpVars[24] /* inertia.flange_a.tau.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[23] /* idealGearR2T.flangeR.tau.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[19] /* revolute.tau.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1356
type: SIMPLE_ASSIGN
inertia.a.$pDERLSJac0.dummyVarLSJac0 = inertia.flange_a.tau.$pDERLSJac0.dummyVarLSJac0 / inertia.J
*/
void BuildingCase3_eqFunction_1356(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,1356};
  jacobian->tmpVars[25] /* inertia.a.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[24] /* inertia.flange_a.tau.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[309] /* inertia.J PARAM */),"inertia.J");
  TRACE_POP
}

/*
equation index: 1357
type: SIMPLE_ASSIGN
$DER.revolute.R_rel.w.$pDERLSJac0.dummyVarLSJac0[2] = revolute.e[2] * inertia.a.$pDERLSJac0.dummyVarLSJac0
*/
void BuildingCase3_eqFunction_1357(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 24;
  const int equationIndexes[2] = {1,1357};
  jacobian->tmpVars[26] /* der(revolute.R_rel.w.$pDERLSJac0.dummyVarLSJac0[2]) JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) * (jacobian->tmpVars[25] /* inertia.a.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */);
  TRACE_POP
}

/*
equation index: 1358
type: SIMPLE_ASSIGN
$res_LSJac0_4.$pDERLSJac0.dummyVarLSJac0 = $DER.revolute.R_rel.w.$pDERLSJac0.dummyVarLSJac0[2] - body.z_a.SeedLSJac0[2]
*/
void BuildingCase3_eqFunction_1358(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 25;
  const int equationIndexes[2] = {1,1358};
  jacobian->resultVars[3] /* $res_LSJac0_4.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[26] /* der(revolute.R_rel.w.$pDERLSJac0.dummyVarLSJac0[2]) JACOBIAN_TMP_VAR */ - jacobian->seedVars[0] /* body.z_a.SeedLSJac0[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1359
type: SIMPLE_ASSIGN
prismatic.a.$pDERLSJac0.dummyVarLSJac0 = inertia.a.$pDERLSJac0.dummyVarLSJac0 / idealGearR2T.ratio
*/
void BuildingCase3_eqFunction_1359(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 26;
  const int equationIndexes[2] = {1,1359};
  jacobian->tmpVars[27] /* prismatic.a.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[25] /* inertia.a.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[308] /* idealGearR2T.ratio PARAM */),"idealGearR2T.ratio");
  TRACE_POP
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
$DER.$DER.prismatic.frame_a.r_0.$pDERLSJac0.dummyVarLSJac0[2] = bodyBox.a_0.SeedLSJac0[2] - prismatic.a.$pDERLSJac0.dummyVarLSJac0
*/
void BuildingCase3_eqFunction_1360(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 27;
  const int equationIndexes[2] = {1,1360};
  jacobian->tmpVars[28] /* der(der(prismatic.frame_a.r_0.$pDERLSJac0.dummyVarLSJac0[2])) JACOBIAN_TMP_VAR */ = jacobian->seedVars[1] /* bodyBox.a_0.SeedLSJac0[2] SEED_VAR */ - jacobian->tmpVars[27] /* prismatic.a.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1361
type: SIMPLE_ASSIGN
$res_LSJac0_3.$pDERLSJac0.dummyVarLSJac0 = body1.a_0.$pDERLSJac0.dummyVarLSJac0[2] - $DER.$DER.prismatic.frame_a.r_0.$pDERLSJac0.dummyVarLSJac0[2]
*/
void BuildingCase3_eqFunction_1361(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 28;
  const int equationIndexes[2] = {1,1361};
  jacobian->resultVars[2] /* $res_LSJac0_3.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[30] /* body1.a_0.$pDERLSJac0.dummyVarLSJac0[2] JACOBIAN_TMP_VAR */ - jacobian->tmpVars[28] /* der(der(prismatic.frame_a.r_0.$pDERLSJac0.dummyVarLSJac0[2])) JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1362
type: SIMPLE_ASSIGN
$res_LSJac0_1.$pDERLSJac0.dummyVarLSJac0 = revolute.e[1] * inertia.a.$pDERLSJac0.dummyVarLSJac0 - body.z_a.SeedLSJac0[1]
*/
void BuildingCase3_eqFunction_1362(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 29;
  const int equationIndexes[2] = {1,1362};
  jacobian->resultVars[0] /* $res_LSJac0_1.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) * (jacobian->tmpVars[25] /* inertia.a.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */) - jacobian->seedVars[2] /* body.z_a.SeedLSJac0[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1363
type: SIMPLE_ASSIGN
$res_LSJac0_2.$pDERLSJac0.dummyVarLSJac0 = revolute.e[3] * inertia.a.$pDERLSJac0.dummyVarLSJac0 - body.z_a.SeedLSJac0[3]
*/
void BuildingCase3_eqFunction_1363(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 30;
  const int equationIndexes[2] = {1,1363};
  jacobian->resultVars[1] /* $res_LSJac0_2.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) * (jacobian->tmpVars[25] /* inertia.a.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_TMP_VAR */) - jacobian->seedVars[3] /* body.z_a.SeedLSJac0[3] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int BuildingCase3_functionJacLSJac0_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = BuildingCase3_INDEX_JAC_LSJac0;
  
  TRACE_POP
  return 0;
}

int BuildingCase3_functionJacLSJac0_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = BuildingCase3_INDEX_JAC_LSJac0;
  BuildingCase3_eqFunction_1333(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1334(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1335(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1336(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1337(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1338(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1339(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1340(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1341(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1342(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1343(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1344(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1345(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1346(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1347(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1348(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1349(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1350(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1351(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1352(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1353(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1354(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1355(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1356(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1357(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1358(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1359(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1360(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1361(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1362(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1363(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1635
type: SIMPLE_ASSIGN
bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[2] = bodyBox.frame_b.R.T[2,2] * bodyBox.a_0.SeedLSJac1[2] * bodyBox.body.m
*/
void BuildingCase3_eqFunction_1635(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1635};
  jacobian->tmpVars[16] /* bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */ = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * ((jacobian->seedVars[0] /* bodyBox.a_0.SeedLSJac1[2] SEED_VAR */) * ((data->simulationInfo->realParameter[229] /* bodyBox.body.m PARAM */)));
  TRACE_POP
}

/*
equation index: 1636
type: SIMPLE_ASSIGN
inertia.a.$pDERLSJac1.dummyVarLSJac1 = body.z_a.SeedLSJac1[2] / revolute.e[2]
*/
void BuildingCase3_eqFunction_1636(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1636};
  jacobian->tmpVars[0] /* inertia.a.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->seedVars[1] /* body.z_a.SeedLSJac1[2] SEED_VAR */,(data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */),"revolute.e[2]");
  TRACE_POP
}

/*
equation index: 1637
type: SIMPLE_ASSIGN
body.z_a.$pDERLSJac1.dummyVarLSJac1[3] = revolute.e[3] * inertia.a.$pDERLSJac1.dummyVarLSJac1
*/
void BuildingCase3_eqFunction_1637(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,1637};
  jacobian->tmpVars[1] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) * (jacobian->tmpVars[0] /* inertia.a.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */);
  TRACE_POP
}

/*
equation index: 1638
type: SIMPLE_ASSIGN
body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[1] = (bodyBox.frame_b.R.T[1,2] * bodyBox.a_0.SeedLSJac1[2] + body.z_a.SeedLSJac1[2] * body.r_CM[3] - body.z_a.$pDERLSJac1.dummyVarLSJac1[3] * body.r_CM[2]) * body.m
*/
void BuildingCase3_eqFunction_1638(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,1638};
  jacobian->tmpVars[6] /* body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */ = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * (jacobian->seedVars[0] /* bodyBox.a_0.SeedLSJac1[2] SEED_VAR */) + (jacobian->seedVars[1] /* body.z_a.SeedLSJac1[2] SEED_VAR */) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) - ((jacobian->tmpVars[1] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)))) * ((data->simulationInfo->realParameter[93] /* body.m PARAM */));
  TRACE_POP
}

/*
equation index: 1639
type: SIMPLE_ASSIGN
bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[1] = (bodyBox.frame_b.R.T[1,2] * bodyBox.a_0.SeedLSJac1[2] - body.z_a.$pDERLSJac1.dummyVarLSJac1[3] * bodyBox.body.r_CM[2]) * bodyBox.body.m
*/
void BuildingCase3_eqFunction_1639(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,1639};
  jacobian->tmpVars[12] /* bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */ = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * (jacobian->seedVars[0] /* bodyBox.a_0.SeedLSJac1[2] SEED_VAR */) - ((jacobian->tmpVars[1] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)))) * ((data->simulationInfo->realParameter[229] /* bodyBox.body.m PARAM */));
  TRACE_POP
}

/*
equation index: 1640
type: SIMPLE_ASSIGN
revolute.frame_b.f.$pDERLSJac1.dummyVarLSJac1[1] = (-bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[1]) - body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[1]
*/
void BuildingCase3_eqFunction_1640(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,1640};
  jacobian->tmpVars[19] /* revolute.frame_b.f.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[12] /* bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */) - jacobian->tmpVars[6] /* body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1641
type: SIMPLE_ASSIGN
body.z_a.$pDERLSJac1.dummyVarLSJac1[1] = revolute.e[1] * inertia.a.$pDERLSJac1.dummyVarLSJac1
*/
void BuildingCase3_eqFunction_1641(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,1641};
  jacobian->tmpVars[2] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) * (jacobian->tmpVars[0] /* inertia.a.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */);
  TRACE_POP
}

/*
equation index: 1642
type: SIMPLE_ASSIGN
bodyBox.frame_a.t.$pDERLSJac1.dummyVarLSJac1[2] = bodyBox.body.I[2,1] * body.z_a.$pDERLSJac1.dummyVarLSJac1[1] + bodyBox.body.I[2,2] * body.z_a.SeedLSJac1[2] + bodyBox.body.I[2,3] * body.z_a.$pDERLSJac1.dummyVarLSJac1[3]
*/
void BuildingCase3_eqFunction_1642(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,1642};
  jacobian->tmpVars[3] /* bodyBox.frame_a.t.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[197] /* bodyBox.body.I[2,1] PARAM */)) * (jacobian->tmpVars[2] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */) + ((data->simulationInfo->realParameter[198] /* bodyBox.body.I[2,2] PARAM */)) * (jacobian->seedVars[1] /* body.z_a.SeedLSJac1[2] SEED_VAR */) + ((data->simulationInfo->realParameter[199] /* bodyBox.body.I[2,3] PARAM */)) * (jacobian->tmpVars[1] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */);
  TRACE_POP
}

/*
equation index: 1643
type: SIMPLE_ASSIGN
body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[2] = (bodyBox.frame_b.R.T[2,2] * bodyBox.a_0.SeedLSJac1[2] + body.z_a.$pDERLSJac1.dummyVarLSJac1[3] * body.r_CM[1] - body.z_a.$pDERLSJac1.dummyVarLSJac1[1] * body.r_CM[3]) * body.m
*/
void BuildingCase3_eqFunction_1643(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,1643};
  jacobian->tmpVars[7] /* body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */ = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * (jacobian->seedVars[0] /* bodyBox.a_0.SeedLSJac1[2] SEED_VAR */) + (jacobian->tmpVars[1] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) - ((jacobian->tmpVars[2] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)))) * ((data->simulationInfo->realParameter[93] /* body.m PARAM */));
  TRACE_POP
}

/*
equation index: 1644
type: SIMPLE_ASSIGN
revolute.frame_b.f.$pDERLSJac1.dummyVarLSJac1[2] = (-bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[2]) - body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[2]
*/
void BuildingCase3_eqFunction_1644(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,1644};
  jacobian->tmpVars[21] /* revolute.frame_b.f.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[16] /* bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */) - jacobian->tmpVars[7] /* body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1645
type: SIMPLE_ASSIGN
body.frame_a.t.$pDERLSJac1.dummyVarLSJac1[3] = body.I[3,1] * body.z_a.$pDERLSJac1.dummyVarLSJac1[1] + body.I[3,2] * body.z_a.SeedLSJac1[2] + body.I[3,3] * body.z_a.$pDERLSJac1.dummyVarLSJac1[3] + body.r_CM[1] * body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[2] - body.r_CM[2] * body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[1]
*/
void BuildingCase3_eqFunction_1645(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,1645};
  jacobian->tmpVars[8] /* body.frame_a.t.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[58] /* body.I[3,1] PARAM */)) * (jacobian->tmpVars[2] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */) + ((data->simulationInfo->realParameter[59] /* body.I[3,2] PARAM */)) * (jacobian->seedVars[1] /* body.z_a.SeedLSJac1[2] SEED_VAR */) + ((data->simulationInfo->realParameter[60] /* body.I[3,3] PARAM */)) * (jacobian->tmpVars[1] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */) + ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) * (jacobian->tmpVars[7] /* body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) * (jacobian->tmpVars[6] /* body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */));
  TRACE_POP
}

/*
equation index: 1646
type: SIMPLE_ASSIGN
body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[3] = (bodyBox.frame_b.R.T[3,2] * bodyBox.a_0.SeedLSJac1[2] + body.z_a.$pDERLSJac1.dummyVarLSJac1[1] * body.r_CM[2] - body.z_a.SeedLSJac1[2] * body.r_CM[1]) * body.m
*/
void BuildingCase3_eqFunction_1646(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,1646};
  jacobian->tmpVars[9] /* body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */ = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * (jacobian->seedVars[0] /* bodyBox.a_0.SeedLSJac1[2] SEED_VAR */) + (jacobian->tmpVars[2] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) - ((jacobian->seedVars[1] /* body.z_a.SeedLSJac1[2] SEED_VAR */) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)))) * ((data->simulationInfo->realParameter[93] /* body.m PARAM */));
  TRACE_POP
}

/*
equation index: 1647
type: SIMPLE_ASSIGN
body.frame_a.t.$pDERLSJac1.dummyVarLSJac1[2] = body.I[2,1] * body.z_a.$pDERLSJac1.dummyVarLSJac1[1] + body.I[2,2] * body.z_a.SeedLSJac1[2] + body.I[2,3] * body.z_a.$pDERLSJac1.dummyVarLSJac1[3] + body.r_CM[3] * body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[1] - body.r_CM[1] * body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[3]
*/
void BuildingCase3_eqFunction_1647(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,1647};
  jacobian->tmpVars[10] /* body.frame_a.t.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[55] /* body.I[2,1] PARAM */)) * (jacobian->tmpVars[2] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */) + ((data->simulationInfo->realParameter[56] /* body.I[2,2] PARAM */)) * (jacobian->seedVars[1] /* body.z_a.SeedLSJac1[2] SEED_VAR */) + ((data->simulationInfo->realParameter[57] /* body.I[2,3] PARAM */)) * (jacobian->tmpVars[1] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */) + ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) * (jacobian->tmpVars[6] /* body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) * (jacobian->tmpVars[9] /* body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */));
  TRACE_POP
}

/*
equation index: 1648
type: SIMPLE_ASSIGN
revolute.frame_b.t.$pDERLSJac1.dummyVarLSJac1[2] = (-bodyBox.frame_a.t.$pDERLSJac1.dummyVarLSJac1[2]) - body.frame_a.t.$pDERLSJac1.dummyVarLSJac1[2]
*/
void BuildingCase3_eqFunction_1648(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,1648};
  jacobian->tmpVars[18] /* revolute.frame_b.t.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[3] /* bodyBox.frame_a.t.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */) - jacobian->tmpVars[10] /* body.frame_a.t.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1649
type: SIMPLE_ASSIGN
body.frame_a.t.$pDERLSJac1.dummyVarLSJac1[1] = body.I[1,1] * body.z_a.$pDERLSJac1.dummyVarLSJac1[1] + body.I[1,2] * body.z_a.SeedLSJac1[2] + body.I[1,3] * body.z_a.$pDERLSJac1.dummyVarLSJac1[3] + body.r_CM[2] * body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[3] - body.r_CM[3] * body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[2]
*/
void BuildingCase3_eqFunction_1649(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,1649};
  jacobian->tmpVars[11] /* body.frame_a.t.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[52] /* body.I[1,1] PARAM */)) * (jacobian->tmpVars[2] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */) + ((data->simulationInfo->realParameter[53] /* body.I[1,2] PARAM */)) * (jacobian->seedVars[1] /* body.z_a.SeedLSJac1[2] SEED_VAR */) + ((data->simulationInfo->realParameter[54] /* body.I[1,3] PARAM */)) * (jacobian->tmpVars[1] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */) + ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) * (jacobian->tmpVars[9] /* body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) * (jacobian->tmpVars[7] /* body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */));
  TRACE_POP
}

/*
equation index: 1650
type: SIMPLE_ASSIGN
bodyBox.frame_a.t.$pDERLSJac1.dummyVarLSJac1[3] = bodyBox.body.I[3,1] * body.z_a.$pDERLSJac1.dummyVarLSJac1[1] + bodyBox.body.I[3,2] * body.z_a.SeedLSJac1[2] + bodyBox.body.I[3,3] * body.z_a.$pDERLSJac1.dummyVarLSJac1[3] - bodyBox.body.r_CM[2] * bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[1]
*/
void BuildingCase3_eqFunction_1650(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,1650};
  jacobian->tmpVars[13] /* bodyBox.frame_a.t.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[200] /* bodyBox.body.I[3,1] PARAM */)) * (jacobian->tmpVars[2] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */) + ((data->simulationInfo->realParameter[201] /* bodyBox.body.I[3,2] PARAM */)) * (jacobian->seedVars[1] /* body.z_a.SeedLSJac1[2] SEED_VAR */) + ((data->simulationInfo->realParameter[202] /* bodyBox.body.I[3,3] PARAM */)) * (jacobian->tmpVars[1] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */) - (((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)) * (jacobian->tmpVars[12] /* bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */));
  TRACE_POP
}

/*
equation index: 1651
type: SIMPLE_ASSIGN
revolute.frame_b.t.$pDERLSJac1.dummyVarLSJac1[3] = (-bodyBox.frame_a.t.$pDERLSJac1.dummyVarLSJac1[3]) - body.frame_a.t.$pDERLSJac1.dummyVarLSJac1[3]
*/
void BuildingCase3_eqFunction_1651(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,1651};
  jacobian->tmpVars[20] /* revolute.frame_b.t.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[13] /* bodyBox.frame_a.t.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */) - jacobian->tmpVars[8] /* body.frame_a.t.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1652
type: SIMPLE_ASSIGN
bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[3] = (bodyBox.frame_b.R.T[3,2] * bodyBox.a_0.SeedLSJac1[2] + body.z_a.$pDERLSJac1.dummyVarLSJac1[1] * bodyBox.body.r_CM[2]) * bodyBox.body.m
*/
void BuildingCase3_eqFunction_1652(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,1652};
  jacobian->tmpVars[14] /* bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */ = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * (jacobian->seedVars[0] /* bodyBox.a_0.SeedLSJac1[2] SEED_VAR */) + (jacobian->tmpVars[2] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */))) * ((data->simulationInfo->realParameter[229] /* bodyBox.body.m PARAM */));
  TRACE_POP
}

/*
equation index: 1653
type: SIMPLE_ASSIGN
revolute.frame_b.f.$pDERLSJac1.dummyVarLSJac1[3] = (-bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[3]) - body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[3]
*/
void BuildingCase3_eqFunction_1653(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,1653};
  jacobian->tmpVars[17] /* revolute.frame_b.f.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[14] /* bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */) - jacobian->tmpVars[9] /* body.frame_a.f.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1654
type: SIMPLE_ASSIGN
prismatic.f.$pDERLSJac1.dummyVarLSJac1 = (-bodyBox.frame_b.R.T[3,2]) * revolute.frame_b.f.$pDERLSJac1.dummyVarLSJac1[3] - bodyBox.frame_b.R.T[1,2] * revolute.frame_b.f.$pDERLSJac1.dummyVarLSJac1[1] - bodyBox.frame_b.R.T[2,2] * revolute.frame_b.f.$pDERLSJac1.dummyVarLSJac1[2]
*/
void BuildingCase3_eqFunction_1654(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,1654};
  jacobian->tmpVars[22] /* prismatic.f.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */ = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */))) * (jacobian->tmpVars[17] /* revolute.frame_b.f.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * (jacobian->tmpVars[19] /* revolute.frame_b.f.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * (jacobian->tmpVars[21] /* revolute.frame_b.f.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */));
  TRACE_POP
}

/*
equation index: 1655
type: SIMPLE_ASSIGN
body1.a_0.$pDERLSJac1.dummyVarLSJac1[2] = (-prismatic.f.$pDERLSJac1.dummyVarLSJac1) / body1.m
*/
void BuildingCase3_eqFunction_1655(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,1655};
  jacobian->tmpVars[28] /* body1.a_0.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */ = DIVISION((-jacobian->tmpVars[22] /* prismatic.f.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */),(data->simulationInfo->realParameter[152] /* body1.m PARAM */),"body1.m");
  TRACE_POP
}

/*
equation index: 1656
type: SIMPLE_ASSIGN
bodyBox.frame_a.t.$pDERLSJac1.dummyVarLSJac1[1] = bodyBox.body.I[1,1] * body.z_a.$pDERLSJac1.dummyVarLSJac1[1] + bodyBox.body.I[1,2] * body.z_a.SeedLSJac1[2] + bodyBox.body.I[1,3] * body.z_a.$pDERLSJac1.dummyVarLSJac1[3] + bodyBox.body.r_CM[2] * bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[3]
*/
void BuildingCase3_eqFunction_1656(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,1656};
  jacobian->tmpVars[15] /* bodyBox.frame_a.t.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[194] /* bodyBox.body.I[1,1] PARAM */)) * (jacobian->tmpVars[2] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */) + ((data->simulationInfo->realParameter[195] /* bodyBox.body.I[1,2] PARAM */)) * (jacobian->seedVars[1] /* body.z_a.SeedLSJac1[2] SEED_VAR */) + ((data->simulationInfo->realParameter[196] /* bodyBox.body.I[1,3] PARAM */)) * (jacobian->tmpVars[1] /* body.z_a.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */) + ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)) * (jacobian->tmpVars[14] /* bodyBox.frame_a.f.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */);
  TRACE_POP
}

/*
equation index: 1657
type: SIMPLE_ASSIGN
revolute.frame_b.t.$pDERLSJac1.dummyVarLSJac1[1] = (-bodyBox.frame_a.t.$pDERLSJac1.dummyVarLSJac1[1]) - body.frame_a.t.$pDERLSJac1.dummyVarLSJac1[1]
*/
void BuildingCase3_eqFunction_1657(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,1657};
  jacobian->tmpVars[23] /* revolute.frame_b.t.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[15] /* bodyBox.frame_a.t.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */) - jacobian->tmpVars[11] /* body.frame_a.t.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1658
type: SIMPLE_ASSIGN
revolute.tau.$pDERLSJac1.dummyVarLSJac1 = (-revolute.frame_b.t.$pDERLSJac1.dummyVarLSJac1[3]) * revolute.e[3] - revolute.frame_b.t.$pDERLSJac1.dummyVarLSJac1[1] * revolute.e[1] - revolute.frame_b.t.$pDERLSJac1.dummyVarLSJac1[2] * revolute.e[2]
*/
void BuildingCase3_eqFunction_1658(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,1658};
  jacobian->tmpVars[24] /* revolute.tau.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */ = ((-jacobian->tmpVars[20] /* revolute.frame_b.t.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_TMP_VAR */)) * ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) - ((jacobian->tmpVars[23] /* revolute.frame_b.t.$pDERLSJac1.dummyVarLSJac1[1] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */))) - ((jacobian->tmpVars[18] /* revolute.frame_b.t.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */) * ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)));
  TRACE_POP
}

/*
equation index: 1659
type: SIMPLE_ASSIGN
prismatic.a.$pDERLSJac1.dummyVarLSJac1 = inertia.a.$pDERLSJac1.dummyVarLSJac1 / idealGearR2T.ratio
*/
void BuildingCase3_eqFunction_1659(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 24;
  const int equationIndexes[2] = {1,1659};
  jacobian->tmpVars[4] /* prismatic.a.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */ = DIVISION(jacobian->tmpVars[0] /* inertia.a.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */,(data->simulationInfo->realParameter[308] /* idealGearR2T.ratio PARAM */),"idealGearR2T.ratio");
  TRACE_POP
}

/*
equation index: 1660
type: SIMPLE_ASSIGN
$res_LSJac1_1.$pDERLSJac1.dummyVarLSJac1 = prismatic.a.$pDERLSJac1.dummyVarLSJac1 + body1.a_0.$pDERLSJac1.dummyVarLSJac1[2] - bodyBox.a_0.SeedLSJac1[2]
*/
void BuildingCase3_eqFunction_1660(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 25;
  const int equationIndexes[2] = {1,1660};
  jacobian->resultVars[0] /* $res_LSJac1_1.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[4] /* prismatic.a.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[28] /* body1.a_0.$pDERLSJac1.dummyVarLSJac1[2] JACOBIAN_TMP_VAR */ - jacobian->seedVars[0] /* bodyBox.a_0.SeedLSJac1[2] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1661
type: SIMPLE_ASSIGN
inertia.flange_a.tau.$pDERLSJac1.dummyVarLSJac1 = inertia.J * inertia.a.$pDERLSJac1.dummyVarLSJac1
*/
void BuildingCase3_eqFunction_1661(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 26;
  const int equationIndexes[2] = {1,1661};
  jacobian->tmpVars[5] /* inertia.flange_a.tau.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */ = ((data->simulationInfo->realParameter[309] /* inertia.J PARAM */)) * (jacobian->tmpVars[0] /* inertia.a.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */);
  TRACE_POP
}

/*
equation index: 1662
type: SIMPLE_ASSIGN
idealGearR2T.flangeR.tau.$pDERLSJac1.dummyVarLSJac1 = (-inertia.flange_a.tau.$pDERLSJac1.dummyVarLSJac1) - revolute.tau.$pDERLSJac1.dummyVarLSJac1
*/
void BuildingCase3_eqFunction_1662(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 27;
  const int equationIndexes[2] = {1,1662};
  jacobian->tmpVars[25] /* idealGearR2T.flangeR.tau.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */ = (-jacobian->tmpVars[5] /* inertia.flange_a.tau.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */) - jacobian->tmpVars[24] /* revolute.tau.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

/*
equation index: 1663
type: SIMPLE_ASSIGN
idealGearR2T.flangeT.f.$pDERLSJac1.dummyVarLSJac1 = (-idealGearR2T.ratio) * idealGearR2T.flangeR.tau.$pDERLSJac1.dummyVarLSJac1
*/
void BuildingCase3_eqFunction_1663(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 28;
  const int equationIndexes[2] = {1,1663};
  jacobian->tmpVars[26] /* idealGearR2T.flangeT.f.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */ = ((-(data->simulationInfo->realParameter[308] /* idealGearR2T.ratio PARAM */))) * (jacobian->tmpVars[25] /* idealGearR2T.flangeR.tau.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */);
  TRACE_POP
}

/*
equation index: 1664
type: SIMPLE_ASSIGN
$res_LSJac1_2.$pDERLSJac1.dummyVarLSJac1 = idealGearR2T.flangeT.f.$pDERLSJac1.dummyVarLSJac1 + prismatic.f.$pDERLSJac1.dummyVarLSJac1
*/
void BuildingCase3_eqFunction_1664(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 29;
  const int equationIndexes[2] = {1,1664};
  jacobian->resultVars[1] /* $res_LSJac1_2.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[26] /* idealGearR2T.flangeT.f.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */ + jacobian->tmpVars[22] /* prismatic.f.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_TMP_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int BuildingCase3_functionJacLSJac1_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = BuildingCase3_INDEX_JAC_LSJac1;
  
  TRACE_POP
  return 0;
}

int BuildingCase3_functionJacLSJac1_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = BuildingCase3_INDEX_JAC_LSJac1;
  BuildingCase3_eqFunction_1635(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1636(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1637(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1638(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1639(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1640(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1641(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1642(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1643(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1644(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1645(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1646(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1647(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1648(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1649(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1650(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1651(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1652(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1653(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1654(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1655(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1656(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1657(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1658(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1659(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1660(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1661(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1662(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1663(data, threadData, jacobian, parentJacobian);
  BuildingCase3_eqFunction_1664(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int BuildingCase3_functionJacH_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int BuildingCase3_functionJacF_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int BuildingCase3_functionJacD_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int BuildingCase3_functionJacC_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int BuildingCase3_functionJacB_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int BuildingCase3_functionJacA_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = BuildingCase3_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}

int BuildingCase3_functionJacA_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = BuildingCase3_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int BuildingCase3_initialAnalyticJacobianLSJac0(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "BuildingCase3_JacLSJac0.bin");
  
  initAnalyticJacobian(jacobian, 4, 4, 35, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(4, 16, 4);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 4+1, pFile, FALSE);
  if (count != 4+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 4+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 16, pFile, FALSE);
  if (count != 16) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 16, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 4);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 4);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1, 4);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1, 4);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int BuildingCase3_initialAnalyticJacobianLSJac1(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "BuildingCase3_JacLSJac1.bin");
  
  initAnalyticJacobian(jacobian, 2, 2, 31, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(2, 4, 2);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 2+1, pFile, FALSE);
  if (count != 2+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 2+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 4, pFile, FALSE);
  if (count != 4) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 4, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 2);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 2);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}
int BuildingCase3_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int BuildingCase3_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int BuildingCase3_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int BuildingCase3_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int BuildingCase3_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int BuildingCase3_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "BuildingCase3_JacA.bin");
  
  initAnalyticJacobian(jacobian, 4, 4, 0, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(4, 8, 3);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 4+1, pFile, FALSE);
  if (count != 4+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 4+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 8, pFile, FALSE);
  if (count != 8) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 8, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 4);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1, 4);
  /* color 3 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 2, 4);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}



