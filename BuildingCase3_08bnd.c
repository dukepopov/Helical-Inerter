/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "BuildingCase3_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1737
type: SIMPLE_ASSIGN
$START.body.z_a[3] = body.z_0_start[3]
*/
static void BuildingCase3_eqFunction_1737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1737};
  (data->modelData->realVarsData[796] /* body.z_a[3] variable */).attribute .start = (data->simulationInfo->realParameter[110] /* body.z_0_start[3] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */) = (data->modelData->realVarsData[796] /* body.z_a[3] variable */).attribute .start;
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[796].info /* body.z_a[3] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */));
  TRACE_POP
}

/*
equation index: 1738
type: SIMPLE_ASSIGN
$START.body.z_a[2] = body.z_0_start[2]
*/
static void BuildingCase3_eqFunction_1738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1738};
  (data->modelData->realVarsData[795] /* body.z_a[2] variable */).attribute .start = (data->simulationInfo->realParameter[109] /* body.z_0_start[2] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */) = (data->modelData->realVarsData[795] /* body.z_a[2] variable */).attribute .start;
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[795].info /* body.z_a[2] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */));
  TRACE_POP
}

/*
equation index: 1739
type: SIMPLE_ASSIGN
$START.body.z_a[1] = body.z_0_start[1]
*/
static void BuildingCase3_eqFunction_1739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1739};
  (data->modelData->realVarsData[794] /* body.z_a[1] variable */).attribute .start = (data->simulationInfo->realParameter[108] /* body.z_0_start[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */) = (data->modelData->realVarsData[794] /* body.z_a[1] variable */).attribute .start;
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[794].info /* body.z_a[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */));
  TRACE_POP
}

/*
equation index: 1740
type: SIMPLE_ASSIGN
$START.body.w_a[3] = body.w_0_start[3]
*/
static void BuildingCase3_eqFunction_1740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1740};
  (data->modelData->realVarsData[793] /* body.w_a[3] DUMMY_STATE */).attribute .start = (data->simulationInfo->realParameter[107] /* body.w_0_start[3] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */) = (data->modelData->realVarsData[793] /* body.w_a[3] DUMMY_STATE */).attribute .start;
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[793].info /* body.w_a[3] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1741
type: SIMPLE_ASSIGN
$START.body.w_a[2] = body.w_0_start[2]
*/
static void BuildingCase3_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1741};
  (data->modelData->realVarsData[792] /* body.w_a[2] DUMMY_STATE */).attribute .start = (data->simulationInfo->realParameter[106] /* body.w_0_start[2] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */) = (data->modelData->realVarsData[792] /* body.w_a[2] DUMMY_STATE */).attribute .start;
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[792].info /* body.w_a[2] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1742
type: SIMPLE_ASSIGN
$START.body.w_a[1] = body.w_0_start[1]
*/
static void BuildingCase3_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1742};
  (data->modelData->realVarsData[791] /* body.w_a[1] DUMMY_STATE */).attribute .start = (data->simulationInfo->realParameter[105] /* body.w_0_start[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */) = (data->modelData->realVarsData[791] /* body.w_a[1] DUMMY_STATE */).attribute .start;
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[791].info /* body.w_a[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1743
type: SIMPLE_ASSIGN
springDamper.s_rel = springDamper.s_nominal
*/
static void BuildingCase3_eqFunction_1743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1743};
  data->modelData->realVarsData[1029].attribute /* springDamper.s_rel */.nominal = (data->simulationInfo->realParameter[386] /* springDamper.s_nominal PARAM */);
  infoStreamPrint(OMC_LOG_INIT_V, 0, "%s(nominal=%g)", data->modelData->realVarsData[1029].info /* springDamper.s_rel */.name,
        (modelica_real) data->modelData->realVarsData[1029].attribute /* springDamper.s_rel */.nominal);
  TRACE_POP
}

OMC_DISABLE_OPT
int BuildingCase3_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating min-values");
  if (OMC_ACTIVE_STREAM(OMC_LOG_INIT)) messageClose(OMC_LOG_INIT);
  
  /* max ******************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating max-values");
  if (OMC_ACTIVE_STREAM(OMC_LOG_INIT)) messageClose(OMC_LOG_INIT);
  
  /* nominal **************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating nominal-values");
  BuildingCase3_eqFunction_1743(data, threadData);
  if (OMC_ACTIVE_STREAM(OMC_LOG_INIT)) messageClose(OMC_LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating primary start-values");
  BuildingCase3_eqFunction_1737(data, threadData);

  BuildingCase3_eqFunction_1738(data, threadData);

  BuildingCase3_eqFunction_1739(data, threadData);

  BuildingCase3_eqFunction_1740(data, threadData);

  BuildingCase3_eqFunction_1741(data, threadData);

  BuildingCase3_eqFunction_1742(data, threadData);
  if (OMC_ACTIVE_STREAM(OMC_LOG_INIT)) messageClose(OMC_LOG_INIT);
  
  TRACE_POP
  return 0;
}

void BuildingCase3_updateBoundParameters_0(DATA *data, threadData_t *threadData);
void BuildingCase3_updateBoundParameters_1(DATA *data, threadData_t *threadData);
void BuildingCase3_updateBoundParameters_2(DATA *data, threadData_t *threadData);
void BuildingCase3_updateBoundParameters_3(DATA *data, threadData_t *threadData);
OMC_DISABLE_OPT
int BuildingCase3_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* absoluteSensorBottom.arrowColor[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[2].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[5]] /* absoluteSensorTop.arrowColor[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[5].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[12]] /* body.sphereColor[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[12].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[15]] /* body1.sphereColor[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[15].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[18]] /* bodyBox.body.sphereColor[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[18].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[21]] /* bodyBox.color[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[21].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[24]] /* force1.color[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[24].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[26]] /* force1.color[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[26].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[28]] /* prismatic.boxColor[2] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[28].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[29]] /* prismatic.boxColor[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[29].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[31]] /* prismatic1.boxColor[2] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[31].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[32]] /* prismatic1.boxColor[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[32].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[34]] /* revolute.cylinderColor[2] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[34].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[35]] /* revolute.cylinderColor[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[35].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[36]] /* world.axisColor_x[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[36].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[37]] /* world.axisColor_x[2] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[37].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[38]] /* world.axisColor_x[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[38].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[39]] /* world.gravityArrowColor[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[39].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[41]] /* world.gravityArrowColor[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[41].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[42]] /* world.gravitySphereColor[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[42].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[44]] /* world.gravitySphereColor[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[44].time_unvarying = 1;
  (data->simulationInfo->integerParameter[11]/* absoluteSensorBottom.sequence[1] PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[11].time_unvarying = 1;
  (data->simulationInfo->integerParameter[12]/* absoluteSensorBottom.sequence[2] PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[12].time_unvarying = 1;
  (data->simulationInfo->integerParameter[13]/* absoluteSensorBottom.sequence[3] PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[13].time_unvarying = 1;
  (data->simulationInfo->integerParameter[35]/* absoluteSensorTop.sequence[1] PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[35].time_unvarying = 1;
  (data->simulationInfo->integerParameter[36]/* absoluteSensorTop.sequence[2] PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[36].time_unvarying = 1;
  (data->simulationInfo->integerParameter[37]/* absoluteSensorTop.sequence[3] PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[37].time_unvarying = 1;
  (data->simulationInfo->integerParameter[48]/* body.sequence_angleStates[1] PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[48].time_unvarying = 1;
  (data->simulationInfo->integerParameter[49]/* body.sequence_angleStates[2] PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[49].time_unvarying = 1;
  (data->simulationInfo->integerParameter[50]/* body.sequence_angleStates[3] PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[50].time_unvarying = 1;
  (data->simulationInfo->integerParameter[51]/* body.sequence_start[1] PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[51].time_unvarying = 1;
  (data->simulationInfo->integerParameter[52]/* body.sequence_start[2] PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[52].time_unvarying = 1;
  (data->simulationInfo->integerParameter[53]/* body.sequence_start[3] PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[53].time_unvarying = 1;
  (data->simulationInfo->integerParameter[54]/* body1.sequence_angleStates[1] PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[54].time_unvarying = 1;
  (data->simulationInfo->integerParameter[55]/* body1.sequence_angleStates[2] PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[55].time_unvarying = 1;
  (data->simulationInfo->integerParameter[56]/* body1.sequence_angleStates[3] PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[56].time_unvarying = 1;
  (data->simulationInfo->integerParameter[57]/* body1.sequence_start[1] PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[57].time_unvarying = 1;
  (data->simulationInfo->integerParameter[58]/* body1.sequence_start[2] PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[58].time_unvarying = 1;
  (data->simulationInfo->integerParameter[59]/* body1.sequence_start[3] PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[59].time_unvarying = 1;
  (data->simulationInfo->integerParameter[60]/* bodyBox.body.sequence_angleStates[1] PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[60].time_unvarying = 1;
  (data->simulationInfo->integerParameter[61]/* bodyBox.body.sequence_angleStates[2] PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[61].time_unvarying = 1;
  (data->simulationInfo->integerParameter[62]/* bodyBox.body.sequence_angleStates[3] PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[62].time_unvarying = 1;
  (data->simulationInfo->integerParameter[63]/* bodyBox.body.sequence_start[1] PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[63].time_unvarying = 1;
  (data->simulationInfo->integerParameter[64]/* bodyBox.body.sequence_start[2] PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[64].time_unvarying = 1;
  (data->simulationInfo->integerParameter[65]/* bodyBox.body.sequence_start[3] PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[65].time_unvarying = 1;
  (data->simulationInfo->integerParameter[66]/* bodyBox.sequence_angleStates[1] PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[66].time_unvarying = 1;
  (data->simulationInfo->integerParameter[67]/* bodyBox.sequence_angleStates[2] PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[67].time_unvarying = 1;
  (data->simulationInfo->integerParameter[68]/* bodyBox.sequence_angleStates[3] PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[68].time_unvarying = 1;
  (data->simulationInfo->integerParameter[69]/* bodyBox.sequence_start[1] PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[69].time_unvarying = 1;
  (data->simulationInfo->integerParameter[70]/* bodyBox.sequence_start[2] PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[70].time_unvarying = 1;
  (data->simulationInfo->integerParameter[71]/* bodyBox.sequence_start[3] PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[71].time_unvarying = 1;
  (data->simulationInfo->integerParameter[82]/* world.ndim PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[82].time_unvarying = 1;
  (data->simulationInfo->integerParameter[83]/* world.ndim2 PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[83].time_unvarying = 1;
  (data->simulationInfo->integerParameter[84]/* world.ndim_pointGravity PARAM */) = ((modelica_integer) 0);
  data->modelData->integerParameterData[84].time_unvarying = 1;
  (data->simulationInfo->integerParameter[85]/* world.x_label.n PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[85].time_unvarying = 1;
  (data->simulationInfo->integerParameter[86]/* world.y_label.n PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[86].time_unvarying = 1;
  (data->simulationInfo->integerParameter[87]/* world.z_label.n PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[87].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */) = -0.0;
  data->modelData->realVarsData[95].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */) = -0.0;
  data->modelData->realVarsData[96].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */) = -0.0;
  data->modelData->realVarsData[97].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */) = -0.0;
  data->modelData->realVarsData[101].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */) = -0.0;
  data->modelData->realVarsData[102].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */) = -0.0;
  data->modelData->realVarsData[103].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.f[1] variable */) = -0.0;
  data->modelData->realVarsData[116].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.f[2] variable */) = -0.0;
  data->modelData->realVarsData[117].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.f[3] variable */) = -0.0;
  data->modelData->realVarsData[118].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.t[1] variable */) = -0.0;
  data->modelData->realVarsData[122].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.t[2] variable */) = -0.0;
  data->modelData->realVarsData[123].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.t[3] variable */) = -0.0;
  data->modelData->realVarsData[124].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* absoluteSensorBottom.position.zeroPosition.frame_resolve.f[1] variable */) = -0.0;
  data->modelData->realVarsData[200].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* absoluteSensorBottom.position.zeroPosition.frame_resolve.f[2] variable */) = -0.0;
  data->modelData->realVarsData[201].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* absoluteSensorBottom.position.zeroPosition.frame_resolve.f[3] variable */) = -0.0;
  data->modelData->realVarsData[202].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* absoluteSensorBottom.position.zeroPosition.frame_resolve.t[1] variable */) = -0.0;
  data->modelData->realVarsData[206].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* absoluteSensorBottom.position.zeroPosition.frame_resolve.t[2] variable */) = -0.0;
  data->modelData->realVarsData[207].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[208]] /* absoluteSensorBottom.position.zeroPosition.frame_resolve.t[3] variable */) = -0.0;
  data->modelData->realVarsData[208].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.f[1] variable */) = -0.0;
  data->modelData->realVarsData[248].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.f[2] variable */) = -0.0;
  data->modelData->realVarsData[249].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.f[3] variable */) = -0.0;
  data->modelData->realVarsData[250].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.t[1] variable */) = -0.0;
  data->modelData->realVarsData[254].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.t[2] variable */) = -0.0;
  data->modelData->realVarsData[255].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.t[3] variable */) = -0.0;
  data->modelData->realVarsData[256].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */) = -0.0;
  data->modelData->realVarsData[317].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */) = -0.0;
  data->modelData->realVarsData[318].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */) = -0.0;
  data->modelData->realVarsData[319].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */) = -0.0;
  data->modelData->realVarsData[323].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */) = -0.0;
  data->modelData->realVarsData[324].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */) = -0.0;
  data->modelData->realVarsData[325].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.f[1] variable */) = -0.0;
  data->modelData->realVarsData[338].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.f[2] variable */) = -0.0;
  data->modelData->realVarsData[339].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.f[3] variable */) = -0.0;
  data->modelData->realVarsData[340].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.t[1] variable */) = -0.0;
  data->modelData->realVarsData[344].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.t[2] variable */) = -0.0;
  data->modelData->realVarsData[345].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.t[3] variable */) = -0.0;
  data->modelData->realVarsData[346].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */) = -0.0;
  data->modelData->realVarsData[431].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */) = -0.0;
  data->modelData->realVarsData[432].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */) = -0.0;
  data->modelData->realVarsData[433].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */) = -0.0;
  data->modelData->realVarsData[437].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */) = -0.0;
  data->modelData->realVarsData[438].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */) = -0.0;
  data->modelData->realVarsData[439].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[452]] /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.f[1] variable */) = -0.0;
  data->modelData->realVarsData[452].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[453]] /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.f[2] variable */) = -0.0;
  data->modelData->realVarsData[453].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[454]] /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.f[3] variable */) = -0.0;
  data->modelData->realVarsData[454].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[458]] /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.t[1] variable */) = -0.0;
  data->modelData->realVarsData[458].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[459]] /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.t[2] variable */) = -0.0;
  data->modelData->realVarsData[459].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[460]] /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.t[3] variable */) = -0.0;
  data->modelData->realVarsData[460].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[536]] /* absoluteSensorTop.position.zeroPosition.frame_resolve.f[1] variable */) = -0.0;
  data->modelData->realVarsData[536].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* absoluteSensorTop.position.zeroPosition.frame_resolve.f[2] variable */) = -0.0;
  data->modelData->realVarsData[537].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[538]] /* absoluteSensorTop.position.zeroPosition.frame_resolve.f[3] variable */) = -0.0;
  data->modelData->realVarsData[538].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* absoluteSensorTop.position.zeroPosition.frame_resolve.t[1] variable */) = -0.0;
  data->modelData->realVarsData[542].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* absoluteSensorTop.position.zeroPosition.frame_resolve.t[2] variable */) = -0.0;
  data->modelData->realVarsData[543].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* absoluteSensorTop.position.zeroPosition.frame_resolve.t[3] variable */) = -0.0;
  data->modelData->realVarsData[544].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.f[1] variable */) = -0.0;
  data->modelData->realVarsData[584].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.f[2] variable */) = -0.0;
  data->modelData->realVarsData[585].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.f[3] variable */) = -0.0;
  data->modelData->realVarsData[586].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.t[1] variable */) = -0.0;
  data->modelData->realVarsData[590].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[591]] /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.t[2] variable */) = -0.0;
  data->modelData->realVarsData[591].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.t[3] variable */) = -0.0;
  data->modelData->realVarsData[592].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */) = -0.0;
  data->modelData->realVarsData[653].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */) = -0.0;
  data->modelData->realVarsData[654].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */) = -0.0;
  data->modelData->realVarsData[655].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */) = -0.0;
  data->modelData->realVarsData[659].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */) = -0.0;
  data->modelData->realVarsData[660].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */) = -0.0;
  data->modelData->realVarsData[661].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.f[1] variable */) = -0.0;
  data->modelData->realVarsData[674].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.f[2] variable */) = -0.0;
  data->modelData->realVarsData[675].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.f[3] variable */) = -0.0;
  data->modelData->realVarsData[676].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.t[1] variable */) = -0.0;
  data->modelData->realVarsData[680].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.t[2] variable */) = -0.0;
  data->modelData->realVarsData[681].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.t[3] variable */) = -0.0;
  data->modelData->realVarsData[682].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[869]] /* bodyBox.frameTranslation.frame_a.f[1] variable */) = -0.0;
  data->modelData->realVarsData[869].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[870]] /* bodyBox.frameTranslation.frame_a.f[2] variable */) = -0.0;
  data->modelData->realVarsData[870].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[871]] /* bodyBox.frameTranslation.frame_a.f[3] variable */) = -0.0;
  data->modelData->realVarsData[871].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[873]] /* bodyBox.frameTranslation.frame_a.t[2] variable */) = -0.0;
  data->modelData->realVarsData[873].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* force1.zeroPosition.frame_resolve.f[1] variable */) = -0.0;
  data->modelData->realVarsData[938].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* force1.zeroPosition.frame_resolve.f[2] variable */) = -0.0;
  data->modelData->realVarsData[939].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[940]] /* force1.zeroPosition.frame_resolve.f[3] variable */) = -0.0;
  data->modelData->realVarsData[940].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* force1.zeroPosition.frame_resolve.t[1] variable */) = -0.0;
  data->modelData->realVarsData[944].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* force1.zeroPosition.frame_resolve.t[2] variable */) = -0.0;
  data->modelData->realVarsData[945].time_unvarying = 1;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[946]] /* force1.zeroPosition.frame_resolve.t[3] variable */) = -0.0;
  data->modelData->realVarsData[946].time_unvarying = 1;
  (data->simulationInfo->realParameter[11]/* bar2.lengthDirection[1] PARAM */) = 0.3;
  data->modelData->realParameterData[11].time_unvarying = 1;
  (data->simulationInfo->realParameter[12]/* bar2.lengthDirection[2] PARAM */) = 0.0;
  data->modelData->realParameterData[12].time_unvarying = 1;
  (data->simulationInfo->realParameter[13]/* bar2.lengthDirection[3] PARAM */) = 0.0;
  data->modelData->realParameterData[13].time_unvarying = 1;
  (data->simulationInfo->realParameter[14]/* bar2.r[1] PARAM */) = 0.3;
  data->modelData->realParameterData[14].time_unvarying = 1;
  (data->simulationInfo->realParameter[15]/* bar2.r[2] PARAM */) = 0.0;
  data->modelData->realParameterData[15].time_unvarying = 1;
  (data->simulationInfo->realParameter[16]/* bar2.r[3] PARAM */) = 0.0;
  data->modelData->realParameterData[16].time_unvarying = 1;
  (data->simulationInfo->realParameter[17]/* bar2.r_shape[1] PARAM */) = 0.0;
  data->modelData->realParameterData[17].time_unvarying = 1;
  (data->simulationInfo->realParameter[18]/* bar2.r_shape[2] PARAM */) = 0.0;
  data->modelData->realParameterData[18].time_unvarying = 1;
  (data->simulationInfo->realParameter[19]/* bar2.r_shape[3] PARAM */) = 0.0;
  data->modelData->realParameterData[19].time_unvarying = 1;
  (data->simulationInfo->realParameter[27]/* bar2.widthDirection[1] PARAM */) = 0.0;
  data->modelData->realParameterData[27].time_unvarying = 1;
  (data->simulationInfo->realParameter[28]/* bar2.widthDirection[2] PARAM */) = 1.0;
  data->modelData->realParameterData[28].time_unvarying = 1;
  (data->simulationInfo->realParameter[29]/* bar2.widthDirection[3] PARAM */) = 0.0;
  data->modelData->realParameterData[29].time_unvarying = 1;
  (data->simulationInfo->realParameter[33]/* bar21.lengthDirection[1] PARAM */) = 0.0;
  data->modelData->realParameterData[33].time_unvarying = 1;
  (data->simulationInfo->realParameter[34]/* bar21.lengthDirection[2] PARAM */) = 1.0;
  data->modelData->realParameterData[34].time_unvarying = 1;
  (data->simulationInfo->realParameter[35]/* bar21.lengthDirection[3] PARAM */) = 0.0;
  data->modelData->realParameterData[35].time_unvarying = 1;
  (data->simulationInfo->realParameter[36]/* bar21.r[1] PARAM */) = 0.0;
  data->modelData->realParameterData[36].time_unvarying = 1;
  (data->simulationInfo->realParameter[37]/* bar21.r[2] PARAM */) = 1.0;
  data->modelData->realParameterData[37].time_unvarying = 1;
  (data->simulationInfo->realParameter[38]/* bar21.r[3] PARAM */) = 0.0;
  data->modelData->realParameterData[38].time_unvarying = 1;
  (data->simulationInfo->realParameter[39]/* bar21.r_shape[1] PARAM */) = 0.0;
  data->modelData->realParameterData[39].time_unvarying = 1;
  (data->simulationInfo->realParameter[40]/* bar21.r_shape[2] PARAM */) = 0.0;
  data->modelData->realParameterData[40].time_unvarying = 1;
  (data->simulationInfo->realParameter[41]/* bar21.r_shape[3] PARAM */) = 0.0;
  data->modelData->realParameterData[41].time_unvarying = 1;
  (data->simulationInfo->realParameter[49]/* bar21.widthDirection[1] PARAM */) = 0.0;
  data->modelData->realParameterData[49].time_unvarying = 1;
  (data->simulationInfo->realParameter[50]/* bar21.widthDirection[2] PARAM */) = 1.0;
  data->modelData->realParameterData[50].time_unvarying = 1;
  (data->simulationInfo->realParameter[51]/* bar21.widthDirection[3] PARAM */) = 0.0;
  data->modelData->realParameterData[51].time_unvarying = 1;
  (data->simulationInfo->realParameter[71]/* body.R_start.T[1,1] PARAM */) = 1.0;
  data->modelData->realParameterData[71].time_unvarying = 1;
  (data->simulationInfo->realParameter[72]/* body.R_start.T[1,2] PARAM */) = 0.0;
  data->modelData->realParameterData[72].time_unvarying = 1;
  (data->simulationInfo->realParameter[73]/* body.R_start.T[1,3] PARAM */) = 0.0;
  data->modelData->realParameterData[73].time_unvarying = 1;
  (data->simulationInfo->realParameter[74]/* body.R_start.T[2,1] PARAM */) = 0.0;
  data->modelData->realParameterData[74].time_unvarying = 1;
  (data->simulationInfo->realParameter[75]/* body.R_start.T[2,2] PARAM */) = 1.0;
  data->modelData->realParameterData[75].time_unvarying = 1;
  (data->simulationInfo->realParameter[76]/* body.R_start.T[2,3] PARAM */) = 0.0;
  data->modelData->realParameterData[76].time_unvarying = 1;
  (data->simulationInfo->realParameter[77]/* body.R_start.T[3,1] PARAM */) = 0.0;
  data->modelData->realParameterData[77].time_unvarying = 1;
  (data->simulationInfo->realParameter[78]/* body.R_start.T[3,2] PARAM */) = 0.0;
  data->modelData->realParameterData[78].time_unvarying = 1;
  (data->simulationInfo->realParameter[79]/* body.R_start.T[3,3] PARAM */) = 1.0;
  data->modelData->realParameterData[79].time_unvarying = 1;
  (data->simulationInfo->realParameter[80]/* body.R_start.w[1] PARAM */) = 0.0;
  data->modelData->realParameterData[80].time_unvarying = 1;
  (data->simulationInfo->realParameter[81]/* body.R_start.w[2] PARAM */) = 0.0;
  data->modelData->realParameterData[81].time_unvarying = 1;
  (data->simulationInfo->realParameter[82]/* body.R_start.w[3] PARAM */) = 0.0;
  data->modelData->realParameterData[82].time_unvarying = 1;
  (data->simulationInfo->realParameter[104]/* body.sphereDiameter PARAM */) = 0.2;
  data->modelData->realParameterData[104].time_unvarying = 1;
  (data->simulationInfo->realParameter[130]/* body1.R_start.T[1,1] PARAM */) = 1.0;
  data->modelData->realParameterData[130].time_unvarying = 1;
  (data->simulationInfo->realParameter[131]/* body1.R_start.T[1,2] PARAM */) = 0.0;
  data->modelData->realParameterData[131].time_unvarying = 1;
  (data->simulationInfo->realParameter[132]/* body1.R_start.T[1,3] PARAM */) = 0.0;
  data->modelData->realParameterData[132].time_unvarying = 1;
  (data->simulationInfo->realParameter[133]/* body1.R_start.T[2,1] PARAM */) = 0.0;
  data->modelData->realParameterData[133].time_unvarying = 1;
  (data->simulationInfo->realParameter[134]/* body1.R_start.T[2,2] PARAM */) = 1.0;
  data->modelData->realParameterData[134].time_unvarying = 1;
  (data->simulationInfo->realParameter[135]/* body1.R_start.T[2,3] PARAM */) = 0.0;
  data->modelData->realParameterData[135].time_unvarying = 1;
  (data->simulationInfo->realParameter[136]/* body1.R_start.T[3,1] PARAM */) = 0.0;
  data->modelData->realParameterData[136].time_unvarying = 1;
  (data->simulationInfo->realParameter[137]/* body1.R_start.T[3,2] PARAM */) = 0.0;
  data->modelData->realParameterData[137].time_unvarying = 1;
  (data->simulationInfo->realParameter[138]/* body1.R_start.T[3,3] PARAM */) = 1.0;
  data->modelData->realParameterData[138].time_unvarying = 1;
  (data->simulationInfo->realParameter[139]/* body1.R_start.w[1] PARAM */) = 0.0;
  data->modelData->realParameterData[139].time_unvarying = 1;
  (data->simulationInfo->realParameter[140]/* body1.R_start.w[2] PARAM */) = 0.0;
  data->modelData->realParameterData[140].time_unvarying = 1;
  (data->simulationInfo->realParameter[141]/* body1.R_start.w[3] PARAM */) = 0.0;
  data->modelData->realParameterData[141].time_unvarying = 1;
  (data->simulationInfo->realParameter[163]/* body1.sphereDiameter PARAM */) = 0.2;
  data->modelData->realParameterData[163].time_unvarying = 1;
  (data->simulationInfo->realParameter[179]/* bodyBox.R.T[1,1] PARAM */) = 0.0;
  data->modelData->realParameterData[179].time_unvarying = 1;
  (data->simulationInfo->realParameter[180]/* bodyBox.R.T[1,2] PARAM */) = -1.0;
  data->modelData->realParameterData[180].time_unvarying = 1;
  (data->simulationInfo->realParameter[181]/* bodyBox.R.T[1,3] PARAM */) = 0.0;
  data->modelData->realParameterData[181].time_unvarying = 1;
  (data->simulationInfo->realParameter[182]/* bodyBox.R.T[2,1] PARAM */) = 1.0;
  data->modelData->realParameterData[182].time_unvarying = 1;
  (data->simulationInfo->realParameter[183]/* bodyBox.R.T[2,2] PARAM */) = 0.0;
  data->modelData->realParameterData[183].time_unvarying = 1;
  (data->simulationInfo->realParameter[184]/* bodyBox.R.T[2,3] PARAM */) = 0.0;
  data->modelData->realParameterData[184].time_unvarying = 1;
  (data->simulationInfo->realParameter[185]/* bodyBox.R.T[3,1] PARAM */) = -0.0;
  data->modelData->realParameterData[185].time_unvarying = 1;
  (data->simulationInfo->realParameter[186]/* bodyBox.R.T[3,2] PARAM */) = 0.0;
  data->modelData->realParameterData[186].time_unvarying = 1;
  (data->simulationInfo->realParameter[187]/* bodyBox.R.T[3,3] PARAM */) = 1.0;
  data->modelData->realParameterData[187].time_unvarying = 1;
  (data->simulationInfo->realParameter[188]/* bodyBox.R.w[1] PARAM */) = 0.0;
  data->modelData->realParameterData[188].time_unvarying = 1;
  (data->simulationInfo->realParameter[189]/* bodyBox.R.w[2] PARAM */) = 0.0;
  data->modelData->realParameterData[189].time_unvarying = 1;
  (data->simulationInfo->realParameter[190]/* bodyBox.R.w[3] PARAM */) = 0.0;
  data->modelData->realParameterData[190].time_unvarying = 1;
  (data->simulationInfo->realParameter[213]/* bodyBox.body.R_start.T[1,1] PARAM */) = 1.0;
  data->modelData->realParameterData[213].time_unvarying = 1;
  (data->simulationInfo->realParameter[214]/* bodyBox.body.R_start.T[1,2] PARAM */) = 0.0;
  data->modelData->realParameterData[214].time_unvarying = 1;
  (data->simulationInfo->realParameter[215]/* bodyBox.body.R_start.T[1,3] PARAM */) = 0.0;
  data->modelData->realParameterData[215].time_unvarying = 1;
  (data->simulationInfo->realParameter[216]/* bodyBox.body.R_start.T[2,1] PARAM */) = 0.0;
  data->modelData->realParameterData[216].time_unvarying = 1;
  (data->simulationInfo->realParameter[217]/* bodyBox.body.R_start.T[2,2] PARAM */) = 1.0;
  data->modelData->realParameterData[217].time_unvarying = 1;
  (data->simulationInfo->realParameter[218]/* bodyBox.body.R_start.T[2,3] PARAM */) = 0.0;
  data->modelData->realParameterData[218].time_unvarying = 1;
  (data->simulationInfo->realParameter[219]/* bodyBox.body.R_start.T[3,1] PARAM */) = 0.0;
  data->modelData->realParameterData[219].time_unvarying = 1;
  (data->simulationInfo->realParameter[220]/* bodyBox.body.R_start.T[3,2] PARAM */) = 0.0;
  data->modelData->realParameterData[220].time_unvarying = 1;
  (data->simulationInfo->realParameter[221]/* bodyBox.body.R_start.T[3,3] PARAM */) = 1.0;
  data->modelData->realParameterData[221].time_unvarying = 1;
  (data->simulationInfo->realParameter[222]/* bodyBox.body.R_start.w[1] PARAM */) = 0.0;
  data->modelData->realParameterData[222].time_unvarying = 1;
  (data->simulationInfo->realParameter[223]/* bodyBox.body.R_start.w[2] PARAM */) = 0.0;
  data->modelData->realParameterData[223].time_unvarying = 1;
  (data->simulationInfo->realParameter[224]/* bodyBox.body.R_start.w[3] PARAM */) = 0.0;
  data->modelData->realParameterData[224].time_unvarying = 1;
  (data->simulationInfo->realParameter[233]/* bodyBox.body.r_CM[1] PARAM */) = 0.0;
  data->modelData->realParameterData[233].time_unvarying = 1;
  (data->simulationInfo->realParameter[235]/* bodyBox.body.r_CM[3] PARAM */) = 0.0;
  data->modelData->realParameterData[235].time_unvarying = 1;
  (data->simulationInfo->realParameter[237]/* bodyBox.body.sphereDiameter PARAM */) = 0.1111111111111111;
  data->modelData->realParameterData[237].time_unvarying = 1;
  (data->simulationInfo->realParameter[248]/* bodyBox.frameTranslation.lengthDirection[1] PARAM */) = 0.0;
  data->modelData->realParameterData[248].time_unvarying = 1;
  (data->simulationInfo->realParameter[249]/* bodyBox.frameTranslation.lengthDirection[2] PARAM */) = -0.01;
  data->modelData->realParameterData[249].time_unvarying = 1;
  (data->simulationInfo->realParameter[250]/* bodyBox.frameTranslation.lengthDirection[3] PARAM */) = 0.0;
  data->modelData->realParameterData[250].time_unvarying = 1;
  (data->simulationInfo->realParameter[251]/* bodyBox.frameTranslation.r[1] PARAM */) = 0.0;
  data->modelData->realParameterData[251].time_unvarying = 1;
  (data->simulationInfo->realParameter[252]/* bodyBox.frameTranslation.r[2] PARAM */) = -0.01;
  data->modelData->realParameterData[252].time_unvarying = 1;
  (data->simulationInfo->realParameter[253]/* bodyBox.frameTranslation.r[3] PARAM */) = 0.0;
  data->modelData->realParameterData[253].time_unvarying = 1;
  (data->simulationInfo->realParameter[254]/* bodyBox.frameTranslation.r_shape[1] PARAM */) = 0.0;
  data->modelData->realParameterData[254].time_unvarying = 1;
  (data->simulationInfo->realParameter[255]/* bodyBox.frameTranslation.r_shape[2] PARAM */) = 0.0;
  data->modelData->realParameterData[255].time_unvarying = 1;
  (data->simulationInfo->realParameter[256]/* bodyBox.frameTranslation.r_shape[3] PARAM */) = 0.0;
  data->modelData->realParameterData[256].time_unvarying = 1;
  (data->simulationInfo->realParameter[264]/* bodyBox.frameTranslation.widthDirection[1] PARAM */) = 0.0;
  data->modelData->realParameterData[264].time_unvarying = 1;
  (data->simulationInfo->realParameter[265]/* bodyBox.frameTranslation.widthDirection[2] PARAM */) = 1.0;
  data->modelData->realParameterData[265].time_unvarying = 1;
  (data->simulationInfo->realParameter[266]/* bodyBox.frameTranslation.widthDirection[3] PARAM */) = 0.0;
  data->modelData->realParameterData[266].time_unvarying = 1;
  (data->simulationInfo->realParameter[271]/* bodyBox.lengthDirection[1] PARAM */) = 0.0;
  data->modelData->realParameterData[271].time_unvarying = 1;
  (data->simulationInfo->realParameter[272]/* bodyBox.lengthDirection[2] PARAM */) = -0.01;
  data->modelData->realParameterData[272].time_unvarying = 1;
  (data->simulationInfo->realParameter[273]/* bodyBox.lengthDirection[3] PARAM */) = 0.0;
  data->modelData->realParameterData[273].time_unvarying = 1;
  (data->simulationInfo->realParameter[277]/* bodyBox.r[1] PARAM */) = 0.0;
  data->modelData->realParameterData[277].time_unvarying = 1;
  (data->simulationInfo->realParameter[278]/* bodyBox.r[2] PARAM */) = -0.01;
  data->modelData->realParameterData[278].time_unvarying = 1;
  (data->simulationInfo->realParameter[279]/* bodyBox.r[3] PARAM */) = 0.0;
  data->modelData->realParameterData[279].time_unvarying = 1;
  (data->simulationInfo->realParameter[280]/* bodyBox.r_CM[1] PARAM */) = 0.0;
  data->modelData->realParameterData[280].time_unvarying = 1;
  (data->simulationInfo->realParameter[282]/* bodyBox.r_CM[3] PARAM */) = 0.0;
  data->modelData->realParameterData[282].time_unvarying = 1;
  (data->simulationInfo->realParameter[283]/* bodyBox.r_shape[1] PARAM */) = 0.0;
  data->modelData->realParameterData[283].time_unvarying = 1;
  (data->simulationInfo->realParameter[284]/* bodyBox.r_shape[2] PARAM */) = 0.0;
  data->modelData->realParameterData[284].time_unvarying = 1;
  (data->simulationInfo->realParameter[285]/* bodyBox.r_shape[3] PARAM */) = 0.0;
  data->modelData->realParameterData[285].time_unvarying = 1;
  (data->simulationInfo->realParameter[291]/* bodyBox.widthDirection[1] PARAM */) = 0.0;
  data->modelData->realParameterData[291].time_unvarying = 1;
  (data->simulationInfo->realParameter[292]/* bodyBox.widthDirection[2] PARAM */) = 1.0;
  data->modelData->realParameterData[292].time_unvarying = 1;
  (data->simulationInfo->realParameter[293]/* bodyBox.widthDirection[3] PARAM */) = 0.0;
  data->modelData->realParameterData[293].time_unvarying = 1;
  (data->simulationInfo->realParameter[301]/* idealGearR2T.fixedR.phi0 PARAM */) = 0.0;
  data->modelData->realParameterData[301].time_unvarying = 1;
  (data->simulationInfo->realParameter[303]/* idealGearR2T.fixedT.s0 PARAM */) = 0.0;
  data->modelData->realParameterData[303].time_unvarying = 1;
  (data->simulationInfo->realParameter[315]/* prismatic.boxWidthDirection[1] PARAM */) = 0.0;
  data->modelData->realParameterData[315].time_unvarying = 1;
  (data->simulationInfo->realParameter[316]/* prismatic.boxWidthDirection[2] PARAM */) = 1.0;
  data->modelData->realParameterData[316].time_unvarying = 1;
  (data->simulationInfo->realParameter[317]/* prismatic.boxWidthDirection[3] PARAM */) = 0.0;
  data->modelData->realParameterData[317].time_unvarying = 1;
  (data->simulationInfo->realParameter[318]/* prismatic.e[1] PARAM */) = 0.0;
  data->modelData->realParameterData[318].time_unvarying = 1;
  (data->simulationInfo->realParameter[319]/* prismatic.e[2] PARAM */) = 1.0;
  data->modelData->realParameterData[319].time_unvarying = 1;
  (data->simulationInfo->realParameter[320]/* prismatic.e[3] PARAM */) = 0.0;
  data->modelData->realParameterData[320].time_unvarying = 1;
  (data->simulationInfo->realParameter[322]/* prismatic.fixed.s0 PARAM */) = 0.0;
  data->modelData->realParameterData[322].time_unvarying = 1;
  (data->simulationInfo->realParameter[323]/* prismatic.n[1] PARAM */) = 0.0;
  data->modelData->realParameterData[323].time_unvarying = 1;
  (data->simulationInfo->realParameter[324]/* prismatic.n[2] PARAM */) = 1.0;
  data->modelData->realParameterData[324].time_unvarying = 1;
  (data->simulationInfo->realParameter[325]/* prismatic.n[3] PARAM */) = 0.0;
  data->modelData->realParameterData[325].time_unvarying = 1;
  (data->simulationInfo->realParameter[333]/* prismatic1.boxWidthDirection[1] PARAM */) = 0.0;
  data->modelData->realParameterData[333].time_unvarying = 1;
  (data->simulationInfo->realParameter[334]/* prismatic1.boxWidthDirection[2] PARAM */) = 1.0;
  data->modelData->realParameterData[334].time_unvarying = 1;
  (data->simulationInfo->realParameter[335]/* prismatic1.boxWidthDirection[3] PARAM */) = 0.0;
  data->modelData->realParameterData[335].time_unvarying = 1;
  (data->simulationInfo->realParameter[336]/* prismatic1.e[1] PARAM */) = 0.0;
  data->modelData->realParameterData[336].time_unvarying = 1;
  (data->simulationInfo->realParameter[337]/* prismatic1.e[2] PARAM */) = 1.0;
  data->modelData->realParameterData[337].time_unvarying = 1;
  (data->simulationInfo->realParameter[338]/* prismatic1.e[3] PARAM */) = 0.0;
  data->modelData->realParameterData[338].time_unvarying = 1;
  (data->simulationInfo->realParameter[340]/* prismatic1.fixed.s0 PARAM */) = 0.0;
  data->modelData->realParameterData[340].time_unvarying = 1;
  (data->simulationInfo->realParameter[341]/* prismatic1.n[1] PARAM */) = 0.0;
  data->modelData->realParameterData[341].time_unvarying = 1;
  (data->simulationInfo->realParameter[342]/* prismatic1.n[2] PARAM */) = 1.0;
  data->modelData->realParameterData[342].time_unvarying = 1;
  (data->simulationInfo->realParameter[343]/* prismatic1.n[3] PARAM */) = 0.0;
  data->modelData->realParameterData[343].time_unvarying = 1;
  (data->simulationInfo->realParameter[355]/* revolute.e[1] PARAM */) = 0.0;
  data->modelData->realParameterData[355].time_unvarying = 1;
  (data->simulationInfo->realParameter[356]/* revolute.e[2] PARAM */) = 1.0;
  data->modelData->realParameterData[356].time_unvarying = 1;
  (data->simulationInfo->realParameter[357]/* revolute.e[3] PARAM */) = 0.0;
  data->modelData->realParameterData[357].time_unvarying = 1;
  (data->simulationInfo->realParameter[359]/* revolute.fixed.phi0 PARAM */) = 0.0;
  data->modelData->realParameterData[359].time_unvarying = 1;
  (data->simulationInfo->realParameter[360]/* revolute.n[1] PARAM */) = 0.0;
  data->modelData->realParameterData[360].time_unvarying = 1;
  (data->simulationInfo->realParameter[361]/* revolute.n[2] PARAM */) = 1.0;
  data->modelData->realParameterData[361].time_unvarying = 1;
  (data->simulationInfo->realParameter[362]/* revolute.n[3] PARAM */) = 0.0;
  data->modelData->realParameterData[362].time_unvarying = 1;
  (data->simulationInfo->realParameter[392]/* world.defaultBodyDiameter PARAM */) = 0.1111111111111111;
  data->modelData->realParameterData[392].time_unvarying = 1;
  (data->simulationInfo->realParameter[423]/* world.n[1] PARAM */) = 0.0;
  data->modelData->realParameterData[423].time_unvarying = 1;
  (data->simulationInfo->realParameter[424]/* world.n[2] PARAM */) = -1.0;
  data->modelData->realParameterData[424].time_unvarying = 1;
  (data->simulationInfo->realParameter[425]/* world.n[3] PARAM */) = 0.0;
  data->modelData->realParameterData[425].time_unvarying = 1;
  (data->simulationInfo->realParameter[426]/* world.nominalLength PARAM */) = 1.0;
  data->modelData->realParameterData[426].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[0]/* absoluteSensorBottom.animation PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[1]/* absoluteSensorBottom.get_a PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[2]/* absoluteSensorBottom.get_angles PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[3]/* absoluteSensorBottom.get_r PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[4]/* absoluteSensorBottom.get_v PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[4].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[5]/* absoluteSensorBottom.get_w PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[6]/* absoluteSensorBottom.get_z PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[6].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[7]/* absoluteSensorTop.animation PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[7].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[8]/* absoluteSensorTop.get_a PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[8].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[9]/* absoluteSensorTop.get_angles PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[9].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[10]/* absoluteSensorTop.get_r PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[10].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[11]/* absoluteSensorTop.get_v PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[11].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[12]/* absoluteSensorTop.get_w PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[12].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[13]/* absoluteSensorTop.get_z PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[13].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[14]/* bar2.animation PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[14].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[15]/* bar21.animation PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[15].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[16]/* body.angles_fixed PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[16].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[17]/* body.animation PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[17].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[18]/* body.enforceStates PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[18].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[19]/* body.useQuaternions PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[19].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[20]/* body.w_0_fixed PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[20].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[21]/* body.z_0_fixed PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[21].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[22]/* body1.angles_fixed PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[22].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[23]/* body1.animation PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[23].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[24]/* body1.enforceStates PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[24].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[25]/* body1.useQuaternions PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[25].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[26]/* body1.w_0_fixed PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[26].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[27]/* body1.z_0_fixed PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[27].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[28]/* bodyBox.angles_fixed PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[28].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[29]/* bodyBox.animation PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[29].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[30]/* bodyBox.body.angles_fixed PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[30].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[31]/* bodyBox.body.animation PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[31].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[32]/* bodyBox.body.enforceStates PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[32].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[33]/* bodyBox.body.useQuaternions PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[33].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[34]/* bodyBox.body.w_0_fixed PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[34].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[35]/* bodyBox.body.z_0_fixed PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[35].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[36]/* bodyBox.enforceStates PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[36].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[37]/* bodyBox.frameTranslation.animation PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[37].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[38]/* bodyBox.useQuaternions PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[38].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[39]/* bodyBox.w_0_fixed PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[39].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[40]/* bodyBox.z_0_fixed PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[40].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[41]/* force1.animation PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[41].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[42]/* idealGearR2T.useSupportR PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[42].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[43]/* idealGearR2T.useSupportT PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[43].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[44]/* prismatic.animation PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[44].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[45]/* prismatic.useAxisFlange PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[46]/* prismatic1.animation PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[47]/* prismatic1.useAxisFlange PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[48]/* revolute.animation PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[48].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[49]/* revolute.useAxisFlange PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[49].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[50]/* springDamper.useHeatPort PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[50].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[51]/* world.animateGravity PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[51].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[52]/* world.animateGround PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[52].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[53]/* world.animateWorld PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[53].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[54]/* world.axisShowLabels PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[54].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[56]/* world.enableAnimation PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[56].time_unvarying = 1;
  (data->simulationInfo->integerParameter[0]/* absoluteSensorBottom.absoluteVelocity.position.resolveInFrame PARAM */) = 1;
  data->modelData->integerParameterData[0].time_unvarying = 1;
  (data->simulationInfo->integerParameter[1]/* absoluteSensorBottom.absoluteVelocity.resolveInFrame PARAM */) = 1;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  (data->simulationInfo->integerParameter[2]/* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_r_in PARAM */) = 1;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  (data->simulationInfo->integerParameter[3]/* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_r_out PARAM */) = 1;
  data->modelData->integerParameterData[3].time_unvarying = 1;
  (data->simulationInfo->integerParameter[4]/* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.frame_r_in PARAM */) = 1;
  data->modelData->integerParameterData[4].time_unvarying = 1;
  (data->simulationInfo->integerParameter[5]/* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.frame_r_out PARAM */) = 1;
  data->modelData->integerParameterData[5].time_unvarying = 1;
  (data->simulationInfo->integerParameter[7]/* absoluteSensorBottom.arrow.quantity PARAM */) = 7;
  data->modelData->integerParameterData[7].time_unvarying = 1;
  (data->simulationInfo->integerParameter[8]/* absoluteSensorBottom.position.position.resolveInFrame PARAM */) = 2;
  data->modelData->integerParameterData[8].time_unvarying = 1;
  (data->simulationInfo->integerParameter[9]/* absoluteSensorBottom.position.resolveInFrame PARAM */) = 2;
  data->modelData->integerParameterData[9].time_unvarying = 1;
  (data->simulationInfo->integerParameter[10]/* absoluteSensorBottom.resolveInFrame PARAM */) = 2;
  data->modelData->integerParameterData[10].time_unvarying = 1;
  (data->simulationInfo->integerParameter[14]/* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_r_in PARAM */) = 1;
  data->modelData->integerParameterData[14].time_unvarying = 1;
  (data->simulationInfo->integerParameter[15]/* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_r_out PARAM */) = 2;
  data->modelData->integerParameterData[15].time_unvarying = 1;
  (data->simulationInfo->integerParameter[16]/* absoluteSensorBottom.transformVector_a.frame_r_in PARAM */) = 1;
  data->modelData->integerParameterData[16].time_unvarying = 1;
  (data->simulationInfo->integerParameter[17]/* absoluteSensorBottom.transformVector_a.frame_r_out PARAM */) = 2;
  data->modelData->integerParameterData[17].time_unvarying = 1;
  (data->simulationInfo->integerParameter[18]/* absoluteSensorBottom.velocity.position.resolveInFrame PARAM */) = 1;
  data->modelData->integerParameterData[18].time_unvarying = 1;
  (data->simulationInfo->integerParameter[19]/* absoluteSensorBottom.velocity.resolveInFrame PARAM */) = 2;
  data->modelData->integerParameterData[19].time_unvarying = 1;
  (data->simulationInfo->integerParameter[20]/* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_r_in PARAM */) = 1;
  data->modelData->integerParameterData[20].time_unvarying = 1;
  (data->simulationInfo->integerParameter[21]/* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_r_out PARAM */) = 2;
  data->modelData->integerParameterData[21].time_unvarying = 1;
  (data->simulationInfo->integerParameter[22]/* absoluteSensorBottom.velocity.transformAbsoluteVector.frame_r_in PARAM */) = 1;
  data->modelData->integerParameterData[22].time_unvarying = 1;
  (data->simulationInfo->integerParameter[23]/* absoluteSensorBottom.velocity.transformAbsoluteVector.frame_r_out PARAM */) = 2;
  data->modelData->integerParameterData[23].time_unvarying = 1;
  (data->simulationInfo->integerParameter[24]/* absoluteSensorTop.absoluteVelocity.position.resolveInFrame PARAM */) = 1;
  data->modelData->integerParameterData[24].time_unvarying = 1;
  (data->simulationInfo->integerParameter[25]/* absoluteSensorTop.absoluteVelocity.resolveInFrame PARAM */) = 1;
  data->modelData->integerParameterData[25].time_unvarying = 1;
  (data->simulationInfo->integerParameter[26]/* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_r_in PARAM */) = 1;
  data->modelData->integerParameterData[26].time_unvarying = 1;
  (data->simulationInfo->integerParameter[27]/* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_r_out PARAM */) = 1;
  data->modelData->integerParameterData[27].time_unvarying = 1;
  (data->simulationInfo->integerParameter[28]/* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.frame_r_in PARAM */) = 1;
  data->modelData->integerParameterData[28].time_unvarying = 1;
  (data->simulationInfo->integerParameter[29]/* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.frame_r_out PARAM */) = 1;
  data->modelData->integerParameterData[29].time_unvarying = 1;
  (data->simulationInfo->integerParameter[31]/* absoluteSensorTop.arrow.quantity PARAM */) = 7;
  data->modelData->integerParameterData[31].time_unvarying = 1;
  (data->simulationInfo->integerParameter[32]/* absoluteSensorTop.position.position.resolveInFrame PARAM */) = 2;
  data->modelData->integerParameterData[32].time_unvarying = 1;
  (data->simulationInfo->integerParameter[33]/* absoluteSensorTop.position.resolveInFrame PARAM */) = 2;
  data->modelData->integerParameterData[33].time_unvarying = 1;
  (data->simulationInfo->integerParameter[34]/* absoluteSensorTop.resolveInFrame PARAM */) = 2;
  data->modelData->integerParameterData[34].time_unvarying = 1;
  (data->simulationInfo->integerParameter[38]/* absoluteSensorTop.transformVector_a.basicTransformVector.frame_r_in PARAM */) = 1;
  data->modelData->integerParameterData[38].time_unvarying = 1;
  (data->simulationInfo->integerParameter[39]/* absoluteSensorTop.transformVector_a.basicTransformVector.frame_r_out PARAM */) = 2;
  data->modelData->integerParameterData[39].time_unvarying = 1;
  (data->simulationInfo->integerParameter[40]/* absoluteSensorTop.transformVector_a.frame_r_in PARAM */) = 1;
  data->modelData->integerParameterData[40].time_unvarying = 1;
  (data->simulationInfo->integerParameter[41]/* absoluteSensorTop.transformVector_a.frame_r_out PARAM */) = 2;
  data->modelData->integerParameterData[41].time_unvarying = 1;
  (data->simulationInfo->integerParameter[42]/* absoluteSensorTop.velocity.position.resolveInFrame PARAM */) = 1;
  data->modelData->integerParameterData[42].time_unvarying = 1;
  (data->simulationInfo->integerParameter[43]/* absoluteSensorTop.velocity.resolveInFrame PARAM */) = 2;
  data->modelData->integerParameterData[43].time_unvarying = 1;
  (data->simulationInfo->integerParameter[44]/* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_r_in PARAM */) = 1;
  data->modelData->integerParameterData[44].time_unvarying = 1;
  (data->simulationInfo->integerParameter[45]/* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_r_out PARAM */) = 2;
  data->modelData->integerParameterData[45].time_unvarying = 1;
  (data->simulationInfo->integerParameter[46]/* absoluteSensorTop.velocity.transformAbsoluteVector.frame_r_in PARAM */) = 1;
  data->modelData->integerParameterData[46].time_unvarying = 1;
  (data->simulationInfo->integerParameter[47]/* absoluteSensorTop.velocity.transformAbsoluteVector.frame_r_out PARAM */) = 2;
  data->modelData->integerParameterData[47].time_unvarying = 1;
  (data->simulationInfo->integerParameter[73]/* force1.arrow.quantity PARAM */) = 1;
  data->modelData->integerParameterData[73].time_unvarying = 1;
  (data->simulationInfo->integerParameter[74]/* force1.basicWorldForce.resolveInFrame PARAM */) = 1;
  data->modelData->integerParameterData[74].time_unvarying = 1;
  (data->simulationInfo->integerParameter[75]/* force1.resolveInFrame PARAM */) = 1;
  data->modelData->integerParameterData[75].time_unvarying = 1;
  (data->simulationInfo->integerParameter[76]/* inertia.stateSelect PARAM */) = 3;
  data->modelData->integerParameterData[76].time_unvarying = 1;
  (data->simulationInfo->integerParameter[77]/* prismatic.stateSelect PARAM */) = 4;
  data->modelData->integerParameterData[77].time_unvarying = 1;
  (data->simulationInfo->integerParameter[78]/* prismatic1.stateSelect PARAM */) = 4;
  data->modelData->integerParameterData[78].time_unvarying = 1;
  (data->simulationInfo->integerParameter[79]/* revolute.stateSelect PARAM */) = 4;
  data->modelData->integerParameterData[79].time_unvarying = 1;
  (data->simulationInfo->integerParameter[80]/* springDamper.stateSelect PARAM */) = 4;
  data->modelData->integerParameterData[80].time_unvarying = 1;
  (data->simulationInfo->integerParameter[81]/* world.gravityType PARAM */) = 1;
  data->modelData->integerParameterData[81].time_unvarying = 1;
  BuildingCase3_updateBoundParameters_0(data, threadData);
  BuildingCase3_updateBoundParameters_1(data, threadData);
  BuildingCase3_updateBoundParameters_2(data, threadData);
  BuildingCase3_updateBoundParameters_3(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

