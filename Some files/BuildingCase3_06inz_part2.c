#include "BuildingCase3_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 965
type: SIMPLE_ASSIGN
world.z_label.R.T[1,2] = 0.0
*/
void BuildingCase3_eqFunction_965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,965};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1346]] /* world.z_label.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 966
type: SIMPLE_ASSIGN
world.z_label.R.T[1,3] = 0.0
*/
void BuildingCase3_eqFunction_966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,966};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1347]] /* world.z_label.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 967
type: SIMPLE_ASSIGN
world.z_label.R.T[2,1] = 0.0
*/
void BuildingCase3_eqFunction_967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,967};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1348]] /* world.z_label.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 968
type: SIMPLE_ASSIGN
world.z_label.R.T[2,2] = 1.0
*/
void BuildingCase3_eqFunction_968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,968};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1349]] /* world.z_label.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 969
type: SIMPLE_ASSIGN
world.z_label.R.T[2,3] = 0.0
*/
void BuildingCase3_eqFunction_969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,969};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1350]] /* world.z_label.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 970
type: SIMPLE_ASSIGN
world.z_label.R.T[3,1] = 0.0
*/
void BuildingCase3_eqFunction_970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,970};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1351]] /* world.z_label.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 971
type: SIMPLE_ASSIGN
world.z_label.R.T[3,2] = 0.0
*/
void BuildingCase3_eqFunction_971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,971};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1352]] /* world.z_label.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 972
type: SIMPLE_ASSIGN
world.z_label.R.T[3,3] = 1.0
*/
void BuildingCase3_eqFunction_972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* world.z_label.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 973
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].extra = 0.0
*/
void BuildingCase3_eqFunction_973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,973};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1371]] /* world.z_label.cylinders[3].extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 974
type: SIMPLE_ASSIGN
world.z_label.specularCoefficient = 0.0
*/
void BuildingCase3_eqFunction_974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,974};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1421]] /* world.z_label.specularCoefficient variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 975
type: SIMPLE_ASSIGN
prismatic1.box.extra = 0.0
*/
void BuildingCase3_eqFunction_975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,975};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[975]] /* prismatic1.box.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 976
type: SIMPLE_ASSIGN
body1.cylinder.length = if sqrt(body1.r_CM * body1.r_CM) > 0.1 then sqrt(body1.r_CM * body1.r_CM) - (if body1.cylinderDiameter > 0.22000000000000003 then 0.1 else 0.0) else 0.0
*/
void BuildingCase3_eqFunction_976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,976};
  real_array tmp6;
  real_array tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  real_array tmp10;
  real_array tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  real_array_create(&tmp6, ((modelica_real*)&((&data->simulationInfo->realParameter[156] /* body1.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp7, ((modelica_real*)&((&data->simulationInfo->realParameter[156] /* body1.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  tmp8 = mul_real_scalar_product(tmp6, tmp7);
  if(!(tmp8 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(body1.r_CM * body1.r_CM) was %g should be >= 0", tmp8);
    }
  }tmp9 = Greater(sqrt(tmp8),0.1);
  tmp14 = (modelica_boolean)tmp9;
  if(tmp14)
  {
    real_array_create(&tmp10, ((modelica_real*)&((&data->simulationInfo->realParameter[156] /* body1.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
    real_array_create(&tmp11, ((modelica_real*)&((&data->simulationInfo->realParameter[156] /* body1.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
    tmp12 = mul_real_scalar_product(tmp10, tmp11);
    if(!(tmp12 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(body1.r_CM * body1.r_CM) was %g should be >= 0", tmp12);
      }
    }tmp13 = Greater((data->simulationInfo->realParameter[151] /* body1.cylinderDiameter PARAM */),0.22000000000000003);
    tmp15 = sqrt(tmp12) - ((tmp13?0.1:0.0));
  }
  else
  {
    tmp15 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* body1.cylinder.length variable */) = tmp15;
  TRACE_POP
}

/*
equation index: 977
type: SIMPLE_ASSIGN
body1.cylinder.extra = 0.0
*/
void BuildingCase3_eqFunction_977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,977};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* body1.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 978
type: SIMPLE_ASSIGN
body1.sphere.length = 0.2
*/
void BuildingCase3_eqFunction_978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,978};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[838]] /* body1.sphere.length variable */) = 0.2;
  TRACE_POP
}

/*
equation index: 979
type: SIMPLE_ASSIGN
body1.sphere.width = 0.2
*/
void BuildingCase3_eqFunction_979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,979};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* body1.sphere.width variable */) = 0.2;
  TRACE_POP
}

/*
equation index: 980
type: SIMPLE_ASSIGN
body1.sphere.height = 0.2
*/
void BuildingCase3_eqFunction_980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,980};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[837]] /* body1.sphere.height variable */) = 0.2;
  TRACE_POP
}

/*
equation index: 981
type: SIMPLE_ASSIGN
body1.sphere.extra = 0.0
*/
void BuildingCase3_eqFunction_981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,981};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* body1.sphere.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 982
type: SIMPLE_ASSIGN
prismatic.box.extra = 0.0
*/
void BuildingCase3_eqFunction_982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,982};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[956]] /* prismatic.box.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 983
type: SIMPLE_ASSIGN
revolute.cylinder.extra = 0.0
*/
void BuildingCase3_eqFunction_983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,983};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* revolute.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 984
type: SIMPLE_ASSIGN
absoluteSensorTop.arrow.headAtOrigin = false
*/
void BuildingCase3_eqFunction_984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,984};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* absoluteSensorTop.arrow.headAtOrigin DISCRETE */) = 0 /* false */;
  TRACE_POP
}

/*
equation index: 985
type: SIMPLE_ASSIGN
absoluteSensorTop.arrow.arrowLine.twoHeadedArrow = false
*/
void BuildingCase3_eqFunction_985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,985};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* absoluteSensorTop.arrow.arrowLine.twoHeadedArrow DISCRETE */) = 0 /* false */;
  TRACE_POP
}

/*
equation index: 986
type: SIMPLE_ASSIGN
body.cylinder.length = if sqrt(body.r_CM * body.r_CM) > 0.1 then sqrt(body.r_CM * body.r_CM) - (if body.cylinderDiameter > 0.22000000000000003 then 0.1 else 0.0) else 0.0
*/
void BuildingCase3_eqFunction_986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,986};
  real_array tmp16;
  real_array tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  real_array tmp20;
  real_array tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  real_array_create(&tmp16, ((modelica_real*)&((&data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp17, ((modelica_real*)&((&data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  tmp18 = mul_real_scalar_product(tmp16, tmp17);
  if(!(tmp18 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(body.r_CM * body.r_CM) was %g should be >= 0", tmp18);
    }
  }tmp19 = Greater(sqrt(tmp18),0.1);
  tmp24 = (modelica_boolean)tmp19;
  if(tmp24)
  {
    real_array_create(&tmp20, ((modelica_real*)&((&data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
    real_array_create(&tmp21, ((modelica_real*)&((&data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
    tmp22 = mul_real_scalar_product(tmp20, tmp21);
    if(!(tmp22 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(body.r_CM * body.r_CM) was %g should be >= 0", tmp22);
      }
    }tmp23 = Greater((data->simulationInfo->realParameter[92] /* body.cylinderDiameter PARAM */),0.22000000000000003);
    tmp25 = sqrt(tmp22) - ((tmp23?0.1:0.0));
  }
  else
  {
    tmp25 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* body.cylinder.length variable */) = tmp25;
  TRACE_POP
}

/*
equation index: 987
type: SIMPLE_ASSIGN
body.cylinder.extra = 0.0
*/
void BuildingCase3_eqFunction_987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,987};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* body.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 988
type: SIMPLE_ASSIGN
body.sphere.length = 0.2
*/
void BuildingCase3_eqFunction_988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,988};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* body.sphere.length variable */) = 0.2;
  TRACE_POP
}

/*
equation index: 989
type: SIMPLE_ASSIGN
body.sphere.width = 0.2
*/
void BuildingCase3_eqFunction_989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,989};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* body.sphere.width variable */) = 0.2;
  TRACE_POP
}

/*
equation index: 990
type: SIMPLE_ASSIGN
body.sphere.height = 0.2
*/
void BuildingCase3_eqFunction_990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,990};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[781]] /* body.sphere.height variable */) = 0.2;
  TRACE_POP
}

/*
equation index: 991
type: SIMPLE_ASSIGN
body.sphere.extra = 0.0
*/
void BuildingCase3_eqFunction_991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,991};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* body.sphere.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 992
type: SIMPLE_ASSIGN
absoluteSensorBottom.arrow.headAtOrigin = false
*/
void BuildingCase3_eqFunction_992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,992};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* absoluteSensorBottom.arrow.headAtOrigin DISCRETE */) = 0 /* false */;
  TRACE_POP
}

/*
equation index: 993
type: SIMPLE_ASSIGN
absoluteSensorBottom.arrow.arrowLine.twoHeadedArrow = false
*/
void BuildingCase3_eqFunction_993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,993};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* absoluteSensorBottom.arrow.arrowLine.twoHeadedArrow DISCRETE */) = 0 /* false */;
  TRACE_POP
}

/*
equation index: 994
type: SIMPLE_ASSIGN
absoluteSensorTop.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,994};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[506]] /* absoluteSensorTop.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 995
type: SIMPLE_ASSIGN
absoluteSensorTop.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,995};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[507]] /* absoluteSensorTop.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 996
type: SIMPLE_ASSIGN
absoluteSensorTop.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,996};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[508]] /* absoluteSensorTop.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 997
type: SIMPLE_ASSIGN
absoluteSensorTop.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* absoluteSensorTop.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 998
type: SIMPLE_ASSIGN
absoluteSensorTop.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,998};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* absoluteSensorTop.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 999
type: SIMPLE_ASSIGN
absoluteSensorTop.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,999};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* absoluteSensorTop.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1000
type: SIMPLE_ASSIGN
absoluteSensorBottom.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1000};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* absoluteSensorBottom.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1001
type: SIMPLE_ASSIGN
absoluteSensorBottom.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1001};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* absoluteSensorBottom.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1002
type: SIMPLE_ASSIGN
absoluteSensorBottom.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1002};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* absoluteSensorBottom.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1003
type: SIMPLE_ASSIGN
absoluteSensorBottom.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1003};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* absoluteSensorBottom.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1004
type: SIMPLE_ASSIGN
absoluteSensorBottom.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1004};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* absoluteSensorBottom.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1005
type: SIMPLE_ASSIGN
absoluteSensorBottom.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1005};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* absoluteSensorBottom.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1006
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1006};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[874]] /* bodyBox.frameTranslation.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1007
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1007};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[872]] /* bodyBox.frameTranslation.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1008
type: SIMPLE_ASSIGN
body1.z_a[3] = 0.0
*/
void BuildingCase3_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1008};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* body1.z_a[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1009
type: SIMPLE_ASSIGN
body1.z_a[2] = 0.0
*/
void BuildingCase3_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1009};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[848]] /* body1.z_a[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1010
type: SIMPLE_ASSIGN
body1.z_a[1] = 0.0
*/
void BuildingCase3_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1010};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* body1.z_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1011
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1011};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* absoluteSensorBottom.absoluteVelocity.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1012
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1012};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* absoluteSensorBottom.absoluteVelocity.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1013
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1013};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* absoluteSensorBottom.absoluteVelocity.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1014
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1014};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* absoluteSensorBottom.absoluteVelocity.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1015
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1015};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* absoluteSensorBottom.absoluteVelocity.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1016
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1016};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* absoluteSensorBottom.absoluteVelocity.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1017
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1017};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* absoluteSensorBottom.velocity.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1018
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1018};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* absoluteSensorBottom.velocity.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1019
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1019};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* absoluteSensorBottom.velocity.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1020
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1020};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* absoluteSensorBottom.velocity.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1021
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1021};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* absoluteSensorBottom.velocity.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1022
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1022};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* absoluteSensorBottom.velocity.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1023
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1023};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[382]] /* absoluteSensorTop.absoluteVelocity.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1024
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1024};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* absoluteSensorTop.absoluteVelocity.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1025
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1025};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* absoluteSensorTop.absoluteVelocity.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1026
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1026};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* absoluteSensorTop.absoluteVelocity.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1027
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1027};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* absoluteSensorTop.absoluteVelocity.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1028
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1028};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[377]] /* absoluteSensorTop.absoluteVelocity.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1029
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1029};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* absoluteSensorTop.velocity.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1030
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1030};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* absoluteSensorTop.velocity.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1031
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1031};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* absoluteSensorTop.velocity.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1032
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1032};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[601]] /* absoluteSensorTop.velocity.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1033
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1033};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[600]] /* absoluteSensorTop.velocity.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1034
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1034};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[599]] /* absoluteSensorTop.velocity.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1035
type: SIMPLE_ASSIGN
bodyBox.frame_b.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1035};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[908]] /* bodyBox.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1036
type: SIMPLE_ASSIGN
bodyBox.frame_b.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1036};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* bodyBox.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1037
type: SIMPLE_ASSIGN
inertia.flange_b.tau = 0.0
*/
void BuildingCase3_eqFunction_1037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1037};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[951]] /* inertia.flange_b.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1038
type: SIMPLE_ASSIGN
world.frame_b.r_0[1] = 0.0
*/
void BuildingCase3_eqFunction_1038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1038};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* world.frame_b.r_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1039
type: SIMPLE_ASSIGN
world.frame_b.r_0[2] = 0.0
*/
void BuildingCase3_eqFunction_1039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1039};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* world.frame_b.r_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1040
type: SIMPLE_ASSIGN
world.frame_b.r_0[3] = 0.0
*/
void BuildingCase3_eqFunction_1040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1040};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* world.frame_b.r_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1041
type: SIMPLE_ASSIGN
body1.g_0[1] = 0.0
*/
void BuildingCase3_eqFunction_1041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1041};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* body1.g_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1042
type: SIMPLE_ASSIGN
body1.g_0[2] = 0.0
*/
void BuildingCase3_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1042};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* body1.g_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1043
type: SIMPLE_ASSIGN
body1.g_0[3] = 0.0
*/
void BuildingCase3_eqFunction_1043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1043};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* body1.g_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1044
type: SIMPLE_ASSIGN
absoluteSensorTop.position.position.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1044};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* absoluteSensorTop.position.position.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1045
type: SIMPLE_ASSIGN
absoluteSensorTop.position.position.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1045};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* absoluteSensorTop.position.position.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1046
type: SIMPLE_ASSIGN
absoluteSensorTop.position.position.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1046};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* absoluteSensorTop.position.position.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1047
type: SIMPLE_ASSIGN
absoluteSensorTop.position.position.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1047};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* absoluteSensorTop.position.position.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1048
type: SIMPLE_ASSIGN
absoluteSensorTop.position.position.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1048};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* absoluteSensorTop.position.position.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1049
type: SIMPLE_ASSIGN
absoluteSensorTop.position.position.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1049};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[517]] /* absoluteSensorTop.position.position.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1050
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.position.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1050};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* absoluteSensorTop.velocity.position.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1051
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.position.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1051};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* absoluteSensorTop.velocity.position.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1052
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.position.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1052};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* absoluteSensorTop.velocity.position.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1053
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.position.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1053};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* absoluteSensorTop.velocity.position.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1054
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.position.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1054};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* absoluteSensorTop.velocity.position.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1055
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.position.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1055};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* absoluteSensorTop.velocity.position.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1056
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1056};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[629]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1057
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1057};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1058
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1058};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1059
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1059};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[632]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1060
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1060};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1061
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1061};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1062
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,1] = 1.0
*/
void BuildingCase3_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1062};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1063
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,2] = 0.0
*/
void BuildingCase3_eqFunction_1063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1063};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[618]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1064
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,3] = 0.0
*/
void BuildingCase3_eqFunction_1064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1064};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1065
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,1] = 0.0
*/
void BuildingCase3_eqFunction_1065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1065};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1066
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,2] = 1.0
*/
void BuildingCase3_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1066};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1067
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,3] = 0.0
*/
void BuildingCase3_eqFunction_1067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1067};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1068
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,1] = 0.0
*/
void BuildingCase3_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1068};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1069
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,2] = 0.0
*/
void BuildingCase3_eqFunction_1069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1069};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[624]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1070
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,3] = 1.0
*/
void BuildingCase3_eqFunction_1070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1070};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1071
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1071};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1072
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1072};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1073
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1073};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1074
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1074};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1075
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1075};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1076
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1076};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1077
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[1,1] = 1.0
*/
void BuildingCase3_eqFunction_1077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1077};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1078
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[1,2] = 0.0
*/
void BuildingCase3_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1078};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1079
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[1,3] = 0.0
*/
void BuildingCase3_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1079};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1080
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[2,1] = 0.0
*/
void BuildingCase3_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1080};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1081
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[2,2] = 1.0
*/
void BuildingCase3_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1081};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1082
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[2,3] = 0.0
*/
void BuildingCase3_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1083
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[3,1] = 0.0
*/
void BuildingCase3_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1083};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1084
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[3,2] = 0.0
*/
void BuildingCase3_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1084};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1085
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[3,3] = 1.0
*/
void BuildingCase3_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1085};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1086
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.position.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1086};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* absoluteSensorTop.absoluteVelocity.position.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1087
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.position.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1087};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* absoluteSensorTop.absoluteVelocity.position.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1088
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.position.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1088};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* absoluteSensorTop.absoluteVelocity.position.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1089
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.position.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1089};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* absoluteSensorTop.absoluteVelocity.position.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1090
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.position.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1090};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* absoluteSensorTop.absoluteVelocity.position.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1091
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.position.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1091};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* absoluteSensorTop.absoluteVelocity.position.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1092
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1092};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[407]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1093
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1093};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[408]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1094
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1094};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1095
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1095};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1096
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1096};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1097
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1098
type: SIMPLE_ASSIGN
absoluteSensorTop.zeroForce1.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1098};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* absoluteSensorTop.zeroForce1.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1099
type: SIMPLE_ASSIGN
absoluteSensorTop.zeroForce1.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1099};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* absoluteSensorTop.zeroForce1.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1100
type: SIMPLE_ASSIGN
absoluteSensorTop.zeroForce1.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[706]] /* absoluteSensorTop.zeroForce1.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1101
type: SIMPLE_ASSIGN
absoluteSensorTop.zeroForce1.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* absoluteSensorTop.zeroForce1.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1102
type: SIMPLE_ASSIGN
absoluteSensorTop.zeroForce1.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* absoluteSensorTop.zeroForce1.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1103
type: SIMPLE_ASSIGN
absoluteSensorTop.zeroForce1.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[709]] /* absoluteSensorTop.zeroForce1.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1104
type: SIMPLE_ASSIGN
body.g_0[1] = 0.0
*/
void BuildingCase3_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* body.g_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1105
type: SIMPLE_ASSIGN
body.g_0[2] = 0.0
*/
void BuildingCase3_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[766]] /* body.g_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1106
type: SIMPLE_ASSIGN
body.g_0[3] = 0.0
*/
void BuildingCase3_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* body.g_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1107
type: SIMPLE_ASSIGN
bodyBox.body.g_0[1] = 0.0
*/
void BuildingCase3_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[857]] /* bodyBox.body.g_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1108
type: SIMPLE_ASSIGN
bodyBox.body.g_0[2] = 0.0
*/
void BuildingCase3_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[858]] /* bodyBox.body.g_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1109
type: SIMPLE_ASSIGN
bodyBox.body.g_0[3] = 0.0
*/
void BuildingCase3_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[859]] /* bodyBox.body.g_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1110
type: SIMPLE_ASSIGN
bodyBox.frame_b.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* bodyBox.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1111
type: SIMPLE_ASSIGN
bodyBox.frame_b.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* bodyBox.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1112
type: SIMPLE_ASSIGN
bodyBox.frame_b.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* bodyBox.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1113
type: SIMPLE_ASSIGN
bodyBox.frame_b.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* bodyBox.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1114
type: SIMPLE_ASSIGN
absoluteSensorBottom.position.position.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* absoluteSensorBottom.position.position.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1115
type: SIMPLE_ASSIGN
absoluteSensorBottom.position.position.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* absoluteSensorBottom.position.position.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1116
type: SIMPLE_ASSIGN
absoluteSensorBottom.position.position.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* absoluteSensorBottom.position.position.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1117
type: SIMPLE_ASSIGN
absoluteSensorBottom.position.position.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* absoluteSensorBottom.position.position.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1118
type: SIMPLE_ASSIGN
absoluteSensorBottom.position.position.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* absoluteSensorBottom.position.position.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1119
type: SIMPLE_ASSIGN
absoluteSensorBottom.position.position.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* absoluteSensorBottom.position.position.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1120
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.position.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* absoluteSensorBottom.velocity.position.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1121
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.position.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* absoluteSensorBottom.velocity.position.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1122
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.position.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* absoluteSensorBottom.velocity.position.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1123
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.position.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* absoluteSensorBottom.velocity.position.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1124
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.position.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* absoluteSensorBottom.velocity.position.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1125
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.position.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* absoluteSensorBottom.velocity.position.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1126
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1127
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1128
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1129
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1130
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1131
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1131};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1132
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,1] = 1.0
*/
void BuildingCase3_eqFunction_1132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1133
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,2] = 0.0
*/
void BuildingCase3_eqFunction_1133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1134
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,3] = 0.0
*/
void BuildingCase3_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1134};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1135
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,1] = 0.0
*/
void BuildingCase3_eqFunction_1135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1136
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,2] = 1.0
*/
void BuildingCase3_eqFunction_1136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1137
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,3] = 0.0
*/
void BuildingCase3_eqFunction_1137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1138
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,1] = 0.0
*/
void BuildingCase3_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1139
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,2] = 0.0
*/
void BuildingCase3_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1140
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,3] = 1.0
*/
void BuildingCase3_eqFunction_1140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1141
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1142
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1143
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1144
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1145
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1146
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1147
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[1,1] = 1.0
*/
void BuildingCase3_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[212]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1148
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[1,2] = 0.0
*/
void BuildingCase3_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1149
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[1,3] = 0.0
*/
void BuildingCase3_eqFunction_1149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1150
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[2,1] = 0.0
*/
void BuildingCase3_eqFunction_1150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1151
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[2,2] = 1.0
*/
void BuildingCase3_eqFunction_1151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1152
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[2,3] = 0.0
*/
void BuildingCase3_eqFunction_1152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1153
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[3,1] = 0.0
*/
void BuildingCase3_eqFunction_1153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1154
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[3,2] = 0.0
*/
void BuildingCase3_eqFunction_1154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1155
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[3,3] = 1.0
*/
void BuildingCase3_eqFunction_1155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1156
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.position.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* absoluteSensorBottom.absoluteVelocity.position.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1157
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.position.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* absoluteSensorBottom.absoluteVelocity.position.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1158
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.position.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* absoluteSensorBottom.absoluteVelocity.position.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1159
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.position.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* absoluteSensorBottom.absoluteVelocity.position.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1160
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.position.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* absoluteSensorBottom.absoluteVelocity.position.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1161
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.position.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* absoluteSensorBottom.absoluteVelocity.position.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1162
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1163
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1164
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1165
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1166
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1167
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1168
type: SIMPLE_ASSIGN
absoluteSensorBottom.zeroForce1.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* absoluteSensorBottom.zeroForce1.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1169
type: SIMPLE_ASSIGN
absoluteSensorBottom.zeroForce1.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* absoluteSensorBottom.zeroForce1.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1170
type: SIMPLE_ASSIGN
absoluteSensorBottom.zeroForce1.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* absoluteSensorBottom.zeroForce1.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1171
type: SIMPLE_ASSIGN
absoluteSensorBottom.zeroForce1.frame_a.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* absoluteSensorBottom.zeroForce1.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1172
type: SIMPLE_ASSIGN
absoluteSensorBottom.zeroForce1.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* absoluteSensorBottom.zeroForce1.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1173
type: SIMPLE_ASSIGN
absoluteSensorBottom.zeroForce1.frame_a.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* absoluteSensorBottom.zeroForce1.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1174
type: SIMPLE_ASSIGN
force1.arrow.r_tail[1] = 0.0
*/
void BuildingCase3_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[911]] /* force1.arrow.r_tail[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1175
type: SIMPLE_ASSIGN
force1.arrow.r_tail[2] = 0.0
*/
void BuildingCase3_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* force1.arrow.r_tail[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1176
type: SIMPLE_ASSIGN
force1.arrow.r_tail[3] = 0.0
*/
void BuildingCase3_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[913]] /* force1.arrow.r_tail[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1177
type: SIMPLE_ASSIGN
world.frame_b.R.T[1,1] = 1.0
*/
void BuildingCase3_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* world.frame_b.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1178
type: SIMPLE_ASSIGN
world.frame_b.R.T[1,2] = 0.0
*/
void BuildingCase3_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* world.frame_b.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1179
type: SIMPLE_ASSIGN
world.frame_b.R.T[1,3] = 0.0
*/
void BuildingCase3_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* world.frame_b.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1180
type: SIMPLE_ASSIGN
world.frame_b.R.T[2,1] = 0.0
*/
void BuildingCase3_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* world.frame_b.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1181
type: SIMPLE_ASSIGN
world.frame_b.R.T[2,2] = 1.0
*/
void BuildingCase3_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* world.frame_b.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1182
type: SIMPLE_ASSIGN
world.frame_b.R.T[2,3] = 0.0
*/
void BuildingCase3_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* world.frame_b.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
world.frame_b.R.T[3,1] = 0.0
*/
void BuildingCase3_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* world.frame_b.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1184
type: SIMPLE_ASSIGN
world.frame_b.R.T[3,2] = 0.0
*/
void BuildingCase3_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* world.frame_b.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1185
type: SIMPLE_ASSIGN
world.frame_b.R.T[3,3] = 1.0
*/
void BuildingCase3_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* world.frame_b.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1186
type: SIMPLE_ASSIGN
world.frame_b.R.w[1] = 0.0
*/
void BuildingCase3_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* world.frame_b.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1187
type: SIMPLE_ASSIGN
world.frame_b.R.w[2] = 0.0
*/
void BuildingCase3_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* world.frame_b.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1188
type: SIMPLE_ASSIGN
world.frame_b.R.w[3] = 0.0
*/
void BuildingCase3_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* world.frame_b.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1189
type: SIMPLE_ASSIGN
force1.basicWorldForce.frame_b.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[914]] /* force1.basicWorldForce.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1190
type: SIMPLE_ASSIGN
force1.basicWorldForce.frame_b.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* force1.basicWorldForce.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1191
type: SIMPLE_ASSIGN
force1.basicWorldForce.frame_b.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[916]] /* force1.basicWorldForce.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1192
type: SIMPLE_ASSIGN
force1.arrow.headAtOrigin = true
*/
void BuildingCase3_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1192};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* force1.arrow.headAtOrigin DISCRETE */) = 1 /* true */;
  TRACE_POP
}

/*
equation index: 1193
type: SIMPLE_ASSIGN
force1.arrow.arrowLine.twoHeadedArrow = false
*/
void BuildingCase3_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1193};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* force1.arrow.arrowLine.twoHeadedArrow DISCRETE */) = 0 /* false */;
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1557(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1559(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1561(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1558(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1560(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1562(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1525(DATA *data, threadData_t *threadData);


/*
equation index: 1201
type: SIMPLE_ASSIGN
body1.frame_a.f[3] = body1.a_0[3] * body1.m
*/
void BuildingCase3_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* body1.frame_a.f[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* body1.a_0[3] variable */)) * ((data->simulationInfo->realParameter[152] /* body1.m PARAM */));
  TRACE_POP
}

/*
equation index: 1202
type: SIMPLE_ASSIGN
$DER.absoluteSensorBottom.der1[3].u = body1.a_0[3]
*/
void BuildingCase3_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* der(absoluteSensorBottom.der1[3].u) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* body1.a_0[3] variable */);
  TRACE_POP
}

/*
equation index: 1203
type: SIMPLE_ASSIGN
absoluteSensorBottom.a[3] = body1.a_0[3]
*/
void BuildingCase3_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* absoluteSensorBottom.a[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* body1.a_0[3] variable */);
  TRACE_POP
}

/*
equation index: 1204
type: SIMPLE_ASSIGN
$DER.$DER.prismatic.frame_a.r_0[3] = body1.a_0[3]
*/
void BuildingCase3_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* der(der(prismatic.frame_a.r_0[3])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* body1.a_0[3] variable */);
  TRACE_POP
}

/*
equation index: 1205
type: SIMPLE_ASSIGN
bodyBox.a_0[3] = $DER.$DER.prismatic.frame_a.r_0[3]
*/
void BuildingCase3_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bodyBox.a_0[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* der(der(prismatic.frame_a.r_0[3])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 1206
type: SIMPLE_ASSIGN
$DER.absoluteSensorTop.der1[3].u = bodyBox.a_0[3]
*/
void BuildingCase3_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(absoluteSensorTop.der1[3].u) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bodyBox.a_0[3] variable */);
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1524(DATA *data, threadData_t *threadData);


/*
equation index: 1208
type: SIMPLE_ASSIGN
body1.frame_a.f[1] = body1.a_0[1] * body1.m
*/
void BuildingCase3_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* body1.frame_a.f[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* body1.a_0[1] variable */)) * ((data->simulationInfo->realParameter[152] /* body1.m PARAM */));
  TRACE_POP
}

/*
equation index: 1209
type: SIMPLE_ASSIGN
body1.frame_a.t[2] = body1.r_CM[3] * body1.frame_a.f[1] - body1.r_CM[1] * body1.frame_a.f[3]
*/
void BuildingCase3_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* body1.frame_a.t[2] variable */) = ((data->simulationInfo->realParameter[158] /* body1.r_CM[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* body1.frame_a.f[1] variable */)) - (((data->simulationInfo->realParameter[156] /* body1.r_CM[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* body1.frame_a.f[3] variable */)));
  TRACE_POP
}

/*
equation index: 1210
type: SIMPLE_ASSIGN
$DER.absoluteSensorBottom.der1[1].u = body1.a_0[1]
*/
void BuildingCase3_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* der(absoluteSensorBottom.der1[1].u) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* body1.a_0[1] variable */);
  TRACE_POP
}

/*
equation index: 1211
type: SIMPLE_ASSIGN
absoluteSensorBottom.a[1] = body1.a_0[1]
*/
void BuildingCase3_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* absoluteSensorBottom.a[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* body1.a_0[1] variable */);
  TRACE_POP
}

/*
equation index: 1212
type: SIMPLE_ASSIGN
$DER.$DER.prismatic.frame_a.r_0[1] = body1.a_0[1]
*/
void BuildingCase3_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1212};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* der(der(prismatic.frame_a.r_0[1])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* body1.a_0[1] variable */);
  TRACE_POP
}

/*
equation index: 1213
type: SIMPLE_ASSIGN
bodyBox.a_0[1] = $DER.$DER.prismatic.frame_a.r_0[1]
*/
void BuildingCase3_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* bodyBox.a_0[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* der(der(prismatic.frame_a.r_0[1])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 1214
type: SIMPLE_ASSIGN
$DER.absoluteSensorTop.der1[1].u = bodyBox.a_0[1]
*/
void BuildingCase3_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(absoluteSensorTop.der1[1].u) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* bodyBox.a_0[1] variable */);
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1521(DATA *data, threadData_t *threadData);


/*
equation index: 1216
type: SIMPLE_ASSIGN
$DER.absoluteSensorBottom.velocity.der1[1].u = absoluteSensorBottom.der1[1].u
*/
void BuildingCase3_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(absoluteSensorBottom.velocity.der1[1].u) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* absoluteSensorBottom.der1[1].u DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1217
type: SIMPLE_ASSIGN
absoluteSensorBottom.v[1] = absoluteSensorBottom.der1[1].u
*/
void BuildingCase3_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* absoluteSensorBottom.v[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* absoluteSensorBottom.der1[1].u DUMMY_STATE */);
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1518(DATA *data, threadData_t *threadData);


/*
equation index: 1219
type: SIMPLE_ASSIGN
$DER.absoluteSensorBottom.velocity.der1[3].u = absoluteSensorBottom.der1[3].u
*/
void BuildingCase3_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(absoluteSensorBottom.velocity.der1[3].u) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* absoluteSensorBottom.der1[3].u DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1220
type: SIMPLE_ASSIGN
absoluteSensorBottom.v[3] = absoluteSensorBottom.der1[3].u
*/
void BuildingCase3_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* absoluteSensorBottom.v[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* absoluteSensorBottom.der1[3].u DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1221
type: SIMPLE_ASSIGN
$DER.prismatic.frame_a.r_0[1] = absoluteSensorBottom.der1[1].u
*/
void BuildingCase3_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(prismatic.frame_a.r_0[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* absoluteSensorBottom.der1[1].u DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1222
type: SIMPLE_ASSIGN
absoluteSensorTop.der1[1].u = $DER.prismatic.frame_a.r_0[1]
*/
void BuildingCase3_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* absoluteSensorTop.der1[1].u DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(prismatic.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 1223
type: SIMPLE_ASSIGN
$DER.absoluteSensorTop.velocity.der1[1].u = absoluteSensorTop.der1[1].u
*/
void BuildingCase3_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(absoluteSensorTop.velocity.der1[1].u) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* absoluteSensorTop.der1[1].u DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1224
type: SIMPLE_ASSIGN
$DER.prismatic.frame_a.r_0[3] = absoluteSensorBottom.der1[3].u
*/
void BuildingCase3_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* der(prismatic.frame_a.r_0[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* absoluteSensorBottom.der1[3].u DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1225
type: SIMPLE_ASSIGN
absoluteSensorTop.der1[3].u = $DER.prismatic.frame_a.r_0[3]
*/
void BuildingCase3_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* absoluteSensorTop.der1[3].u DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* der(prismatic.frame_a.r_0[3]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 1226
type: SIMPLE_ASSIGN
$DER.absoluteSensorTop.velocity.der1[3].u = absoluteSensorTop.der1[3].u
*/
void BuildingCase3_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(absoluteSensorTop.velocity.der1[3].u) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* absoluteSensorTop.der1[3].u DUMMY_STATE */);
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1515(DATA *data, threadData_t *threadData);


/*
equation index: 1228
type: SIMPLE_ASSIGN
absoluteSensorBottom.r[1] = absoluteSensorBottom.velocity.der1[1].u
*/
void BuildingCase3_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* absoluteSensorBottom.r[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* absoluteSensorBottom.velocity.der1[1].u DUMMY_STATE */);
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1512(DATA *data, threadData_t *threadData);


/*
equation index: 1230
type: SIMPLE_ASSIGN
absoluteSensorBottom.r[3] = absoluteSensorBottom.velocity.der1[3].u
*/
void BuildingCase3_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* absoluteSensorBottom.r[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* absoluteSensorBottom.velocity.der1[3].u DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1231
type: SIMPLE_ASSIGN
prismatic.frame_a.r_0[1] = absoluteSensorBottom.velocity.der1[1].u
*/
void BuildingCase3_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* prismatic.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* absoluteSensorBottom.velocity.der1[1].u DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1232
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.der1[1].u = prismatic.frame_a.r_0[1]
*/
void BuildingCase3_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* absoluteSensorTop.velocity.der1[1].u DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* prismatic.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
prismatic.frame_a.r_0[3] = absoluteSensorBottom.velocity.der1[3].u
*/
void BuildingCase3_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* prismatic.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* absoluteSensorBottom.velocity.der1[3].u DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1234
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.der1[3].u = prismatic.frame_a.r_0[3]
*/
void BuildingCase3_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* absoluteSensorTop.velocity.der1[3].u DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* prismatic.frame_a.r_0[3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1235
type: SIMPLE_ASSIGN
prismatic1.v = $START.prismatic1.v
*/
void BuildingCase3_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* prismatic1.v STATE(1,body1.a_0[2]) */) = (data->modelData->realVarsData[3] /* prismatic1.v STATE(1,body1.a_0[2]) */).attribute .start;
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1552(DATA *data, threadData_t *threadData);


/*
equation index: 1237
type: SIMPLE_ASSIGN
$DER.prismatic.frame_a.r_0[2] = absoluteSensorBottom.der1[2].u
*/
void BuildingCase3_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* der(prismatic.frame_a.r_0[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* absoluteSensorBottom.der1[2].u DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1238
type: SIMPLE_ASSIGN
$DER.absoluteSensorBottom.velocity.der1[2].u = absoluteSensorBottom.der1[2].u
*/
void BuildingCase3_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(absoluteSensorBottom.velocity.der1[2].u) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* absoluteSensorBottom.der1[2].u DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1239
type: SIMPLE_ASSIGN
absoluteSensorBottom.v[2] = absoluteSensorBottom.der1[2].u
*/
void BuildingCase3_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* absoluteSensorBottom.v[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* absoluteSensorBottom.der1[2].u DUMMY_STATE */);
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1568(DATA *data, threadData_t *threadData);


/*
equation index: 1241
type: SIMPLE_ASSIGN
prismatic.v = $START.prismatic.v
*/
void BuildingCase3_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* prismatic.v STATE(1,prismatic.a) */) = (data->modelData->realVarsData[1] /* prismatic.v STATE(1,prismatic.a) */).attribute .start;
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1571(DATA *data, threadData_t *threadData);


/*
equation index: 1243
type: SIMPLE_ASSIGN
revolute.R_rel.w[3] = revolute.e[3] * revolute.w
*/
void BuildingCase3_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* revolute.R_rel.w[3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* revolute.w DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1244
type: SIMPLE_ASSIGN
body.w_a[3] = revolute.R_rel.w[3]
*/
void BuildingCase3_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* revolute.R_rel.w[3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1245
type: SIMPLE_ASSIGN
revolute.R_rel.w[2] = revolute.e[2] * revolute.w
*/
void BuildingCase3_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* revolute.R_rel.w[2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* revolute.w DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1246
type: SIMPLE_ASSIGN
body.w_a[2] = revolute.R_rel.w[2]
*/
void BuildingCase3_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* revolute.R_rel.w[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1247
type: SIMPLE_ASSIGN
revolute.R_rel.w[1] = revolute.e[1] * revolute.w
*/
void BuildingCase3_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* revolute.R_rel.w[1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* revolute.w DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1248
type: SIMPLE_ASSIGN
body.w_a[1] = revolute.R_rel.w[1]
*/
void BuildingCase3_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* revolute.R_rel.w[1] DUMMY_STATE */);
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1578(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1553(DATA *data, threadData_t *threadData);


/*
equation index: 1251
type: SIMPLE_ASSIGN
springDamper.f_d = springDamper.d * springDamper.v_rel
*/
void BuildingCase3_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* springDamper.f_d variable */) = ((data->simulationInfo->realParameter[384] /* springDamper.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* springDamper.v_rel DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1252
type: SIMPLE_ASSIGN
springDamper.lossPower = springDamper.f_d * springDamper.v_rel
*/
void BuildingCase3_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* springDamper.lossPower variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* springDamper.f_d variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* springDamper.v_rel DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1253
type: SIMPLE_ASSIGN
$DER.springDamper.s_rel = springDamper.v_rel
*/
void BuildingCase3_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* der(springDamper.s_rel) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* springDamper.v_rel DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1254
type: SIMPLE_ASSIGN
absoluteSensorTop.der1[2].u = $DER.prismatic.frame_a.r_0[2] + prismatic.v
*/
void BuildingCase3_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* absoluteSensorTop.der1[2].u DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* der(prismatic.frame_a.r_0[2]) DUMMY_DER */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* prismatic.v STATE(1,prismatic.a) */);
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1570(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1567(DATA *data, threadData_t *threadData);


/*
equation index: 1257
type: SIMPLE_ASSIGN
bodyBox.body.I_11 = bodyBox.I[1,1]
*/
void BuildingCase3_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1257};
  (data->simulationInfo->realParameter[203] /* bodyBox.body.I_11 PARAM */) = (data->simulationInfo->realParameter[170] /* bodyBox.I[1,1] PARAM */);
  TRACE_POP
}

/*
equation index: 1258
type: SIMPLE_ASSIGN
bodyBox.body.I[1,1] = bodyBox.body.I_11
*/
void BuildingCase3_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1258};
  (data->simulationInfo->realParameter[194] /* bodyBox.body.I[1,1] PARAM */) = (data->simulationInfo->realParameter[203] /* bodyBox.body.I_11 PARAM */);
  TRACE_POP
}

/*
equation index: 1259
type: SIMPLE_ASSIGN
bodyBox.body.I_21 = bodyBox.I[2,1]
*/
void BuildingCase3_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1259};
  (data->simulationInfo->realParameter[204] /* bodyBox.body.I_21 PARAM */) = (data->simulationInfo->realParameter[173] /* bodyBox.I[2,1] PARAM */);
  TRACE_POP
}

/*
equation index: 1260
type: SIMPLE_ASSIGN
bodyBox.body.I[2,1] = bodyBox.body.I_21
*/
void BuildingCase3_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1260};
  (data->simulationInfo->realParameter[197] /* bodyBox.body.I[2,1] PARAM */) = (data->simulationInfo->realParameter[204] /* bodyBox.body.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 1261
type: SIMPLE_ASSIGN
bodyBox.body.I[1,2] = bodyBox.body.I_21
*/
void BuildingCase3_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1261};
  (data->simulationInfo->realParameter[195] /* bodyBox.body.I[1,2] PARAM */) = (data->simulationInfo->realParameter[204] /* bodyBox.body.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 1262
type: SIMPLE_ASSIGN
bodyBox.body.I_22 = bodyBox.I[2,2]
*/
void BuildingCase3_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1262};
  (data->simulationInfo->realParameter[205] /* bodyBox.body.I_22 PARAM */) = (data->simulationInfo->realParameter[174] /* bodyBox.I[2,2] PARAM */);
  TRACE_POP
}

/*
equation index: 1263
type: SIMPLE_ASSIGN
bodyBox.body.I[2,2] = bodyBox.body.I_22
*/
void BuildingCase3_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1263};
  (data->simulationInfo->realParameter[198] /* bodyBox.body.I[2,2] PARAM */) = (data->simulationInfo->realParameter[205] /* bodyBox.body.I_22 PARAM */);
  TRACE_POP
}

/*
equation index: 1264
type: SIMPLE_ASSIGN
bodyBox.body.I_31 = bodyBox.I[3,1]
*/
void BuildingCase3_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1264};
  (data->simulationInfo->realParameter[206] /* bodyBox.body.I_31 PARAM */) = (data->simulationInfo->realParameter[176] /* bodyBox.I[3,1] PARAM */);
  TRACE_POP
}

/*
equation index: 1265
type: SIMPLE_ASSIGN
bodyBox.body.I[3,1] = bodyBox.body.I_31
*/
void BuildingCase3_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1265};
  (data->simulationInfo->realParameter[200] /* bodyBox.body.I[3,1] PARAM */) = (data->simulationInfo->realParameter[206] /* bodyBox.body.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 1266
type: SIMPLE_ASSIGN
bodyBox.body.I[1,3] = bodyBox.body.I_31
*/
void BuildingCase3_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1266};
  (data->simulationInfo->realParameter[196] /* bodyBox.body.I[1,3] PARAM */) = (data->simulationInfo->realParameter[206] /* bodyBox.body.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 1267
type: SIMPLE_ASSIGN
bodyBox.body.I_32 = bodyBox.I[3,2]
*/
void BuildingCase3_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1267};
  (data->simulationInfo->realParameter[207] /* bodyBox.body.I_32 PARAM */) = (data->simulationInfo->realParameter[177] /* bodyBox.I[3,2] PARAM */);
  TRACE_POP
}

/*
equation index: 1268
type: SIMPLE_ASSIGN
bodyBox.body.I[3,2] = bodyBox.body.I_32
*/
void BuildingCase3_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1268};
  (data->simulationInfo->realParameter[201] /* bodyBox.body.I[3,2] PARAM */) = (data->simulationInfo->realParameter[207] /* bodyBox.body.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 1269
type: SIMPLE_ASSIGN
bodyBox.body.I[2,3] = bodyBox.body.I_32
*/
void BuildingCase3_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1269};
  (data->simulationInfo->realParameter[199] /* bodyBox.body.I[2,3] PARAM */) = (data->simulationInfo->realParameter[207] /* bodyBox.body.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 1270
type: SIMPLE_ASSIGN
bodyBox.body.I_33 = bodyBox.I[3,3]
*/
void BuildingCase3_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1270};
  (data->simulationInfo->realParameter[208] /* bodyBox.body.I_33 PARAM */) = (data->simulationInfo->realParameter[178] /* bodyBox.I[3,3] PARAM */);
  TRACE_POP
}

/*
equation index: 1271
type: SIMPLE_ASSIGN
bodyBox.body.I[3,3] = bodyBox.body.I_33
*/
void BuildingCase3_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1271};
  (data->simulationInfo->realParameter[202] /* bodyBox.body.I[3,3] PARAM */) = (data->simulationInfo->realParameter[208] /* bodyBox.body.I_33 PARAM */);
  TRACE_POP
}

/*
equation index: 1272
type: SIMPLE_ASSIGN
prismatic1.s = $START.prismatic1.s
*/
void BuildingCase3_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* prismatic1.s STATE(1,prismatic1.v) */) = (data->modelData->realVarsData[2] /* prismatic1.s STATE(1,prismatic1.v) */).attribute .start;
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1554(DATA *data, threadData_t *threadData);


/*
equation index: 1274
type: SIMPLE_ASSIGN
prismatic.frame_a.r_0[2] = 1.0 + absoluteSensorBottom.velocity.der1[2].u
*/
void BuildingCase3_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* prismatic.frame_a.r_0[2] DUMMY_STATE */) = 1.0 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* absoluteSensorBottom.velocity.der1[2].u DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 1275
type: SIMPLE_ASSIGN
absoluteSensorBottom.r[2] = absoluteSensorBottom.velocity.der1[2].u
*/
void BuildingCase3_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* absoluteSensorBottom.r[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* absoluteSensorBottom.velocity.der1[2].u DUMMY_STATE */);
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1563(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1564(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1556(DATA *data, threadData_t *threadData);


/*
equation index: 1279
type: SIMPLE_ASSIGN
prismatic.s = $START.prismatic.s
*/
void BuildingCase3_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* prismatic.s STATE(1,prismatic.v) */) = (data->modelData->realVarsData[0] /* prismatic.s STATE(1,prismatic.v) */).attribute .start;
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1584(DATA *data, threadData_t *threadData);


/*
equation index: 1281
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[1,1] = revolute.e[1] ^ 2.0 + (1.0 - revolute.e[1] ^ 2.0) * cos(revolute.phi)
*/
void BuildingCase3_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1281};
  modelica_real tmp26;
  modelica_real tmp27;
  tmp26 = (data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */);
  tmp27 = (data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* bodyBox.frame_b.R.T[1,1] variable */) = (tmp26 * tmp26) + (1.0 - ((tmp27 * tmp27))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 1282
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[1,2] = (revolute.e[1] - revolute.e[1] * cos(revolute.phi)) * revolute.e[2] + revolute.e[3] * sin(revolute.phi)
*/
void BuildingCase3_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */) = ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */) - (((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */))))) * ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) + ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 1283
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[1,3] = (revolute.e[1] - revolute.e[1] * cos(revolute.phi)) * revolute.e[3] - revolute.e[2] * sin(revolute.phi)
*/
void BuildingCase3_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* bodyBox.frame_b.R.T[1,3] variable */) = ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */) - (((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */))))) * ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) - (((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 1284
type: SIMPLE_ASSIGN
absoluteSensorTop.v[1] = bodyBox.frame_b.R.T[1,1] * absoluteSensorTop.der1[1].u + bodyBox.frame_b.R.T[1,2] * absoluteSensorTop.der1[2].u + bodyBox.frame_b.R.T[1,3] * absoluteSensorTop.der1[3].u
*/
void BuildingCase3_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* absoluteSensorTop.v[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* bodyBox.frame_b.R.T[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* absoluteSensorTop.der1[1].u DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* absoluteSensorTop.der1[2].u DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* bodyBox.frame_b.R.T[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* absoluteSensorTop.der1[3].u DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1285
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[2,1] = (revolute.e[2] - revolute.e[2] * cos(revolute.phi)) * revolute.e[1] - revolute.e[3] * sin(revolute.phi)
*/
void BuildingCase3_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* bodyBox.frame_b.R.T[2,1] variable */) = ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */) - (((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */))))) * ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) - (((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 1286
type: SIMPLE_ASSIGN
bodyBox.frame_b.r_0[1] = absoluteSensorTop.velocity.der1[1].u + (-0.01) * bodyBox.frame_b.R.T[2,1]
*/
void BuildingCase3_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* bodyBox.frame_b.r_0[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* absoluteSensorTop.velocity.der1[1].u DUMMY_STATE */) + (-0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* bodyBox.frame_b.R.T[2,1] variable */));
  TRACE_POP
}

/*
equation index: 1287
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[2,2] = revolute.e[2] ^ 2.0 + (1.0 - revolute.e[2] ^ 2.0) * cos(revolute.phi)
*/
void BuildingCase3_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1287};
  modelica_real tmp28;
  modelica_real tmp29;
  tmp28 = (data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */);
  tmp29 = (data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */) = (tmp28 * tmp28) + (1.0 - ((tmp29 * tmp29))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 1288
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[2,3] = (revolute.e[2] - revolute.e[2] * cos(revolute.phi)) * revolute.e[3] + revolute.e[1] * sin(revolute.phi)
*/
void BuildingCase3_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1288};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* bodyBox.frame_b.R.T[2,3] variable */) = ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */) - (((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */))))) * ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) + ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 1289
type: SIMPLE_ASSIGN
absoluteSensorTop.v[2] = bodyBox.frame_b.R.T[2,1] * absoluteSensorTop.der1[1].u + bodyBox.frame_b.R.T[2,2] * absoluteSensorTop.der1[2].u + bodyBox.frame_b.R.T[2,3] * absoluteSensorTop.der1[3].u
*/
void BuildingCase3_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* absoluteSensorTop.v[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* bodyBox.frame_b.R.T[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* absoluteSensorTop.der1[1].u DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* absoluteSensorTop.der1[2].u DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* bodyBox.frame_b.R.T[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* absoluteSensorTop.der1[3].u DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1290
type: SIMPLE_ASSIGN
bodyBox.frame_b.r_0[3] = absoluteSensorTop.velocity.der1[3].u + (-0.01) * bodyBox.frame_b.R.T[2,3]
*/
void BuildingCase3_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* bodyBox.frame_b.r_0[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* absoluteSensorTop.velocity.der1[3].u DUMMY_STATE */) + (-0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* bodyBox.frame_b.R.T[2,3] variable */));
  TRACE_POP
}

/*
equation index: 1291
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[3,1] = (revolute.e[3] - revolute.e[3] * cos(revolute.phi)) * revolute.e[1] + revolute.e[2] * sin(revolute.phi)
*/
void BuildingCase3_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* bodyBox.frame_b.R.T[3,1] variable */) = ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */) - (((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */))))) * ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) + ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 1292
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[3,2] = (revolute.e[3] - revolute.e[3] * cos(revolute.phi)) * revolute.e[2] - revolute.e[1] * sin(revolute.phi)
*/
void BuildingCase3_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */) = ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */) - (((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */))))) * ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) - (((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[3,3] = revolute.e[3] ^ 2.0 + (1.0 - revolute.e[3] ^ 2.0) * cos(revolute.phi)
*/
void BuildingCase3_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1293};
  modelica_real tmp30;
  modelica_real tmp31;
  tmp30 = (data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */);
  tmp31 = (data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* bodyBox.frame_b.R.T[3,3] variable */) = (tmp30 * tmp30) + (1.0 - ((tmp31 * tmp31))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 1294
type: SIMPLE_ASSIGN
absoluteSensorTop.v[3] = bodyBox.frame_b.R.T[3,1] * absoluteSensorTop.der1[1].u + bodyBox.frame_b.R.T[3,2] * absoluteSensorTop.der1[2].u + bodyBox.frame_b.R.T[3,3] * absoluteSensorTop.der1[3].u
*/
void BuildingCase3_eqFunction_1294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* absoluteSensorTop.v[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* bodyBox.frame_b.R.T[3,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* absoluteSensorTop.der1[1].u DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* absoluteSensorTop.der1[2].u DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* bodyBox.frame_b.R.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* absoluteSensorTop.der1[3].u DUMMY_STATE */));
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1581(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1582(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1583(DATA *data, threadData_t *threadData);


/*
equation index: 1364
type: LINEAR

<var>body.z_a[2]</var>
<var>bodyBox.a_0[2]</var>
<var>body.z_a[1]</var>
<var>body.z_a[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void BuildingCase3_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1364};
  /* Linear equation system */
  int retValue;
  double aux_x[4] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 1364 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1364};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 1364 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */) = aux_x[1];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */) = aux_x[2];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */) = aux_x[3];

  TRACE_POP
}
extern void BuildingCase3_eqFunction_1670(DATA *data, threadData_t *threadData);


/*
equation index: 1366
type: SIMPLE_ASSIGN
absoluteSensorTop.a[1] = bodyBox.frame_b.R.T[1,1] * bodyBox.a_0[1] + bodyBox.frame_b.R.T[1,2] * bodyBox.a_0[2] + bodyBox.frame_b.R.T[1,3] * bodyBox.a_0[3]
*/
void BuildingCase3_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* absoluteSensorTop.a[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* bodyBox.frame_b.R.T[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* bodyBox.a_0[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* bodyBox.frame_b.R.T[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bodyBox.a_0[3] variable */));
  TRACE_POP
}

/*
equation index: 1367
type: SIMPLE_ASSIGN
absoluteSensorTop.a[2] = bodyBox.frame_b.R.T[2,1] * bodyBox.a_0[1] + bodyBox.frame_b.R.T[2,2] * bodyBox.a_0[2] + bodyBox.frame_b.R.T[2,3] * bodyBox.a_0[3]
*/
void BuildingCase3_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* absoluteSensorTop.a[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* bodyBox.frame_b.R.T[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* bodyBox.a_0[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* bodyBox.frame_b.R.T[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bodyBox.a_0[3] variable */));
  TRACE_POP
}

/*
equation index: 1368
type: SIMPLE_ASSIGN
absoluteSensorTop.a[3] = bodyBox.frame_b.R.T[3,1] * bodyBox.a_0[1] + bodyBox.frame_b.R.T[3,2] * bodyBox.a_0[2] + bodyBox.frame_b.R.T[3,3] * bodyBox.a_0[3]
*/
void BuildingCase3_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* absoluteSensorTop.a[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* bodyBox.frame_b.R.T[3,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* bodyBox.a_0[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* bodyBox.frame_b.R.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bodyBox.a_0[3] variable */));
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1675(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1672(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1674(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1676(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1682(DATA *data, threadData_t *threadData);


/*
equation index: 1374
type: SIMPLE_ASSIGN
$DER.prismatic1.v = prismatic1.a
*/
void BuildingCase3_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* der(prismatic1.v) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* prismatic1.a variable */);
  TRACE_POP
}

/*
equation index: 1375
type: SIMPLE_ASSIGN
body1.frame_a.t[1] = body1.r_CM[2] * body1.frame_a.f[3] - body1.r_CM[3] * body1.frame_a.f[2]
*/
void BuildingCase3_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* body1.frame_a.t[1] variable */) = ((data->simulationInfo->realParameter[157] /* body1.r_CM[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* body1.frame_a.f[3] variable */)) - (((data->simulationInfo->realParameter[158] /* body1.r_CM[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* body1.frame_a.f[2] variable */)));
  TRACE_POP
}

/*
equation index: 1376
type: SIMPLE_ASSIGN
body1.frame_a.t[3] = body1.r_CM[1] * body1.frame_a.f[2] - body1.r_CM[2] * body1.frame_a.f[1]
*/
void BuildingCase3_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* body1.frame_a.t[3] variable */) = ((data->simulationInfo->realParameter[156] /* body1.r_CM[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* body1.frame_a.f[2] variable */)) - (((data->simulationInfo->realParameter[157] /* body1.r_CM[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* body1.frame_a.f[1] variable */)));
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1681(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1680(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1677(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1667(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1686(DATA *data, threadData_t *threadData);


/*
equation index: 1382
type: SIMPLE_ASSIGN
prismatic1.frame_a.f[1] = force1.frame_b.f[1] + bar21.frame_a.f[1] + body1.frame_a.f[1]
*/
void BuildingCase3_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* prismatic1.frame_a.f[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[923]] /* force1.frame_b.f[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* bar21.frame_a.f[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* body1.frame_a.f[1] variable */);
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1698(DATA *data, threadData_t *threadData);


/*
equation index: 1384
type: SIMPLE_ASSIGN
prismatic1.frame_a.f[3] = force1.frame_b.f[3] + bar21.frame_a.f[3] + body1.frame_a.f[3]
*/
void BuildingCase3_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* prismatic1.frame_a.f[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* force1.frame_b.f[3] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* bar21.frame_a.f[3] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* body1.frame_a.f[3] variable */);
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1685(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1688(DATA *data, threadData_t *threadData);


/*
equation index: 1387
type: SIMPLE_ASSIGN
prismatic1.frame_a.t[2] = bar21.frame_a.t[2] + body1.frame_a.t[2]
*/
void BuildingCase3_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* prismatic1.frame_a.t[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* bar21.frame_a.t[2] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* body1.frame_a.t[2] variable */);
  TRACE_POP
}

/*
equation index: 1388
type: SIMPLE_ASSIGN
bar2.frame_a.t[2] = prismatic1.frame_a.t[2] - 0.3 * prismatic1.frame_a.f[3]
*/
void BuildingCase3_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1388};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[711]] /* bar2.frame_a.t[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* prismatic1.frame_a.t[2] variable */) - ((0.3) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* prismatic1.frame_a.f[3] variable */)));
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1692(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1580(DATA *data, threadData_t *threadData);


/*
equation index: 1391
type: SIMPLE_ASSIGN
absoluteSensorTop.r[1] = bodyBox.frame_b.R.T[1,1] * absoluteSensorTop.velocity.der1[1].u + bodyBox.frame_b.R.T[1,2] * absoluteSensorTop.velocity.der1[2].u + bodyBox.frame_b.R.T[1,3] * absoluteSensorTop.velocity.der1[3].u
*/
void BuildingCase3_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* absoluteSensorTop.r[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* bodyBox.frame_b.R.T[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* absoluteSensorTop.velocity.der1[1].u DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* absoluteSensorTop.velocity.der1[2].u DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* bodyBox.frame_b.R.T[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* absoluteSensorTop.velocity.der1[3].u DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1392
type: SIMPLE_ASSIGN
absoluteSensorTop.r[2] = bodyBox.frame_b.R.T[2,1] * absoluteSensorTop.velocity.der1[1].u + bodyBox.frame_b.R.T[2,2] * absoluteSensorTop.velocity.der1[2].u + bodyBox.frame_b.R.T[2,3] * absoluteSensorTop.velocity.der1[3].u
*/
void BuildingCase3_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1392};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* absoluteSensorTop.r[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* bodyBox.frame_b.R.T[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* absoluteSensorTop.velocity.der1[1].u DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* absoluteSensorTop.velocity.der1[2].u DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* bodyBox.frame_b.R.T[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* absoluteSensorTop.velocity.der1[3].u DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 1393
type: SIMPLE_ASSIGN
absoluteSensorTop.r[3] = bodyBox.frame_b.R.T[3,1] * absoluteSensorTop.velocity.der1[1].u + bodyBox.frame_b.R.T[3,2] * absoluteSensorTop.velocity.der1[2].u + bodyBox.frame_b.R.T[3,3] * absoluteSensorTop.velocity.der1[3].u
*/
void BuildingCase3_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* absoluteSensorTop.r[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* bodyBox.frame_b.R.T[3,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* absoluteSensorTop.velocity.der1[1].u DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* absoluteSensorTop.velocity.der1[2].u DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* bodyBox.frame_b.R.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* absoluteSensorTop.velocity.der1[3].u DUMMY_STATE */));
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1597(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1699(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1700(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1701(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1703(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1693(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1694(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1695(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1696(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1697(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1555(DATA *data, threadData_t *threadData);


/*
equation index: 1405
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1405};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[873]] /* bodyBox.frameTranslation.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1406
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1406};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[871]] /* bodyBox.frameTranslation.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1407
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.frame_a.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[870]] /* bodyBox.frameTranslation.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1408
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1408};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[869]] /* bodyBox.frameTranslation.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1409
type: SIMPLE_ASSIGN
force1.zeroPosition.frame_resolve.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1409};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[946]] /* force1.zeroPosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1410
type: SIMPLE_ASSIGN
force1.zeroPosition.frame_resolve.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1410};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* force1.zeroPosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1411
type: SIMPLE_ASSIGN
force1.zeroPosition.frame_resolve.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1411};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* force1.zeroPosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1412
type: SIMPLE_ASSIGN
force1.zeroPosition.frame_resolve.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1412};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[940]] /* force1.zeroPosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1413
type: SIMPLE_ASSIGN
force1.zeroPosition.frame_resolve.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1413};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* force1.zeroPosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1414
type: SIMPLE_ASSIGN
force1.zeroPosition.frame_resolve.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* force1.zeroPosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1415
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1415};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1416
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1416};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1417
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1417};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1418
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1418};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1419
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1419};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1420
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1420};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1421
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1421};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1422
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1422};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1423
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1424
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1424};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1425
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1425};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1426
type: SIMPLE_ASSIGN
absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1426};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1427
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1427};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1428
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1428};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1429
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1429};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1430
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1430};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1431
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1431};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1432
type: SIMPLE_ASSIGN
absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1432};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1433
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1433};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1434
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1434};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1435
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1435};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1436
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1436};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1437
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1437};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1438
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1438};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1439
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.zeroPosition.frame_resolve.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1439};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1440
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.zeroPosition.frame_resolve.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1440};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1441
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.zeroPosition.frame_resolve.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1441};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1442
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.zeroPosition.frame_resolve.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1442};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1443
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.zeroPosition.frame_resolve.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1443};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1444
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.zeroPosition.frame_resolve.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1444};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1445
type: SIMPLE_ASSIGN
absoluteSensorBottom.position.zeroPosition.frame_resolve.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1445};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[208]] /* absoluteSensorBottom.position.zeroPosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1446
type: SIMPLE_ASSIGN
absoluteSensorBottom.position.zeroPosition.frame_resolve.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1446};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* absoluteSensorBottom.position.zeroPosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1447
type: SIMPLE_ASSIGN
absoluteSensorBottom.position.zeroPosition.frame_resolve.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* absoluteSensorBottom.position.zeroPosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1448
type: SIMPLE_ASSIGN
absoluteSensorBottom.position.zeroPosition.frame_resolve.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1448};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* absoluteSensorBottom.position.zeroPosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1449
type: SIMPLE_ASSIGN
absoluteSensorBottom.position.zeroPosition.frame_resolve.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1449};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* absoluteSensorBottom.position.zeroPosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1450
type: SIMPLE_ASSIGN
absoluteSensorBottom.position.zeroPosition.frame_resolve.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1450};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* absoluteSensorBottom.position.zeroPosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1451
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1451};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1452
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1452};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1453
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1453};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1454
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1454};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1455
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1455};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1456
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1456};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1457
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1457};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[460]] /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1458
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1458};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[459]] /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1459
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[458]] /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1460
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1460};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[454]] /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1461
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1461};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[453]] /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1462
type: SIMPLE_ASSIGN
absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1462};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[452]] /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1463
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1463};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1464
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1464};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[591]] /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1465
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1465};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1466
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1466};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[586]] /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1467
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1468
type: SIMPLE_ASSIGN
absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1468};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1469
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1469};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1470
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1470};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1471
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1471};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1472
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1472};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1473
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1473};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1474
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1474};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1475
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.zeroPosition.frame_resolve.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1475};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1476
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.zeroPosition.frame_resolve.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1476};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1477
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.zeroPosition.frame_resolve.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1477};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1478
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.zeroPosition.frame_resolve.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1478};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1479
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.zeroPosition.frame_resolve.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1479};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1480
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.zeroPosition.frame_resolve.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1480};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1481
type: SIMPLE_ASSIGN
absoluteSensorTop.position.zeroPosition.frame_resolve.t[3] = 0.0
*/
void BuildingCase3_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1481};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* absoluteSensorTop.position.zeroPosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1482
type: SIMPLE_ASSIGN
absoluteSensorTop.position.zeroPosition.frame_resolve.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1482};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* absoluteSensorTop.position.zeroPosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1483
type: SIMPLE_ASSIGN
absoluteSensorTop.position.zeroPosition.frame_resolve.t[1] = 0.0
*/
void BuildingCase3_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1483};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* absoluteSensorTop.position.zeroPosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1484
type: SIMPLE_ASSIGN
absoluteSensorTop.position.zeroPosition.frame_resolve.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1484};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[538]] /* absoluteSensorTop.position.zeroPosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1485
type: SIMPLE_ASSIGN
absoluteSensorTop.position.zeroPosition.frame_resolve.f[2] = 0.0
*/
void BuildingCase3_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* absoluteSensorTop.position.zeroPosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1486
type: SIMPLE_ASSIGN
absoluteSensorTop.position.zeroPosition.frame_resolve.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[536]] /* absoluteSensorTop.position.zeroPosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1487
type: SIMPLE_ASSIGN
prismatic1.frame_a.r_0[3] = 0.0
*/
void BuildingCase3_eqFunction_1487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* prismatic1.frame_a.r_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1488
type: SIMPLE_ASSIGN
prismatic1.frame_a.r_0[2] = 0.0
*/
void BuildingCase3_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* prismatic1.frame_a.r_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1489
type: SIMPLE_ASSIGN
prismatic1.frame_a.r_0[1] = 0.3
*/
void BuildingCase3_eqFunction_1489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1489};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* prismatic1.frame_a.r_0[1] variable */) = 0.3;
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1725(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1727(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1730(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1733(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1728(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1726(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1732(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1729(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1731(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1734(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1705(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1707(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1710(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1713(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1708(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1706(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1712(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1709(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1711(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1714(DATA *data, threadData_t *threadData);


/*
equation index: 1511
type: ALGORITHM

  assert(bodyBox.innerHeight <= bodyBox.height, "parameter innerHeight is greater than parameter height");
*/
void BuildingCase3_eqFunction_1511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1511};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,54,"parameter innerHeight is greater than parameter height");
  static int tmp34 = 0;
  {
    tmp32 = LessEq((data->simulationInfo->realParameter[268] /* bodyBox.innerHeight PARAM */),(data->simulationInfo->realParameter[267] /* bodyBox.height PARAM */));
    if(!tmp32)
    {
      {
        const char* assert_cond = "(bodyBox.innerHeight <= bodyBox.height)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/4C48~1/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Parts/BodyBox.mo",161,3,162,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp33)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/4C48~1/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Parts/BodyBox.mo",161,3,162,62,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp33)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1510
type: ALGORITHM

  assert(bodyBox.innerWidth <= bodyBox.width, "parameter innerWidth is greater than parameter width");
*/
void BuildingCase3_eqFunction_1510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1510};
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,52,"parameter innerWidth is greater than parameter width");
  static int tmp37 = 0;
  {
    tmp35 = LessEq((data->simulationInfo->realParameter[269] /* bodyBox.innerWidth PARAM */),(data->simulationInfo->realParameter[290] /* bodyBox.width PARAM */));
    if(!tmp35)
    {
      {
        const char* assert_cond = "(bodyBox.innerWidth <= bodyBox.width)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/4C48~1/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Parts/BodyBox.mo",159,3,160,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp36)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/4C48~1/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Parts/BodyBox.mo",159,3,160,60,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp36)));
        }
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void BuildingCase3_functionInitialEquations_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  BuildingCase3_eqFunction_965(data, threadData);
  BuildingCase3_eqFunction_966(data, threadData);
  BuildingCase3_eqFunction_967(data, threadData);
  BuildingCase3_eqFunction_968(data, threadData);
  BuildingCase3_eqFunction_969(data, threadData);
  BuildingCase3_eqFunction_970(data, threadData);
  BuildingCase3_eqFunction_971(data, threadData);
  BuildingCase3_eqFunction_972(data, threadData);
  BuildingCase3_eqFunction_973(data, threadData);
  BuildingCase3_eqFunction_974(data, threadData);
  BuildingCase3_eqFunction_975(data, threadData);
  BuildingCase3_eqFunction_976(data, threadData);
  BuildingCase3_eqFunction_977(data, threadData);
  BuildingCase3_eqFunction_978(data, threadData);
  BuildingCase3_eqFunction_979(data, threadData);
  BuildingCase3_eqFunction_980(data, threadData);
  BuildingCase3_eqFunction_981(data, threadData);
  BuildingCase3_eqFunction_982(data, threadData);
  BuildingCase3_eqFunction_983(data, threadData);
  BuildingCase3_eqFunction_984(data, threadData);
  BuildingCase3_eqFunction_985(data, threadData);
  BuildingCase3_eqFunction_986(data, threadData);
  BuildingCase3_eqFunction_987(data, threadData);
  BuildingCase3_eqFunction_988(data, threadData);
  BuildingCase3_eqFunction_989(data, threadData);
  BuildingCase3_eqFunction_990(data, threadData);
  BuildingCase3_eqFunction_991(data, threadData);
  BuildingCase3_eqFunction_992(data, threadData);
  BuildingCase3_eqFunction_993(data, threadData);
  BuildingCase3_eqFunction_994(data, threadData);
  BuildingCase3_eqFunction_995(data, threadData);
  BuildingCase3_eqFunction_996(data, threadData);
  BuildingCase3_eqFunction_997(data, threadData);
  BuildingCase3_eqFunction_998(data, threadData);
  BuildingCase3_eqFunction_999(data, threadData);
  BuildingCase3_eqFunction_1000(data, threadData);
  BuildingCase3_eqFunction_1001(data, threadData);
  BuildingCase3_eqFunction_1002(data, threadData);
  BuildingCase3_eqFunction_1003(data, threadData);
  BuildingCase3_eqFunction_1004(data, threadData);
  BuildingCase3_eqFunction_1005(data, threadData);
  BuildingCase3_eqFunction_1006(data, threadData);
  BuildingCase3_eqFunction_1007(data, threadData);
  BuildingCase3_eqFunction_1008(data, threadData);
  BuildingCase3_eqFunction_1009(data, threadData);
  BuildingCase3_eqFunction_1010(data, threadData);
  BuildingCase3_eqFunction_1011(data, threadData);
  BuildingCase3_eqFunction_1012(data, threadData);
  BuildingCase3_eqFunction_1013(data, threadData);
  BuildingCase3_eqFunction_1014(data, threadData);
  BuildingCase3_eqFunction_1015(data, threadData);
  BuildingCase3_eqFunction_1016(data, threadData);
  BuildingCase3_eqFunction_1017(data, threadData);
  BuildingCase3_eqFunction_1018(data, threadData);
  BuildingCase3_eqFunction_1019(data, threadData);
  BuildingCase3_eqFunction_1020(data, threadData);
  BuildingCase3_eqFunction_1021(data, threadData);
  BuildingCase3_eqFunction_1022(data, threadData);
  BuildingCase3_eqFunction_1023(data, threadData);
  BuildingCase3_eqFunction_1024(data, threadData);
  BuildingCase3_eqFunction_1025(data, threadData);
  BuildingCase3_eqFunction_1026(data, threadData);
  BuildingCase3_eqFunction_1027(data, threadData);
  BuildingCase3_eqFunction_1028(data, threadData);
  BuildingCase3_eqFunction_1029(data, threadData);
  BuildingCase3_eqFunction_1030(data, threadData);
  BuildingCase3_eqFunction_1031(data, threadData);
  BuildingCase3_eqFunction_1032(data, threadData);
  BuildingCase3_eqFunction_1033(data, threadData);
  BuildingCase3_eqFunction_1034(data, threadData);
  BuildingCase3_eqFunction_1035(data, threadData);
  BuildingCase3_eqFunction_1036(data, threadData);
  BuildingCase3_eqFunction_1037(data, threadData);
  BuildingCase3_eqFunction_1038(data, threadData);
  BuildingCase3_eqFunction_1039(data, threadData);
  BuildingCase3_eqFunction_1040(data, threadData);
  BuildingCase3_eqFunction_1041(data, threadData);
  BuildingCase3_eqFunction_1042(data, threadData);
  BuildingCase3_eqFunction_1043(data, threadData);
  BuildingCase3_eqFunction_1044(data, threadData);
  BuildingCase3_eqFunction_1045(data, threadData);
  BuildingCase3_eqFunction_1046(data, threadData);
  BuildingCase3_eqFunction_1047(data, threadData);
  BuildingCase3_eqFunction_1048(data, threadData);
  BuildingCase3_eqFunction_1049(data, threadData);
  BuildingCase3_eqFunction_1050(data, threadData);
  BuildingCase3_eqFunction_1051(data, threadData);
  BuildingCase3_eqFunction_1052(data, threadData);
  BuildingCase3_eqFunction_1053(data, threadData);
  BuildingCase3_eqFunction_1054(data, threadData);
  BuildingCase3_eqFunction_1055(data, threadData);
  BuildingCase3_eqFunction_1056(data, threadData);
  BuildingCase3_eqFunction_1057(data, threadData);
  BuildingCase3_eqFunction_1058(data, threadData);
  BuildingCase3_eqFunction_1059(data, threadData);
  BuildingCase3_eqFunction_1060(data, threadData);
  BuildingCase3_eqFunction_1061(data, threadData);
  BuildingCase3_eqFunction_1062(data, threadData);
  BuildingCase3_eqFunction_1063(data, threadData);
  BuildingCase3_eqFunction_1064(data, threadData);
  BuildingCase3_eqFunction_1065(data, threadData);
  BuildingCase3_eqFunction_1066(data, threadData);
  BuildingCase3_eqFunction_1067(data, threadData);
  BuildingCase3_eqFunction_1068(data, threadData);
  BuildingCase3_eqFunction_1069(data, threadData);
  BuildingCase3_eqFunction_1070(data, threadData);
  BuildingCase3_eqFunction_1071(data, threadData);
  BuildingCase3_eqFunction_1072(data, threadData);
  BuildingCase3_eqFunction_1073(data, threadData);
  BuildingCase3_eqFunction_1074(data, threadData);
  BuildingCase3_eqFunction_1075(data, threadData);
  BuildingCase3_eqFunction_1076(data, threadData);
  BuildingCase3_eqFunction_1077(data, threadData);
  BuildingCase3_eqFunction_1078(data, threadData);
  BuildingCase3_eqFunction_1079(data, threadData);
  BuildingCase3_eqFunction_1080(data, threadData);
  BuildingCase3_eqFunction_1081(data, threadData);
  BuildingCase3_eqFunction_1082(data, threadData);
  BuildingCase3_eqFunction_1083(data, threadData);
  BuildingCase3_eqFunction_1084(data, threadData);
  BuildingCase3_eqFunction_1085(data, threadData);
  BuildingCase3_eqFunction_1086(data, threadData);
  BuildingCase3_eqFunction_1087(data, threadData);
  BuildingCase3_eqFunction_1088(data, threadData);
  BuildingCase3_eqFunction_1089(data, threadData);
  BuildingCase3_eqFunction_1090(data, threadData);
  BuildingCase3_eqFunction_1091(data, threadData);
  BuildingCase3_eqFunction_1092(data, threadData);
  BuildingCase3_eqFunction_1093(data, threadData);
  BuildingCase3_eqFunction_1094(data, threadData);
  BuildingCase3_eqFunction_1095(data, threadData);
  BuildingCase3_eqFunction_1096(data, threadData);
  BuildingCase3_eqFunction_1097(data, threadData);
  BuildingCase3_eqFunction_1098(data, threadData);
  BuildingCase3_eqFunction_1099(data, threadData);
  BuildingCase3_eqFunction_1100(data, threadData);
  BuildingCase3_eqFunction_1101(data, threadData);
  BuildingCase3_eqFunction_1102(data, threadData);
  BuildingCase3_eqFunction_1103(data, threadData);
  BuildingCase3_eqFunction_1104(data, threadData);
  BuildingCase3_eqFunction_1105(data, threadData);
  BuildingCase3_eqFunction_1106(data, threadData);
  BuildingCase3_eqFunction_1107(data, threadData);
  BuildingCase3_eqFunction_1108(data, threadData);
  BuildingCase3_eqFunction_1109(data, threadData);
  BuildingCase3_eqFunction_1110(data, threadData);
  BuildingCase3_eqFunction_1111(data, threadData);
  BuildingCase3_eqFunction_1112(data, threadData);
  BuildingCase3_eqFunction_1113(data, threadData);
  BuildingCase3_eqFunction_1114(data, threadData);
  BuildingCase3_eqFunction_1115(data, threadData);
  BuildingCase3_eqFunction_1116(data, threadData);
  BuildingCase3_eqFunction_1117(data, threadData);
  BuildingCase3_eqFunction_1118(data, threadData);
  BuildingCase3_eqFunction_1119(data, threadData);
  BuildingCase3_eqFunction_1120(data, threadData);
  BuildingCase3_eqFunction_1121(data, threadData);
  BuildingCase3_eqFunction_1122(data, threadData);
  BuildingCase3_eqFunction_1123(data, threadData);
  BuildingCase3_eqFunction_1124(data, threadData);
  BuildingCase3_eqFunction_1125(data, threadData);
  BuildingCase3_eqFunction_1126(data, threadData);
  BuildingCase3_eqFunction_1127(data, threadData);
  BuildingCase3_eqFunction_1128(data, threadData);
  BuildingCase3_eqFunction_1129(data, threadData);
  BuildingCase3_eqFunction_1130(data, threadData);
  BuildingCase3_eqFunction_1131(data, threadData);
  BuildingCase3_eqFunction_1132(data, threadData);
  BuildingCase3_eqFunction_1133(data, threadData);
  BuildingCase3_eqFunction_1134(data, threadData);
  BuildingCase3_eqFunction_1135(data, threadData);
  BuildingCase3_eqFunction_1136(data, threadData);
  BuildingCase3_eqFunction_1137(data, threadData);
  BuildingCase3_eqFunction_1138(data, threadData);
  BuildingCase3_eqFunction_1139(data, threadData);
  BuildingCase3_eqFunction_1140(data, threadData);
  BuildingCase3_eqFunction_1141(data, threadData);
  BuildingCase3_eqFunction_1142(data, threadData);
  BuildingCase3_eqFunction_1143(data, threadData);
  BuildingCase3_eqFunction_1144(data, threadData);
  BuildingCase3_eqFunction_1145(data, threadData);
  BuildingCase3_eqFunction_1146(data, threadData);
  BuildingCase3_eqFunction_1147(data, threadData);
  BuildingCase3_eqFunction_1148(data, threadData);
  BuildingCase3_eqFunction_1149(data, threadData);
  BuildingCase3_eqFunction_1150(data, threadData);
  BuildingCase3_eqFunction_1151(data, threadData);
  BuildingCase3_eqFunction_1152(data, threadData);
  BuildingCase3_eqFunction_1153(data, threadData);
  BuildingCase3_eqFunction_1154(data, threadData);
  BuildingCase3_eqFunction_1155(data, threadData);
  BuildingCase3_eqFunction_1156(data, threadData);
  BuildingCase3_eqFunction_1157(data, threadData);
  BuildingCase3_eqFunction_1158(data, threadData);
  BuildingCase3_eqFunction_1159(data, threadData);
  BuildingCase3_eqFunction_1160(data, threadData);
  BuildingCase3_eqFunction_1161(data, threadData);
  BuildingCase3_eqFunction_1162(data, threadData);
  BuildingCase3_eqFunction_1163(data, threadData);
  BuildingCase3_eqFunction_1164(data, threadData);
  BuildingCase3_eqFunction_1165(data, threadData);
  BuildingCase3_eqFunction_1166(data, threadData);
  BuildingCase3_eqFunction_1167(data, threadData);
  BuildingCase3_eqFunction_1168(data, threadData);
  BuildingCase3_eqFunction_1169(data, threadData);
  BuildingCase3_eqFunction_1170(data, threadData);
  BuildingCase3_eqFunction_1171(data, threadData);
  BuildingCase3_eqFunction_1172(data, threadData);
  BuildingCase3_eqFunction_1173(data, threadData);
  BuildingCase3_eqFunction_1174(data, threadData);
  BuildingCase3_eqFunction_1175(data, threadData);
  BuildingCase3_eqFunction_1176(data, threadData);
  BuildingCase3_eqFunction_1177(data, threadData);
  BuildingCase3_eqFunction_1178(data, threadData);
  BuildingCase3_eqFunction_1179(data, threadData);
  BuildingCase3_eqFunction_1180(data, threadData);
  BuildingCase3_eqFunction_1181(data, threadData);
  BuildingCase3_eqFunction_1182(data, threadData);
  BuildingCase3_eqFunction_1183(data, threadData);
  BuildingCase3_eqFunction_1184(data, threadData);
  BuildingCase3_eqFunction_1185(data, threadData);
  BuildingCase3_eqFunction_1186(data, threadData);
  BuildingCase3_eqFunction_1187(data, threadData);
  BuildingCase3_eqFunction_1188(data, threadData);
  BuildingCase3_eqFunction_1189(data, threadData);
  BuildingCase3_eqFunction_1190(data, threadData);
  BuildingCase3_eqFunction_1191(data, threadData);
  BuildingCase3_eqFunction_1192(data, threadData);
  BuildingCase3_eqFunction_1193(data, threadData);
  BuildingCase3_eqFunction_1557(data, threadData);
  BuildingCase3_eqFunction_1559(data, threadData);
  BuildingCase3_eqFunction_1561(data, threadData);
  BuildingCase3_eqFunction_1558(data, threadData);
  BuildingCase3_eqFunction_1560(data, threadData);
  BuildingCase3_eqFunction_1562(data, threadData);
  BuildingCase3_eqFunction_1525(data, threadData);
  BuildingCase3_eqFunction_1201(data, threadData);
  BuildingCase3_eqFunction_1202(data, threadData);
  BuildingCase3_eqFunction_1203(data, threadData);
  BuildingCase3_eqFunction_1204(data, threadData);
  BuildingCase3_eqFunction_1205(data, threadData);
  BuildingCase3_eqFunction_1206(data, threadData);
  BuildingCase3_eqFunction_1524(data, threadData);
  BuildingCase3_eqFunction_1208(data, threadData);
  BuildingCase3_eqFunction_1209(data, threadData);
  BuildingCase3_eqFunction_1210(data, threadData);
  BuildingCase3_eqFunction_1211(data, threadData);
  BuildingCase3_eqFunction_1212(data, threadData);
  BuildingCase3_eqFunction_1213(data, threadData);
  BuildingCase3_eqFunction_1214(data, threadData);
  BuildingCase3_eqFunction_1521(data, threadData);
  BuildingCase3_eqFunction_1216(data, threadData);
  BuildingCase3_eqFunction_1217(data, threadData);
  BuildingCase3_eqFunction_1518(data, threadData);
  BuildingCase3_eqFunction_1219(data, threadData);
  BuildingCase3_eqFunction_1220(data, threadData);
  BuildingCase3_eqFunction_1221(data, threadData);
  BuildingCase3_eqFunction_1222(data, threadData);
  BuildingCase3_eqFunction_1223(data, threadData);
  BuildingCase3_eqFunction_1224(data, threadData);
  BuildingCase3_eqFunction_1225(data, threadData);
  BuildingCase3_eqFunction_1226(data, threadData);
  BuildingCase3_eqFunction_1515(data, threadData);
  BuildingCase3_eqFunction_1228(data, threadData);
  BuildingCase3_eqFunction_1512(data, threadData);
  BuildingCase3_eqFunction_1230(data, threadData);
  BuildingCase3_eqFunction_1231(data, threadData);
  BuildingCase3_eqFunction_1232(data, threadData);
  BuildingCase3_eqFunction_1233(data, threadData);
  BuildingCase3_eqFunction_1234(data, threadData);
  BuildingCase3_eqFunction_1235(data, threadData);
  BuildingCase3_eqFunction_1552(data, threadData);
  BuildingCase3_eqFunction_1237(data, threadData);
  BuildingCase3_eqFunction_1238(data, threadData);
  BuildingCase3_eqFunction_1239(data, threadData);
  BuildingCase3_eqFunction_1568(data, threadData);
  BuildingCase3_eqFunction_1241(data, threadData);
  BuildingCase3_eqFunction_1571(data, threadData);
  BuildingCase3_eqFunction_1243(data, threadData);
  BuildingCase3_eqFunction_1244(data, threadData);
  BuildingCase3_eqFunction_1245(data, threadData);
  BuildingCase3_eqFunction_1246(data, threadData);
  BuildingCase3_eqFunction_1247(data, threadData);
  BuildingCase3_eqFunction_1248(data, threadData);
  BuildingCase3_eqFunction_1578(data, threadData);
  BuildingCase3_eqFunction_1553(data, threadData);
  BuildingCase3_eqFunction_1251(data, threadData);
  BuildingCase3_eqFunction_1252(data, threadData);
  BuildingCase3_eqFunction_1253(data, threadData);
  BuildingCase3_eqFunction_1254(data, threadData);
  BuildingCase3_eqFunction_1570(data, threadData);
  BuildingCase3_eqFunction_1567(data, threadData);
  BuildingCase3_eqFunction_1257(data, threadData);
  BuildingCase3_eqFunction_1258(data, threadData);
  BuildingCase3_eqFunction_1259(data, threadData);
  BuildingCase3_eqFunction_1260(data, threadData);
  BuildingCase3_eqFunction_1261(data, threadData);
  BuildingCase3_eqFunction_1262(data, threadData);
  BuildingCase3_eqFunction_1263(data, threadData);
  BuildingCase3_eqFunction_1264(data, threadData);
  BuildingCase3_eqFunction_1265(data, threadData);
  BuildingCase3_eqFunction_1266(data, threadData);
  BuildingCase3_eqFunction_1267(data, threadData);
  BuildingCase3_eqFunction_1268(data, threadData);
  BuildingCase3_eqFunction_1269(data, threadData);
  BuildingCase3_eqFunction_1270(data, threadData);
  BuildingCase3_eqFunction_1271(data, threadData);
  BuildingCase3_eqFunction_1272(data, threadData);
  BuildingCase3_eqFunction_1554(data, threadData);
  BuildingCase3_eqFunction_1274(data, threadData);
  BuildingCase3_eqFunction_1275(data, threadData);
  BuildingCase3_eqFunction_1563(data, threadData);
  BuildingCase3_eqFunction_1564(data, threadData);
  BuildingCase3_eqFunction_1556(data, threadData);
  BuildingCase3_eqFunction_1279(data, threadData);
  BuildingCase3_eqFunction_1584(data, threadData);
  BuildingCase3_eqFunction_1281(data, threadData);
  BuildingCase3_eqFunction_1282(data, threadData);
  BuildingCase3_eqFunction_1283(data, threadData);
  BuildingCase3_eqFunction_1284(data, threadData);
  BuildingCase3_eqFunction_1285(data, threadData);
  BuildingCase3_eqFunction_1286(data, threadData);
  BuildingCase3_eqFunction_1287(data, threadData);
  BuildingCase3_eqFunction_1288(data, threadData);
  BuildingCase3_eqFunction_1289(data, threadData);
  BuildingCase3_eqFunction_1290(data, threadData);
  BuildingCase3_eqFunction_1291(data, threadData);
  BuildingCase3_eqFunction_1292(data, threadData);
  BuildingCase3_eqFunction_1293(data, threadData);
  BuildingCase3_eqFunction_1294(data, threadData);
  BuildingCase3_eqFunction_1581(data, threadData);
  BuildingCase3_eqFunction_1582(data, threadData);
  BuildingCase3_eqFunction_1583(data, threadData);
  BuildingCase3_eqFunction_1364(data, threadData);
  BuildingCase3_eqFunction_1670(data, threadData);
  BuildingCase3_eqFunction_1366(data, threadData);
  BuildingCase3_eqFunction_1367(data, threadData);
  BuildingCase3_eqFunction_1368(data, threadData);
  BuildingCase3_eqFunction_1675(data, threadData);
  BuildingCase3_eqFunction_1672(data, threadData);
  BuildingCase3_eqFunction_1674(data, threadData);
  BuildingCase3_eqFunction_1676(data, threadData);
  BuildingCase3_eqFunction_1682(data, threadData);
  BuildingCase3_eqFunction_1374(data, threadData);
  BuildingCase3_eqFunction_1375(data, threadData);
  BuildingCase3_eqFunction_1376(data, threadData);
  BuildingCase3_eqFunction_1681(data, threadData);
  BuildingCase3_eqFunction_1680(data, threadData);
  BuildingCase3_eqFunction_1677(data, threadData);
  BuildingCase3_eqFunction_1667(data, threadData);
  BuildingCase3_eqFunction_1686(data, threadData);
  BuildingCase3_eqFunction_1382(data, threadData);
  BuildingCase3_eqFunction_1698(data, threadData);
  BuildingCase3_eqFunction_1384(data, threadData);
  BuildingCase3_eqFunction_1685(data, threadData);
  BuildingCase3_eqFunction_1688(data, threadData);
  BuildingCase3_eqFunction_1387(data, threadData);
  BuildingCase3_eqFunction_1388(data, threadData);
  BuildingCase3_eqFunction_1692(data, threadData);
  BuildingCase3_eqFunction_1580(data, threadData);
  BuildingCase3_eqFunction_1391(data, threadData);
  BuildingCase3_eqFunction_1392(data, threadData);
  BuildingCase3_eqFunction_1393(data, threadData);
  BuildingCase3_eqFunction_1597(data, threadData);
  BuildingCase3_eqFunction_1699(data, threadData);
  BuildingCase3_eqFunction_1700(data, threadData);
  BuildingCase3_eqFunction_1701(data, threadData);
  BuildingCase3_eqFunction_1703(data, threadData);
  BuildingCase3_eqFunction_1693(data, threadData);
  BuildingCase3_eqFunction_1694(data, threadData);
  BuildingCase3_eqFunction_1695(data, threadData);
  BuildingCase3_eqFunction_1696(data, threadData);
  BuildingCase3_eqFunction_1697(data, threadData);
  BuildingCase3_eqFunction_1555(data, threadData);
  BuildingCase3_eqFunction_1405(data, threadData);
  BuildingCase3_eqFunction_1406(data, threadData);
  BuildingCase3_eqFunction_1407(data, threadData);
  BuildingCase3_eqFunction_1408(data, threadData);
  BuildingCase3_eqFunction_1409(data, threadData);
  BuildingCase3_eqFunction_1410(data, threadData);
  BuildingCase3_eqFunction_1411(data, threadData);
  BuildingCase3_eqFunction_1412(data, threadData);
  BuildingCase3_eqFunction_1413(data, threadData);
  BuildingCase3_eqFunction_1414(data, threadData);
  BuildingCase3_eqFunction_1415(data, threadData);
  BuildingCase3_eqFunction_1416(data, threadData);
  BuildingCase3_eqFunction_1417(data, threadData);
  BuildingCase3_eqFunction_1418(data, threadData);
  BuildingCase3_eqFunction_1419(data, threadData);
  BuildingCase3_eqFunction_1420(data, threadData);
  BuildingCase3_eqFunction_1421(data, threadData);
  BuildingCase3_eqFunction_1422(data, threadData);
  BuildingCase3_eqFunction_1423(data, threadData);
  BuildingCase3_eqFunction_1424(data, threadData);
  BuildingCase3_eqFunction_1425(data, threadData);
  BuildingCase3_eqFunction_1426(data, threadData);
  BuildingCase3_eqFunction_1427(data, threadData);
  BuildingCase3_eqFunction_1428(data, threadData);
  BuildingCase3_eqFunction_1429(data, threadData);
  BuildingCase3_eqFunction_1430(data, threadData);
  BuildingCase3_eqFunction_1431(data, threadData);
  BuildingCase3_eqFunction_1432(data, threadData);
  BuildingCase3_eqFunction_1433(data, threadData);
  BuildingCase3_eqFunction_1434(data, threadData);
  BuildingCase3_eqFunction_1435(data, threadData);
  BuildingCase3_eqFunction_1436(data, threadData);
  BuildingCase3_eqFunction_1437(data, threadData);
  BuildingCase3_eqFunction_1438(data, threadData);
  BuildingCase3_eqFunction_1439(data, threadData);
  BuildingCase3_eqFunction_1440(data, threadData);
  BuildingCase3_eqFunction_1441(data, threadData);
  BuildingCase3_eqFunction_1442(data, threadData);
  BuildingCase3_eqFunction_1443(data, threadData);
  BuildingCase3_eqFunction_1444(data, threadData);
  BuildingCase3_eqFunction_1445(data, threadData);
  BuildingCase3_eqFunction_1446(data, threadData);
  BuildingCase3_eqFunction_1447(data, threadData);
  BuildingCase3_eqFunction_1448(data, threadData);
  BuildingCase3_eqFunction_1449(data, threadData);
  BuildingCase3_eqFunction_1450(data, threadData);
  BuildingCase3_eqFunction_1451(data, threadData);
  BuildingCase3_eqFunction_1452(data, threadData);
  BuildingCase3_eqFunction_1453(data, threadData);
  BuildingCase3_eqFunction_1454(data, threadData);
  BuildingCase3_eqFunction_1455(data, threadData);
  BuildingCase3_eqFunction_1456(data, threadData);
  BuildingCase3_eqFunction_1457(data, threadData);
  BuildingCase3_eqFunction_1458(data, threadData);
  BuildingCase3_eqFunction_1459(data, threadData);
  BuildingCase3_eqFunction_1460(data, threadData);
  BuildingCase3_eqFunction_1461(data, threadData);
  BuildingCase3_eqFunction_1462(data, threadData);
  BuildingCase3_eqFunction_1463(data, threadData);
  BuildingCase3_eqFunction_1464(data, threadData);
  BuildingCase3_eqFunction_1465(data, threadData);
  BuildingCase3_eqFunction_1466(data, threadData);
  BuildingCase3_eqFunction_1467(data, threadData);
  BuildingCase3_eqFunction_1468(data, threadData);
  BuildingCase3_eqFunction_1469(data, threadData);
  BuildingCase3_eqFunction_1470(data, threadData);
  BuildingCase3_eqFunction_1471(data, threadData);
  BuildingCase3_eqFunction_1472(data, threadData);
  BuildingCase3_eqFunction_1473(data, threadData);
  BuildingCase3_eqFunction_1474(data, threadData);
  BuildingCase3_eqFunction_1475(data, threadData);
  BuildingCase3_eqFunction_1476(data, threadData);
  BuildingCase3_eqFunction_1477(data, threadData);
  BuildingCase3_eqFunction_1478(data, threadData);
  BuildingCase3_eqFunction_1479(data, threadData);
  BuildingCase3_eqFunction_1480(data, threadData);
  BuildingCase3_eqFunction_1481(data, threadData);
  BuildingCase3_eqFunction_1482(data, threadData);
  BuildingCase3_eqFunction_1483(data, threadData);
  BuildingCase3_eqFunction_1484(data, threadData);
  BuildingCase3_eqFunction_1485(data, threadData);
  BuildingCase3_eqFunction_1486(data, threadData);
  BuildingCase3_eqFunction_1487(data, threadData);
  BuildingCase3_eqFunction_1488(data, threadData);
  BuildingCase3_eqFunction_1489(data, threadData);
  BuildingCase3_eqFunction_1725(data, threadData);
  BuildingCase3_eqFunction_1727(data, threadData);
  BuildingCase3_eqFunction_1730(data, threadData);
  BuildingCase3_eqFunction_1733(data, threadData);
  BuildingCase3_eqFunction_1728(data, threadData);
  BuildingCase3_eqFunction_1726(data, threadData);
  BuildingCase3_eqFunction_1732(data, threadData);
  BuildingCase3_eqFunction_1729(data, threadData);
  BuildingCase3_eqFunction_1731(data, threadData);
  BuildingCase3_eqFunction_1734(data, threadData);
  BuildingCase3_eqFunction_1705(data, threadData);
  BuildingCase3_eqFunction_1707(data, threadData);
  BuildingCase3_eqFunction_1710(data, threadData);
  BuildingCase3_eqFunction_1713(data, threadData);
  BuildingCase3_eqFunction_1708(data, threadData);
  BuildingCase3_eqFunction_1706(data, threadData);
  BuildingCase3_eqFunction_1712(data, threadData);
  BuildingCase3_eqFunction_1709(data, threadData);
  BuildingCase3_eqFunction_1711(data, threadData);
  BuildingCase3_eqFunction_1714(data, threadData);
  BuildingCase3_eqFunction_1511(data, threadData);
  BuildingCase3_eqFunction_1510(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif