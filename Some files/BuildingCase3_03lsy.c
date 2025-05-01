/* Linear Systems */
#include "BuildingCase3_model.h"
#include "BuildingCase3_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 1604
type: SIMPLE_ASSIGN
inertia.a = body.z_a[2] / revolute.e[2]
*/
void BuildingCase3_eqFunction_1604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1604};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* inertia.a variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */),(data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */),"revolute.e[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1605
type: SIMPLE_ASSIGN
body.z_a[3] = revolute.e[3] * inertia.a
*/
void BuildingCase3_eqFunction_1605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1605};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */) = ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* inertia.a variable */));
  TRACE_POP
}
/*
equation index: 1606
type: SIMPLE_ASSIGN
body.z_a[1] = revolute.e[1] * inertia.a
*/
void BuildingCase3_eqFunction_1606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */) = ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* inertia.a variable */));
  TRACE_POP
}
/*
equation index: 1607
type: SIMPLE_ASSIGN
bodyBox.frame_a.t[2] = bodyBox.body.I[2,1] * body.z_a[1] + bodyBox.body.I[2,2] * body.z_a[2] + bodyBox.body.I[2,3] * body.z_a[3] + body.w_a[3] * (bodyBox.body.I[1,1] * body.w_a[1] + bodyBox.body.I[1,2] * body.w_a[2] + bodyBox.body.I[1,3] * body.w_a[3]) - body.w_a[1] * (bodyBox.body.I[3,1] * body.w_a[1] + bodyBox.body.I[3,2] * body.w_a[2] + bodyBox.body.I[3,3] * body.w_a[3])
*/
void BuildingCase3_eqFunction_1607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1607};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* bodyBox.frame_a.t[2] variable */) = ((data->simulationInfo->realParameter[197] /* bodyBox.body.I[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) + ((data->simulationInfo->realParameter[198] /* bodyBox.body.I[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) + ((data->simulationInfo->realParameter[199] /* bodyBox.body.I[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[194] /* bodyBox.body.I[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[195] /* bodyBox.body.I[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[196] /* bodyBox.body.I[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[200] /* bodyBox.body.I[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[201] /* bodyBox.body.I[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[202] /* bodyBox.body.I[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
/*
equation index: 1608
type: SIMPLE_ASSIGN
prismatic.a = inertia.a / idealGearR2T.ratio
*/
void BuildingCase3_eqFunction_1608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1608};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* prismatic.a variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* inertia.a variable */),(data->simulationInfo->realParameter[308] /* idealGearR2T.ratio PARAM */),"idealGearR2T.ratio",equationIndexes);
  TRACE_POP
}
/*
equation index: 1609
type: SIMPLE_ASSIGN
inertia.flange_a.tau = inertia.J * inertia.a
*/
void BuildingCase3_eqFunction_1609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1609};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* inertia.flange_a.tau variable */) = ((data->simulationInfo->realParameter[309] /* inertia.J PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* inertia.a variable */));
  TRACE_POP
}
/*
equation index: 1610
type: SIMPLE_ASSIGN
body.frame_a.f[1] = (bodyBox.frame_b.R.T[1,2] * bodyBox.a_0[2] + body.z_a[2] * body.r_CM[3] + body.w_a[2] * (body.w_a[1] * body.r_CM[2] - body.w_a[2] * body.r_CM[1]) + body.w_a[3] * (body.w_a[1] * body.r_CM[3] - body.w_a[3] * body.r_CM[1]) - body.z_a[3] * body.r_CM[2]) * body.m
*/
void BuildingCase3_eqFunction_1610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* body.frame_a.f[1] variable */) = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)))) * ((data->simulationInfo->realParameter[93] /* body.m PARAM */));
  TRACE_POP
}
/*
equation index: 1611
type: SIMPLE_ASSIGN
body.frame_a.f[2] = (bodyBox.frame_b.R.T[2,2] * bodyBox.a_0[2] + body.z_a[3] * body.r_CM[1] + body.w_a[3] * (body.w_a[2] * body.r_CM[3] - body.w_a[3] * body.r_CM[2]) + body.w_a[1] * (body.w_a[2] * body.r_CM[1] - body.w_a[1] * body.r_CM[2]) - body.z_a[1] * body.r_CM[3]) * body.m
*/
void BuildingCase3_eqFunction_1611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* body.frame_a.f[2] variable */) = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)))) * ((data->simulationInfo->realParameter[93] /* body.m PARAM */));
  TRACE_POP
}
/*
equation index: 1612
type: SIMPLE_ASSIGN
body.frame_a.t[3] = body.I[3,1] * body.z_a[1] + body.I[3,2] * body.z_a[2] + body.I[3,3] * body.z_a[3] + body.w_a[1] * (body.I[2,1] * body.w_a[1] + body.I[2,2] * body.w_a[2] + body.I[2,3] * body.w_a[3]) + body.r_CM[1] * body.frame_a.f[2] - body.r_CM[2] * body.frame_a.f[1] - body.w_a[2] * (body.I[1,1] * body.w_a[1] + body.I[1,2] * body.w_a[2] + body.I[1,3] * body.w_a[3])
*/
void BuildingCase3_eqFunction_1612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* body.frame_a.t[3] variable */) = ((data->simulationInfo->realParameter[58] /* body.I[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) + ((data->simulationInfo->realParameter[59] /* body.I[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) + ((data->simulationInfo->realParameter[60] /* body.I[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[55] /* body.I[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[56] /* body.I[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[57] /* body.I[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))) + ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* body.frame_a.f[2] variable */)) - (((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* body.frame_a.f[1] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[52] /* body.I[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[53] /* body.I[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[54] /* body.I[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
/*
equation index: 1613
type: SIMPLE_ASSIGN
body.frame_a.f[3] = (bodyBox.frame_b.R.T[3,2] * bodyBox.a_0[2] + body.z_a[1] * body.r_CM[2] + body.w_a[1] * (body.w_a[3] * body.r_CM[1] - body.w_a[1] * body.r_CM[3]) + body.w_a[2] * (body.w_a[3] * body.r_CM[2] - body.w_a[2] * body.r_CM[3]) - body.z_a[2] * body.r_CM[1]) * body.m
*/
void BuildingCase3_eqFunction_1613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1613};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* body.frame_a.f[3] variable */) = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)))) * ((data->simulationInfo->realParameter[93] /* body.m PARAM */));
  TRACE_POP
}
/*
equation index: 1614
type: SIMPLE_ASSIGN
body.frame_a.t[2] = body.I[2,1] * body.z_a[1] + body.I[2,2] * body.z_a[2] + body.I[2,3] * body.z_a[3] + body.w_a[3] * (body.I[1,1] * body.w_a[1] + body.I[1,2] * body.w_a[2] + body.I[1,3] * body.w_a[3]) + body.r_CM[3] * body.frame_a.f[1] - body.r_CM[1] * body.frame_a.f[3] - body.w_a[1] * (body.I[3,1] * body.w_a[1] + body.I[3,2] * body.w_a[2] + body.I[3,3] * body.w_a[3])
*/
void BuildingCase3_eqFunction_1614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1614};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* body.frame_a.t[2] variable */) = ((data->simulationInfo->realParameter[55] /* body.I[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) + ((data->simulationInfo->realParameter[56] /* body.I[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) + ((data->simulationInfo->realParameter[57] /* body.I[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[52] /* body.I[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[53] /* body.I[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[54] /* body.I[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))) + ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* body.frame_a.f[1] variable */)) - (((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* body.frame_a.f[3] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[58] /* body.I[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[59] /* body.I[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[60] /* body.I[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
/*
equation index: 1615
type: SIMPLE_ASSIGN
body.frame_a.t[1] = body.I[1,1] * body.z_a[1] + body.I[1,2] * body.z_a[2] + body.I[1,3] * body.z_a[3] + body.w_a[2] * (body.I[3,1] * body.w_a[1] + body.I[3,2] * body.w_a[2] + body.I[3,3] * body.w_a[3]) + body.r_CM[2] * body.frame_a.f[3] - body.r_CM[3] * body.frame_a.f[2] - body.w_a[3] * (body.I[2,1] * body.w_a[1] + body.I[2,2] * body.w_a[2] + body.I[2,3] * body.w_a[3])
*/
void BuildingCase3_eqFunction_1615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1615};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* body.frame_a.t[1] variable */) = ((data->simulationInfo->realParameter[52] /* body.I[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) + ((data->simulationInfo->realParameter[53] /* body.I[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) + ((data->simulationInfo->realParameter[54] /* body.I[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[58] /* body.I[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[59] /* body.I[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[60] /* body.I[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))) + ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* body.frame_a.f[3] variable */)) - (((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* body.frame_a.f[2] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[55] /* body.I[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[56] /* body.I[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[57] /* body.I[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
/*
equation index: 1616
type: SIMPLE_ASSIGN
bodyBox.frame_a.f[1] = (bodyBox.frame_b.R.T[1,2] * bodyBox.a_0[2] + body.w_a[2] * body.w_a[1] * bodyBox.body.r_CM[2] - body.z_a[3] * bodyBox.body.r_CM[2]) * bodyBox.body.m
*/
void BuildingCase3_eqFunction_1616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1616};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* bodyBox.frame_a.f[1] variable */) = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) * ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)))) * ((data->simulationInfo->realParameter[229] /* bodyBox.body.m PARAM */));
  TRACE_POP
}
/*
equation index: 1617
type: SIMPLE_ASSIGN
bodyBox.frame_a.t[3] = bodyBox.body.I[3,1] * body.z_a[1] + bodyBox.body.I[3,2] * body.z_a[2] + bodyBox.body.I[3,3] * body.z_a[3] + body.w_a[1] * (bodyBox.body.I[2,1] * body.w_a[1] + bodyBox.body.I[2,2] * body.w_a[2] + bodyBox.body.I[2,3] * body.w_a[3]) + (-bodyBox.body.r_CM[2]) * bodyBox.frame_a.f[1] - body.w_a[2] * (bodyBox.body.I[1,1] * body.w_a[1] + bodyBox.body.I[1,2] * body.w_a[2] + bodyBox.body.I[1,3] * body.w_a[3])
*/
void BuildingCase3_eqFunction_1617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1617};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* bodyBox.frame_a.t[3] variable */) = ((data->simulationInfo->realParameter[200] /* bodyBox.body.I[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) + ((data->simulationInfo->realParameter[201] /* bodyBox.body.I[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) + ((data->simulationInfo->realParameter[202] /* bodyBox.body.I[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[197] /* bodyBox.body.I[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[198] /* bodyBox.body.I[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[199] /* bodyBox.body.I[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))) + ((-(data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* bodyBox.frame_a.f[1] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[194] /* bodyBox.body.I[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[195] /* bodyBox.body.I[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[196] /* bodyBox.body.I[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
/*
equation index: 1618
type: SIMPLE_ASSIGN
bodyBox.frame_a.f[3] = (bodyBox.frame_b.R.T[3,2] * bodyBox.a_0[2] + body.z_a[1] * bodyBox.body.r_CM[2] + body.w_a[2] * body.w_a[3] * bodyBox.body.r_CM[2]) * bodyBox.body.m
*/
void BuildingCase3_eqFunction_1618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1618};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* bodyBox.frame_a.f[3] variable */) = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) * ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)))) * ((data->simulationInfo->realParameter[229] /* bodyBox.body.m PARAM */));
  TRACE_POP
}
/*
equation index: 1619
type: SIMPLE_ASSIGN
bodyBox.frame_a.t[1] = bodyBox.body.I[1,1] * body.z_a[1] + bodyBox.body.I[1,2] * body.z_a[2] + bodyBox.body.I[1,3] * body.z_a[3] + body.w_a[2] * (bodyBox.body.I[3,1] * body.w_a[1] + bodyBox.body.I[3,2] * body.w_a[2] + bodyBox.body.I[3,3] * body.w_a[3]) + bodyBox.body.r_CM[2] * bodyBox.frame_a.f[3] - body.w_a[3] * (bodyBox.body.I[2,1] * body.w_a[1] + bodyBox.body.I[2,2] * body.w_a[2] + bodyBox.body.I[2,3] * body.w_a[3])
*/
void BuildingCase3_eqFunction_1619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1619};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[890]] /* bodyBox.frame_a.t[1] variable */) = ((data->simulationInfo->realParameter[194] /* bodyBox.body.I[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) + ((data->simulationInfo->realParameter[195] /* bodyBox.body.I[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) + ((data->simulationInfo->realParameter[196] /* bodyBox.body.I[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[200] /* bodyBox.body.I[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[201] /* bodyBox.body.I[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[202] /* bodyBox.body.I[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))) + ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* bodyBox.frame_a.f[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[197] /* bodyBox.body.I[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[198] /* bodyBox.body.I[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[199] /* bodyBox.body.I[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
/*
equation index: 1620
type: SIMPLE_ASSIGN
bodyBox.frame_a.f[2] = (bodyBox.frame_b.R.T[2,2] * bodyBox.a_0[2] + (-body.w_a[3]) * body.w_a[3] * bodyBox.body.r_CM[2] - bodyBox.body.r_CM[2] * body.w_a[1] ^ 2.0) * bodyBox.body.m
*/
void BuildingCase3_eqFunction_1620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1620};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[888]] /* bodyBox.frame_a.f[2] variable */) = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */))) - (((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)) * ((tmp0 * tmp0)))) * ((data->simulationInfo->realParameter[229] /* bodyBox.body.m PARAM */));
  TRACE_POP
}
/*
equation index: 1621
type: SIMPLE_ASSIGN
revolute.frame_b.f[3] = (-bodyBox.frame_a.f[3]) - body.frame_a.f[3]
*/
void BuildingCase3_eqFunction_1621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1621};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* revolute.frame_b.f[3] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* bodyBox.frame_a.f[3] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* body.frame_a.f[3] variable */);
  TRACE_POP
}
/*
equation index: 1622
type: SIMPLE_ASSIGN
revolute.frame_b.t[2] = (-bodyBox.frame_a.t[2]) - body.frame_a.t[2]
*/
void BuildingCase3_eqFunction_1622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1622};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* revolute.frame_b.t[2] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* bodyBox.frame_a.t[2] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* body.frame_a.t[2] variable */);
  TRACE_POP
}
/*
equation index: 1623
type: SIMPLE_ASSIGN
revolute.frame_b.f[1] = (-bodyBox.frame_a.f[1]) - body.frame_a.f[1]
*/
void BuildingCase3_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1623};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* revolute.frame_b.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* bodyBox.frame_a.f[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* body.frame_a.f[1] variable */);
  TRACE_POP
}
/*
equation index: 1624
type: SIMPLE_ASSIGN
revolute.frame_b.t[3] = (-bodyBox.frame_a.t[3]) - body.frame_a.t[3]
*/
void BuildingCase3_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* revolute.frame_b.t[3] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* bodyBox.frame_a.t[3] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* body.frame_a.t[3] variable */);
  TRACE_POP
}
/*
equation index: 1625
type: SIMPLE_ASSIGN
revolute.frame_b.f[2] = (-bodyBox.frame_a.f[2]) - body.frame_a.f[2]
*/
void BuildingCase3_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* revolute.frame_b.f[2] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[888]] /* bodyBox.frame_a.f[2] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* body.frame_a.f[2] variable */);
  TRACE_POP
}
/*
equation index: 1626
type: SIMPLE_ASSIGN
prismatic.f = (-bodyBox.frame_b.R.T[2,2]) * revolute.frame_b.f[2] - bodyBox.frame_b.R.T[3,2] * revolute.frame_b.f[3] - bodyBox.frame_b.R.T[1,2] * revolute.frame_b.f[1]
*/
void BuildingCase3_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1626};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* prismatic.f variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* revolute.frame_b.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* revolute.frame_b.f[3] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* revolute.frame_b.f[1] variable */)));
  TRACE_POP
}
/*
equation index: 1627
type: SIMPLE_ASSIGN
revolute.frame_b.t[1] = (-bodyBox.frame_a.t[1]) - body.frame_a.t[1]
*/
void BuildingCase3_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1627};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* revolute.frame_b.t[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[890]] /* bodyBox.frame_a.t[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* body.frame_a.t[1] variable */);
  TRACE_POP
}
/*
equation index: 1628
type: SIMPLE_ASSIGN
revolute.tau = (-revolute.frame_b.t[2]) * revolute.e[2] - revolute.frame_b.t[3] * revolute.e[3] - revolute.frame_b.t[1] * revolute.e[1]
*/
void BuildingCase3_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1628};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* revolute.tau variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* revolute.frame_b.t[2] variable */))) * ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* revolute.frame_b.t[3] variable */)) * ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* revolute.frame_b.t[1] variable */)) * ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)));
  TRACE_POP
}
/*
equation index: 1629
type: SIMPLE_ASSIGN
idealGearR2T.flangeR.tau = (-inertia.flange_a.tau) - revolute.tau
*/
void BuildingCase3_eqFunction_1629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1629};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* idealGearR2T.flangeR.tau variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* inertia.flange_a.tau variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* revolute.tau variable */);
  TRACE_POP
}
/*
equation index: 1630
type: SIMPLE_ASSIGN
idealGearR2T.flangeT.f = (-idealGearR2T.ratio) * idealGearR2T.flangeR.tau
*/
void BuildingCase3_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1630};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* idealGearR2T.flangeT.f variable */) = ((-(data->simulationInfo->realParameter[308] /* idealGearR2T.ratio PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* idealGearR2T.flangeR.tau variable */));
  TRACE_POP
}
/*
equation index: 1631
type: SIMPLE_ASSIGN
body1.frame_a.f[2] = sine1[2].y - (prismatic.f + spring.f)
*/
void BuildingCase3_eqFunction_1631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1631};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* body1.frame_a.f[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* sine1[2].y variable */) - ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* prismatic.f variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* spring.f variable */));
  TRACE_POP
}
/*
equation index: 1632
type: SIMPLE_ASSIGN
body1.a_0[2] = body1.frame_a.f[2] / body1.m
*/
void BuildingCase3_eqFunction_1632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1632};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* body1.a_0[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* body1.frame_a.f[2] variable */),(data->simulationInfo->realParameter[152] /* body1.m PARAM */),"body1.m",equationIndexes);
  TRACE_POP
}

void residualFunc1665(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1665};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */) = xloc[1];
  /* local constraints */
  BuildingCase3_eqFunction_1604(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1605(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1606(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1607(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1608(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1609(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1610(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1611(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1612(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1613(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1614(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1615(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1616(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1617(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1618(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1619(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1620(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1621(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1622(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1623(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1624(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1625(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1626(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1627(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1628(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1629(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1630(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1631(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1632(data, threadData);
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* prismatic.a variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* body1.a_0[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */);

  res[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* prismatic.f variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* springDamper.f variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* idealGearR2T.flangeT.f variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1665(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[2] = {
    851 /* bodyBox.a_0[2] */,
    795 /* body.z_a[2] */
  };
  for (int i = 0; i < 2; ++i) {
    linearSystemData->nominal[i] = data->modelData->realVarsData[indices[i]].attribute.nominal;
    linearSystemData->min[i]     = data->modelData->realVarsData[indices[i]].attribute.min;
    linearSystemData->max[i]     = data->modelData->realVarsData[indices[i]].attribute.max;
  }
}



/*
equation index: 1298
type: SIMPLE_ASSIGN
$DER.revolute.R_rel.w[3] = body.z_a[3]
*/
void BuildingCase3_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* der(revolute.R_rel.w[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 1299
type: SIMPLE_ASSIGN
$DER.revolute.R_rel.w[1] = body.z_a[1]
*/
void BuildingCase3_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* der(revolute.R_rel.w[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */);
  TRACE_POP
}
/*
equation index: 1300
type: SIMPLE_ASSIGN
body.frame_a.f[2] = (bodyBox.frame_b.R.T[2,1] * bodyBox.a_0[1] + bodyBox.frame_b.R.T[2,2] * bodyBox.a_0[2] + bodyBox.frame_b.R.T[2,3] * bodyBox.a_0[3] + body.z_a[3] * body.r_CM[1] + body.w_a[3] * (body.w_a[2] * body.r_CM[3] - body.w_a[3] * body.r_CM[2]) + body.w_a[1] * (body.w_a[2] * body.r_CM[1] - body.w_a[1] * body.r_CM[2]) - body.z_a[1] * body.r_CM[3]) * body.m
*/
void BuildingCase3_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* body.frame_a.f[2] variable */) = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* bodyBox.frame_b.R.T[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* bodyBox.a_0[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* bodyBox.frame_b.R.T[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bodyBox.a_0[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)))) * ((data->simulationInfo->realParameter[93] /* body.m PARAM */));
  TRACE_POP
}
/*
equation index: 1301
type: SIMPLE_ASSIGN
bodyBox.frame_a.f[3] = (bodyBox.frame_b.R.T[3,1] * bodyBox.a_0[1] + bodyBox.frame_b.R.T[3,2] * bodyBox.a_0[2] + bodyBox.frame_b.R.T[3,3] * bodyBox.a_0[3] + body.z_a[1] * bodyBox.body.r_CM[2] + body.w_a[2] * body.w_a[3] * bodyBox.body.r_CM[2]) * bodyBox.body.m
*/
void BuildingCase3_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* bodyBox.frame_a.f[3] variable */) = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* bodyBox.frame_b.R.T[3,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* bodyBox.a_0[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* bodyBox.frame_b.R.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bodyBox.a_0[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) * ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)))) * ((data->simulationInfo->realParameter[229] /* bodyBox.body.m PARAM */));
  TRACE_POP
}
/*
equation index: 1302
type: SIMPLE_ASSIGN
bodyBox.frame_a.f[1] = (bodyBox.frame_b.R.T[1,1] * bodyBox.a_0[1] + bodyBox.frame_b.R.T[1,2] * bodyBox.a_0[2] + bodyBox.frame_b.R.T[1,3] * bodyBox.a_0[3] + body.w_a[2] * body.w_a[1] * bodyBox.body.r_CM[2] - body.z_a[3] * bodyBox.body.r_CM[2]) * bodyBox.body.m
*/
void BuildingCase3_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* bodyBox.frame_a.f[1] variable */) = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* bodyBox.frame_b.R.T[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* bodyBox.a_0[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* bodyBox.frame_b.R.T[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bodyBox.a_0[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) * ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)))) * ((data->simulationInfo->realParameter[229] /* bodyBox.body.m PARAM */));
  TRACE_POP
}
/*
equation index: 1303
type: SIMPLE_ASSIGN
bodyBox.frame_a.f[2] = (bodyBox.frame_b.R.T[2,1] * bodyBox.a_0[1] + bodyBox.frame_b.R.T[2,2] * bodyBox.a_0[2] + bodyBox.frame_b.R.T[2,3] * bodyBox.a_0[3] + (-body.w_a[3]) * body.w_a[3] * bodyBox.body.r_CM[2] - bodyBox.body.r_CM[2] * body.w_a[1] ^ 2.0) * bodyBox.body.m
*/
void BuildingCase3_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1303};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[888]] /* bodyBox.frame_a.f[2] variable */) = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* bodyBox.frame_b.R.T[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* bodyBox.a_0[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* bodyBox.frame_b.R.T[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bodyBox.a_0[3] variable */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */))) - (((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)) * ((tmp0 * tmp0)))) * ((data->simulationInfo->realParameter[229] /* bodyBox.body.m PARAM */));
  TRACE_POP
}
/*
equation index: 1304
type: SIMPLE_ASSIGN
revolute.frame_b.f[2] = (-bodyBox.frame_a.f[2]) - body.frame_a.f[2]
*/
void BuildingCase3_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* revolute.frame_b.f[2] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[888]] /* bodyBox.frame_a.f[2] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* body.frame_a.f[2] variable */);
  TRACE_POP
}
/*
equation index: 1305
type: SIMPLE_ASSIGN
bodyBox.frame_a.t[1] = bodyBox.body.I[1,1] * body.z_a[1] + bodyBox.body.I[1,2] * body.z_a[2] + bodyBox.body.I[1,3] * body.z_a[3] + body.w_a[2] * (bodyBox.body.I[3,1] * body.w_a[1] + bodyBox.body.I[3,2] * body.w_a[2] + bodyBox.body.I[3,3] * body.w_a[3]) + bodyBox.body.r_CM[2] * bodyBox.frame_a.f[3] - body.w_a[3] * (bodyBox.body.I[2,1] * body.w_a[1] + bodyBox.body.I[2,2] * body.w_a[2] + bodyBox.body.I[2,3] * body.w_a[3])
*/
void BuildingCase3_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[890]] /* bodyBox.frame_a.t[1] variable */) = ((data->simulationInfo->realParameter[194] /* bodyBox.body.I[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) + ((data->simulationInfo->realParameter[195] /* bodyBox.body.I[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) + ((data->simulationInfo->realParameter[196] /* bodyBox.body.I[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[200] /* bodyBox.body.I[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[201] /* bodyBox.body.I[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[202] /* bodyBox.body.I[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))) + ((data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* bodyBox.frame_a.f[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[197] /* bodyBox.body.I[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[198] /* bodyBox.body.I[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[199] /* bodyBox.body.I[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
/*
equation index: 1306
type: SIMPLE_ASSIGN
bodyBox.frame_a.t[3] = bodyBox.body.I[3,1] * body.z_a[1] + bodyBox.body.I[3,2] * body.z_a[2] + bodyBox.body.I[3,3] * body.z_a[3] + body.w_a[1] * (bodyBox.body.I[2,1] * body.w_a[1] + bodyBox.body.I[2,2] * body.w_a[2] + bodyBox.body.I[2,3] * body.w_a[3]) + (-bodyBox.body.r_CM[2]) * bodyBox.frame_a.f[1] - body.w_a[2] * (bodyBox.body.I[1,1] * body.w_a[1] + bodyBox.body.I[1,2] * body.w_a[2] + bodyBox.body.I[1,3] * body.w_a[3])
*/
void BuildingCase3_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* bodyBox.frame_a.t[3] variable */) = ((data->simulationInfo->realParameter[200] /* bodyBox.body.I[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) + ((data->simulationInfo->realParameter[201] /* bodyBox.body.I[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) + ((data->simulationInfo->realParameter[202] /* bodyBox.body.I[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[197] /* bodyBox.body.I[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[198] /* bodyBox.body.I[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[199] /* bodyBox.body.I[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))) + ((-(data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* bodyBox.frame_a.f[1] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[194] /* bodyBox.body.I[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[195] /* bodyBox.body.I[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[196] /* bodyBox.body.I[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
/*
equation index: 1307
type: SIMPLE_ASSIGN
body.frame_a.f[1] = (bodyBox.frame_b.R.T[1,1] * bodyBox.a_0[1] + bodyBox.frame_b.R.T[1,2] * bodyBox.a_0[2] + bodyBox.frame_b.R.T[1,3] * bodyBox.a_0[3] + body.z_a[2] * body.r_CM[3] + body.w_a[2] * (body.w_a[1] * body.r_CM[2] - body.w_a[2] * body.r_CM[1]) + body.w_a[3] * (body.w_a[1] * body.r_CM[3] - body.w_a[3] * body.r_CM[1]) - body.z_a[3] * body.r_CM[2]) * body.m
*/
void BuildingCase3_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* body.frame_a.f[1] variable */) = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* bodyBox.frame_b.R.T[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* bodyBox.a_0[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* bodyBox.frame_b.R.T[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bodyBox.a_0[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)))) * ((data->simulationInfo->realParameter[93] /* body.m PARAM */));
  TRACE_POP
}
/*
equation index: 1308
type: SIMPLE_ASSIGN
body.frame_a.t[3] = body.I[3,1] * body.z_a[1] + body.I[3,2] * body.z_a[2] + body.I[3,3] * body.z_a[3] + body.w_a[1] * (body.I[2,1] * body.w_a[1] + body.I[2,2] * body.w_a[2] + body.I[2,3] * body.w_a[3]) + body.r_CM[1] * body.frame_a.f[2] - body.r_CM[2] * body.frame_a.f[1] - body.w_a[2] * (body.I[1,1] * body.w_a[1] + body.I[1,2] * body.w_a[2] + body.I[1,3] * body.w_a[3])
*/
void BuildingCase3_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* body.frame_a.t[3] variable */) = ((data->simulationInfo->realParameter[58] /* body.I[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) + ((data->simulationInfo->realParameter[59] /* body.I[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) + ((data->simulationInfo->realParameter[60] /* body.I[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[55] /* body.I[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[56] /* body.I[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[57] /* body.I[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))) + ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* body.frame_a.f[2] variable */)) - (((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* body.frame_a.f[1] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[52] /* body.I[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[53] /* body.I[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[54] /* body.I[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
/*
equation index: 1309
type: SIMPLE_ASSIGN
bodyBox.frame_a.t[2] = bodyBox.body.I[2,1] * body.z_a[1] + bodyBox.body.I[2,2] * body.z_a[2] + bodyBox.body.I[2,3] * body.z_a[3] + body.w_a[3] * (bodyBox.body.I[1,1] * body.w_a[1] + bodyBox.body.I[1,2] * body.w_a[2] + bodyBox.body.I[1,3] * body.w_a[3]) - body.w_a[1] * (bodyBox.body.I[3,1] * body.w_a[1] + bodyBox.body.I[3,2] * body.w_a[2] + bodyBox.body.I[3,3] * body.w_a[3])
*/
void BuildingCase3_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* bodyBox.frame_a.t[2] variable */) = ((data->simulationInfo->realParameter[197] /* bodyBox.body.I[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) + ((data->simulationInfo->realParameter[198] /* bodyBox.body.I[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) + ((data->simulationInfo->realParameter[199] /* bodyBox.body.I[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[194] /* bodyBox.body.I[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[195] /* bodyBox.body.I[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[196] /* bodyBox.body.I[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[200] /* bodyBox.body.I[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[201] /* bodyBox.body.I[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[202] /* bodyBox.body.I[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
/*
equation index: 1310
type: SIMPLE_ASSIGN
body.frame_a.f[3] = (bodyBox.frame_b.R.T[3,1] * bodyBox.a_0[1] + bodyBox.frame_b.R.T[3,2] * bodyBox.a_0[2] + bodyBox.frame_b.R.T[3,3] * bodyBox.a_0[3] + body.z_a[1] * body.r_CM[2] + body.w_a[1] * (body.w_a[3] * body.r_CM[1] - body.w_a[1] * body.r_CM[3]) + body.w_a[2] * (body.w_a[3] * body.r_CM[2] - body.w_a[2] * body.r_CM[3]) - body.z_a[2] * body.r_CM[1]) * body.m
*/
void BuildingCase3_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* body.frame_a.f[3] variable */) = (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* bodyBox.frame_b.R.T[3,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* bodyBox.a_0[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* bodyBox.frame_b.R.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bodyBox.a_0[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) * ((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)))) * ((data->simulationInfo->realParameter[93] /* body.m PARAM */));
  TRACE_POP
}
/*
equation index: 1311
type: SIMPLE_ASSIGN
body.frame_a.t[2] = body.I[2,1] * body.z_a[1] + body.I[2,2] * body.z_a[2] + body.I[2,3] * body.z_a[3] + body.w_a[3] * (body.I[1,1] * body.w_a[1] + body.I[1,2] * body.w_a[2] + body.I[1,3] * body.w_a[3]) + body.r_CM[3] * body.frame_a.f[1] - body.r_CM[1] * body.frame_a.f[3] - body.w_a[1] * (body.I[3,1] * body.w_a[1] + body.I[3,2] * body.w_a[2] + body.I[3,3] * body.w_a[3])
*/
void BuildingCase3_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* body.frame_a.t[2] variable */) = ((data->simulationInfo->realParameter[55] /* body.I[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) + ((data->simulationInfo->realParameter[56] /* body.I[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) + ((data->simulationInfo->realParameter[57] /* body.I[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[52] /* body.I[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[53] /* body.I[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[54] /* body.I[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))) + ((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* body.frame_a.f[1] variable */)) - (((data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* body.frame_a.f[3] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[58] /* body.I[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[59] /* body.I[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[60] /* body.I[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
/*
equation index: 1312
type: SIMPLE_ASSIGN
body.frame_a.t[1] = body.I[1,1] * body.z_a[1] + body.I[1,2] * body.z_a[2] + body.I[1,3] * body.z_a[3] + body.w_a[2] * (body.I[3,1] * body.w_a[1] + body.I[3,2] * body.w_a[2] + body.I[3,3] * body.w_a[3]) + body.r_CM[2] * body.frame_a.f[3] - body.r_CM[3] * body.frame_a.f[2] - body.w_a[3] * (body.I[2,1] * body.w_a[1] + body.I[2,2] * body.w_a[2] + body.I[2,3] * body.w_a[3])
*/
void BuildingCase3_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* body.frame_a.t[1] variable */) = ((data->simulationInfo->realParameter[52] /* body.I[1,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */)) + ((data->simulationInfo->realParameter[53] /* body.I[1,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */)) + ((data->simulationInfo->realParameter[54] /* body.I[1,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[58] /* body.I[3,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[59] /* body.I[3,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[60] /* body.I[3,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))) + ((data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* body.frame_a.f[3] variable */)) - (((data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* body.frame_a.f[2] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */)) * (((data->simulationInfo->realParameter[55] /* body.I[2,1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[56] /* body.I[2,2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[57] /* body.I[2,3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */))));
  TRACE_POP
}
/*
equation index: 1313
type: SIMPLE_ASSIGN
revolute.frame_b.t[1] = (-bodyBox.frame_a.t[1]) - body.frame_a.t[1]
*/
void BuildingCase3_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* revolute.frame_b.t[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[890]] /* bodyBox.frame_a.t[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[762]] /* body.frame_a.t[1] variable */);
  TRACE_POP
}
/*
equation index: 1314
type: SIMPLE_ASSIGN
revolute.frame_b.f[1] = (-bodyBox.frame_a.f[1]) - body.frame_a.f[1]
*/
void BuildingCase3_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* revolute.frame_b.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* bodyBox.frame_a.f[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* body.frame_a.f[1] variable */);
  TRACE_POP
}
/*
equation index: 1315
type: SIMPLE_ASSIGN
revolute.frame_b.t[3] = (-bodyBox.frame_a.t[3]) - body.frame_a.t[3]
*/
void BuildingCase3_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* revolute.frame_b.t[3] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* bodyBox.frame_a.t[3] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* body.frame_a.t[3] variable */);
  TRACE_POP
}
/*
equation index: 1316
type: SIMPLE_ASSIGN
revolute.frame_b.t[2] = (-bodyBox.frame_a.t[2]) - body.frame_a.t[2]
*/
void BuildingCase3_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* revolute.frame_b.t[2] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* bodyBox.frame_a.t[2] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[763]] /* body.frame_a.t[2] variable */);
  TRACE_POP
}
/*
equation index: 1317
type: SIMPLE_ASSIGN
revolute.tau = (-revolute.frame_b.t[2]) * revolute.e[2] - revolute.frame_b.t[3] * revolute.e[3] - revolute.frame_b.t[1] * revolute.e[1]
*/
void BuildingCase3_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* revolute.tau variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* revolute.frame_b.t[2] variable */))) * ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* revolute.frame_b.t[3] variable */)) * ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* revolute.frame_b.t[1] variable */)) * ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)));
  TRACE_POP
}
/*
equation index: 1318
type: SIMPLE_ASSIGN
revolute.frame_b.f[3] = (-bodyBox.frame_a.f[3]) - body.frame_a.f[3]
*/
void BuildingCase3_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* revolute.frame_b.f[3] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* bodyBox.frame_a.f[3] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[761]] /* body.frame_a.f[3] variable */);
  TRACE_POP
}
/*
equation index: 1319
type: SIMPLE_ASSIGN
prismatic.f = (-bodyBox.frame_b.R.T[2,2]) * revolute.frame_b.f[2] - bodyBox.frame_b.R.T[3,2] * revolute.frame_b.f[3] - bodyBox.frame_b.R.T[1,2] * revolute.frame_b.f[1]
*/
void BuildingCase3_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* prismatic.f variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* revolute.frame_b.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* revolute.frame_b.f[3] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* revolute.frame_b.f[1] variable */)));
  TRACE_POP
}
/*
equation index: 1320
type: SIMPLE_ASSIGN
idealGearR2T.flangeT.f = (-springDamper.f) - prismatic.f
*/
void BuildingCase3_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* idealGearR2T.flangeT.f variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* springDamper.f variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* prismatic.f variable */);
  TRACE_POP
}
/*
equation index: 1321
type: SIMPLE_ASSIGN
idealGearR2T.flangeR.tau = (-idealGearR2T.flangeT.f) / idealGearR2T.ratio
*/
void BuildingCase3_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* idealGearR2T.flangeR.tau variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* idealGearR2T.flangeT.f variable */)),(data->simulationInfo->realParameter[308] /* idealGearR2T.ratio PARAM */),"idealGearR2T.ratio",equationIndexes);
  TRACE_POP
}
/*
equation index: 1322
type: SIMPLE_ASSIGN
inertia.flange_a.tau = (-idealGearR2T.flangeR.tau) - revolute.tau
*/
void BuildingCase3_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* inertia.flange_a.tau variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* idealGearR2T.flangeR.tau variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* revolute.tau variable */);
  TRACE_POP
}
/*
equation index: 1323
type: SIMPLE_ASSIGN
inertia.a = inertia.flange_a.tau / inertia.J
*/
void BuildingCase3_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* inertia.a variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* inertia.flange_a.tau variable */),(data->simulationInfo->realParameter[309] /* inertia.J PARAM */),"inertia.J",equationIndexes);
  TRACE_POP
}
/*
equation index: 1324
type: SIMPLE_ASSIGN
$DER.revolute.R_rel.w[2] = revolute.e[2] * inertia.a
*/
void BuildingCase3_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* der(revolute.R_rel.w[2]) DUMMY_DER */) = ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* inertia.a variable */));
  TRACE_POP
}
/*
equation index: 1325
type: SIMPLE_ASSIGN
prismatic.a = inertia.a / idealGearR2T.ratio
*/
void BuildingCase3_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* prismatic.a variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* inertia.a variable */),(data->simulationInfo->realParameter[308] /* idealGearR2T.ratio PARAM */),"idealGearR2T.ratio",equationIndexes);
  TRACE_POP
}
/*
equation index: 1326
type: SIMPLE_ASSIGN
$DER.$DER.prismatic.frame_a.r_0[2] = bodyBox.a_0[2] - prismatic.a
*/
void BuildingCase3_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* der(der(prismatic.frame_a.r_0[2])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* prismatic.a variable */);
  TRACE_POP
}
/*
equation index: 1327
type: SIMPLE_ASSIGN
body1.frame_a.f[2] = (-force1.frame_b.f[2]) - prismatic.f - spring.f
*/
void BuildingCase3_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* body1.frame_a.f[2] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[924]] /* force1.frame_b.f[2] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* prismatic.f variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* spring.f variable */);
  TRACE_POP
}
/*
equation index: 1328
type: SIMPLE_ASSIGN
body1.a_0[2] = body1.frame_a.f[2] / body1.m
*/
void BuildingCase3_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* body1.a_0[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* body1.frame_a.f[2] variable */),(data->simulationInfo->realParameter[152] /* body1.m PARAM */),"body1.m",equationIndexes);
  TRACE_POP
}

void residualFunc1364(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1364};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */) = xloc[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */) = xloc[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */) = xloc[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */) = xloc[3];
  /* local constraints */
  BuildingCase3_eqFunction_1298(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1299(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1300(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1301(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1302(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1303(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1304(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1305(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1306(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1307(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1308(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1309(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1310(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1311(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1312(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1313(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1314(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1315(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1316(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1317(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1318(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1319(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1320(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1321(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1322(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1323(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1324(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1325(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1326(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1327(data, threadData);

  /* local constraints */
  BuildingCase3_eqFunction_1328(data, threadData);
  res[0] = ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* inertia.a variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* der(revolute.R_rel.w[1]) DUMMY_DER */);

  res[1] = ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* inertia.a variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* der(revolute.R_rel.w[3]) DUMMY_DER */);

  res[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* body1.a_0[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* der(der(prismatic.frame_a.r_0[2])) DUMMY_DER */);

  res[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* der(revolute.R_rel.w[2]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1364(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  const int indices[4] = {
    795 /* body.z_a[2] */,
    851 /* bodyBox.a_0[2] */,
    794 /* body.z_a[1] */,
    796 /* body.z_a[3] */
  };
  for (int i = 0; i < 4; ++i) {
    linearSystemData->nominal[i] = data->modelData->realVarsData[indices[i]].attribute.nominal;
    linearSystemData->min[i]     = data->modelData->realVarsData[indices[i]].attribute.min;
    linearSystemData->max[i]     = data->modelData->realVarsData[indices[i]].attribute.max;
  }
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void BuildingCase3_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 1665;
  linearSystemData[1].size = 2;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc1665;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = BuildingCase3_functionJacLSJac1_column;
  linearSystemData[1].initialAnalyticalJacobian = BuildingCase3_initialAnalyticJacobianLSJac1;
  linearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA1665;
  linearSystemData[1].setb = NULL;  //setLinearVectorb1665;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData1665;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 1364;
  linearSystemData[0].size = 4;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc1364;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = BuildingCase3_functionJacLSJac0_column;
  linearSystemData[0].initialAnalyticalJacobian = BuildingCase3_initialAnalyticJacobianLSJac0;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA1364;
  linearSystemData[0].setb = NULL;  //setLinearVectorb1364;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData1364;
}

#if defined(__cplusplus)
}
#endif

