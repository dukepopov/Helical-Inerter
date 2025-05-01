/* Initialization */
#include "BuildingCase3_model.h"
#include "BuildingCase3_11mix.h"
#include "BuildingCase3_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void BuildingCase3_functionInitialEquations_0(DATA *data, threadData_t *threadData);
void BuildingCase3_functionInitialEquations_1(DATA *data, threadData_t *threadData);
void BuildingCase3_functionInitialEquations_2(DATA *data, threadData_t *threadData);

int BuildingCase3_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  BuildingCase3_functionInitialEquations_0(data, threadData);
  BuildingCase3_functionInitialEquations_1(data, threadData);
  BuildingCase3_functionInitialEquations_2(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No BuildingCase3_functionInitialEquations_lambda0 function */

int BuildingCase3_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

