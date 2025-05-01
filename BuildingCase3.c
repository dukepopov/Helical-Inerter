/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "BuildingCase3_model.h"
#include "simulation/solver/events.h"

/* FIXME these defines are ugly and hard to read, why not use direct function pointers instead? */
#define prefixedName_performSimulation BuildingCase3_performSimulation
#define prefixedName_updateContinuousSystem BuildingCase3_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation BuildingCase3_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int BuildingCase3_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int BuildingCase3_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int BuildingCase3_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int BuildingCase3_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int BuildingCase3_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int BuildingCase3_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int BuildingCase3_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int BuildingCase3_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int BuildingCase3_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int BuildingCase3_setb_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 1512
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.der1[3].u = 0.0
*/
void BuildingCase3_eqFunction_1512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1512};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* absoluteSensorBottom.velocity.der1[3].u DUMMY_STATE */) = 0.0;
  TRACE_POP
}
/*
equation index: 1513
type: SIMPLE_ASSIGN
prismatic.frame_a.r_0[3] = 0.0
*/
void BuildingCase3_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1513};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* prismatic.frame_a.r_0[3] DUMMY_STATE */) = 0.0;
  TRACE_POP
}
/*
equation index: 1514
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.der1[3].u = 0.0
*/
void BuildingCase3_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1514};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* absoluteSensorTop.velocity.der1[3].u DUMMY_STATE */) = 0.0;
  TRACE_POP
}
/*
equation index: 1515
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.der1[1].u = 0.3
*/
void BuildingCase3_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1515};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* absoluteSensorBottom.velocity.der1[1].u DUMMY_STATE */) = 0.3;
  TRACE_POP
}
/*
equation index: 1516
type: SIMPLE_ASSIGN
prismatic.frame_a.r_0[1] = 0.3
*/
void BuildingCase3_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1516};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* prismatic.frame_a.r_0[1] DUMMY_STATE */) = 0.3;
  TRACE_POP
}
/*
equation index: 1517
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.der1[1].u = 0.3
*/
void BuildingCase3_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* absoluteSensorTop.velocity.der1[1].u DUMMY_STATE */) = 0.3;
  TRACE_POP
}
/*
equation index: 1518
type: SIMPLE_ASSIGN
absoluteSensorBottom.der1[3].u = 0.0
*/
void BuildingCase3_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1518};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* absoluteSensorBottom.der1[3].u DUMMY_STATE */) = 0.0;
  TRACE_POP
}
/*
equation index: 1519
type: SIMPLE_ASSIGN
$DER.prismatic.frame_a.r_0[3] = 0.0
*/
void BuildingCase3_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1519};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* der(prismatic.frame_a.r_0[3]) DUMMY_DER */) = 0.0;
  TRACE_POP
}
/*
equation index: 1520
type: SIMPLE_ASSIGN
absoluteSensorTop.der1[3].u = 0.0
*/
void BuildingCase3_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* absoluteSensorTop.der1[3].u DUMMY_STATE */) = 0.0;
  TRACE_POP
}
/*
equation index: 1521
type: SIMPLE_ASSIGN
absoluteSensorBottom.der1[1].u = 0.0
*/
void BuildingCase3_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* absoluteSensorBottom.der1[1].u DUMMY_STATE */) = 0.0;
  TRACE_POP
}
/*
equation index: 1522
type: SIMPLE_ASSIGN
$DER.prismatic.frame_a.r_0[1] = 0.0
*/
void BuildingCase3_eqFunction_1522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1522};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(prismatic.frame_a.r_0[1]) DUMMY_DER */) = 0.0;
  TRACE_POP
}
/*
equation index: 1523
type: SIMPLE_ASSIGN
absoluteSensorTop.der1[1].u = 0.0
*/
void BuildingCase3_eqFunction_1523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* absoluteSensorTop.der1[1].u DUMMY_STATE */) = 0.0;
  TRACE_POP
}
/*
equation index: 1524
type: SIMPLE_ASSIGN
body1.a_0[1] = 0.0
*/
void BuildingCase3_eqFunction_1524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1524};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* body1.a_0[1] variable */) = 0.0;
  TRACE_POP
}
/*
equation index: 1525
type: SIMPLE_ASSIGN
body1.a_0[3] = 0.0
*/
void BuildingCase3_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* body1.a_0[3] variable */) = 0.0;
  TRACE_POP
}
/*
equation index: 1526
type: SIMPLE_ASSIGN
body1.frame_a.f[1] = 0.0
*/
void BuildingCase3_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1526};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* body1.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}
/*
equation index: 1527
type: SIMPLE_ASSIGN
body1.frame_a.f[3] = 0.0
*/
void BuildingCase3_eqFunction_1527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* body1.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}
/*
equation index: 1528
type: SIMPLE_ASSIGN
body1.frame_a.t[2] = 0.0
*/
void BuildingCase3_eqFunction_1528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1528};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* body1.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}
/*
equation index: 1529
type: SIMPLE_ASSIGN
$DER.absoluteSensorTop.velocity.der1[1].u = 0.0
*/
void BuildingCase3_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* der(absoluteSensorTop.velocity.der1[1].u) DUMMY_DER */) = 0.0;
  TRACE_POP
}
/*
equation index: 1530
type: SIMPLE_ASSIGN
$DER.absoluteSensorTop.velocity.der1[3].u = 0.0
*/
void BuildingCase3_eqFunction_1530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1530};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(absoluteSensorTop.velocity.der1[3].u) DUMMY_DER */) = 0.0;
  TRACE_POP
}
/*
equation index: 1531
type: SIMPLE_ASSIGN
absoluteSensorBottom.r[1] = 0.3
*/
void BuildingCase3_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* absoluteSensorBottom.r[1] variable */) = 0.3;
  TRACE_POP
}
/*
equation index: 1532
type: SIMPLE_ASSIGN
absoluteSensorBottom.r[3] = 0.0
*/
void BuildingCase3_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1532};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* absoluteSensorBottom.r[3] variable */) = 0.0;
  TRACE_POP
}
/*
equation index: 1533
type: SIMPLE_ASSIGN
$DER.absoluteSensorBottom.velocity.der1[1].u = 0.0
*/
void BuildingCase3_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* der(absoluteSensorBottom.velocity.der1[1].u) DUMMY_DER */) = 0.0;
  TRACE_POP
}
/*
equation index: 1534
type: SIMPLE_ASSIGN
$DER.absoluteSensorBottom.velocity.der1[3].u = 0.0
*/
void BuildingCase3_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(absoluteSensorBottom.velocity.der1[3].u) DUMMY_DER */) = 0.0;
  TRACE_POP
}
/*
equation index: 1535
type: SIMPLE_ASSIGN
absoluteSensorBottom.v[1] = 0.0
*/
void BuildingCase3_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* absoluteSensorBottom.v[1] variable */) = 0.0;
  TRACE_POP
}
/*
equation index: 1536
type: SIMPLE_ASSIGN
absoluteSensorBottom.v[3] = 0.0
*/
void BuildingCase3_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1536};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* absoluteSensorBottom.v[3] variable */) = 0.0;
  TRACE_POP
}
/*
equation index: 1537
type: SIMPLE_ASSIGN
$DER.absoluteSensorBottom.der1[1].u = 0.0
*/
void BuildingCase3_eqFunction_1537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* der(absoluteSensorBottom.der1[1].u) DUMMY_DER */) = 0.0;
  TRACE_POP
}
/*
equation index: 1538
type: SIMPLE_ASSIGN
$DER.absoluteSensorBottom.der1[3].u = 0.0
*/
void BuildingCase3_eqFunction_1538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* der(absoluteSensorBottom.der1[3].u) DUMMY_DER */) = 0.0;
  TRACE_POP
}
/*
equation index: 1539
type: SIMPLE_ASSIGN
absoluteSensorBottom.a[1] = 0.0
*/
void BuildingCase3_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* absoluteSensorBottom.a[1] variable */) = 0.0;
  TRACE_POP
}
/*
equation index: 1540
type: SIMPLE_ASSIGN
absoluteSensorBottom.a[3] = 0.0
*/
void BuildingCase3_eqFunction_1540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1540};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* absoluteSensorBottom.a[3] variable */) = 0.0;
  TRACE_POP
}
/*
equation index: 1541
type: SIMPLE_ASSIGN
$DER.$DER.prismatic.frame_a.r_0[1] = 0.0
*/
void BuildingCase3_eqFunction_1541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1541};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* der(der(prismatic.frame_a.r_0[1])) DUMMY_DER */) = 0.0;
  TRACE_POP
}
/*
equation index: 1542
type: SIMPLE_ASSIGN
bodyBox.a_0[1] = 0.0
*/
void BuildingCase3_eqFunction_1542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1542};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* bodyBox.a_0[1] variable */) = 0.0;
  TRACE_POP
}
/*
equation index: 1543
type: SIMPLE_ASSIGN
$DER.absoluteSensorTop.der1[1].u = 0.0
*/
void BuildingCase3_eqFunction_1543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1543};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(absoluteSensorTop.der1[1].u) DUMMY_DER */) = 0.0;
  TRACE_POP
}
/*
equation index: 1544
type: SIMPLE_ASSIGN
$DER.$DER.prismatic.frame_a.r_0[3] = 0.0
*/
void BuildingCase3_eqFunction_1544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1544};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* der(der(prismatic.frame_a.r_0[3])) DUMMY_DER */) = 0.0;
  TRACE_POP
}
/*
equation index: 1545
type: SIMPLE_ASSIGN
bodyBox.a_0[3] = 0.0
*/
void BuildingCase3_eqFunction_1545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* bodyBox.a_0[3] variable */) = 0.0;
  TRACE_POP
}
/*
equation index: 1546
type: SIMPLE_ASSIGN
$DER.absoluteSensorTop.der1[3].u = 0.0
*/
void BuildingCase3_eqFunction_1546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1546};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* der(absoluteSensorTop.der1[3].u) DUMMY_DER */) = 0.0;
  TRACE_POP
}
/*
equation index: 1547
type: SIMPLE_ASSIGN
$DER.springDamper.s_rel = prismatic.v
*/
void BuildingCase3_eqFunction_1547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1547};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* der(springDamper.s_rel) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* prismatic.v STATE(1,prismatic.a) */);
  TRACE_POP
}
/*
equation index: 1548
type: SIMPLE_ASSIGN
absoluteSensorBottom.v[2] = prismatic1.v
*/
void BuildingCase3_eqFunction_1548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1548};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* absoluteSensorBottom.v[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* prismatic1.v STATE(1,body1.a_0[2]) */);
  TRACE_POP
}
/*
equation index: 1549
type: SIMPLE_ASSIGN
$DER.absoluteSensorBottom.velocity.der1[2].u = prismatic1.v
*/
void BuildingCase3_eqFunction_1549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1549};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* der(absoluteSensorBottom.velocity.der1[2].u) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* prismatic1.v STATE(1,body1.a_0[2]) */);
  TRACE_POP
}
/*
equation index: 1550
type: SIMPLE_ASSIGN
absoluteSensorBottom.r[2] = prismatic1.s
*/
void BuildingCase3_eqFunction_1550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1550};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* absoluteSensorBottom.r[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* prismatic1.s STATE(1,prismatic1.v) */);
  TRACE_POP
}
/*
equation index: 1551
type: SIMPLE_ASSIGN
$DER.prismatic.frame_a.r_0[2] = prismatic1.v
*/
void BuildingCase3_eqFunction_1551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1551};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* der(prismatic.frame_a.r_0[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* prismatic1.v STATE(1,body1.a_0[2]) */);
  TRACE_POP
}
/*
equation index: 1552
type: SIMPLE_ASSIGN
absoluteSensorBottom.der1[2].u = prismatic1.v
*/
void BuildingCase3_eqFunction_1552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* absoluteSensorBottom.der1[2].u DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* prismatic1.v STATE(1,body1.a_0[2]) */);
  TRACE_POP
}
/*
equation index: 1553
type: SIMPLE_ASSIGN
springDamper.v_rel = prismatic.v
*/
void BuildingCase3_eqFunction_1553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* springDamper.v_rel DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* prismatic.v STATE(1,prismatic.a) */);
  TRACE_POP
}
/*
equation index: 1554
type: SIMPLE_ASSIGN
absoluteSensorBottom.velocity.der1[2].u = prismatic1.s
*/
void BuildingCase3_eqFunction_1554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1554};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* absoluteSensorBottom.velocity.der1[2].u DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* prismatic1.s STATE(1,prismatic1.v) */);
  TRACE_POP
}
/*
equation index: 1555
type: SIMPLE_ASSIGN
prismatic.box.length = if noEvent(abs(prismatic.s) > 1e-6) then prismatic.s else 1e-6
*/
void BuildingCase3_eqFunction_1555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1555};
  modelica_boolean tmp0;
  tmp0 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* prismatic.s STATE(1,prismatic.v) */)),1e-6);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* prismatic.box.length variable */) = (tmp0?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* prismatic.s STATE(1,prismatic.v) */):1e-6);
  TRACE_POP
}
/*
equation index: 1556
type: SIMPLE_ASSIGN
prismatic1.box.length = if noEvent(abs(prismatic1.s) > 1e-6) then prismatic1.s else 1e-6
*/
void BuildingCase3_eqFunction_1556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1556};
  modelica_boolean tmp1;
  tmp1 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* prismatic1.s STATE(1,prismatic1.v) */)),1e-6);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* prismatic1.box.length variable */) = (tmp1?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* prismatic1.s STATE(1,prismatic1.v) */):1e-6);
  TRACE_POP
}
/*
equation index: 1557
type: SIMPLE_ASSIGN
sine1[3].y = sine1[3].offset + (if time < sine1[3].startTime then 0.0 else sine1[3].amplitude * sin(6.283185307179586 * sine1[3].f * (time - sine1[3].startTime) + sine1[3].phase))
*/
void BuildingCase3_eqFunction_1557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1557};
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  tmp3 = 1.0;
  tmp4 = fabs((data->simulationInfo->realParameter[379] /* sine1[3].startTime PARAM */));
  relationhysteresis(data, &tmp2, data->localData[0]->timeValue, (data->simulationInfo->realParameter[379] /* sine1[3].startTime PARAM */), tmp3, tmp4, 2, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* sine1[3].y variable */) = (data->simulationInfo->realParameter[373] /* sine1[3].offset PARAM */) + (tmp2?0.0:((data->simulationInfo->realParameter[367] /* sine1[3].amplitude PARAM */)) * (sin(((6.283185307179586) * ((data->simulationInfo->realParameter[370] /* sine1[3].f PARAM */))) * (data->localData[0]->timeValue - (data->simulationInfo->realParameter[379] /* sine1[3].startTime PARAM */)) + (data->simulationInfo->realParameter[376] /* sine1[3].phase PARAM */))));
  TRACE_POP
}
/*
equation index: 1558
type: SIMPLE_ASSIGN
force1.frame_b.f[3] = -sine1[3].y
*/
void BuildingCase3_eqFunction_1558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* force1.frame_b.f[3] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* sine1[3].y variable */));
  TRACE_POP
}
/*
equation index: 1559
type: SIMPLE_ASSIGN
sine1[2].y = sine1[2].offset + (if time < sine1[2].startTime then 0.0 else sine1[2].amplitude * sin(6.283185307179586 * sine1[2].f * (time - sine1[2].startTime) + sine1[2].phase))
*/
void BuildingCase3_eqFunction_1559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1559};
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = 1.0;
  tmp7 = fabs((data->simulationInfo->realParameter[378] /* sine1[2].startTime PARAM */));
  relationhysteresis(data, &tmp5, data->localData[0]->timeValue, (data->simulationInfo->realParameter[378] /* sine1[2].startTime PARAM */), tmp6, tmp7, 1, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* sine1[2].y variable */) = (data->simulationInfo->realParameter[372] /* sine1[2].offset PARAM */) + (tmp5?0.0:((data->simulationInfo->realParameter[366] /* sine1[2].amplitude PARAM */)) * (sin(((6.283185307179586) * ((data->simulationInfo->realParameter[369] /* sine1[2].f PARAM */))) * (data->localData[0]->timeValue - (data->simulationInfo->realParameter[378] /* sine1[2].startTime PARAM */)) + (data->simulationInfo->realParameter[375] /* sine1[2].phase PARAM */))));
  TRACE_POP
}
/*
equation index: 1560
type: SIMPLE_ASSIGN
force1.frame_b.f[2] = -sine1[2].y
*/
void BuildingCase3_eqFunction_1560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[924]] /* force1.frame_b.f[2] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* sine1[2].y variable */));
  TRACE_POP
}
/*
equation index: 1561
type: SIMPLE_ASSIGN
sine1[1].y = sine1[1].offset + (if time < sine1[1].startTime then 0.0 else sine1[1].amplitude * sin(6.283185307179586 * sine1[1].f * (time - sine1[1].startTime) + sine1[1].phase))
*/
void BuildingCase3_eqFunction_1561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1561};
  modelica_boolean tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  tmp9 = 1.0;
  tmp10 = fabs((data->simulationInfo->realParameter[377] /* sine1[1].startTime PARAM */));
  relationhysteresis(data, &tmp8, data->localData[0]->timeValue, (data->simulationInfo->realParameter[377] /* sine1[1].startTime PARAM */), tmp9, tmp10, 0, Less, LessZC);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* sine1[1].y variable */) = (data->simulationInfo->realParameter[371] /* sine1[1].offset PARAM */) + (tmp8?0.0:((data->simulationInfo->realParameter[365] /* sine1[1].amplitude PARAM */)) * (sin(((6.283185307179586) * ((data->simulationInfo->realParameter[368] /* sine1[1].f PARAM */))) * (data->localData[0]->timeValue - (data->simulationInfo->realParameter[377] /* sine1[1].startTime PARAM */)) + (data->simulationInfo->realParameter[374] /* sine1[1].phase PARAM */))));
  TRACE_POP
}
/*
equation index: 1562
type: SIMPLE_ASSIGN
force1.frame_b.f[1] = -sine1[1].y
*/
void BuildingCase3_eqFunction_1562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[923]] /* force1.frame_b.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* sine1[1].y variable */));
  TRACE_POP
}
/*
equation index: 1563
type: SIMPLE_ASSIGN
spring.s_rel = prismatic1.s - prismatic1.fixed.s0
*/
void BuildingCase3_eqFunction_1563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1563};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* spring.s_rel variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* prismatic1.s STATE(1,prismatic1.v) */) - (data->simulationInfo->realParameter[340] /* prismatic1.fixed.s0 PARAM */);
  TRACE_POP
}
/*
equation index: 1564
type: SIMPLE_ASSIGN
spring.f = spring.c * (spring.s_rel - spring.s_rel0)
*/
void BuildingCase3_eqFunction_1564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* spring.f variable */) = ((data->simulationInfo->realParameter[380] /* spring.c PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* spring.s_rel variable */) - (data->simulationInfo->realParameter[382] /* spring.s_rel0 PARAM */));
  TRACE_POP
}
/*
equation index: 1565
type: SIMPLE_ASSIGN
springDamper.f_d = springDamper.d * prismatic.v
*/
void BuildingCase3_eqFunction_1565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* springDamper.f_d variable */) = ((data->simulationInfo->realParameter[384] /* springDamper.d PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* prismatic.v STATE(1,prismatic.a) */));
  TRACE_POP
}
/*
equation index: 1566
type: SIMPLE_ASSIGN
springDamper.lossPower = springDamper.f_d * prismatic.v
*/
void BuildingCase3_eqFunction_1566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* springDamper.lossPower variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* springDamper.f_d variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* prismatic.v STATE(1,prismatic.a) */));
  TRACE_POP
}
/*
equation index: 1567
type: SIMPLE_ASSIGN
$DER.prismatic.s = prismatic.v
*/
void BuildingCase3_eqFunction_1567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* der(prismatic.s) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* prismatic.v STATE(1,prismatic.a) */);
  TRACE_POP
}
/*
equation index: 1568
type: SIMPLE_ASSIGN
$DER.prismatic1.s = prismatic1.v
*/
void BuildingCase3_eqFunction_1568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* der(prismatic1.s) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* prismatic1.v STATE(1,body1.a_0[2]) */);
  TRACE_POP
}
/*
equation index: 1569
type: SIMPLE_ASSIGN
absoluteSensorTop.der1[2].u = prismatic1.v + prismatic.v
*/
void BuildingCase3_eqFunction_1569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* absoluteSensorTop.der1[2].u DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* prismatic1.v STATE(1,body1.a_0[2]) */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* prismatic.v STATE(1,prismatic.a) */);
  TRACE_POP
}
/*
equation index: 1570
type: SIMPLE_ASSIGN
$DER.absoluteSensorTop.velocity.der1[2].u = absoluteSensorTop.der1[2].u
*/
void BuildingCase3_eqFunction_1570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(absoluteSensorTop.velocity.der1[2].u) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* absoluteSensorTop.der1[2].u DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1571
type: SIMPLE_ASSIGN
revolute.w = idealGearR2T.ratio * prismatic.v
*/
void BuildingCase3_eqFunction_1571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* revolute.w DUMMY_STATE */) = ((data->simulationInfo->realParameter[308] /* idealGearR2T.ratio PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* prismatic.v STATE(1,prismatic.a) */));
  TRACE_POP
}
/*
equation index: 1572
type: SIMPLE_ASSIGN
body.w_a[3] = revolute.e[3] * revolute.w
*/
void BuildingCase3_eqFunction_1572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1572};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* revolute.w DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1573
type: SIMPLE_ASSIGN
revolute.R_rel.w[3] = body.w_a[3]
*/
void BuildingCase3_eqFunction_1573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* revolute.R_rel.w[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* body.w_a[3] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1574
type: SIMPLE_ASSIGN
body.w_a[2] = revolute.e[2] * revolute.w
*/
void BuildingCase3_eqFunction_1574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1574};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* revolute.w DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1575
type: SIMPLE_ASSIGN
revolute.R_rel.w[2] = body.w_a[2]
*/
void BuildingCase3_eqFunction_1575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1575};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* revolute.R_rel.w[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* body.w_a[2] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1576
type: SIMPLE_ASSIGN
body.w_a[1] = revolute.e[1] * revolute.w
*/
void BuildingCase3_eqFunction_1576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* revolute.w DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1577
type: SIMPLE_ASSIGN
revolute.R_rel.w[1] = body.w_a[1]
*/
void BuildingCase3_eqFunction_1577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* revolute.R_rel.w[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* body.w_a[1] DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1578
type: SIMPLE_ASSIGN
$DER.revolute.phi = revolute.w
*/
void BuildingCase3_eqFunction_1578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1578};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* der(revolute.phi) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* revolute.w DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1579
type: SIMPLE_ASSIGN
prismatic.frame_a.r_0[2] = 1.0 + prismatic1.s
*/
void BuildingCase3_eqFunction_1579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1579};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* prismatic.frame_a.r_0[2] DUMMY_STATE */) = 1.0 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* prismatic1.s STATE(1,prismatic1.v) */);
  TRACE_POP
}
/*
equation index: 1580
type: SIMPLE_ASSIGN
absoluteSensorTop.velocity.der1[2].u = prismatic.frame_a.r_0[2] + prismatic.s
*/
void BuildingCase3_eqFunction_1580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1580};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* absoluteSensorTop.velocity.der1[2].u DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* prismatic.frame_a.r_0[2] DUMMY_STATE */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* prismatic.s STATE(1,prismatic.v) */);
  TRACE_POP
}
/*
equation index: 1581
type: SIMPLE_ASSIGN
springDamper.s_rel = prismatic.s - prismatic.fixed.s0
*/
void BuildingCase3_eqFunction_1581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* springDamper.s_rel DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* prismatic.s STATE(1,prismatic.v) */) - (data->simulationInfo->realParameter[322] /* prismatic.fixed.s0 PARAM */);
  TRACE_POP
}
/*
equation index: 1582
type: SIMPLE_ASSIGN
springDamper.f_c = springDamper.c * (springDamper.s_rel - springDamper.s_rel0)
*/
void BuildingCase3_eqFunction_1582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1582};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* springDamper.f_c variable */) = ((data->simulationInfo->realParameter[383] /* springDamper.c PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* springDamper.s_rel DUMMY_STATE */) - (data->simulationInfo->realParameter[387] /* springDamper.s_rel0 PARAM */));
  TRACE_POP
}
/*
equation index: 1583
type: SIMPLE_ASSIGN
springDamper.f = springDamper.f_c + springDamper.f_d
*/
void BuildingCase3_eqFunction_1583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* springDamper.f variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* springDamper.f_c variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* springDamper.f_d variable */);
  TRACE_POP
}
/*
equation index: 1584
type: SIMPLE_ASSIGN
revolute.phi = idealGearR2T.ratio * (prismatic.s - idealGearR2T.fixedT.s0) + idealGearR2T.fixedR.phi0
*/
void BuildingCase3_eqFunction_1584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1584};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */) = ((data->simulationInfo->realParameter[308] /* idealGearR2T.ratio PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* prismatic.s STATE(1,prismatic.v) */) - (data->simulationInfo->realParameter[303] /* idealGearR2T.fixedT.s0 PARAM */)) + (data->simulationInfo->realParameter[301] /* idealGearR2T.fixedR.phi0 PARAM */);
  TRACE_POP
}
/*
equation index: 1585
type: SIMPLE_ASSIGN
$cse2 = sin(revolute.phi)
*/
void BuildingCase3_eqFunction_1585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1585};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* $cse2 variable */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1586
type: SIMPLE_ASSIGN
$cse1 = cos(revolute.phi)
*/
void BuildingCase3_eqFunction_1586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1586};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $cse1 variable */) = cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* revolute.phi DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1587
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[1,1] = revolute.e[1] ^ 2.0 + (1.0 - revolute.e[1] ^ 2.0) * $cse1
*/
void BuildingCase3_eqFunction_1587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1587};
  modelica_real tmp11;
  modelica_real tmp12;
  tmp11 = (data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */);
  tmp12 = (data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* bodyBox.frame_b.R.T[1,1] variable */) = (tmp11 * tmp11) + (1.0 - ((tmp12 * tmp12))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $cse1 variable */));
  TRACE_POP
}
/*
equation index: 1588
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[1,2] = (revolute.e[1] - revolute.e[1] * $cse1) * revolute.e[2] + revolute.e[3] * $cse2
*/
void BuildingCase3_eqFunction_1588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */) = ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */) - (((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $cse1 variable */)))) * ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) + ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* $cse2 variable */));
  TRACE_POP
}
/*
equation index: 1589
type: SIMPLE_ASSIGN
absoluteSensorTop.r[1] = 0.3 * bodyBox.frame_b.R.T[1,1] + bodyBox.frame_b.R.T[1,2] * absoluteSensorTop.velocity.der1[2].u
*/
void BuildingCase3_eqFunction_1589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1589};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* absoluteSensorTop.r[1] variable */) = (0.3) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* bodyBox.frame_b.R.T[1,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* absoluteSensorTop.velocity.der1[2].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1590
type: SIMPLE_ASSIGN
absoluteSensorTop.v[1] = bodyBox.frame_b.R.T[1,2] * absoluteSensorTop.der1[2].u
*/
void BuildingCase3_eqFunction_1590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1590};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* absoluteSensorTop.v[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* absoluteSensorTop.der1[2].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1591
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[1,3] = (revolute.e[1] - revolute.e[1] * $cse1) * revolute.e[3] - revolute.e[2] * $cse2
*/
void BuildingCase3_eqFunction_1591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* bodyBox.frame_b.R.T[1,3] variable */) = ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */) - (((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $cse1 variable */)))) * ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) - (((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* $cse2 variable */)));
  TRACE_POP
}
/*
equation index: 1592
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[2,1] = (revolute.e[2] - revolute.e[2] * $cse1) * revolute.e[1] - revolute.e[3] * $cse2
*/
void BuildingCase3_eqFunction_1592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1592};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* bodyBox.frame_b.R.T[2,1] variable */) = ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */) - (((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $cse1 variable */)))) * ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) - (((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* $cse2 variable */)));
  TRACE_POP
}
/*
equation index: 1593
type: SIMPLE_ASSIGN
bodyBox.frame_b.r_0[1] = 0.3 + (-0.01) * bodyBox.frame_b.R.T[2,1]
*/
void BuildingCase3_eqFunction_1593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* bodyBox.frame_b.r_0[1] variable */) = 0.3 + (-0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* bodyBox.frame_b.R.T[2,1] variable */));
  TRACE_POP
}
/*
equation index: 1594
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[2,2] = revolute.e[2] ^ 2.0 + (1.0 - revolute.e[2] ^ 2.0) * $cse1
*/
void BuildingCase3_eqFunction_1594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1594};
  modelica_real tmp13;
  modelica_real tmp14;
  tmp13 = (data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */);
  tmp14 = (data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */) = (tmp13 * tmp13) + (1.0 - ((tmp14 * tmp14))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $cse1 variable */));
  TRACE_POP
}
/*
equation index: 1595
type: SIMPLE_ASSIGN
absoluteSensorTop.r[2] = 0.3 * bodyBox.frame_b.R.T[2,1] + bodyBox.frame_b.R.T[2,2] * absoluteSensorTop.velocity.der1[2].u
*/
void BuildingCase3_eqFunction_1595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1595};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* absoluteSensorTop.r[2] variable */) = (0.3) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* bodyBox.frame_b.R.T[2,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* absoluteSensorTop.velocity.der1[2].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1596
type: SIMPLE_ASSIGN
absoluteSensorTop.v[2] = bodyBox.frame_b.R.T[2,2] * absoluteSensorTop.der1[2].u
*/
void BuildingCase3_eqFunction_1596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1596};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* absoluteSensorTop.v[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* absoluteSensorTop.der1[2].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1597
type: SIMPLE_ASSIGN
bodyBox.frame_b.r_0[2] = absoluteSensorTop.velocity.der1[2].u + (-0.01) * bodyBox.frame_b.R.T[2,2]
*/
void BuildingCase3_eqFunction_1597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[906]] /* bodyBox.frame_b.r_0[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* absoluteSensorTop.velocity.der1[2].u DUMMY_STATE */) + (-0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */));
  TRACE_POP
}
/*
equation index: 1598
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[2,3] = (revolute.e[2] - revolute.e[2] * $cse1) * revolute.e[3] + revolute.e[1] * $cse2
*/
void BuildingCase3_eqFunction_1598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1598};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* bodyBox.frame_b.R.T[2,3] variable */) = ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */) - (((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $cse1 variable */)))) * ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) + ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* $cse2 variable */));
  TRACE_POP
}
/*
equation index: 1599
type: SIMPLE_ASSIGN
bodyBox.frame_b.r_0[3] = (-0.01) * bodyBox.frame_b.R.T[2,3]
*/
void BuildingCase3_eqFunction_1599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1599};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* bodyBox.frame_b.r_0[3] variable */) = (-0.01) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* bodyBox.frame_b.R.T[2,3] variable */));
  TRACE_POP
}
/*
equation index: 1600
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[3,1] = (revolute.e[3] - revolute.e[3] * $cse1) * revolute.e[1] + revolute.e[2] * $cse2
*/
void BuildingCase3_eqFunction_1600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1600};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* bodyBox.frame_b.R.T[3,1] variable */) = ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */) - (((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $cse1 variable */)))) * ((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) + ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* $cse2 variable */));
  TRACE_POP
}
/*
equation index: 1601
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[3,2] = (revolute.e[3] - revolute.e[3] * $cse1) * revolute.e[2] - revolute.e[1] * $cse2
*/
void BuildingCase3_eqFunction_1601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1601};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */) = ((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */) - (((data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $cse1 variable */)))) * ((data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */)) - (((data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* $cse2 variable */)));
  TRACE_POP
}
/*
equation index: 1602
type: SIMPLE_ASSIGN
absoluteSensorTop.r[3] = 0.3 * bodyBox.frame_b.R.T[3,1] + bodyBox.frame_b.R.T[3,2] * absoluteSensorTop.velocity.der1[2].u
*/
void BuildingCase3_eqFunction_1602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* absoluteSensorTop.r[3] variable */) = (0.3) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* bodyBox.frame_b.R.T[3,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* absoluteSensorTop.velocity.der1[2].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1603
type: SIMPLE_ASSIGN
absoluteSensorTop.v[3] = bodyBox.frame_b.R.T[3,2] * absoluteSensorTop.der1[2].u
*/
void BuildingCase3_eqFunction_1603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* absoluteSensorTop.v[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* absoluteSensorTop.der1[2].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 1665
type: LINEAR

<var>bodyBox.a_0[2]</var>
<var>body.z_a[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void BuildingCase3_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1665};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */),(data->localData[1]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 1665 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1665};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 1665 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */) = aux_x[0];
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */) = aux_x[1];

  TRACE_POP
}
/*
equation index: 1666
type: SIMPLE_ASSIGN
$DER.revolute.R_rel.w[2] = body.z_a[2]
*/
void BuildingCase3_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1666};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* der(revolute.R_rel.w[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */);
  TRACE_POP
}
/*
equation index: 1667
type: SIMPLE_ASSIGN
$DER.body.w_a[2] = body.z_a[2]
*/
void BuildingCase3_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1667};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(body.w_a[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* body.z_a[2] variable */);
  TRACE_POP
}
/*
equation index: 1668
type: SIMPLE_ASSIGN
absoluteSensorTop.a[2] = bodyBox.frame_b.R.T[2,2] * bodyBox.a_0[2]
*/
void BuildingCase3_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1668};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* absoluteSensorTop.a[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */));
  TRACE_POP
}
/*
equation index: 1669
type: SIMPLE_ASSIGN
absoluteSensorTop.a[1] = bodyBox.frame_b.R.T[1,2] * bodyBox.a_0[2]
*/
void BuildingCase3_eqFunction_1669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1669};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* absoluteSensorTop.a[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */));
  TRACE_POP
}
/*
equation index: 1670
type: SIMPLE_ASSIGN
$DER.absoluteSensorTop.der1[2].u = bodyBox.a_0[2]
*/
void BuildingCase3_eqFunction_1670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1670};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* der(absoluteSensorTop.der1[2].u) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */);
  TRACE_POP
}
/*
equation index: 1671
type: SIMPLE_ASSIGN
$DER.revolute.R_rel.w[1] = body.z_a[1]
*/
void BuildingCase3_eqFunction_1671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1671};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* der(revolute.R_rel.w[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */);
  TRACE_POP
}
/*
equation index: 1672
type: SIMPLE_ASSIGN
$DER.body.w_a[1] = body.z_a[1]
*/
void BuildingCase3_eqFunction_1672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1672};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(body.w_a[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* body.z_a[1] variable */);
  TRACE_POP
}
/*
equation index: 1673
type: SIMPLE_ASSIGN
$DER.revolute.R_rel.w[3] = body.z_a[3]
*/
void BuildingCase3_eqFunction_1673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1673};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* der(revolute.R_rel.w[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 1674
type: SIMPLE_ASSIGN
$DER.body.w_a[3] = body.z_a[3]
*/
void BuildingCase3_eqFunction_1674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1674};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(body.w_a[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* body.z_a[3] variable */);
  TRACE_POP
}
/*
equation index: 1675
type: SIMPLE_ASSIGN
$DER.revolute.w = inertia.a
*/
void BuildingCase3_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* der(revolute.w) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* inertia.a variable */);
  TRACE_POP
}
/*
equation index: 1676
type: SIMPLE_ASSIGN
$DER.prismatic.v = prismatic.a
*/
void BuildingCase3_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* der(prismatic.v) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* prismatic.a variable */);
  TRACE_POP
}
/*
equation index: 1677
type: SIMPLE_ASSIGN
$DER.springDamper.v_rel = prismatic.a
*/
void BuildingCase3_eqFunction_1677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1677};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* der(springDamper.v_rel) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* prismatic.a variable */);
  TRACE_POP
}
/*
equation index: 1678
type: SIMPLE_ASSIGN
$DER.prismatic1.v = body1.a_0[2]
*/
void BuildingCase3_eqFunction_1678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1678};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* der(prismatic1.v) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* body1.a_0[2] variable */);
  TRACE_POP
}
/*
equation index: 1679
type: SIMPLE_ASSIGN
$DER.$DER.prismatic.frame_a.r_0[2] = body1.a_0[2]
*/
void BuildingCase3_eqFunction_1679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1679};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* der(der(prismatic.frame_a.r_0[2])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* body1.a_0[2] variable */);
  TRACE_POP
}
/*
equation index: 1680
type: SIMPLE_ASSIGN
absoluteSensorBottom.a[2] = body1.a_0[2]
*/
void BuildingCase3_eqFunction_1680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* absoluteSensorBottom.a[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* body1.a_0[2] variable */);
  TRACE_POP
}
/*
equation index: 1681
type: SIMPLE_ASSIGN
$DER.absoluteSensorBottom.der1[2].u = body1.a_0[2]
*/
void BuildingCase3_eqFunction_1681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* der(absoluteSensorBottom.der1[2].u) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* body1.a_0[2] variable */);
  TRACE_POP
}
/*
equation index: 1682
type: SIMPLE_ASSIGN
prismatic1.a = body1.a_0[2]
*/
void BuildingCase3_eqFunction_1682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1682};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* prismatic1.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* body1.a_0[2] variable */);
  TRACE_POP
}
/*
equation index: 1683
type: SIMPLE_ASSIGN
body1.frame_a.t[3] = body1.r_CM[1] * body1.frame_a.f[2]
*/
void BuildingCase3_eqFunction_1683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1683};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* body1.frame_a.t[3] variable */) = ((data->simulationInfo->realParameter[156] /* body1.r_CM[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* body1.frame_a.f[2] variable */));
  TRACE_POP
}
/*
equation index: 1684
type: SIMPLE_ASSIGN
body1.frame_a.t[1] = (-body1.r_CM[3]) * body1.frame_a.f[2]
*/
void BuildingCase3_eqFunction_1684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* body1.frame_a.t[1] variable */) = ((-(data->simulationInfo->realParameter[158] /* body1.r_CM[3] PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* body1.frame_a.f[2] variable */));
  TRACE_POP
}
/*
equation index: 1685
type: SIMPLE_ASSIGN
revolute.frame_a.t[1] = (-bodyBox.frame_b.R.T[2,1]) * revolute.frame_b.t[2] - bodyBox.frame_b.R.T[3,1] * revolute.frame_b.t[3] - bodyBox.frame_b.R.T[1,1] * revolute.frame_b.t[1]
*/
void BuildingCase3_eqFunction_1685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1685};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* revolute.frame_a.t[1] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* bodyBox.frame_b.R.T[2,1] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* revolute.frame_b.t[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* bodyBox.frame_b.R.T[3,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* revolute.frame_b.t[3] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* bodyBox.frame_b.R.T[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* revolute.frame_b.t[1] variable */)));
  TRACE_POP
}
/*
equation index: 1686
type: SIMPLE_ASSIGN
bar21.frame_a.f[1] = (-bodyBox.frame_b.R.T[2,1]) * revolute.frame_b.f[2] - bodyBox.frame_b.R.T[3,1] * revolute.frame_b.f[3] - bodyBox.frame_b.R.T[1,1] * revolute.frame_b.f[1]
*/
void BuildingCase3_eqFunction_1686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1686};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* bar21.frame_a.f[1] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* bodyBox.frame_b.R.T[2,1] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* revolute.frame_b.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* bodyBox.frame_b.R.T[3,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* revolute.frame_b.f[3] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* bodyBox.frame_b.R.T[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* revolute.frame_b.f[1] variable */)));
  TRACE_POP
}
/*
equation index: 1687
type: SIMPLE_ASSIGN
prismatic1.frame_a.f[1] = bar21.frame_a.f[1] - sine1[1].y
*/
void BuildingCase3_eqFunction_1687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1687};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* prismatic1.frame_a.f[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* bar21.frame_a.f[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* sine1[1].y variable */);
  TRACE_POP
}
/*
equation index: 1688
type: SIMPLE_ASSIGN
bar21.frame_a.t[2] = (-bodyBox.frame_b.R.T[2,2]) * revolute.frame_b.t[2] - bodyBox.frame_b.R.T[3,2] * revolute.frame_b.t[3] - bodyBox.frame_b.R.T[1,2] * revolute.frame_b.t[1]
*/
void BuildingCase3_eqFunction_1688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1688};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* bar21.frame_a.t[2] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* bodyBox.frame_b.R.T[2,2] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* revolute.frame_b.t[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* revolute.frame_b.t[3] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* bodyBox.frame_b.R.T[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* revolute.frame_b.t[1] variable */)));
  TRACE_POP
}
/*
equation index: 1689
type: SIMPLE_ASSIGN
prismatic1.frame_a.t[2] = bar21.frame_a.t[2]
*/
void BuildingCase3_eqFunction_1689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1689};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* prismatic1.frame_a.t[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* bar21.frame_a.t[2] variable */);
  TRACE_POP
}
/*
equation index: 1690
type: SIMPLE_ASSIGN
absoluteSensorTop.a[3] = bodyBox.frame_b.R.T[3,2] * bodyBox.a_0[2]
*/
void BuildingCase3_eqFunction_1690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* absoluteSensorTop.a[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* bodyBox.frame_b.R.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* bodyBox.a_0[2] variable */));
  TRACE_POP
}
/*
equation index: 1691
type: SIMPLE_ASSIGN
bodyBox.frame_b.R.T[3,3] = revolute.e[3] ^ 2.0 + (1.0 - revolute.e[3] ^ 2.0) * $cse1
*/
void BuildingCase3_eqFunction_1691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1691};
  modelica_real tmp15;
  modelica_real tmp16;
  tmp15 = (data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */);
  tmp16 = (data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* bodyBox.frame_b.R.T[3,3] variable */) = (tmp15 * tmp15) + (1.0 - ((tmp16 * tmp16))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* $cse1 variable */));
  TRACE_POP
}
/*
equation index: 1692
type: SIMPLE_ASSIGN
revolute.frame_a.t[3] = (-bodyBox.frame_b.R.T[2,3]) * revolute.frame_b.t[2] - bodyBox.frame_b.R.T[3,3] * revolute.frame_b.t[3] - bodyBox.frame_b.R.T[1,3] * revolute.frame_b.t[1]
*/
void BuildingCase3_eqFunction_1692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* revolute.frame_a.t[3] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* bodyBox.frame_b.R.T[2,3] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* revolute.frame_b.t[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* bodyBox.frame_b.R.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* revolute.frame_b.t[3] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* bodyBox.frame_b.R.T[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* revolute.frame_b.t[1] variable */)));
  TRACE_POP
}
/*
equation index: 1693
type: SIMPLE_ASSIGN
bar21.frame_b.t[3] = bar21.frame_a.f[1] * prismatic.s - revolute.frame_a.t[3]
*/
void BuildingCase3_eqFunction_1693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1693};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* bar21.frame_b.t[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* bar21.frame_a.f[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* prismatic.s STATE(1,prismatic.v) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* revolute.frame_a.t[3] variable */);
  TRACE_POP
}
/*
equation index: 1694
type: SIMPLE_ASSIGN
bar21.frame_a.t[3] = (-bar21.frame_b.t[3]) - bar21.frame_a.f[1]
*/
void BuildingCase3_eqFunction_1694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* bar21.frame_a.t[3] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* bar21.frame_b.t[3] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* bar21.frame_a.f[1] variable */);
  TRACE_POP
}
/*
equation index: 1695
type: SIMPLE_ASSIGN
prismatic1.frame_b.t[3] = (-bar21.frame_a.t[3]) - body1.frame_a.t[3]
*/
void BuildingCase3_eqFunction_1695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1695};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* prismatic1.frame_b.t[3] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* bar21.frame_a.t[3] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* body1.frame_a.t[3] variable */);
  TRACE_POP
}
/*
equation index: 1696
type: SIMPLE_ASSIGN
prismatic1.frame_a.t[3] = (-prismatic1.frame_b.t[3]) - prismatic1.frame_a.f[1] * prismatic1.s
*/
void BuildingCase3_eqFunction_1696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* prismatic1.frame_a.t[3] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* prismatic1.frame_b.t[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* prismatic1.frame_a.f[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* prismatic1.s STATE(1,prismatic1.v) */)));
  TRACE_POP
}
/*
equation index: 1697
type: SIMPLE_ASSIGN
bar2.frame_a.t[3] = prismatic1.frame_a.t[3] - 0.3 * spring.f
*/
void BuildingCase3_eqFunction_1697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[712]] /* bar2.frame_a.t[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* prismatic1.frame_a.t[3] variable */) - ((0.3) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* spring.f variable */)));
  TRACE_POP
}
/*
equation index: 1698
type: SIMPLE_ASSIGN
bar21.frame_a.f[3] = (-bodyBox.frame_b.R.T[2,3]) * revolute.frame_b.f[2] - bodyBox.frame_b.R.T[3,3] * revolute.frame_b.f[3] - bodyBox.frame_b.R.T[1,3] * revolute.frame_b.f[1]
*/
void BuildingCase3_eqFunction_1698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* bar21.frame_a.f[3] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* bodyBox.frame_b.R.T[2,3] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* revolute.frame_b.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* bodyBox.frame_b.R.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* revolute.frame_b.f[3] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* bodyBox.frame_b.R.T[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* revolute.frame_b.f[1] variable */)));
  TRACE_POP
}
/*
equation index: 1699
type: SIMPLE_ASSIGN
bar21.frame_b.t[1] = (-bar21.frame_a.f[3]) * prismatic.s - revolute.frame_a.t[1]
*/
void BuildingCase3_eqFunction_1699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1699};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* bar21.frame_b.t[1] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* bar21.frame_a.f[3] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* prismatic.s STATE(1,prismatic.v) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* revolute.frame_a.t[1] variable */);
  TRACE_POP
}
/*
equation index: 1700
type: SIMPLE_ASSIGN
bar21.frame_a.t[1] = bar21.frame_a.f[3] - bar21.frame_b.t[1]
*/
void BuildingCase3_eqFunction_1700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1700};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* bar21.frame_a.t[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* bar21.frame_a.f[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* bar21.frame_b.t[1] variable */);
  TRACE_POP
}
/*
equation index: 1701
type: SIMPLE_ASSIGN
prismatic1.frame_b.t[1] = (-bar21.frame_a.t[1]) - body1.frame_a.t[1]
*/
void BuildingCase3_eqFunction_1701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* prismatic1.frame_b.t[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* bar21.frame_a.t[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* body1.frame_a.t[1] variable */);
  TRACE_POP
}
/*
equation index: 1702
type: SIMPLE_ASSIGN
prismatic1.frame_a.f[3] = bar21.frame_a.f[3] - sine1[3].y
*/
void BuildingCase3_eqFunction_1702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* prismatic1.frame_a.f[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* bar21.frame_a.f[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* sine1[3].y variable */);
  TRACE_POP
}
/*
equation index: 1703
type: SIMPLE_ASSIGN
bar2.frame_a.t[1] = prismatic1.frame_a.f[3] * prismatic1.s - prismatic1.frame_b.t[1]
*/
void BuildingCase3_eqFunction_1703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* bar2.frame_a.t[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* prismatic1.frame_a.f[3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* prismatic1.s STATE(1,prismatic1.v) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* prismatic1.frame_b.t[1] variable */);
  TRACE_POP
}
/*
equation index: 1704
type: SIMPLE_ASSIGN
bar2.frame_a.t[2] = bar21.frame_a.t[2] - 0.3 * prismatic1.frame_a.f[3]
*/
void BuildingCase3_eqFunction_1704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1704};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[711]] /* bar2.frame_a.t[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* bar21.frame_a.t[2] variable */) - ((0.3) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* prismatic1.frame_a.f[3] variable */)));
  TRACE_POP
}
/*
equation index: 1705
type: ARRAY_CALL_ASSIGN

world.z_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 0.0, 1.0}, {0.0, 1.0, 0.0})
*/
void BuildingCase3_eqFunction_1705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1705};
  real_array tmp17;
  real_array_create(&tmp17, ((modelica_real*)&((&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* world.z_label.R_lines[1,1] variable */))[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT3, _OMC_LIT2), tmp17);
  TRACE_POP
}
/*
equation index: 1706
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[2] = world.z_label.R_lines[2,2] * world.scaledLabel
*/
void BuildingCase3_eqFunction_1706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1706};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1382]] /* world.z_label.cylinders[3].r[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1361]] /* world.z_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1707
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[1] = world.z_label.R_lines[1,1] * world.scaledLabel
*/
void BuildingCase3_eqFunction_1707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1707};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1375]] /* world.z_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* world.z_label.R_lines[1,1] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1708
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[1] = world.z_label.R_lines[2,1] * world.scaledLabel
*/
void BuildingCase3_eqFunction_1708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1708};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1381]] /* world.z_label.cylinders[3].r[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1360]] /* world.z_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1709
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[1] = (world.z_label.R_lines[1,1] - world.z_label.R_lines[2,1]) * world.scaledLabel
*/
void BuildingCase3_eqFunction_1709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1709};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1378]] /* world.z_label.cylinders[3].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* world.z_label.R_lines[1,1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1360]] /* world.z_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1710
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[2] = world.z_label.R_lines[1,2] * world.scaledLabel
*/
void BuildingCase3_eqFunction_1710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1710};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1376]] /* world.z_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* world.z_label.R_lines[1,2] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1711
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[2] = (world.z_label.R_lines[1,2] - world.z_label.R_lines[2,2]) * world.scaledLabel
*/
void BuildingCase3_eqFunction_1711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1711};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1379]] /* world.z_label.cylinders[3].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* world.z_label.R_lines[1,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1361]] /* world.z_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1712
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[3] = world.labelStart + world.z_label.R_lines[2,3] * world.scaledLabel
*/
void BuildingCase3_eqFunction_1712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1712};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1383]] /* world.z_label.cylinders[3].r[3] variable */) = (data->simulationInfo->realParameter[419] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1362]] /* world.z_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1713
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[3] = world.z_label.R_lines[1,3] * world.scaledLabel
*/
void BuildingCase3_eqFunction_1713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1713};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1377]] /* world.z_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1359]] /* world.z_label.R_lines[1,3] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1714
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[3] = (world.z_label.R_lines[1,3] - world.z_label.R_lines[2,3]) * world.scaledLabel
*/
void BuildingCase3_eqFunction_1714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1714};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1380]] /* world.z_label.cylinders[3].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1359]] /* world.z_label.R_lines[1,3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1362]] /* world.z_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1715
type: ARRAY_CALL_ASSIGN

world.y_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 1.0, 0.0}, {-1.0, 0.0, 0.0})
*/
void BuildingCase3_eqFunction_1715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1715};
  real_array tmp18;
  real_array_create(&tmp18, ((modelica_real*)&((&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* world.y_label.R_lines[1,1] variable */))[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT2, _OMC_LIT4), tmp18);
  TRACE_POP
}
/*
equation index: 1716
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[2] = world.labelStart + world.y_label.R_lines[2,2] * world.y_label.lines[2,1,2]
*/
void BuildingCase3_eqFunction_1716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* world.y_label.cylinders[2].r[2] variable */) = (data->simulationInfo->realParameter[419] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* world.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1717
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[1] = world.y_label.R_lines[1,1] * world.scaledLabel + world.y_label.R_lines[2,1] * world.y_label.lines[1,2,2]
*/
void BuildingCase3_eqFunction_1717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1249]] /* world.y_label.cylinders[1].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* world.y_label.R_lines[1,1] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* world.y_label.lines[1,2,2] variable */));
  TRACE_POP
}
/*
equation index: 1718
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[1] = world.y_label.R_lines[2,1] * world.y_label.lines[2,1,2]
*/
void BuildingCase3_eqFunction_1718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1718};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1255]] /* world.y_label.cylinders[2].r[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* world.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1719
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[1] = world.y_label.R_lines[1,1] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,1] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void BuildingCase3_eqFunction_1719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1719};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* world.y_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* world.y_label.R_lines[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* world.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1720
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[2] = world.y_label.R_lines[1,2] * world.scaledLabel + world.y_label.R_lines[2,2] * world.y_label.lines[1,2,2]
*/
void BuildingCase3_eqFunction_1720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1720};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1250]] /* world.y_label.cylinders[1].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* world.y_label.R_lines[1,2] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* world.y_label.lines[1,2,2] variable */));
  TRACE_POP
}
/*
equation index: 1721
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[2] = world.y_label.R_lines[1,2] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,2] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void BuildingCase3_eqFunction_1721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1721};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1253]] /* world.y_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* world.y_label.R_lines[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* world.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1722
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[3] = world.y_label.R_lines[2,3] * world.y_label.lines[2,1,2]
*/
void BuildingCase3_eqFunction_1722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1722};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* world.y_label.cylinders[2].r[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* world.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1723
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[3] = world.y_label.R_lines[1,3] * world.scaledLabel + world.y_label.R_lines[2,3] * world.y_label.lines[1,2,2]
*/
void BuildingCase3_eqFunction_1723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1723};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1251]] /* world.y_label.cylinders[1].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* world.y_label.R_lines[1,3] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* world.y_label.lines[1,2,2] variable */));
  TRACE_POP
}
/*
equation index: 1724
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[3] = world.y_label.R_lines[1,3] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,3] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void BuildingCase3_eqFunction_1724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1724};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1254]] /* world.y_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* world.y_label.R_lines[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* world.y_label.lines[2,1,2] variable */));
  TRACE_POP
}
/*
equation index: 1725
type: ARRAY_CALL_ASSIGN

world.x_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({1.0, 0.0, 0.0}, {0.0, 1.0, 0.0})
*/
void BuildingCase3_eqFunction_1725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1725};
  real_array tmp19;
  real_array_create(&tmp19, ((modelica_real*)&((&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1112]] /* world.x_label.R_lines[1,1] variable */))[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT1, _OMC_LIT2), tmp19);
  TRACE_POP
}
/*
equation index: 1726
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[2] = world.x_label.R_lines[2,2] * world.scaledLabel
*/
void BuildingCase3_eqFunction_1726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1726};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1135]] /* world.x_label.cylinders[2].r[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* world.x_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1727
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[1] = world.scaledLabel * (world.x_label.R_lines[1,1] + world.x_label.R_lines[2,1])
*/
void BuildingCase3_eqFunction_1727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* world.x_label.cylinders[1].lengthDirection[1] variable */) = ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1112]] /* world.x_label.R_lines[1,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* world.x_label.R_lines[2,1] variable */));
  TRACE_POP
}
/*
equation index: 1728
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[1] = world.labelStart + world.x_label.R_lines[2,1] * world.scaledLabel
*/
void BuildingCase3_eqFunction_1728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* world.x_label.cylinders[2].r[1] variable */) = (data->simulationInfo->realParameter[419] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* world.x_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1729
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[1] = (world.x_label.R_lines[1,1] - world.x_label.R_lines[2,1]) * world.scaledLabel
*/
void BuildingCase3_eqFunction_1729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* world.x_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1112]] /* world.x_label.R_lines[1,1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* world.x_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1730
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[2] = world.scaledLabel * (world.x_label.R_lines[1,2] + world.x_label.R_lines[2,2])
*/
void BuildingCase3_eqFunction_1730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1129]] /* world.x_label.cylinders[1].lengthDirection[2] variable */) = ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* world.x_label.R_lines[1,2] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* world.x_label.R_lines[2,2] variable */));
  TRACE_POP
}
/*
equation index: 1731
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[2] = (world.x_label.R_lines[1,2] - world.x_label.R_lines[2,2]) * world.scaledLabel
*/
void BuildingCase3_eqFunction_1731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1731};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* world.x_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* world.x_label.R_lines[1,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* world.x_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1732
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[3] = world.x_label.R_lines[2,3] * world.scaledLabel
*/
void BuildingCase3_eqFunction_1732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* world.x_label.cylinders[2].r[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* world.x_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1733
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[3] = world.scaledLabel * (world.x_label.R_lines[1,3] + world.x_label.R_lines[2,3])
*/
void BuildingCase3_eqFunction_1733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* world.x_label.cylinders[1].lengthDirection[3] variable */) = ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1114]] /* world.x_label.R_lines[1,3] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* world.x_label.R_lines[2,3] variable */));
  TRACE_POP
}
/*
equation index: 1734
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[3] = (world.x_label.R_lines[1,3] - world.x_label.R_lines[2,3]) * world.scaledLabel
*/
void BuildingCase3_eqFunction_1734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1734};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* world.x_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1114]] /* world.x_label.R_lines[1,3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* world.x_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */));
  TRACE_POP
}
/*
equation index: 1736
type: ALGORITHM

  assert(bodyBox.innerWidth <= bodyBox.width, "parameter innerWidth is greater than parameter width");
*/
void BuildingCase3_eqFunction_1736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1736};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,52,"parameter innerWidth is greater than parameter width");
  static int tmp22 = 0;
  {
    tmp20 = LessEq((data->simulationInfo->realParameter[269] /* bodyBox.innerWidth PARAM */),(data->simulationInfo->realParameter[290] /* bodyBox.width PARAM */));
    if(!tmp20)
    {
      {
        const char* assert_cond = "(bodyBox.innerWidth <= bodyBox.width)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/4C48~1/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Parts/BodyBox.mo",159,3,160,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp21)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/4C48~1/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Parts/BodyBox.mo",159,3,160,60,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp21)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1735
type: ALGORITHM

  assert(bodyBox.innerHeight <= bodyBox.height, "parameter innerHeight is greater than parameter height");
*/
void BuildingCase3_eqFunction_1735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1735};
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,54,"parameter innerHeight is greater than parameter height");
  static int tmp25 = 0;
  {
    tmp23 = LessEq((data->simulationInfo->realParameter[268] /* bodyBox.innerHeight PARAM */),(data->simulationInfo->realParameter[267] /* bodyBox.height PARAM */));
    if(!tmp23)
    {
      {
        const char* assert_cond = "(bodyBox.innerHeight <= bodyBox.height)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/4C48~1/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Parts/BodyBox.mo",161,3,162,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp24)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/4C48~1/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Parts/BodyBox.mo",161,3,162,62,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp24)));
        }
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int BuildingCase3_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  BuildingCase3_functionLocalKnownVars(data, threadData);
  BuildingCase3_eqFunction_1512(data, threadData);

  BuildingCase3_eqFunction_1513(data, threadData);

  BuildingCase3_eqFunction_1514(data, threadData);

  BuildingCase3_eqFunction_1515(data, threadData);

  BuildingCase3_eqFunction_1516(data, threadData);

  BuildingCase3_eqFunction_1517(data, threadData);

  BuildingCase3_eqFunction_1518(data, threadData);

  BuildingCase3_eqFunction_1519(data, threadData);

  BuildingCase3_eqFunction_1520(data, threadData);

  BuildingCase3_eqFunction_1521(data, threadData);

  BuildingCase3_eqFunction_1522(data, threadData);

  BuildingCase3_eqFunction_1523(data, threadData);

  BuildingCase3_eqFunction_1524(data, threadData);

  BuildingCase3_eqFunction_1525(data, threadData);

  BuildingCase3_eqFunction_1526(data, threadData);

  BuildingCase3_eqFunction_1527(data, threadData);

  BuildingCase3_eqFunction_1528(data, threadData);

  BuildingCase3_eqFunction_1529(data, threadData);

  BuildingCase3_eqFunction_1530(data, threadData);

  BuildingCase3_eqFunction_1531(data, threadData);

  BuildingCase3_eqFunction_1532(data, threadData);

  BuildingCase3_eqFunction_1533(data, threadData);

  BuildingCase3_eqFunction_1534(data, threadData);

  BuildingCase3_eqFunction_1535(data, threadData);

  BuildingCase3_eqFunction_1536(data, threadData);

  BuildingCase3_eqFunction_1537(data, threadData);

  BuildingCase3_eqFunction_1538(data, threadData);

  BuildingCase3_eqFunction_1539(data, threadData);

  BuildingCase3_eqFunction_1540(data, threadData);

  BuildingCase3_eqFunction_1541(data, threadData);

  BuildingCase3_eqFunction_1542(data, threadData);

  BuildingCase3_eqFunction_1543(data, threadData);

  BuildingCase3_eqFunction_1544(data, threadData);

  BuildingCase3_eqFunction_1545(data, threadData);

  BuildingCase3_eqFunction_1546(data, threadData);

  BuildingCase3_eqFunction_1547(data, threadData);

  BuildingCase3_eqFunction_1548(data, threadData);

  BuildingCase3_eqFunction_1549(data, threadData);

  BuildingCase3_eqFunction_1550(data, threadData);

  BuildingCase3_eqFunction_1551(data, threadData);

  BuildingCase3_eqFunction_1552(data, threadData);

  BuildingCase3_eqFunction_1553(data, threadData);

  BuildingCase3_eqFunction_1554(data, threadData);

  BuildingCase3_eqFunction_1555(data, threadData);

  BuildingCase3_eqFunction_1556(data, threadData);

  BuildingCase3_eqFunction_1557(data, threadData);

  BuildingCase3_eqFunction_1558(data, threadData);

  BuildingCase3_eqFunction_1559(data, threadData);

  BuildingCase3_eqFunction_1560(data, threadData);

  BuildingCase3_eqFunction_1561(data, threadData);

  BuildingCase3_eqFunction_1562(data, threadData);

  BuildingCase3_eqFunction_1563(data, threadData);

  BuildingCase3_eqFunction_1564(data, threadData);

  BuildingCase3_eqFunction_1565(data, threadData);

  BuildingCase3_eqFunction_1566(data, threadData);

  BuildingCase3_eqFunction_1567(data, threadData);

  BuildingCase3_eqFunction_1568(data, threadData);

  BuildingCase3_eqFunction_1569(data, threadData);

  BuildingCase3_eqFunction_1570(data, threadData);

  BuildingCase3_eqFunction_1571(data, threadData);

  BuildingCase3_eqFunction_1572(data, threadData);

  BuildingCase3_eqFunction_1573(data, threadData);

  BuildingCase3_eqFunction_1574(data, threadData);

  BuildingCase3_eqFunction_1575(data, threadData);

  BuildingCase3_eqFunction_1576(data, threadData);

  BuildingCase3_eqFunction_1577(data, threadData);

  BuildingCase3_eqFunction_1578(data, threadData);

  BuildingCase3_eqFunction_1579(data, threadData);

  BuildingCase3_eqFunction_1580(data, threadData);

  BuildingCase3_eqFunction_1581(data, threadData);

  BuildingCase3_eqFunction_1582(data, threadData);

  BuildingCase3_eqFunction_1583(data, threadData);

  BuildingCase3_eqFunction_1584(data, threadData);

  BuildingCase3_eqFunction_1585(data, threadData);

  BuildingCase3_eqFunction_1586(data, threadData);

  BuildingCase3_eqFunction_1587(data, threadData);

  BuildingCase3_eqFunction_1588(data, threadData);

  BuildingCase3_eqFunction_1589(data, threadData);

  BuildingCase3_eqFunction_1590(data, threadData);

  BuildingCase3_eqFunction_1591(data, threadData);

  BuildingCase3_eqFunction_1592(data, threadData);

  BuildingCase3_eqFunction_1593(data, threadData);

  BuildingCase3_eqFunction_1594(data, threadData);

  BuildingCase3_eqFunction_1595(data, threadData);

  BuildingCase3_eqFunction_1596(data, threadData);

  BuildingCase3_eqFunction_1597(data, threadData);

  BuildingCase3_eqFunction_1598(data, threadData);

  BuildingCase3_eqFunction_1599(data, threadData);

  BuildingCase3_eqFunction_1600(data, threadData);

  BuildingCase3_eqFunction_1601(data, threadData);

  BuildingCase3_eqFunction_1602(data, threadData);

  BuildingCase3_eqFunction_1603(data, threadData);

  BuildingCase3_eqFunction_1665(data, threadData);

  BuildingCase3_eqFunction_1666(data, threadData);

  BuildingCase3_eqFunction_1667(data, threadData);

  BuildingCase3_eqFunction_1668(data, threadData);

  BuildingCase3_eqFunction_1669(data, threadData);

  BuildingCase3_eqFunction_1670(data, threadData);

  BuildingCase3_eqFunction_1671(data, threadData);

  BuildingCase3_eqFunction_1672(data, threadData);

  BuildingCase3_eqFunction_1673(data, threadData);

  BuildingCase3_eqFunction_1674(data, threadData);

  BuildingCase3_eqFunction_1675(data, threadData);

  BuildingCase3_eqFunction_1676(data, threadData);

  BuildingCase3_eqFunction_1677(data, threadData);

  BuildingCase3_eqFunction_1678(data, threadData);

  BuildingCase3_eqFunction_1679(data, threadData);

  BuildingCase3_eqFunction_1680(data, threadData);

  BuildingCase3_eqFunction_1681(data, threadData);

  BuildingCase3_eqFunction_1682(data, threadData);

  BuildingCase3_eqFunction_1683(data, threadData);

  BuildingCase3_eqFunction_1684(data, threadData);

  BuildingCase3_eqFunction_1685(data, threadData);

  BuildingCase3_eqFunction_1686(data, threadData);

  BuildingCase3_eqFunction_1687(data, threadData);

  BuildingCase3_eqFunction_1688(data, threadData);

  BuildingCase3_eqFunction_1689(data, threadData);

  BuildingCase3_eqFunction_1690(data, threadData);

  BuildingCase3_eqFunction_1691(data, threadData);

  BuildingCase3_eqFunction_1692(data, threadData);

  BuildingCase3_eqFunction_1693(data, threadData);

  BuildingCase3_eqFunction_1694(data, threadData);

  BuildingCase3_eqFunction_1695(data, threadData);

  BuildingCase3_eqFunction_1696(data, threadData);

  BuildingCase3_eqFunction_1697(data, threadData);

  BuildingCase3_eqFunction_1698(data, threadData);

  BuildingCase3_eqFunction_1699(data, threadData);

  BuildingCase3_eqFunction_1700(data, threadData);

  BuildingCase3_eqFunction_1701(data, threadData);

  BuildingCase3_eqFunction_1702(data, threadData);

  BuildingCase3_eqFunction_1703(data, threadData);

  BuildingCase3_eqFunction_1704(data, threadData);

  BuildingCase3_eqFunction_1705(data, threadData);

  BuildingCase3_eqFunction_1706(data, threadData);

  BuildingCase3_eqFunction_1707(data, threadData);

  BuildingCase3_eqFunction_1708(data, threadData);

  BuildingCase3_eqFunction_1709(data, threadData);

  BuildingCase3_eqFunction_1710(data, threadData);

  BuildingCase3_eqFunction_1711(data, threadData);

  BuildingCase3_eqFunction_1712(data, threadData);

  BuildingCase3_eqFunction_1713(data, threadData);

  BuildingCase3_eqFunction_1714(data, threadData);

  BuildingCase3_eqFunction_1715(data, threadData);

  BuildingCase3_eqFunction_1716(data, threadData);

  BuildingCase3_eqFunction_1717(data, threadData);

  BuildingCase3_eqFunction_1718(data, threadData);

  BuildingCase3_eqFunction_1719(data, threadData);

  BuildingCase3_eqFunction_1720(data, threadData);

  BuildingCase3_eqFunction_1721(data, threadData);

  BuildingCase3_eqFunction_1722(data, threadData);

  BuildingCase3_eqFunction_1723(data, threadData);

  BuildingCase3_eqFunction_1724(data, threadData);

  BuildingCase3_eqFunction_1725(data, threadData);

  BuildingCase3_eqFunction_1726(data, threadData);

  BuildingCase3_eqFunction_1727(data, threadData);

  BuildingCase3_eqFunction_1728(data, threadData);

  BuildingCase3_eqFunction_1729(data, threadData);

  BuildingCase3_eqFunction_1730(data, threadData);

  BuildingCase3_eqFunction_1731(data, threadData);

  BuildingCase3_eqFunction_1732(data, threadData);

  BuildingCase3_eqFunction_1733(data, threadData);

  BuildingCase3_eqFunction_1734(data, threadData);

  BuildingCase3_eqFunction_1736(data, threadData);

  BuildingCase3_eqFunction_1735(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int BuildingCase3_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

/* forwarded equations */
extern void BuildingCase3_eqFunction_1559(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1563(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1564(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1565(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1567(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1568(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1571(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1572(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1574(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1576(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1581(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1582(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1583(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1584(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1585(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1586(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1588(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1594(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1601(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1665(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1676(DATA* data, threadData_t *threadData);
extern void BuildingCase3_eqFunction_1678(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  int id;

  static void (*const eqFunctions[22])(DATA*, threadData_t*) = {
    BuildingCase3_eqFunction_1559,
    BuildingCase3_eqFunction_1563,
    BuildingCase3_eqFunction_1564,
    BuildingCase3_eqFunction_1565,
    BuildingCase3_eqFunction_1567,
    BuildingCase3_eqFunction_1568,
    BuildingCase3_eqFunction_1571,
    BuildingCase3_eqFunction_1572,
    BuildingCase3_eqFunction_1574,
    BuildingCase3_eqFunction_1576,
    BuildingCase3_eqFunction_1581,
    BuildingCase3_eqFunction_1582,
    BuildingCase3_eqFunction_1583,
    BuildingCase3_eqFunction_1584,
    BuildingCase3_eqFunction_1585,
    BuildingCase3_eqFunction_1586,
    BuildingCase3_eqFunction_1588,
    BuildingCase3_eqFunction_1594,
    BuildingCase3_eqFunction_1601,
    BuildingCase3_eqFunction_1665,
    BuildingCase3_eqFunction_1676,
    BuildingCase3_eqFunction_1678
  };
  
  static const int eqIndices[22] = {
    1559,
    1563,
    1564,
    1565,
    1567,
    1568,
    1571,
    1572,
    1574,
    1576,
    1581,
    1582,
    1583,
    1584,
    1585,
    1586,
    1588,
    1594,
    1601,
    1665,
    1676,
    1678
  };
  
  for (id = 0; id < 22; id++) {
    eqFunctions[id](data, threadData);
    threadData->lastEquationSolved = eqIndices[id];
  }
}

int BuildingCase3_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  BuildingCase3_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

void BuildingCase3_computeVarIndices(size_t* realIndex, size_t* integerIndex, size_t* booleanIndex, size_t* stringIndex)
{
  TRACE_PUSH

  size_t i_real = 0;
  size_t i_integer = 0;
  size_t i_boolean = 0;
  size_t i_string = 0;

  realIndex[0] = 0;
  integerIndex[0] = 0;
  booleanIndex[0] = 0;
  stringIndex[0] = 0;

  /* stateVars */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.s STATE(1,prismatic.v) */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.v STATE(1,prismatic.a) */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.s STATE(1,prismatic1.v) */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.v STATE(1,body1.a_0[2]) */
  
  /* derivativeVars */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(prismatic.s) STATE_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(prismatic.v) STATE_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(prismatic1.s) STATE_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(prismatic1.v) STATE_DER */
  
  /* algVars */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(der(prismatic.frame_a.r_0[1])) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(der(prismatic.frame_a.r_0[2])) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(der(prismatic.frame_a.r_0[3])) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(absoluteSensorBottom.der1[1].u) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(absoluteSensorBottom.der1[2].u) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(absoluteSensorBottom.der1[3].u) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(absoluteSensorBottom.velocity.der1[1].u) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(absoluteSensorBottom.velocity.der1[2].u) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(absoluteSensorBottom.velocity.der1[3].u) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(absoluteSensorTop.der1[1].u) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(absoluteSensorTop.der1[2].u) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(absoluteSensorTop.der1[3].u) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(absoluteSensorTop.velocity.der1[1].u) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(absoluteSensorTop.velocity.der1[2].u) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(absoluteSensorTop.velocity.der1[3].u) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(body.w_a[1]) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(body.w_a[2]) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(body.w_a[3]) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(prismatic.frame_a.r_0[1]) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(prismatic.frame_a.r_0[2]) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(prismatic.frame_a.r_0[3]) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(revolute.R_rel.w[1]) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(revolute.R_rel.w[2]) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(revolute.R_rel.w[3]) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(revolute.phi) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(revolute.w) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(springDamper.s_rel) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* der(springDamper.v_rel) DUMMY_DER */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* $cse1 variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* $cse2 variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.a[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.a[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.a[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.position.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.position.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.position.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.position.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.position.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.position.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.position.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.position.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.position.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.position.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.position.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.position.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.absoluteVelocity.zeroPosition1.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.r_tail[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.r_tail[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.r_tail[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.rvisobj[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.rvisobj[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.arrow.rvisobj[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.der1[1].u DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.der1[2].u DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.der1[3].u DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.position.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.position.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.position.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.position.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.position.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.position.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.position.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.position.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.position.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.position.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.position.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.position.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.position.zeroPosition.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.R1.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.basicTransformVector.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.transformVector_a.zeroPosition.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.v[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.v[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.v[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.der1[1].u DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.der1[2].u DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.der1[3].u DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.position.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.position.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.position.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.position.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.position.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.position.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.position.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.position.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.position.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.position.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.position.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.position.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.R1.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.basicTransformVector.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.velocity.zeroPosition1.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.zeroForce1.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.zeroForce1.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.zeroForce1.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.zeroForce1.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.zeroForce1.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorBottom.zeroForce1.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.a[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.a[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.a[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.position.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.position.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.position.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.position.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.position.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.position.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.position.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.position.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.position.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.position.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.position.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.position.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.R1.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.basicTransformVector.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.absoluteVelocity.zeroPosition1.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.r_tail[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.r_tail[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.r_tail[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.rvisobj[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.rvisobj[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.arrow.rvisobj[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.der1[1].u DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.der1[2].u DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.der1[3].u DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.position.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.position.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.position.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.position.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.position.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.position.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.position.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.position.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.position.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.position.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.position.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.position.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.position.zeroPosition.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.R1.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.basicTransformVector.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.transformVector_a.zeroPosition.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.v[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.v[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.v[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.der1[1].u DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.der1[2].u DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.der1[3].u DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.position.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.position.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.position.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.position.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.position.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.position.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.position.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.position.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.position.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.position.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.position.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.position.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.R1.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.basicTransformVector.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.transformAbsoluteVector.zeroPosition.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.velocity.zeroPosition1.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.zeroForce1.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.zeroForce1.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.zeroForce1.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.zeroForce1.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.zeroForce1.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* absoluteSensorTop.zeroForce1.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.shape.color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.shape.color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.shape.color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.shape.lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.shape.lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.shape.lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.shape.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.shape.r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.shape.r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.shape.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.shape.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar2.shape.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.frame_b.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.frame_b.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.shape.color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.shape.color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.shape.color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.shape.lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.shape.lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.shape.lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.shape.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.shape.r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.shape.r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.shape.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.shape.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bar21.shape.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.Q[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.Q[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.Q[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.Q[4] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.cylinder.color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.cylinder.color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.cylinder.color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.cylinder.extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.cylinder.length variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.cylinder.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.cylinder.r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.cylinder.r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.cylinder.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.cylinder.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.cylinder.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.g_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.g_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.g_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.phi[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.phi[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.phi[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.phi_d[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.phi_d[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.phi_d[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.phi_dd[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.phi_dd[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.phi_dd[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.sphere.color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.sphere.color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.sphere.color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.sphere.extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.sphere.height variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.sphere.length variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.sphere.lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.sphere.lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.sphere.lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.sphere.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.sphere.width variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.sphere.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.sphere.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.sphere.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.w_a[1] DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.w_a[2] DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.w_a[3] DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.z_a[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.z_a[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body.z_a[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.Q[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.Q[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.Q[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.Q[4] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.a_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.a_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.a_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.cylinder.color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.cylinder.color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.cylinder.color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.cylinder.extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.cylinder.length variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.cylinder.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.cylinder.r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.cylinder.r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.cylinder.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.cylinder.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.cylinder.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.g_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.g_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.g_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.phi[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.phi[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.phi[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.phi_d[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.phi_d[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.phi_d[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.phi_dd[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.phi_dd[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.phi_dd[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.sphere.color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.sphere.color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.sphere.color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.sphere.extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.sphere.height variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.sphere.length variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.sphere.lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.sphere.lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.sphere.lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.sphere.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.sphere.width variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.sphere.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.sphere.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.sphere.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.z_a[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.z_a[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* body1.z_a[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.a_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.a_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.a_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.Q[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.Q[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.Q[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.Q[4] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.g_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.g_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.g_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.phi[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.phi[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.phi[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.phi_d[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.phi_d[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.phi_d[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.phi_dd[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.phi_dd[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.body.phi_dd[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.shape.color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.shape.color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.shape.color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.shape.lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.shape.lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.shape.lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.shape.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.shape.r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.shape.r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.shape.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.shape.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frameTranslation.shape.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_a.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* bodyBox.frame_b.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.arrow.r_tail[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.arrow.r_tail[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.arrow.r_tail[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.basicWorldForce.frame_b.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.basicWorldForce.frame_b.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.basicWorldForce.frame_b.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.basicWorldForce.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.basicWorldForce.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.basicWorldForce.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.basicWorldForce.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.basicWorldForce.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.basicWorldForce.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.frame_b.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.frame_b.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.frame_b.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* force1.zeroPosition.frame_resolve.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* idealGearR2T.flangeR.tau variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* idealGearR2T.flangeT.f variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* inertia.a variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* inertia.flange_a.tau variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* inertia.flange_b.tau variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.a variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.box.color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.box.color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.box.color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.box.extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.box.length variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.box.lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.box.lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.box.lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.box.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.box.r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.box.r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.box.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.box.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.box.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.f variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.frame_a.r_0[1] DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.frame_a.r_0[2] DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic.frame_a.r_0[3] DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.a variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.box.color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.box.color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.box.color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.box.extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.box.length variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.box.lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.box.lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.box.lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.box.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.box.r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.box.r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.box.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.box.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.box.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.frame_a.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.frame_a.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.frame_a.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.frame_a.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.frame_a.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.frame_a.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.frame_b.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* prismatic1.frame_b.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.R_rel.w[1] DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.R_rel.w[2] DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.R_rel.w[3] DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.cylinder.color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.cylinder.color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.cylinder.color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.cylinder.extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.cylinder.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.cylinder.r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.cylinder.r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.cylinder.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.cylinder.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.cylinder.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.frame_a.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.frame_a.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.frame_b.f[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.frame_b.f[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.frame_b.f[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.frame_b.t[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.frame_b.t[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.frame_b.t[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.phi DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.support.tau variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.tau variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* revolute.w DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* sine1[1].y variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* sine1[2].y variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* sine1[3].y variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* spring.f variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* spring.s_rel variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* springDamper.f variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* springDamper.f_c variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* springDamper.f_d variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* springDamper.lossPower variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* springDamper.s_rel DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* springDamper.v_rel DUMMY_STATE */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.r_0[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.r_0[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.frame_b.r_0[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.specularCoefficient variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowHead.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.specularCoefficient variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_arrowLine.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R_lines[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R_lines[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R_lines[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R_lines[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R_lines[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R_lines[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R_lines[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R_lines[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.R_lines[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[1].extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[1].length variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].length variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[1].lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[1].lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[1].lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[1].r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[1].r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[1].r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[1].widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[1].widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[1].widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.cylinders[2].widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.lines[1,1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.lines[1,1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.lines[2,1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.lines[2,2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.n_x[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.n_x[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.n_x[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.n_y[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.n_y[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.n_y[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.r_abs[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.r_abs[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.r_lines[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.r_lines[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.x_label.specularCoefficient variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.specularCoefficient variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowHead.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.specularCoefficient variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_arrowLine.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R_lines[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R_lines[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R_lines[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R_lines[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R_lines[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R_lines[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R_lines[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R_lines[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.R_lines[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[1].extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[1].length variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].length variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[1].lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[1].lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[1].lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[1].r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[1].r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[1].r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[1].widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[1].widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[1].widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.cylinders[2].widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.lines[1,1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.lines[1,1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.lines[1,2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.lines[2,1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.lines[2,1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.lines[2,2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.lines[2,2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.n_x[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.n_x[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.n_x[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.n_y[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.n_y[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.n_y[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.r_abs[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.r_abs[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.r_lines[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.r_lines[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.y_label.specularCoefficient variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.specularCoefficient variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowHead.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.specularCoefficient variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_arrowLine.widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R.T[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R.T[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R.T[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R.T[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R.T[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R.T[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R.T[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R.T[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R.T[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R.w[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R.w[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R.w[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R_lines[1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R_lines[1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R_lines[1,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R_lines[2,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R_lines[2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R_lines[2,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R_lines[3,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R_lines[3,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.R_lines[3,3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].color[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].color[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].color[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[1].extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[2].extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].extra variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[1].length variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[2].length variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].length variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[2].lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[2].lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[2].lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].lengthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].lengthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].lengthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[1].r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[1].r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[1].r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[2].r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[2].r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[2].r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].r_shape[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].r_shape[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].r_shape[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[1].widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[1].widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[1].widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[2].widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[2].widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[2].widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].widthDirection[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].widthDirection[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.cylinders[3].widthDirection[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.lines[1,1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.lines[1,1,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.lines[1,2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.lines[2,1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.lines[3,1,1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.lines[3,2,2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.n_x[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.n_x[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.n_x[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.n_y[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.n_y[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.n_y[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.r[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.r[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.r[3] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.r_abs[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.r_abs[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.r_lines[1] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.r_lines[2] variable */
  realIndex[i_real+1] = realIndex[i_real] + ((modelica_integer) 1); i_real++; /* world.z_label.specularCoefficient variable */
  
  /* discreteAlgVars */
  
  /* realOptimizeConstraintsVars */
  
  /* realOptimizeFinalConstraintsVars */
  
  
  /* intAlgVars */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* absoluteSensorBottom.arrowColor[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* absoluteSensorBottom.arrowColor[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* absoluteSensorBottom.arrowColor[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* absoluteSensorTop.arrowColor[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* absoluteSensorTop.arrowColor[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* absoluteSensorTop.arrowColor[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* bar2.color[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* bar2.color[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* bar2.color[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* bar21.color[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* bar21.color[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* bar21.color[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* body.sphereColor[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* body.sphereColor[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* body.sphereColor[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* body1.sphereColor[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* body1.sphereColor[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* body1.sphereColor[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* bodyBox.body.sphereColor[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* bodyBox.body.sphereColor[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* bodyBox.body.sphereColor[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* bodyBox.color[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* bodyBox.color[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* bodyBox.color[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* force1.color[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* force1.color[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* force1.color[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* prismatic.boxColor[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* prismatic.boxColor[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* prismatic.boxColor[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* prismatic1.boxColor[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* prismatic1.boxColor[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* prismatic1.boxColor[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* revolute.cylinderColor[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* revolute.cylinderColor[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* revolute.cylinderColor[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* world.axisColor_x[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* world.axisColor_x[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* world.axisColor_x[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* world.gravityArrowColor[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* world.gravityArrowColor[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* world.gravityArrowColor[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* world.gravitySphereColor[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* world.gravitySphereColor[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* world.gravitySphereColor[3] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* world.groundColor[1] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* world.groundColor[2] DISCRETE */
  integerIndex[i_integer+1] = integerIndex[i_integer] + ((modelica_integer) 1); i_integer++; /* world.groundColor[3] DISCRETE */
  
  /* boolAlgVars */
  booleanIndex[i_boolean+1] = booleanIndex[i_boolean] + ((modelica_integer) 1); i_boolean++; /* absoluteSensorBottom.arrow.arrowLine.twoHeadedArrow DISCRETE */
  booleanIndex[i_boolean+1] = booleanIndex[i_boolean] + ((modelica_integer) 1); i_boolean++; /* absoluteSensorBottom.arrow.headAtOrigin DISCRETE */
  booleanIndex[i_boolean+1] = booleanIndex[i_boolean] + ((modelica_integer) 1); i_boolean++; /* absoluteSensorTop.arrow.arrowLine.twoHeadedArrow DISCRETE */
  booleanIndex[i_boolean+1] = booleanIndex[i_boolean] + ((modelica_integer) 1); i_boolean++; /* absoluteSensorTop.arrow.headAtOrigin DISCRETE */
  booleanIndex[i_boolean+1] = booleanIndex[i_boolean] + ((modelica_integer) 1); i_boolean++; /* force1.arrow.arrowLine.twoHeadedArrow DISCRETE */
  booleanIndex[i_boolean+1] = booleanIndex[i_boolean] + ((modelica_integer) 1); i_boolean++; /* force1.arrow.headAtOrigin DISCRETE */
  
  /* stringAlgVars */
  
  TRACE_POP
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "BuildingCase3_12jac.h"
#include "BuildingCase3_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks BuildingCase3_callback = {
   (int (*)(DATA *, threadData_t *, void *)) BuildingCase3_performSimulation,    /* performSimulation */
   (int (*)(DATA *, threadData_t *, void *)) BuildingCase3_performQSSSimulation,    /* performQSSSimulation */
   BuildingCase3_updateContinuousSystem,    /* updateContinuousSystem */
   BuildingCase3_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   NULL,    /* initialNonLinearSystem */
   BuildingCase3_initialLinearSystem,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   BuildingCase3_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   BuildingCase3_initializeDAEmodeData,
   BuildingCase3_computeVarIndices,
   BuildingCase3_functionODE,
   BuildingCase3_functionAlgebraics,
   BuildingCase3_functionDAE,
   BuildingCase3_functionLocalKnownVars,
   BuildingCase3_input_function,
   BuildingCase3_input_function_init,
   BuildingCase3_input_function_updateStartValues,
   BuildingCase3_data_function,
   BuildingCase3_output_function,
   BuildingCase3_setc_function,
   BuildingCase3_setb_function,
   BuildingCase3_function_storeDelayed,
   BuildingCase3_function_storeSpatialDistribution,
   BuildingCase3_function_initSpatialDistribution,
   BuildingCase3_updateBoundVariableAttributes,
   BuildingCase3_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   NULL,
   BuildingCase3_functionRemovedInitialEquations,
   BuildingCase3_updateBoundParameters,
   BuildingCase3_checkForAsserts,
   BuildingCase3_function_ZeroCrossingsEquations,
   BuildingCase3_function_ZeroCrossings,
   BuildingCase3_function_updateRelations,
   BuildingCase3_zeroCrossingDescription,
   BuildingCase3_relationDescription,
   BuildingCase3_function_initSample,
   BuildingCase3_INDEX_JAC_A,
   BuildingCase3_INDEX_JAC_B,
   BuildingCase3_INDEX_JAC_C,
   BuildingCase3_INDEX_JAC_D,
   BuildingCase3_INDEX_JAC_F,
   BuildingCase3_INDEX_JAC_H,
   BuildingCase3_initialAnalyticJacobianA,
   BuildingCase3_initialAnalyticJacobianB,
   BuildingCase3_initialAnalyticJacobianC,
   BuildingCase3_initialAnalyticJacobianD,
   BuildingCase3_initialAnalyticJacobianF,
   BuildingCase3_initialAnalyticJacobianH,
   BuildingCase3_functionJacA_column,
   BuildingCase3_functionJacB_column,
   BuildingCase3_functionJacC_column,
   BuildingCase3_functionJacD_column,
   BuildingCase3_functionJacF_column,
   BuildingCase3_functionJacH_column,
   BuildingCase3_linear_model_frame,
   BuildingCase3_linear_model_datarecovery_frame,
   BuildingCase3_mayer,
   BuildingCase3_lagrange,
   BuildingCase3_pickUpBoundsForInputsInOptimization,
   BuildingCase3_setInputData,
   BuildingCase3_getTimeGrid,
   BuildingCase3_symbolicInlineSystem,
   BuildingCase3_function_initSynchronous,
   BuildingCase3_function_updateSynchronous,
   BuildingCase3_function_equationsSynchronous,
   BuildingCase3_inputNames,
   BuildingCase3_dataReconciliationInputNames,
   BuildingCase3_dataReconciliationUnmeasuredVariables,
   NULL,
   NULL,
   NULL,
   NULL,
   -1,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "BuildingCase3"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/Users/Duke/SysModel2024/HelicalInerterIndividualProject"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,13,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,58,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Complex"
#define _OMC_LIT_RESOURCE_1_dir_data "C:/Users/4C48~1/AppData/Roaming/.openmodelica/libraries/Complex 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,7,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,78,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/Users/4C48~1/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,79,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/Users/4C48~1/AppData/Roaming/.openmodelica/libraries/ModelicaServices 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,87,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void BuildingCase3_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &BuildingCase3_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "BuildingCase3";
  data->modelData->modelFilePrefix = "BuildingCase3";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Users/Duke/SysModel2024/HelicalInerterIndividualProject";
  data->modelData->modelGUID = "{ad64f865-ea50-47d2-9a1f-7bc2683ff59c}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "BuildingCase3_init.c"
    ;
  static const char contents_info[] =
    #include "BuildingCase3_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "BuildingCase3_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "BuildingCase3_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->modelDataXml.fileName = "BuildingCase3_info.json";
  data->modelData->resourcesDir = NULL;
  data->modelData->runTestsuite = 0;
  data->modelData->nStates = 4;
  data->modelData->nVariablesRealArray = 1422;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesIntegerArray = 48;
  data->modelData->nVariablesBooleanArray = 6;
  data->modelData->nVariablesStringArray = 0;
  data->modelData->nParametersReal = 486;
  data->modelData->nParametersInteger = 88;
  data->modelData->nParametersBoolean = 57;
  data->modelData->nParametersString = 28;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  data->modelData->nAliasReal = 1602;
  data->modelData->nAliasInteger = 45;
  data->modelData->nAliasBoolean = 3;
  data->modelData->nAliasString = 0;
  data->modelData->nZeroCrossings = 3;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 3;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 5;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 3682;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 2;
  data->modelData->nNonLinearSystems = 0;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 8;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  data->modelData->nDelayExpressions = 0;
  data->modelData->nBaseClocks = 0;
  data->modelData->nSpatialDistributions = 0;
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->nSetbVars = 0;
  data->modelData->nRelatedBoundaryConditions = 0;
  data->modelData->linearizationDumpLanguage = OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}


#if defined(__MINGW32__) || defined(_MSC_VER)

#if !defined(_UNICODE)
#define _UNICODE
#endif
#if !defined(UNICODE)
#define UNICODE
#endif

#include <windows.h>
char** omc_fixWindowsArgv(int argc, wchar_t **wargv)
{
  char** newargv;
  /* Support for non-ASCII characters
  * Read the unicode command line arguments and translate it to char*
  */
  newargv = (char**)malloc(argc*sizeof(char*));
  for (int i = 0; i < argc; i++) {
    newargv[i] = omc_wchar_to_multibyte_str(wargv[i]);
  }
  return newargv;
}

#define OMC_MAIN wmain
#define OMC_CHAR wchar_t
#define OMC_EXPORT __declspec(dllexport) extern

#else
#define omc_fixWindowsArgv(N, A) (A)
#define OMC_MAIN main
#define OMC_CHAR char
#define OMC_EXPORT extern
#endif

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
#if defined(OMC_DLL_MAIN_DEFINE)
OMC_EXPORT int omcDllMain(int argc, OMC_CHAR **argv)
#else
int OMC_MAIN(int argc, OMC_CHAR** argv)
#endif
{
  char** newargv = omc_fixWindowsArgv(argc, argv);
  /*
    Set the error functions to be used for simulation.
    The default value for them is 'functions' version. Change it here to 'simulation' versions
  */
  omc_assert = omc_assert_simulation;
  omc_assert_withEquationIndexes = omc_assert_simulation_withEquationIndexes;

  omc_assert_warning_withEquationIndexes = omc_assert_warning_simulation_withEquationIndexes;
  omc_assert_warning = omc_assert_warning_simulation;
  omc_terminate = omc_terminate_simulation;
  omc_throw = omc_throw_simulation;

  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    BuildingCase3_setupDataStruc(&data, threadData);
    res = _main_initRuntimeAndSimulation(argc, newargv, &data, threadData);
    if(res == 0) {
      res = _main_SimulationRuntime(argc, newargv, &data, threadData);
    }
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  return res;
}

#ifdef __cplusplus
}
#endif


