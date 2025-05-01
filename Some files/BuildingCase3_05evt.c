/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "BuildingCase3_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void BuildingCase3_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *BuildingCase3_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < sine1[1].startTime",
  "time < sine1[2].startTime",
  "time < sine1[3].startTime"};
  static const int occurEqs0[] = {1,1561};
  static const int occurEqs1[] = {1,1559};
  static const int occurEqs2[] = {1,1557};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */

int BuildingCase3_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  
  TRACE_POP
  return 0;
}

int BuildingCase3_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;

  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  start_index = current_index;
  tmp1 = 1.0;
  tmp2 = fabs((data->simulationInfo->realParameter[377] /* sine1[1].startTime PARAM */));
  tmp0 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[377] /* sine1[1].startTime PARAM */), tmp1, tmp2, data->simulationInfo->storedRelations[0]);
  gout[start_index] = (tmp0) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp4 = 1.0;
  tmp5 = fabs((data->simulationInfo->realParameter[378] /* sine1[2].startTime PARAM */));
  tmp3 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[378] /* sine1[2].startTime PARAM */), tmp4, tmp5, data->simulationInfo->storedRelations[1]);
  gout[start_index] = (tmp3) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp7 = 1.0;
  tmp8 = fabs((data->simulationInfo->realParameter[379] /* sine1[3].startTime PARAM */));
  tmp6 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[379] /* sine1[3].startTime PARAM */), tmp7, tmp8, data->simulationInfo->storedRelations[2]);
  gout[start_index] = (tmp6) ? 1 : -1;
  current_index++;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *BuildingCase3_relationDescription(int i)
{
  const char *res[] = {"time < sine1[1].startTime",
  "time < sine1[2].startTime",
  "time < sine1[3].startTime"};
  return res[i];
}

int BuildingCase3_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;

  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
  if(evalforZeroCross) {
    start_index = current_index;
    tmp10 = 1.0;
    tmp11 = fabs((data->simulationInfo->realParameter[377] /* sine1[1].startTime PARAM */));
    tmp9 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[377] /* sine1[1].startTime PARAM */), tmp10, tmp11, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[start_index] = tmp9;
    current_index++;

    start_index = current_index;
    tmp13 = 1.0;
    tmp14 = fabs((data->simulationInfo->realParameter[378] /* sine1[2].startTime PARAM */));
    tmp12 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[378] /* sine1[2].startTime PARAM */), tmp13, tmp14, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[start_index] = tmp12;
    current_index++;

    start_index = current_index;
    tmp16 = 1.0;
    tmp17 = fabs((data->simulationInfo->realParameter[379] /* sine1[3].startTime PARAM */));
    tmp15 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[379] /* sine1[3].startTime PARAM */), tmp16, tmp17, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[start_index] = tmp15;
    current_index++;
  } else {
    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue < (data->simulationInfo->realParameter[377] /* sine1[1].startTime PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue < (data->simulationInfo->realParameter[378] /* sine1[2].startTime PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue < (data->simulationInfo->realParameter[379] /* sine1[3].startTime PARAM */));
    current_index++;
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

