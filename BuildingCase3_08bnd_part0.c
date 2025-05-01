#include "BuildingCase3_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void BuildingCase3_eqFunction_1489(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1488(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1487(DATA *data, threadData_t *threadData);


/*
equation index: 1747
type: SIMPLE_ASSIGN
world.axisDiameter = world.axisLength / world.defaultFrameDiameterFraction
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1747};
  (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[389] /* world.axisLength PARAM */),(data->simulationInfo->realParameter[395] /* world.defaultFrameDiameterFraction PARAM */),"world.defaultFrameDiameterFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 1748
type: SIMPLE_ASSIGN
world.headLength = min(world.axisLength, world.axisDiameter * 5.0)
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1748};
  (data->simulationInfo->realParameter[417] /* world.headLength PARAM */) = fmin((data->simulationInfo->realParameter[389] /* world.axisLength PARAM */),((data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */)) * (5.0));
  TRACE_POP
}

/*
equation index: 1749
type: SIMPLE_ASSIGN
world.lineLength = max(0.0, world.axisLength - world.headLength)
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1749};
  (data->simulationInfo->realParameter[420] /* world.lineLength PARAM */) = fmax(0.0,(data->simulationInfo->realParameter[389] /* world.axisLength PARAM */) - (data->simulationInfo->realParameter[417] /* world.headLength PARAM */));
  TRACE_POP
}

/*
equation index: 1750
type: SIMPLE_ASSIGN
world.x_arrowHead.r[1] = world.lineLength
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1750};
  (data->simulationInfo->realParameter[430] /* world.x_arrowHead.r[1] PARAM */) = (data->simulationInfo->realParameter[420] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 1751
type: SIMPLE_ASSIGN
world.y_arrowHead.r[2] = world.lineLength
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1751};
  (data->simulationInfo->realParameter[449] /* world.y_arrowHead.r[2] PARAM */) = (data->simulationInfo->realParameter[420] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 1752
type: SIMPLE_ASSIGN
world.z_arrowHead.r[3] = world.lineLength
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1752};
  (data->simulationInfo->realParameter[465] /* world.z_arrowHead.r[3] PARAM */) = (data->simulationInfo->realParameter[420] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 1753
type: SIMPLE_ASSIGN
body1.cylinder.lengthDirection[1] = body1.r_CM[1]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1753};
  (data->simulationInfo->realParameter[146] /* body1.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[156] /* body1.r_CM[1] PARAM */);
  TRACE_POP
}

/*
equation index: 1754
type: SIMPLE_ASSIGN
body1.cylinder.lengthDirection[2] = body1.r_CM[2]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1754};
  (data->simulationInfo->realParameter[147] /* body1.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[157] /* body1.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 1755
type: SIMPLE_ASSIGN
body1.cylinder.lengthDirection[3] = body1.r_CM[3]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1755};
  (data->simulationInfo->realParameter[148] /* body1.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[158] /* body1.r_CM[3] PARAM */);
  TRACE_POP
}

/*
equation index: 1756
type: SIMPLE_ASSIGN
body1.sphere.r_shape[2] = body1.r_CM[2]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1756};
  (data->simulationInfo->realParameter[160] /* body1.sphere.r_shape[2] PARAM */) = (data->simulationInfo->realParameter[157] /* body1.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 1757
type: SIMPLE_ASSIGN
body1.sphere.r_shape[3] = body1.r_CM[3]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1757};
  (data->simulationInfo->realParameter[161] /* body1.sphere.r_shape[3] PARAM */) = (data->simulationInfo->realParameter[158] /* body1.r_CM[3] PARAM */);
  TRACE_POP
}

/*
equation index: 1759
type: SIMPLE_ASSIGN
revolute.cylinder.lengthDirection[1] = revolute.e[1]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1759};
  (data->simulationInfo->realParameter[348] /* revolute.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[355] /* revolute.e[1] PARAM */);
  TRACE_POP
}

/*
equation index: 1761
type: SIMPLE_ASSIGN
revolute.cylinder.lengthDirection[2] = revolute.e[2]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1761};
  (data->simulationInfo->realParameter[349] /* revolute.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[356] /* revolute.e[2] PARAM */);
  TRACE_POP
}

/*
equation index: 1763
type: SIMPLE_ASSIGN
revolute.cylinder.lengthDirection[3] = revolute.e[3]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1763};
  (data->simulationInfo->realParameter[350] /* revolute.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[357] /* revolute.e[3] PARAM */);
  TRACE_POP
}

/*
equation index: 1765
type: SIMPLE_ASSIGN
revolute.support.phi = revolute.fixed.phi0
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1765};
  (data->simulationInfo->realParameter[364] /* revolute.support.phi PARAM */) = (data->simulationInfo->realParameter[359] /* revolute.fixed.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 1766
type: SIMPLE_ASSIGN
revolute.fixed.flange.phi = revolute.fixed.phi0
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1766};
  (data->simulationInfo->realParameter[358] /* revolute.fixed.flange.phi PARAM */) = (data->simulationInfo->realParameter[359] /* revolute.fixed.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 1767
type: SIMPLE_ASSIGN
body.cylinder.lengthDirection[1] = body.r_CM[1]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1767};
  (data->simulationInfo->realParameter[87] /* body.cylinder.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[97] /* body.r_CM[1] PARAM */);
  TRACE_POP
}

/*
equation index: 1768
type: SIMPLE_ASSIGN
body.cylinder.lengthDirection[2] = body.r_CM[2]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1768};
  (data->simulationInfo->realParameter[88] /* body.cylinder.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 1769
type: SIMPLE_ASSIGN
body.cylinder.lengthDirection[3] = body.r_CM[3]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1769};
  (data->simulationInfo->realParameter[89] /* body.cylinder.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */);
  TRACE_POP
}

/*
equation index: 1770
type: SIMPLE_ASSIGN
body.sphere.r_shape[2] = body.r_CM[2]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1770};
  (data->simulationInfo->realParameter[101] /* body.sphere.r_shape[2] PARAM */) = (data->simulationInfo->realParameter[98] /* body.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 1771
type: SIMPLE_ASSIGN
body.sphere.r_shape[3] = body.r_CM[3]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1771};
  (data->simulationInfo->realParameter[102] /* body.sphere.r_shape[3] PARAM */) = (data->simulationInfo->realParameter[99] /* body.r_CM[3] PARAM */);
  TRACE_POP
}

/*
equation index: 1772
type: SIMPLE_ASSIGN
world.x_arrowLine.length = world.lineLength
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1772};
  (data->simulationInfo->realParameter[433] /* world.x_arrowLine.length PARAM */) = (data->simulationInfo->realParameter[420] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 1773
type: SIMPLE_ASSIGN
world.lineWidth = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1773};
  (data->simulationInfo->realParameter[421] /* world.lineWidth PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1774
type: SIMPLE_ASSIGN
world.x_arrowLine.width = world.lineWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1774};
  (data->simulationInfo->realParameter[434] /* world.x_arrowLine.width PARAM */) = (data->simulationInfo->realParameter[421] /* world.lineWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1775
type: SIMPLE_ASSIGN
world.x_arrowLine.height = world.lineWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1775};
  (data->simulationInfo->realParameter[432] /* world.x_arrowLine.height PARAM */) = (data->simulationInfo->realParameter[421] /* world.lineWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1776
type: SIMPLE_ASSIGN
world.x_arrowHead.length = world.headLength
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1776};
  (data->simulationInfo->realParameter[429] /* world.x_arrowHead.length PARAM */) = (data->simulationInfo->realParameter[417] /* world.headLength PARAM */);
  TRACE_POP
}

/*
equation index: 1777
type: SIMPLE_ASSIGN
world.headWidth = 3.0 * world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1777};
  (data->simulationInfo->realParameter[418] /* world.headWidth PARAM */) = (3.0) * ((data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 1778
type: SIMPLE_ASSIGN
world.x_arrowHead.width = world.headWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1778};
  (data->simulationInfo->realParameter[431] /* world.x_arrowHead.width PARAM */) = (data->simulationInfo->realParameter[418] /* world.headWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1779
type: SIMPLE_ASSIGN
world.x_arrowHead.height = world.headWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1779};
  (data->simulationInfo->realParameter[428] /* world.x_arrowHead.height PARAM */) = (data->simulationInfo->realParameter[418] /* world.headWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1780
type: SIMPLE_ASSIGN
world.labelStart = 1.05 * world.axisLength
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1780};
  (data->simulationInfo->realParameter[419] /* world.labelStart PARAM */) = (1.05) * ((data->simulationInfo->realParameter[389] /* world.axisLength PARAM */));
  TRACE_POP
}

/*
equation index: 1781
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].r[1] = world.labelStart
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1781};
  (data->simulationInfo->realParameter[437] /* world.x_label.cylinders[1].r[1] PARAM */) = (data->simulationInfo->realParameter[419] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 1782
type: SIMPLE_ASSIGN
world.x_label.r_abs[1] = world.labelStart
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1782};
  (data->simulationInfo->realParameter[445] /* world.x_label.r_abs[1] PARAM */) = (data->simulationInfo->realParameter[419] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 1783
type: SIMPLE_ASSIGN
world.x_label.r_lines[1] = world.labelStart
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1783};
  (data->simulationInfo->realParameter[446] /* world.x_label.r_lines[1] PARAM */) = (data->simulationInfo->realParameter[419] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 1784
type: SIMPLE_ASSIGN
world.scaledLabel = 3.0 * world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1784};
  (data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */) = (3.0) * ((data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 1785
type: SIMPLE_ASSIGN
world.x_label.lines[1,2,1] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1785};
  (data->simulationInfo->realParameter[441] /* world.x_label.lines[1,2,1] PARAM */) = (data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 1786
type: SIMPLE_ASSIGN
world.x_label.lines[1,2,2] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1786};
  (data->simulationInfo->realParameter[442] /* world.x_label.lines[1,2,2] PARAM */) = (data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 1787
type: SIMPLE_ASSIGN
world.x_label.lines[2,1,2] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1787};
  (data->simulationInfo->realParameter[443] /* world.x_label.lines[2,1,2] PARAM */) = (data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 1788
type: SIMPLE_ASSIGN
world.x_label.lines[2,2,1] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1788};
  (data->simulationInfo->realParameter[444] /* world.x_label.lines[2,2,1] PARAM */) = (data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 1789
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].width = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1789};
  (data->simulationInfo->realParameter[438] /* world.x_label.cylinders[1].width PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1790
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].height = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1790};
  (data->simulationInfo->realParameter[435] /* world.x_label.cylinders[1].height PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1791
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].width = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1791};
  (data->simulationInfo->realParameter[439] /* world.x_label.cylinders[2].width PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1792
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].height = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1792};
  (data->simulationInfo->realParameter[436] /* world.x_label.cylinders[2].height PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1793
type: SIMPLE_ASSIGN
world.x_label.diameter = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1793};
  (data->simulationInfo->realParameter[440] /* world.x_label.diameter PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1794
type: SIMPLE_ASSIGN
world.y_arrowLine.length = world.lineLength
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1794};
  (data->simulationInfo->realParameter[452] /* world.y_arrowLine.length PARAM */) = (data->simulationInfo->realParameter[420] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 1795
type: SIMPLE_ASSIGN
world.y_arrowLine.width = world.lineWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1795};
  (data->simulationInfo->realParameter[453] /* world.y_arrowLine.width PARAM */) = (data->simulationInfo->realParameter[421] /* world.lineWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1796
type: SIMPLE_ASSIGN
world.y_arrowLine.height = world.lineWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1796};
  (data->simulationInfo->realParameter[451] /* world.y_arrowLine.height PARAM */) = (data->simulationInfo->realParameter[421] /* world.lineWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1797
type: SIMPLE_ASSIGN
world.y_arrowHead.length = world.headLength
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1797};
  (data->simulationInfo->realParameter[448] /* world.y_arrowHead.length PARAM */) = (data->simulationInfo->realParameter[417] /* world.headLength PARAM */);
  TRACE_POP
}

/*
equation index: 1798
type: SIMPLE_ASSIGN
world.y_arrowHead.width = world.headWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1798};
  (data->simulationInfo->realParameter[450] /* world.y_arrowHead.width PARAM */) = (data->simulationInfo->realParameter[418] /* world.headWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1799
type: SIMPLE_ASSIGN
world.y_arrowHead.height = world.headWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1799};
  (data->simulationInfo->realParameter[447] /* world.y_arrowHead.height PARAM */) = (data->simulationInfo->realParameter[418] /* world.headWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1800
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].r[2] = world.labelStart
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1800};
  (data->simulationInfo->realParameter[456] /* world.y_label.cylinders[1].r[2] PARAM */) = (data->simulationInfo->realParameter[419] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 1801
type: SIMPLE_ASSIGN
world.y_label.r_abs[2] = world.labelStart
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1801};
  (data->simulationInfo->realParameter[461] /* world.y_label.r_abs[2] PARAM */) = (data->simulationInfo->realParameter[419] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 1802
type: SIMPLE_ASSIGN
world.y_label.r_lines[2] = world.labelStart
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1802};
  (data->simulationInfo->realParameter[462] /* world.y_label.r_lines[2] PARAM */) = (data->simulationInfo->realParameter[419] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 1803
type: SIMPLE_ASSIGN
world.y_label.lines[1,2,1] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1803};
  (data->simulationInfo->realParameter[460] /* world.y_label.lines[1,2,1] PARAM */) = (data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 1804
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].width = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1804};
  (data->simulationInfo->realParameter[457] /* world.y_label.cylinders[1].width PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1805
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].height = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1805};
  (data->simulationInfo->realParameter[454] /* world.y_label.cylinders[1].height PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1806
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].width = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1806};
  (data->simulationInfo->realParameter[458] /* world.y_label.cylinders[2].width PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1807
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].height = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1807};
  (data->simulationInfo->realParameter[455] /* world.y_label.cylinders[2].height PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1808
type: SIMPLE_ASSIGN
world.y_label.diameter = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1808};
  (data->simulationInfo->realParameter[459] /* world.y_label.diameter PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1809
type: SIMPLE_ASSIGN
world.z_arrowLine.length = world.lineLength
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1809};
  (data->simulationInfo->realParameter[468] /* world.z_arrowLine.length PARAM */) = (data->simulationInfo->realParameter[420] /* world.lineLength PARAM */);
  TRACE_POP
}

/*
equation index: 1810
type: SIMPLE_ASSIGN
world.z_arrowLine.width = world.lineWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1810};
  (data->simulationInfo->realParameter[469] /* world.z_arrowLine.width PARAM */) = (data->simulationInfo->realParameter[421] /* world.lineWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1811
type: SIMPLE_ASSIGN
world.z_arrowLine.height = world.lineWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1811};
  (data->simulationInfo->realParameter[467] /* world.z_arrowLine.height PARAM */) = (data->simulationInfo->realParameter[421] /* world.lineWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1812
type: SIMPLE_ASSIGN
world.z_arrowHead.length = world.headLength
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1812};
  (data->simulationInfo->realParameter[464] /* world.z_arrowHead.length PARAM */) = (data->simulationInfo->realParameter[417] /* world.headLength PARAM */);
  TRACE_POP
}

/*
equation index: 1813
type: SIMPLE_ASSIGN
world.z_arrowHead.width = world.headWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1813};
  (data->simulationInfo->realParameter[466] /* world.z_arrowHead.width PARAM */) = (data->simulationInfo->realParameter[418] /* world.headWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1814
type: SIMPLE_ASSIGN
world.z_arrowHead.height = world.headWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1814};
  (data->simulationInfo->realParameter[463] /* world.z_arrowHead.height PARAM */) = (data->simulationInfo->realParameter[418] /* world.headWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1815
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].r[3] = world.labelStart
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1815};
  (data->simulationInfo->realParameter[473] /* world.z_label.cylinders[1].r[3] PARAM */) = (data->simulationInfo->realParameter[419] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 1816
type: SIMPLE_ASSIGN
world.z_label.r_abs[3] = world.labelStart
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1816};
  (data->simulationInfo->realParameter[484] /* world.z_label.r_abs[3] PARAM */) = (data->simulationInfo->realParameter[419] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 1817
type: SIMPLE_ASSIGN
world.z_label.r_lines[3] = world.labelStart
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1817};
  (data->simulationInfo->realParameter[485] /* world.z_label.r_lines[3] PARAM */) = (data->simulationInfo->realParameter[419] /* world.labelStart PARAM */);
  TRACE_POP
}

/*
equation index: 1818
type: SIMPLE_ASSIGN
world.z_label.lines[1,2,1] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1818};
  (data->simulationInfo->realParameter[478] /* world.z_label.lines[1,2,1] PARAM */) = (data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 1819
type: SIMPLE_ASSIGN
world.z_label.lines[2,1,2] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1819};
  (data->simulationInfo->realParameter[479] /* world.z_label.lines[2,1,2] PARAM */) = (data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 1820
type: SIMPLE_ASSIGN
world.z_label.lines[2,2,1] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1820};
  (data->simulationInfo->realParameter[480] /* world.z_label.lines[2,2,1] PARAM */) = (data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 1821
type: SIMPLE_ASSIGN
world.z_label.lines[2,2,2] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1821};
  (data->simulationInfo->realParameter[481] /* world.z_label.lines[2,2,2] PARAM */) = (data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 1822
type: SIMPLE_ASSIGN
world.z_label.lines[3,1,2] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1822};
  (data->simulationInfo->realParameter[482] /* world.z_label.lines[3,1,2] PARAM */) = (data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 1823
type: SIMPLE_ASSIGN
world.z_label.lines[3,2,1] = world.scaledLabel
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1823};
  (data->simulationInfo->realParameter[483] /* world.z_label.lines[3,2,1] PARAM */) = (data->simulationInfo->realParameter[427] /* world.scaledLabel PARAM */);
  TRACE_POP
}

/*
equation index: 1824
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].width = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1824};
  (data->simulationInfo->realParameter[474] /* world.z_label.cylinders[1].width PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1825
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].height = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1825};
  (data->simulationInfo->realParameter[470] /* world.z_label.cylinders[1].height PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1826
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].width = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1826};
  (data->simulationInfo->realParameter[475] /* world.z_label.cylinders[2].width PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1827
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].height = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1827};
  (data->simulationInfo->realParameter[471] /* world.z_label.cylinders[2].height PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1828
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].width = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1828};
  (data->simulationInfo->realParameter[476] /* world.z_label.cylinders[3].width PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1829
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].height = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1829};
  (data->simulationInfo->realParameter[472] /* world.z_label.cylinders[3].height PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1830
type: SIMPLE_ASSIGN
world.z_label.diameter = world.axisDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1830};
  (data->simulationInfo->realParameter[477] /* world.z_label.diameter PARAM */) = (data->simulationInfo->realParameter[388] /* world.axisDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1831
type: SIMPLE_ASSIGN
bar2.shape.length = bar2.length
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1831};
  (data->simulationInfo->realParameter[22] /* bar2.shape.length PARAM */) = (data->simulationInfo->realParameter[10] /* bar2.length PARAM */);
  TRACE_POP
}

/*
equation index: 1832
type: SIMPLE_ASSIGN
bar2.width = bar2.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1832};
  (data->simulationInfo->realParameter[26] /* bar2.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[10] /* bar2.length PARAM */),(data->simulationInfo->realParameter[401] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 1833
type: SIMPLE_ASSIGN
bar2.shape.width = bar2.width
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1833};
  (data->simulationInfo->realParameter[24] /* bar2.shape.width PARAM */) = (data->simulationInfo->realParameter[26] /* bar2.width PARAM */);
  TRACE_POP
}

/*
equation index: 1834
type: SIMPLE_ASSIGN
bar2.height = bar2.width
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1834};
  (data->simulationInfo->realParameter[9] /* bar2.height PARAM */) = (data->simulationInfo->realParameter[26] /* bar2.width PARAM */);
  TRACE_POP
}

/*
equation index: 1835
type: SIMPLE_ASSIGN
bar2.shape.height = bar2.height
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1835};
  (data->simulationInfo->realParameter[21] /* bar2.shape.height PARAM */) = (data->simulationInfo->realParameter[9] /* bar2.height PARAM */);
  TRACE_POP
}

/*
equation index: 1836
type: SIMPLE_ASSIGN
bar2.shape.extra = bar2.extra
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1836};
  (data->simulationInfo->realParameter[20] /* bar2.shape.extra PARAM */) = (data->simulationInfo->realParameter[8] /* bar2.extra PARAM */);
  TRACE_POP
}

/*
equation index: 1837
type: SIMPLE_ASSIGN
bar2.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1837};
  (data->simulationInfo->realParameter[23] /* bar2.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1838
type: SIMPLE_ASSIGN
bar2.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1838};
  (data->simulationInfo->realParameter[25] /* bar2.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1839
type: SIMPLE_ASSIGN
prismatic1.boxWidth = world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1839};
  (data->simulationInfo->realParameter[332] /* prismatic1.boxWidth PARAM */) = (data->simulationInfo->realParameter[397] /* world.defaultJointWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1840
type: SIMPLE_ASSIGN
prismatic1.box.width = prismatic1.boxWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1840};
  (data->simulationInfo->realParameter[330] /* prismatic1.box.width PARAM */) = (data->simulationInfo->realParameter[332] /* prismatic1.boxWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1841
type: SIMPLE_ASSIGN
prismatic1.boxHeight = prismatic1.boxWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1841};
  (data->simulationInfo->realParameter[331] /* prismatic1.boxHeight PARAM */) = (data->simulationInfo->realParameter[332] /* prismatic1.boxWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1842
type: SIMPLE_ASSIGN
prismatic1.box.height = prismatic1.boxHeight
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1842};
  (data->simulationInfo->realParameter[328] /* prismatic1.box.height PARAM */) = (data->simulationInfo->realParameter[331] /* prismatic1.boxHeight PARAM */);
  TRACE_POP
}

/*
equation index: 1843
type: SIMPLE_ASSIGN
prismatic1.box.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1843};
  (data->simulationInfo->realParameter[329] /* prismatic1.box.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1844
type: SIMPLE_ASSIGN
prismatic1.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1844};
  (data->simulationInfo->realParameter[344] /* prismatic1.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1845
type: SIMPLE_ASSIGN
body1.cylinder.width = body1.cylinderDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1845};
  (data->simulationInfo->realParameter[150] /* body1.cylinder.width PARAM */) = (data->simulationInfo->realParameter[151] /* body1.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1846
type: SIMPLE_ASSIGN
body1.cylinder.height = body1.cylinderDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1846};
  (data->simulationInfo->realParameter[145] /* body1.cylinder.height PARAM */) = (data->simulationInfo->realParameter[151] /* body1.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1847
type: SIMPLE_ASSIGN
body1.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1847};
  (data->simulationInfo->realParameter[149] /* body1.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1848
type: SIMPLE_ASSIGN
body1.sphere.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1848};
  (data->simulationInfo->realParameter[162] /* body1.sphere.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1849
type: SIMPLE_ASSIGN
body1.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1849};
  (data->simulationInfo->realParameter[159] /* body1.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1850
type: SIMPLE_ASSIGN
prismatic.boxWidth = world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1850};
  (data->simulationInfo->realParameter[314] /* prismatic.boxWidth PARAM */) = (data->simulationInfo->realParameter[397] /* world.defaultJointWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1851
type: SIMPLE_ASSIGN
prismatic.box.width = prismatic.boxWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1851};
  (data->simulationInfo->realParameter[312] /* prismatic.box.width PARAM */) = (data->simulationInfo->realParameter[314] /* prismatic.boxWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1852
type: SIMPLE_ASSIGN
prismatic.boxHeight = prismatic.boxWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1852};
  (data->simulationInfo->realParameter[313] /* prismatic.boxHeight PARAM */) = (data->simulationInfo->realParameter[314] /* prismatic.boxWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1853
type: SIMPLE_ASSIGN
prismatic.box.height = prismatic.boxHeight
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1853};
  (data->simulationInfo->realParameter[310] /* prismatic.box.height PARAM */) = (data->simulationInfo->realParameter[313] /* prismatic.boxHeight PARAM */);
  TRACE_POP
}

/*
equation index: 1854
type: SIMPLE_ASSIGN
prismatic.box.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1854};
  (data->simulationInfo->realParameter[311] /* prismatic.box.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1855
type: SIMPLE_ASSIGN
prismatic.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1855};
  (data->simulationInfo->realParameter[326] /* prismatic.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1856
type: SIMPLE_ASSIGN
revolute.cylinder.length = revolute.cylinderLength
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1856};
  (data->simulationInfo->realParameter[347] /* revolute.cylinder.length PARAM */) = (data->simulationInfo->realParameter[354] /* revolute.cylinderLength PARAM */);
  TRACE_POP
}

/*
equation index: 1857
type: SIMPLE_ASSIGN
revolute.cylinderDiameter = world.defaultJointWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1857};
  (data->simulationInfo->realParameter[353] /* revolute.cylinderDiameter PARAM */) = (data->simulationInfo->realParameter[397] /* world.defaultJointWidth PARAM */);
  TRACE_POP
}

/*
equation index: 1858
type: SIMPLE_ASSIGN
revolute.cylinder.width = revolute.cylinderDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1858};
  (data->simulationInfo->realParameter[352] /* revolute.cylinder.width PARAM */) = (data->simulationInfo->realParameter[353] /* revolute.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1859
type: SIMPLE_ASSIGN
revolute.cylinder.height = revolute.cylinderDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1859};
  (data->simulationInfo->realParameter[346] /* revolute.cylinder.height PARAM */) = (data->simulationInfo->realParameter[353] /* revolute.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1860
type: SIMPLE_ASSIGN
revolute.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1860};
  (data->simulationInfo->realParameter[351] /* revolute.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1861
type: SIMPLE_ASSIGN
revolute.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1861};
  (data->simulationInfo->realParameter[363] /* revolute.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1862
type: SIMPLE_ASSIGN
absoluteSensorTop.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1862};
  (data->simulationInfo->realParameter[7] /* absoluteSensorTop.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1863
type: SIMPLE_ASSIGN
absoluteSensorTop.arrow.arrowLine.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1863};
  (data->simulationInfo->realParameter[4] /* absoluteSensorTop.arrow.arrowLine.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1864
type: SIMPLE_ASSIGN
absoluteSensorTop.arrow.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1864};
  (data->simulationInfo->realParameter[5] /* absoluteSensorTop.arrow.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1865
type: SIMPLE_ASSIGN
body.cylinder.width = body.cylinderDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1865};
  (data->simulationInfo->realParameter[91] /* body.cylinder.width PARAM */) = (data->simulationInfo->realParameter[92] /* body.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1866
type: SIMPLE_ASSIGN
body.cylinder.height = body.cylinderDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1866};
  (data->simulationInfo->realParameter[86] /* body.cylinder.height PARAM */) = (data->simulationInfo->realParameter[92] /* body.cylinderDiameter PARAM */);
  TRACE_POP
}

/*
equation index: 1867
type: SIMPLE_ASSIGN
body.cylinder.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1867};
  (data->simulationInfo->realParameter[90] /* body.cylinder.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1868
type: SIMPLE_ASSIGN
body.sphere.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1868};
  (data->simulationInfo->realParameter[103] /* body.sphere.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1869
type: SIMPLE_ASSIGN
body.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1869};
  (data->simulationInfo->realParameter[100] /* body.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1870
type: SIMPLE_ASSIGN
bodyBox.body.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1870};
  (data->simulationInfo->realParameter[236] /* bodyBox.body.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1871
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.length = bodyBox.length
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1871};
  (data->simulationInfo->realParameter[247] /* bodyBox.frameTranslation.length PARAM */) = (data->simulationInfo->realParameter[270] /* bodyBox.length PARAM */);
  TRACE_POP
}

/*
equation index: 1872
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.shape.length = bodyBox.frameTranslation.length
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1872};
  (data->simulationInfo->realParameter[259] /* bodyBox.frameTranslation.shape.length PARAM */) = (data->simulationInfo->realParameter[247] /* bodyBox.frameTranslation.length PARAM */);
  TRACE_POP
}

/*
equation index: 1873
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.width = bodyBox.width
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1873};
  (data->simulationInfo->realParameter[263] /* bodyBox.frameTranslation.width PARAM */) = (data->simulationInfo->realParameter[290] /* bodyBox.width PARAM */);
  TRACE_POP
}

/*
equation index: 1874
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.shape.width = bodyBox.frameTranslation.width
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1874};
  (data->simulationInfo->realParameter[261] /* bodyBox.frameTranslation.shape.width PARAM */) = (data->simulationInfo->realParameter[263] /* bodyBox.frameTranslation.width PARAM */);
  TRACE_POP
}

/*
equation index: 1875
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.height = bodyBox.height
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1875};
  (data->simulationInfo->realParameter[246] /* bodyBox.frameTranslation.height PARAM */) = (data->simulationInfo->realParameter[267] /* bodyBox.height PARAM */);
  TRACE_POP
}

/*
equation index: 1876
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.shape.height = bodyBox.frameTranslation.height
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1876};
  (data->simulationInfo->realParameter[258] /* bodyBox.frameTranslation.shape.height PARAM */) = (data->simulationInfo->realParameter[246] /* bodyBox.frameTranslation.height PARAM */);
  TRACE_POP
}

/*
equation index: 1877
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.shape.extra = bodyBox.frameTranslation.extra
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1877};
  (data->simulationInfo->realParameter[257] /* bodyBox.frameTranslation.shape.extra PARAM */) = (data->simulationInfo->realParameter[245] /* bodyBox.frameTranslation.extra PARAM */);
  TRACE_POP
}

/*
equation index: 1878
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1878};
  (data->simulationInfo->realParameter[260] /* bodyBox.frameTranslation.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1879
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1879};
  (data->simulationInfo->realParameter[262] /* bodyBox.frameTranslation.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1880
type: SIMPLE_ASSIGN
bodyBox.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1880};
  (data->simulationInfo->realParameter[286] /* bodyBox.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1881
type: SIMPLE_ASSIGN
absoluteSensorBottom.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1881};
  (data->simulationInfo->realParameter[3] /* absoluteSensorBottom.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1882
type: SIMPLE_ASSIGN
absoluteSensorBottom.arrow.arrowLine.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1882};
  (data->simulationInfo->realParameter[0] /* absoluteSensorBottom.arrow.arrowLine.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1883
type: SIMPLE_ASSIGN
absoluteSensorBottom.arrow.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1883};
  (data->simulationInfo->realParameter[1] /* absoluteSensorBottom.arrow.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1884
type: SIMPLE_ASSIGN
bar21.shape.length = bar21.length
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1884};
  (data->simulationInfo->realParameter[44] /* bar21.shape.length PARAM */) = (data->simulationInfo->realParameter[32] /* bar21.length PARAM */);
  TRACE_POP
}

/*
equation index: 1885
type: SIMPLE_ASSIGN
bar21.width = bar21.length / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1885};
  (data->simulationInfo->realParameter[48] /* bar21.width PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[32] /* bar21.length PARAM */),(data->simulationInfo->realParameter[401] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 1886
type: SIMPLE_ASSIGN
bar21.shape.width = bar21.width
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1886};
  (data->simulationInfo->realParameter[46] /* bar21.shape.width PARAM */) = (data->simulationInfo->realParameter[48] /* bar21.width PARAM */);
  TRACE_POP
}

/*
equation index: 1887
type: SIMPLE_ASSIGN
bar21.height = bar21.width
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1887};
  (data->simulationInfo->realParameter[31] /* bar21.height PARAM */) = (data->simulationInfo->realParameter[48] /* bar21.width PARAM */);
  TRACE_POP
}

/*
equation index: 1888
type: SIMPLE_ASSIGN
bar21.shape.height = bar21.height
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1888};
  (data->simulationInfo->realParameter[43] /* bar21.shape.height PARAM */) = (data->simulationInfo->realParameter[31] /* bar21.height PARAM */);
  TRACE_POP
}

/*
equation index: 1889
type: SIMPLE_ASSIGN
bar21.shape.extra = bar21.extra
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1889};
  (data->simulationInfo->realParameter[42] /* bar21.shape.extra PARAM */) = (data->simulationInfo->realParameter[30] /* bar21.extra PARAM */);
  TRACE_POP
}

/*
equation index: 1890
type: SIMPLE_ASSIGN
bar21.shape.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1890};
  (data->simulationInfo->realParameter[45] /* bar21.shape.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1891
type: SIMPLE_ASSIGN
bar21.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1891};
  (data->simulationInfo->realParameter[47] /* bar21.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1893
type: SIMPLE_ASSIGN
spring.flange_a.s = prismatic1.fixed.s0
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1893};
  (data->simulationInfo->realParameter[381] /* spring.flange_a.s PARAM */) = (data->simulationInfo->realParameter[340] /* prismatic1.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 1894
type: SIMPLE_ASSIGN
prismatic1.support.s = prismatic1.fixed.s0
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1894};
  (data->simulationInfo->realParameter[345] /* prismatic1.support.s PARAM */) = (data->simulationInfo->realParameter[340] /* prismatic1.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 1895
type: SIMPLE_ASSIGN
prismatic1.fixed.flange.s = prismatic1.fixed.s0
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1895};
  (data->simulationInfo->realParameter[339] /* prismatic1.fixed.flange.s PARAM */) = (data->simulationInfo->realParameter[340] /* prismatic1.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 1897
type: SIMPLE_ASSIGN
springDamper.flange_a.s = prismatic.fixed.s0
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1897};
  (data->simulationInfo->realParameter[385] /* springDamper.flange_a.s PARAM */) = (data->simulationInfo->realParameter[322] /* prismatic.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 1898
type: SIMPLE_ASSIGN
prismatic.support.s = prismatic.fixed.s0
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1898};
  (data->simulationInfo->realParameter[327] /* prismatic.support.s PARAM */) = (data->simulationInfo->realParameter[322] /* prismatic.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 1899
type: SIMPLE_ASSIGN
prismatic.fixed.flange.s = prismatic.fixed.s0
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1899};
  (data->simulationInfo->realParameter[321] /* prismatic.fixed.flange.s PARAM */) = (data->simulationInfo->realParameter[322] /* prismatic.fixed.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 1901
type: SIMPLE_ASSIGN
idealGearR2T.internalSupportR.phi = idealGearR2T.fixedR.phi0
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1901};
  (data->simulationInfo->realParameter[305] /* idealGearR2T.internalSupportR.phi PARAM */) = (data->simulationInfo->realParameter[301] /* idealGearR2T.fixedR.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 1902
type: SIMPLE_ASSIGN
idealGearR2T.internalSupportR.flange.phi = idealGearR2T.fixedR.phi0
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1902};
  (data->simulationInfo->realParameter[304] /* idealGearR2T.internalSupportR.flange.phi PARAM */) = (data->simulationInfo->realParameter[301] /* idealGearR2T.fixedR.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 1903
type: SIMPLE_ASSIGN
idealGearR2T.fixedR.flange.phi = idealGearR2T.fixedR.phi0
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1903};
  (data->simulationInfo->realParameter[300] /* idealGearR2T.fixedR.flange.phi PARAM */) = (data->simulationInfo->realParameter[301] /* idealGearR2T.fixedR.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 1905
type: SIMPLE_ASSIGN
idealGearR2T.internalSupportT.s = idealGearR2T.fixedT.s0
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1905};
  (data->simulationInfo->realParameter[307] /* idealGearR2T.internalSupportT.s PARAM */) = (data->simulationInfo->realParameter[303] /* idealGearR2T.fixedT.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 1906
type: SIMPLE_ASSIGN
idealGearR2T.internalSupportT.flange.s = idealGearR2T.fixedT.s0
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1906};
  (data->simulationInfo->realParameter[306] /* idealGearR2T.internalSupportT.flange.s PARAM */) = (data->simulationInfo->realParameter[303] /* idealGearR2T.fixedT.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 1907
type: SIMPLE_ASSIGN
idealGearR2T.fixedT.flange.s = idealGearR2T.fixedT.s0
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1907};
  (data->simulationInfo->realParameter[302] /* idealGearR2T.fixedT.flange.s PARAM */) = (data->simulationInfo->realParameter[303] /* idealGearR2T.fixedT.s0 PARAM */);
  TRACE_POP
}

/*
equation index: 1908
type: SIMPLE_ASSIGN
force1.arrow.arrowLine.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1908};
  (data->simulationInfo->realParameter[297] /* force1.arrow.arrowLine.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1909
type: SIMPLE_ASSIGN
force1.arrow.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1909};
  (data->simulationInfo->realParameter[298] /* force1.arrow.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1910
type: SIMPLE_ASSIGN
force1.specularCoefficient = world.defaultSpecularCoefficient
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1910};
  (data->simulationInfo->realParameter[299] /* force1.specularCoefficient PARAM */) = (data->simulationInfo->realParameter[400] /* world.defaultSpecularCoefficient PARAM */);
  TRACE_POP
}

/*
equation index: 1995
type: SIMPLE_ASSIGN
force1.arrow.arrowLine.quantity = force1.arrow.quantity
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_1995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1995};
  (data->simulationInfo->integerParameter[72] /* force1.arrow.arrowLine.quantity PARAM */) = (data->simulationInfo->integerParameter[73] /* force1.arrow.quantity PARAM */);
  TRACE_POP
}

/*
equation index: 2003
type: SIMPLE_ASSIGN
bar21.shape.shapeType = bar21.shapeType
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2003};
  (data->simulationInfo->stringParameter[2] /* bar21.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[3] /* bar21.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 2024
type: SIMPLE_ASSIGN
absoluteSensorBottom.arrow.arrowLine.quantity = absoluteSensorBottom.arrow.quantity
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2024};
  (data->simulationInfo->integerParameter[6] /* absoluteSensorBottom.arrow.arrowLine.quantity PARAM */) = (data->simulationInfo->integerParameter[7] /* absoluteSensorBottom.arrow.quantity PARAM */);
  TRACE_POP
}

/*
equation index: 2048
type: SIMPLE_ASSIGN
bodyBox.frameTranslation.shape.shapeType = bodyBox.frameTranslation.shapeType
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2048};
  (data->simulationInfo->stringParameter[8] /* bodyBox.frameTranslation.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[9] /* bodyBox.frameTranslation.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 2062
type: SIMPLE_ASSIGN
bodyBox.body.angles_start[3] = bodyBox.angles_start[3]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2062};
  (data->simulationInfo->realParameter[227] /* bodyBox.body.angles_start[3] PARAM */) = (data->simulationInfo->realParameter[193] /* bodyBox.angles_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2063
type: SIMPLE_ASSIGN
bodyBox.body.phi_start[3] = bodyBox.body.angles_start[3]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2063};
  (data->simulationInfo->realParameter[232] /* bodyBox.body.phi_start[3] PARAM */) = (data->simulationInfo->realParameter[227] /* bodyBox.body.angles_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2064
type: SIMPLE_ASSIGN
bodyBox.body.angles_start[2] = bodyBox.angles_start[2]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2064};
  (data->simulationInfo->realParameter[226] /* bodyBox.body.angles_start[2] PARAM */) = (data->simulationInfo->realParameter[192] /* bodyBox.angles_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2065
type: SIMPLE_ASSIGN
bodyBox.body.phi_start[2] = bodyBox.body.angles_start[2]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2065};
  (data->simulationInfo->realParameter[231] /* bodyBox.body.phi_start[2] PARAM */) = (data->simulationInfo->realParameter[226] /* bodyBox.body.angles_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2066
type: SIMPLE_ASSIGN
bodyBox.body.angles_start[1] = bodyBox.angles_start[1]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2066};
  (data->simulationInfo->realParameter[225] /* bodyBox.body.angles_start[1] PARAM */) = (data->simulationInfo->realParameter[191] /* bodyBox.angles_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2067
type: SIMPLE_ASSIGN
bodyBox.body.phi_start[1] = bodyBox.body.angles_start[1]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2067};
  (data->simulationInfo->realParameter[230] /* bodyBox.body.phi_start[1] PARAM */) = (data->simulationInfo->realParameter[225] /* bodyBox.body.angles_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2068
type: ARRAY_CALL_ASSIGN

bodyBox.body.Q_start = {0.0, 0.0, 0.0, 1.0}
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2068};
  real_array tmp0;
  real_array_create(&tmp0, ((modelica_real*)&((&(data->simulationInfo->realParameter[209] /* bodyBox.body.Q_start[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  real_array_copy_data(_OMC_LIT5, tmp0);
  TRACE_POP
}

/*
equation index: 2087
type: SIMPLE_ASSIGN
bodyBox.body.z_0_start[3] = bodyBox.z_0_start[3]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2087};
  (data->simulationInfo->realParameter[243] /* bodyBox.body.z_0_start[3] PARAM */) = (data->simulationInfo->realParameter[296] /* bodyBox.z_0_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2088
type: SIMPLE_ASSIGN
bodyBox.body.z_0_start[2] = bodyBox.z_0_start[2]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2088};
  (data->simulationInfo->realParameter[242] /* bodyBox.body.z_0_start[2] PARAM */) = (data->simulationInfo->realParameter[295] /* bodyBox.z_0_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2089
type: SIMPLE_ASSIGN
bodyBox.body.z_0_start[1] = bodyBox.z_0_start[1]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2089};
  (data->simulationInfo->realParameter[241] /* bodyBox.body.z_0_start[1] PARAM */) = (data->simulationInfo->realParameter[294] /* bodyBox.z_0_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2091
type: SIMPLE_ASSIGN
bodyBox.body.w_0_start[3] = bodyBox.w_0_start[3]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2091};
  (data->simulationInfo->realParameter[240] /* bodyBox.body.w_0_start[3] PARAM */) = (data->simulationInfo->realParameter[289] /* bodyBox.w_0_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2092
type: SIMPLE_ASSIGN
bodyBox.body.w_0_start[2] = bodyBox.w_0_start[2]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2092};
  (data->simulationInfo->realParameter[239] /* bodyBox.body.w_0_start[2] PARAM */) = (data->simulationInfo->realParameter[288] /* bodyBox.w_0_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2093
type: SIMPLE_ASSIGN
bodyBox.body.w_0_start[1] = bodyBox.w_0_start[1]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2093};
  (data->simulationInfo->realParameter[238] /* bodyBox.body.w_0_start[1] PARAM */) = (data->simulationInfo->realParameter[287] /* bodyBox.w_0_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2099
type: SIMPLE_ASSIGN
bodyBox.mo = bodyBox.density * bodyBox.length * bodyBox.width * bodyBox.height
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2099};
  (data->simulationInfo->realParameter[276] /* bodyBox.mo PARAM */) = ((data->simulationInfo->realParameter[244] /* bodyBox.density PARAM */)) * (((data->simulationInfo->realParameter[270] /* bodyBox.length PARAM */)) * (((data->simulationInfo->realParameter[290] /* bodyBox.width PARAM */)) * ((data->simulationInfo->realParameter[267] /* bodyBox.height PARAM */))));
  TRACE_POP
}

/*
equation index: 2100
type: SIMPLE_ASSIGN
bodyBox.innerHeight = bodyBox.innerWidth
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2100};
  (data->simulationInfo->realParameter[268] /* bodyBox.innerHeight PARAM */) = (data->simulationInfo->realParameter[269] /* bodyBox.innerWidth PARAM */);
  TRACE_POP
}

/*
equation index: 2101
type: SIMPLE_ASSIGN
bodyBox.mi = bodyBox.density * bodyBox.length * bodyBox.innerWidth * bodyBox.innerHeight
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2101};
  (data->simulationInfo->realParameter[275] /* bodyBox.mi PARAM */) = ((data->simulationInfo->realParameter[244] /* bodyBox.density PARAM */)) * (((data->simulationInfo->realParameter[270] /* bodyBox.length PARAM */)) * (((data->simulationInfo->realParameter[269] /* bodyBox.innerWidth PARAM */)) * ((data->simulationInfo->realParameter[268] /* bodyBox.innerHeight PARAM */))));
  TRACE_POP
}

/*
equation index: 2102
type: SIMPLE_ASSIGN
bodyBox.m = bodyBox.mo - bodyBox.mi
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2102};
  (data->simulationInfo->realParameter[274] /* bodyBox.m PARAM */) = (data->simulationInfo->realParameter[276] /* bodyBox.mo PARAM */) - (data->simulationInfo->realParameter[275] /* bodyBox.mi PARAM */);
  TRACE_POP
}

/*
equation index: 2103
type: SIMPLE_ASSIGN
bodyBox.body.m = bodyBox.m
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2103};
  (data->simulationInfo->realParameter[229] /* bodyBox.body.m PARAM */) = (data->simulationInfo->realParameter[274] /* bodyBox.m PARAM */);
  TRACE_POP
}

/*
equation index: 2105
type: SIMPLE_ASSIGN
bodyBox.r_CM[2] = (-0.5) * bodyBox.length
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2105};
  (data->simulationInfo->realParameter[281] /* bodyBox.r_CM[2] PARAM */) = (-0.5) * ((data->simulationInfo->realParameter[270] /* bodyBox.length PARAM */));
  TRACE_POP
}

/*
equation index: 2106
type: SIMPLE_ASSIGN
bodyBox.body.r_CM[2] = bodyBox.r_CM[2]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2106};
  (data->simulationInfo->realParameter[234] /* bodyBox.body.r_CM[2] PARAM */) = (data->simulationInfo->realParameter[281] /* bodyBox.r_CM[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2109
type: ARRAY_CALL_ASSIGN

bodyBox.I = {{0.08333333333333333 * (bodyBox.mo * (bodyBox.length ^ 2.0 + bodyBox.height ^ 2.0) - bodyBox.mi * (bodyBox.length ^ 2.0 + bodyBox.innerHeight ^ 2.0)), 0.0, -0.0}, {0.0, 0.08333333333333333 * (bodyBox.mo * (bodyBox.width ^ 2.0 + bodyBox.height ^ 2.0) - bodyBox.mi * (bodyBox.innerWidth ^ 2.0 + bodyBox.innerHeight ^ 2.0)), 0.0}, {0.0, 0.0, 0.08333333333333333 * (bodyBox.mo * (bodyBox.length ^ 2.0 + bodyBox.width ^ 2.0) - bodyBox.mi * (bodyBox.length ^ 2.0 + bodyBox.innerWidth ^ 2.0))}}
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2109};
  real_array tmp1;
  real_array tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  real_array tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  real_array tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  real_array tmp17;
  tmp3 = (data->simulationInfo->realParameter[270] /* bodyBox.length PARAM */);
  tmp4 = (data->simulationInfo->realParameter[267] /* bodyBox.height PARAM */);
  tmp5 = (data->simulationInfo->realParameter[270] /* bodyBox.length PARAM */);
  tmp6 = (data->simulationInfo->realParameter[268] /* bodyBox.innerHeight PARAM */);
  array_alloc_scalar_real_array(&tmp2, 3, (modelica_real)(0.08333333333333333) * (((data->simulationInfo->realParameter[276] /* bodyBox.mo PARAM */)) * ((tmp3 * tmp3) + (tmp4 * tmp4)) - (((data->simulationInfo->realParameter[275] /* bodyBox.mi PARAM */)) * ((tmp5 * tmp5) + (tmp6 * tmp6)))), (modelica_real)0.0, (modelica_real)-0.0);
  tmp8 = (data->simulationInfo->realParameter[290] /* bodyBox.width PARAM */);
  tmp9 = (data->simulationInfo->realParameter[267] /* bodyBox.height PARAM */);
  tmp10 = (data->simulationInfo->realParameter[269] /* bodyBox.innerWidth PARAM */);
  tmp11 = (data->simulationInfo->realParameter[268] /* bodyBox.innerHeight PARAM */);
  array_alloc_scalar_real_array(&tmp7, 3, (modelica_real)0.0, (modelica_real)(0.08333333333333333) * (((data->simulationInfo->realParameter[276] /* bodyBox.mo PARAM */)) * ((tmp8 * tmp8) + (tmp9 * tmp9)) - (((data->simulationInfo->realParameter[275] /* bodyBox.mi PARAM */)) * ((tmp10 * tmp10) + (tmp11 * tmp11)))), (modelica_real)0.0);
  tmp13 = (data->simulationInfo->realParameter[270] /* bodyBox.length PARAM */);
  tmp14 = (data->simulationInfo->realParameter[290] /* bodyBox.width PARAM */);
  tmp15 = (data->simulationInfo->realParameter[270] /* bodyBox.length PARAM */);
  tmp16 = (data->simulationInfo->realParameter[269] /* bodyBox.innerWidth PARAM */);
  array_alloc_scalar_real_array(&tmp12, 3, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)(0.08333333333333333) * (((data->simulationInfo->realParameter[276] /* bodyBox.mo PARAM */)) * ((tmp13 * tmp13) + (tmp14 * tmp14)) - (((data->simulationInfo->realParameter[275] /* bodyBox.mi PARAM */)) * ((tmp15 * tmp15) + (tmp16 * tmp16)))));
  array_alloc_real_array(&tmp1, 3, tmp2, tmp7, tmp12);
  real_array_create(&tmp17, ((modelica_real*)&((&(data->simulationInfo->realParameter[170] /* bodyBox.I[1,1] PARAM */))[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(tmp1, tmp17);
  TRACE_POP
}

/*
equation index: 2148
type: SIMPLE_ASSIGN
body.sphere.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2148};
  (data->simulationInfo->stringParameter[5] /* body.sphere.shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2149
type: SIMPLE_ASSIGN
body.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2149};
  (data->simulationInfo->stringParameter[4] /* body.cylinder.shapeType PARAM */) = _OMC_LIT7;
  TRACE_POP
}

/*
equation index: 2150
type: SIMPLE_ASSIGN
body.phi_start[3] = body.angles_start[3]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2150};
  (data->simulationInfo->realParameter[96] /* body.phi_start[3] PARAM */) = (data->simulationInfo->realParameter[85] /* body.angles_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2151
type: SIMPLE_ASSIGN
body.phi_start[2] = body.angles_start[2]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2151};
  (data->simulationInfo->realParameter[95] /* body.phi_start[2] PARAM */) = (data->simulationInfo->realParameter[84] /* body.angles_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2152
type: SIMPLE_ASSIGN
body.phi_start[1] = body.angles_start[1]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2152};
  (data->simulationInfo->realParameter[94] /* body.phi_start[1] PARAM */) = (data->simulationInfo->realParameter[83] /* body.angles_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2153
type: ARRAY_CALL_ASSIGN

body.Q_start = {0.0, 0.0, 0.0, 1.0}
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2153};
  real_array tmp18;
  real_array_create(&tmp18, ((modelica_real*)&((&(data->simulationInfo->realParameter[67] /* body.Q_start[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  real_array_copy_data(_OMC_LIT5, tmp18);
  TRACE_POP
}

/*
equation index: 2166
type: SIMPLE_ASSIGN
body.I[3,3] = body.I_33
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2166};
  (data->simulationInfo->realParameter[60] /* body.I[3,3] PARAM */) = (data->simulationInfo->realParameter[66] /* body.I_33 PARAM */);
  TRACE_POP
}

/*
equation index: 2167
type: SIMPLE_ASSIGN
body.I[3,2] = body.I_32
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2167};
  (data->simulationInfo->realParameter[59] /* body.I[3,2] PARAM */) = (data->simulationInfo->realParameter[65] /* body.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 2168
type: SIMPLE_ASSIGN
body.I[3,1] = body.I_31
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2168};
  (data->simulationInfo->realParameter[58] /* body.I[3,1] PARAM */) = (data->simulationInfo->realParameter[64] /* body.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 2169
type: SIMPLE_ASSIGN
body.I[2,3] = body.I_32
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2169};
  (data->simulationInfo->realParameter[57] /* body.I[2,3] PARAM */) = (data->simulationInfo->realParameter[65] /* body.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 2170
type: SIMPLE_ASSIGN
body.I[2,2] = body.I_22
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2170};
  (data->simulationInfo->realParameter[56] /* body.I[2,2] PARAM */) = (data->simulationInfo->realParameter[63] /* body.I_22 PARAM */);
  TRACE_POP
}

/*
equation index: 2171
type: SIMPLE_ASSIGN
body.I[2,1] = body.I_21
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2171};
  (data->simulationInfo->realParameter[55] /* body.I[2,1] PARAM */) = (data->simulationInfo->realParameter[62] /* body.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 2172
type: SIMPLE_ASSIGN
body.I[1,3] = body.I_31
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2172};
  (data->simulationInfo->realParameter[54] /* body.I[1,3] PARAM */) = (data->simulationInfo->realParameter[64] /* body.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 2173
type: SIMPLE_ASSIGN
body.I[1,2] = body.I_21
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2173};
  (data->simulationInfo->realParameter[53] /* body.I[1,2] PARAM */) = (data->simulationInfo->realParameter[62] /* body.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 2174
type: SIMPLE_ASSIGN
body.I[1,1] = body.I_11
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2174};
  (data->simulationInfo->realParameter[52] /* body.I[1,1] PARAM */) = (data->simulationInfo->realParameter[61] /* body.I_11 PARAM */);
  TRACE_POP
}

/*
equation index: 2195
type: SIMPLE_ASSIGN
absoluteSensorTop.arrow.arrowLine.quantity = absoluteSensorTop.arrow.quantity
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2195};
  (data->simulationInfo->integerParameter[30] /* absoluteSensorTop.arrow.arrowLine.quantity PARAM */) = (data->simulationInfo->integerParameter[31] /* absoluteSensorTop.arrow.quantity PARAM */);
  TRACE_POP
}

/*
equation index: 2219
type: SIMPLE_ASSIGN
revolute.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2219};
  (data->simulationInfo->stringParameter[12] /* revolute.cylinder.shapeType PARAM */) = _OMC_LIT7;
  TRACE_POP
}

/*
equation index: 2226
type: SIMPLE_ASSIGN
prismatic.box.shapeType = "box"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2226};
  (data->simulationInfo->stringParameter[10] /* prismatic.box.shapeType PARAM */) = _OMC_LIT8;
  TRACE_POP
}

/*
equation index: 2239
type: SIMPLE_ASSIGN
body1.sphere.shapeType = "sphere"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2239};
  (data->simulationInfo->stringParameter[7] /* body1.sphere.shapeType PARAM */) = _OMC_LIT6;
  TRACE_POP
}

/*
equation index: 2240
type: SIMPLE_ASSIGN
body1.cylinder.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2240};
  (data->simulationInfo->stringParameter[6] /* body1.cylinder.shapeType PARAM */) = _OMC_LIT7;
  TRACE_POP
}

/*
equation index: 2241
type: SIMPLE_ASSIGN
body1.phi_start[3] = body1.angles_start[3]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2241};
  (data->simulationInfo->realParameter[155] /* body1.phi_start[3] PARAM */) = (data->simulationInfo->realParameter[144] /* body1.angles_start[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2242
type: SIMPLE_ASSIGN
body1.phi_start[2] = body1.angles_start[2]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2242};
  (data->simulationInfo->realParameter[154] /* body1.phi_start[2] PARAM */) = (data->simulationInfo->realParameter[143] /* body1.angles_start[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2243
type: SIMPLE_ASSIGN
body1.phi_start[1] = body1.angles_start[1]
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2243};
  (data->simulationInfo->realParameter[153] /* body1.phi_start[1] PARAM */) = (data->simulationInfo->realParameter[142] /* body1.angles_start[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2244
type: ARRAY_CALL_ASSIGN

body1.Q_start = {0.0, 0.0, 0.0, 1.0}
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2244};
  real_array tmp19;
  real_array_create(&tmp19, ((modelica_real*)&((&(data->simulationInfo->realParameter[126] /* body1.Q_start[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  real_array_copy_data(_OMC_LIT5, tmp19);
  TRACE_POP
}

/*
equation index: 2257
type: SIMPLE_ASSIGN
body1.I[3,3] = body1.I_33
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2257};
  (data->simulationInfo->realParameter[119] /* body1.I[3,3] PARAM */) = (data->simulationInfo->realParameter[125] /* body1.I_33 PARAM */);
  TRACE_POP
}

/*
equation index: 2258
type: SIMPLE_ASSIGN
body1.I[3,2] = body1.I_32
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2258};
  (data->simulationInfo->realParameter[118] /* body1.I[3,2] PARAM */) = (data->simulationInfo->realParameter[124] /* body1.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 2259
type: SIMPLE_ASSIGN
body1.I[3,1] = body1.I_31
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2259};
  (data->simulationInfo->realParameter[117] /* body1.I[3,1] PARAM */) = (data->simulationInfo->realParameter[123] /* body1.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 2260
type: SIMPLE_ASSIGN
body1.I[2,3] = body1.I_32
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2260};
  (data->simulationInfo->realParameter[116] /* body1.I[2,3] PARAM */) = (data->simulationInfo->realParameter[124] /* body1.I_32 PARAM */);
  TRACE_POP
}

/*
equation index: 2261
type: SIMPLE_ASSIGN
body1.I[2,2] = body1.I_22
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2261};
  (data->simulationInfo->realParameter[115] /* body1.I[2,2] PARAM */) = (data->simulationInfo->realParameter[122] /* body1.I_22 PARAM */);
  TRACE_POP
}

/*
equation index: 2262
type: SIMPLE_ASSIGN
body1.I[2,1] = body1.I_21
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2262};
  (data->simulationInfo->realParameter[114] /* body1.I[2,1] PARAM */) = (data->simulationInfo->realParameter[121] /* body1.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 2263
type: SIMPLE_ASSIGN
body1.I[1,3] = body1.I_31
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2263};
  (data->simulationInfo->realParameter[113] /* body1.I[1,3] PARAM */) = (data->simulationInfo->realParameter[123] /* body1.I_31 PARAM */);
  TRACE_POP
}

/*
equation index: 2264
type: SIMPLE_ASSIGN
body1.I[1,2] = body1.I_21
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2264};
  (data->simulationInfo->realParameter[112] /* body1.I[1,2] PARAM */) = (data->simulationInfo->realParameter[121] /* body1.I_21 PARAM */);
  TRACE_POP
}

/*
equation index: 2265
type: SIMPLE_ASSIGN
body1.I[1,1] = body1.I_11
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2265};
  (data->simulationInfo->realParameter[111] /* body1.I[1,1] PARAM */) = (data->simulationInfo->realParameter[120] /* body1.I_11 PARAM */);
  TRACE_POP
}

/*
equation index: 2279
type: SIMPLE_ASSIGN
prismatic1.box.shapeType = "box"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2279};
  (data->simulationInfo->stringParameter[11] /* prismatic1.box.shapeType PARAM */) = _OMC_LIT8;
  TRACE_POP
}

/*
equation index: 2292
type: SIMPLE_ASSIGN
bar2.shape.shapeType = bar2.shapeType
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2292};
  (data->simulationInfo->stringParameter[0] /* bar2.shape.shapeType PARAM */) = (data->simulationInfo->stringParameter[1] /* bar2.shapeType PARAM */);
  TRACE_POP
}

/*
equation index: 2307
type: SIMPLE_ASSIGN
world.gravityArrowLength = 0.5 * world.axisLength
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2307};
  (data->simulationInfo->realParameter[404] /* world.gravityArrowLength PARAM */) = (0.5) * ((data->simulationInfo->realParameter[389] /* world.axisLength PARAM */));
  TRACE_POP
}

/*
equation index: 2308
type: SIMPLE_ASSIGN
world.gravityArrowDiameter = world.gravityArrowLength / world.defaultWidthFraction
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2308};
  (data->simulationInfo->realParameter[403] /* world.gravityArrowDiameter PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[404] /* world.gravityArrowLength PARAM */),(data->simulationInfo->realParameter[401] /* world.defaultWidthFraction PARAM */),"world.defaultWidthFraction",equationIndexes);
  TRACE_POP
}

/*
equation index: 2309
type: SIMPLE_ASSIGN
world.gravityHeadLength = min(world.gravityArrowLength, world.gravityArrowDiameter * 4.0)
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2309};
  (data->simulationInfo->realParameter[408] /* world.gravityHeadLength PARAM */) = fmin((data->simulationInfo->realParameter[404] /* world.gravityArrowLength PARAM */),((data->simulationInfo->realParameter[403] /* world.gravityArrowDiameter PARAM */)) * (4.0));
  TRACE_POP
}

/*
equation index: 2310
type: SIMPLE_ASSIGN
world.gravityLineLength = max(0.0, world.gravityArrowLength - world.gravityHeadLength)
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2310};
  (data->simulationInfo->realParameter[410] /* world.gravityLineLength PARAM */) = fmax(0.0,(data->simulationInfo->realParameter[404] /* world.gravityArrowLength PARAM */) - (data->simulationInfo->realParameter[408] /* world.gravityHeadLength PARAM */));
  TRACE_POP
}

/*
equation index: 2311
type: SIMPLE_ASSIGN
world.gravityHeadWidth = 3.0 * world.gravityArrowDiameter
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2311};
  (data->simulationInfo->realParameter[409] /* world.gravityHeadWidth PARAM */) = (3.0) * ((data->simulationInfo->realParameter[403] /* world.gravityArrowDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 2312
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2312};
  (data->simulationInfo->stringParameter[27] /* world.z_label.cylinders[3].shapeType PARAM */) = _OMC_LIT7;
  TRACE_POP
}

/*
equation index: 2313
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2313};
  (data->simulationInfo->stringParameter[26] /* world.z_label.cylinders[2].shapeType PARAM */) = _OMC_LIT7;
  TRACE_POP
}

/*
equation index: 2314
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2314};
  (data->simulationInfo->stringParameter[25] /* world.z_label.cylinders[1].shapeType PARAM */) = _OMC_LIT7;
  TRACE_POP
}

/*
equation index: 2316
type: SIMPLE_ASSIGN
world.z_arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2316};
  (data->simulationInfo->stringParameter[23] /* world.z_arrowHead.shapeType PARAM */) = _OMC_LIT9;
  TRACE_POP
}

/*
equation index: 2317
type: SIMPLE_ASSIGN
world.z_arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2317};
  (data->simulationInfo->stringParameter[24] /* world.z_arrowLine.shapeType PARAM */) = _OMC_LIT7;
  TRACE_POP
}

/*
equation index: 2318
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2318};
  (data->simulationInfo->stringParameter[22] /* world.y_label.cylinders[2].shapeType PARAM */) = _OMC_LIT7;
  TRACE_POP
}

/*
equation index: 2319
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2319};
  (data->simulationInfo->stringParameter[21] /* world.y_label.cylinders[1].shapeType PARAM */) = _OMC_LIT7;
  TRACE_POP
}

/*
equation index: 2321
type: SIMPLE_ASSIGN
world.y_arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2321};
  (data->simulationInfo->stringParameter[19] /* world.y_arrowHead.shapeType PARAM */) = _OMC_LIT9;
  TRACE_POP
}

/*
equation index: 2322
type: SIMPLE_ASSIGN
world.y_arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2322};
  (data->simulationInfo->stringParameter[20] /* world.y_arrowLine.shapeType PARAM */) = _OMC_LIT7;
  TRACE_POP
}

/*
equation index: 2323
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2323};
  (data->simulationInfo->stringParameter[18] /* world.x_label.cylinders[2].shapeType PARAM */) = _OMC_LIT7;
  TRACE_POP
}

/*
equation index: 2324
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2324};
  (data->simulationInfo->stringParameter[17] /* world.x_label.cylinders[1].shapeType PARAM */) = _OMC_LIT7;
  TRACE_POP
}

/*
equation index: 2326
type: SIMPLE_ASSIGN
world.x_arrowHead.shapeType = "cone"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2326};
  (data->simulationInfo->stringParameter[15] /* world.x_arrowHead.shapeType PARAM */) = _OMC_LIT9;
  TRACE_POP
}

/*
equation index: 2327
type: SIMPLE_ASSIGN
world.x_arrowLine.shapeType = "cylinder"
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2327};
  (data->simulationInfo->stringParameter[16] /* world.x_arrowLine.shapeType PARAM */) = _OMC_LIT7;
  TRACE_POP
}

/*
equation index: 2332
type: SIMPLE_ASSIGN
world.groundLength_v = world.groundLength_u
*/
OMC_DISABLE_OPT
static void BuildingCase3_eqFunction_2332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2332};
  (data->simulationInfo->realParameter[416] /* world.groundLength_v PARAM */) = (data->simulationInfo->realParameter[415] /* world.groundLength_u PARAM */);
  TRACE_POP
}
extern void BuildingCase3_eqFunction_1193(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1192(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1191(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1190(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1189(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1188(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1187(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1186(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1185(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1184(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1183(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1182(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1181(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1180(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1179(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1178(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1177(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1176(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1175(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1174(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1173(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1172(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1171(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1170(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1169(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1168(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1167(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1166(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1165(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1164(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1163(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1162(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1161(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1160(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1159(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1158(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1157(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1156(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1155(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1154(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1153(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1152(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1151(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1150(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1149(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1148(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1147(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1146(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1145(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1144(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1143(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1142(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1141(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1140(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1139(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1138(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1137(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1136(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1135(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1134(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1133(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1132(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1131(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1130(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1129(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1128(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1127(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1126(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1125(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1124(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1123(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1122(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1121(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1120(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1119(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1118(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1117(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1116(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1115(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1114(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1113(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1112(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1111(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1110(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1109(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1108(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1107(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1106(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1105(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1104(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1103(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1102(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1101(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1100(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1099(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1098(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1097(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1096(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1095(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1094(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1093(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1092(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1091(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1090(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1089(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1088(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1087(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1086(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1085(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1084(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1083(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1082(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1081(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1080(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1079(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1078(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1077(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1076(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1075(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1074(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1073(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1072(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1071(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1070(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1069(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1068(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1067(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1066(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1065(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1064(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1063(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1062(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1061(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1060(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1059(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1058(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1057(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1056(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1055(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1054(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1053(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1052(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1051(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1050(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1049(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1048(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1047(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1046(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1045(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1044(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1043(DATA *data, threadData_t *threadData);

extern void BuildingCase3_eqFunction_1042(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void BuildingCase3_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  BuildingCase3_eqFunction_1489(data, threadData);
  BuildingCase3_eqFunction_1488(data, threadData);
  BuildingCase3_eqFunction_1487(data, threadData);
  BuildingCase3_eqFunction_1747(data, threadData);
  BuildingCase3_eqFunction_1748(data, threadData);
  BuildingCase3_eqFunction_1749(data, threadData);
  BuildingCase3_eqFunction_1750(data, threadData);
  BuildingCase3_eqFunction_1751(data, threadData);
  BuildingCase3_eqFunction_1752(data, threadData);
  BuildingCase3_eqFunction_1753(data, threadData);
  BuildingCase3_eqFunction_1754(data, threadData);
  BuildingCase3_eqFunction_1755(data, threadData);
  BuildingCase3_eqFunction_1756(data, threadData);
  BuildingCase3_eqFunction_1757(data, threadData);
  BuildingCase3_eqFunction_1759(data, threadData);
  BuildingCase3_eqFunction_1761(data, threadData);
  BuildingCase3_eqFunction_1763(data, threadData);
  BuildingCase3_eqFunction_1765(data, threadData);
  BuildingCase3_eqFunction_1766(data, threadData);
  BuildingCase3_eqFunction_1767(data, threadData);
  BuildingCase3_eqFunction_1768(data, threadData);
  BuildingCase3_eqFunction_1769(data, threadData);
  BuildingCase3_eqFunction_1770(data, threadData);
  BuildingCase3_eqFunction_1771(data, threadData);
  BuildingCase3_eqFunction_1772(data, threadData);
  BuildingCase3_eqFunction_1773(data, threadData);
  BuildingCase3_eqFunction_1774(data, threadData);
  BuildingCase3_eqFunction_1775(data, threadData);
  BuildingCase3_eqFunction_1776(data, threadData);
  BuildingCase3_eqFunction_1777(data, threadData);
  BuildingCase3_eqFunction_1778(data, threadData);
  BuildingCase3_eqFunction_1779(data, threadData);
  BuildingCase3_eqFunction_1780(data, threadData);
  BuildingCase3_eqFunction_1781(data, threadData);
  BuildingCase3_eqFunction_1782(data, threadData);
  BuildingCase3_eqFunction_1783(data, threadData);
  BuildingCase3_eqFunction_1784(data, threadData);
  BuildingCase3_eqFunction_1785(data, threadData);
  BuildingCase3_eqFunction_1786(data, threadData);
  BuildingCase3_eqFunction_1787(data, threadData);
  BuildingCase3_eqFunction_1788(data, threadData);
  BuildingCase3_eqFunction_1789(data, threadData);
  BuildingCase3_eqFunction_1790(data, threadData);
  BuildingCase3_eqFunction_1791(data, threadData);
  BuildingCase3_eqFunction_1792(data, threadData);
  BuildingCase3_eqFunction_1793(data, threadData);
  BuildingCase3_eqFunction_1794(data, threadData);
  BuildingCase3_eqFunction_1795(data, threadData);
  BuildingCase3_eqFunction_1796(data, threadData);
  BuildingCase3_eqFunction_1797(data, threadData);
  BuildingCase3_eqFunction_1798(data, threadData);
  BuildingCase3_eqFunction_1799(data, threadData);
  BuildingCase3_eqFunction_1800(data, threadData);
  BuildingCase3_eqFunction_1801(data, threadData);
  BuildingCase3_eqFunction_1802(data, threadData);
  BuildingCase3_eqFunction_1803(data, threadData);
  BuildingCase3_eqFunction_1804(data, threadData);
  BuildingCase3_eqFunction_1805(data, threadData);
  BuildingCase3_eqFunction_1806(data, threadData);
  BuildingCase3_eqFunction_1807(data, threadData);
  BuildingCase3_eqFunction_1808(data, threadData);
  BuildingCase3_eqFunction_1809(data, threadData);
  BuildingCase3_eqFunction_1810(data, threadData);
  BuildingCase3_eqFunction_1811(data, threadData);
  BuildingCase3_eqFunction_1812(data, threadData);
  BuildingCase3_eqFunction_1813(data, threadData);
  BuildingCase3_eqFunction_1814(data, threadData);
  BuildingCase3_eqFunction_1815(data, threadData);
  BuildingCase3_eqFunction_1816(data, threadData);
  BuildingCase3_eqFunction_1817(data, threadData);
  BuildingCase3_eqFunction_1818(data, threadData);
  BuildingCase3_eqFunction_1819(data, threadData);
  BuildingCase3_eqFunction_1820(data, threadData);
  BuildingCase3_eqFunction_1821(data, threadData);
  BuildingCase3_eqFunction_1822(data, threadData);
  BuildingCase3_eqFunction_1823(data, threadData);
  BuildingCase3_eqFunction_1824(data, threadData);
  BuildingCase3_eqFunction_1825(data, threadData);
  BuildingCase3_eqFunction_1826(data, threadData);
  BuildingCase3_eqFunction_1827(data, threadData);
  BuildingCase3_eqFunction_1828(data, threadData);
  BuildingCase3_eqFunction_1829(data, threadData);
  BuildingCase3_eqFunction_1830(data, threadData);
  BuildingCase3_eqFunction_1831(data, threadData);
  BuildingCase3_eqFunction_1832(data, threadData);
  BuildingCase3_eqFunction_1833(data, threadData);
  BuildingCase3_eqFunction_1834(data, threadData);
  BuildingCase3_eqFunction_1835(data, threadData);
  BuildingCase3_eqFunction_1836(data, threadData);
  BuildingCase3_eqFunction_1837(data, threadData);
  BuildingCase3_eqFunction_1838(data, threadData);
  BuildingCase3_eqFunction_1839(data, threadData);
  BuildingCase3_eqFunction_1840(data, threadData);
  BuildingCase3_eqFunction_1841(data, threadData);
  BuildingCase3_eqFunction_1842(data, threadData);
  BuildingCase3_eqFunction_1843(data, threadData);
  BuildingCase3_eqFunction_1844(data, threadData);
  BuildingCase3_eqFunction_1845(data, threadData);
  BuildingCase3_eqFunction_1846(data, threadData);
  BuildingCase3_eqFunction_1847(data, threadData);
  BuildingCase3_eqFunction_1848(data, threadData);
  BuildingCase3_eqFunction_1849(data, threadData);
  BuildingCase3_eqFunction_1850(data, threadData);
  BuildingCase3_eqFunction_1851(data, threadData);
  BuildingCase3_eqFunction_1852(data, threadData);
  BuildingCase3_eqFunction_1853(data, threadData);
  BuildingCase3_eqFunction_1854(data, threadData);
  BuildingCase3_eqFunction_1855(data, threadData);
  BuildingCase3_eqFunction_1856(data, threadData);
  BuildingCase3_eqFunction_1857(data, threadData);
  BuildingCase3_eqFunction_1858(data, threadData);
  BuildingCase3_eqFunction_1859(data, threadData);
  BuildingCase3_eqFunction_1860(data, threadData);
  BuildingCase3_eqFunction_1861(data, threadData);
  BuildingCase3_eqFunction_1862(data, threadData);
  BuildingCase3_eqFunction_1863(data, threadData);
  BuildingCase3_eqFunction_1864(data, threadData);
  BuildingCase3_eqFunction_1865(data, threadData);
  BuildingCase3_eqFunction_1866(data, threadData);
  BuildingCase3_eqFunction_1867(data, threadData);
  BuildingCase3_eqFunction_1868(data, threadData);
  BuildingCase3_eqFunction_1869(data, threadData);
  BuildingCase3_eqFunction_1870(data, threadData);
  BuildingCase3_eqFunction_1871(data, threadData);
  BuildingCase3_eqFunction_1872(data, threadData);
  BuildingCase3_eqFunction_1873(data, threadData);
  BuildingCase3_eqFunction_1874(data, threadData);
  BuildingCase3_eqFunction_1875(data, threadData);
  BuildingCase3_eqFunction_1876(data, threadData);
  BuildingCase3_eqFunction_1877(data, threadData);
  BuildingCase3_eqFunction_1878(data, threadData);
  BuildingCase3_eqFunction_1879(data, threadData);
  BuildingCase3_eqFunction_1880(data, threadData);
  BuildingCase3_eqFunction_1881(data, threadData);
  BuildingCase3_eqFunction_1882(data, threadData);
  BuildingCase3_eqFunction_1883(data, threadData);
  BuildingCase3_eqFunction_1884(data, threadData);
  BuildingCase3_eqFunction_1885(data, threadData);
  BuildingCase3_eqFunction_1886(data, threadData);
  BuildingCase3_eqFunction_1887(data, threadData);
  BuildingCase3_eqFunction_1888(data, threadData);
  BuildingCase3_eqFunction_1889(data, threadData);
  BuildingCase3_eqFunction_1890(data, threadData);
  BuildingCase3_eqFunction_1891(data, threadData);
  BuildingCase3_eqFunction_1893(data, threadData);
  BuildingCase3_eqFunction_1894(data, threadData);
  BuildingCase3_eqFunction_1895(data, threadData);
  BuildingCase3_eqFunction_1897(data, threadData);
  BuildingCase3_eqFunction_1898(data, threadData);
  BuildingCase3_eqFunction_1899(data, threadData);
  BuildingCase3_eqFunction_1901(data, threadData);
  BuildingCase3_eqFunction_1902(data, threadData);
  BuildingCase3_eqFunction_1903(data, threadData);
  BuildingCase3_eqFunction_1905(data, threadData);
  BuildingCase3_eqFunction_1906(data, threadData);
  BuildingCase3_eqFunction_1907(data, threadData);
  BuildingCase3_eqFunction_1908(data, threadData);
  BuildingCase3_eqFunction_1909(data, threadData);
  BuildingCase3_eqFunction_1910(data, threadData);
  BuildingCase3_eqFunction_1995(data, threadData);
  BuildingCase3_eqFunction_2003(data, threadData);
  BuildingCase3_eqFunction_2024(data, threadData);
  BuildingCase3_eqFunction_2048(data, threadData);
  BuildingCase3_eqFunction_2062(data, threadData);
  BuildingCase3_eqFunction_2063(data, threadData);
  BuildingCase3_eqFunction_2064(data, threadData);
  BuildingCase3_eqFunction_2065(data, threadData);
  BuildingCase3_eqFunction_2066(data, threadData);
  BuildingCase3_eqFunction_2067(data, threadData);
  BuildingCase3_eqFunction_2068(data, threadData);
  BuildingCase3_eqFunction_2087(data, threadData);
  BuildingCase3_eqFunction_2088(data, threadData);
  BuildingCase3_eqFunction_2089(data, threadData);
  BuildingCase3_eqFunction_2091(data, threadData);
  BuildingCase3_eqFunction_2092(data, threadData);
  BuildingCase3_eqFunction_2093(data, threadData);
  BuildingCase3_eqFunction_2099(data, threadData);
  BuildingCase3_eqFunction_2100(data, threadData);
  BuildingCase3_eqFunction_2101(data, threadData);
  BuildingCase3_eqFunction_2102(data, threadData);
  BuildingCase3_eqFunction_2103(data, threadData);
  BuildingCase3_eqFunction_2105(data, threadData);
  BuildingCase3_eqFunction_2106(data, threadData);
  BuildingCase3_eqFunction_2109(data, threadData);
  BuildingCase3_eqFunction_2148(data, threadData);
  BuildingCase3_eqFunction_2149(data, threadData);
  BuildingCase3_eqFunction_2150(data, threadData);
  BuildingCase3_eqFunction_2151(data, threadData);
  BuildingCase3_eqFunction_2152(data, threadData);
  BuildingCase3_eqFunction_2153(data, threadData);
  BuildingCase3_eqFunction_2166(data, threadData);
  BuildingCase3_eqFunction_2167(data, threadData);
  BuildingCase3_eqFunction_2168(data, threadData);
  BuildingCase3_eqFunction_2169(data, threadData);
  BuildingCase3_eqFunction_2170(data, threadData);
  BuildingCase3_eqFunction_2171(data, threadData);
  BuildingCase3_eqFunction_2172(data, threadData);
  BuildingCase3_eqFunction_2173(data, threadData);
  BuildingCase3_eqFunction_2174(data, threadData);
  BuildingCase3_eqFunction_2195(data, threadData);
  BuildingCase3_eqFunction_2219(data, threadData);
  BuildingCase3_eqFunction_2226(data, threadData);
  BuildingCase3_eqFunction_2239(data, threadData);
  BuildingCase3_eqFunction_2240(data, threadData);
  BuildingCase3_eqFunction_2241(data, threadData);
  BuildingCase3_eqFunction_2242(data, threadData);
  BuildingCase3_eqFunction_2243(data, threadData);
  BuildingCase3_eqFunction_2244(data, threadData);
  BuildingCase3_eqFunction_2257(data, threadData);
  BuildingCase3_eqFunction_2258(data, threadData);
  BuildingCase3_eqFunction_2259(data, threadData);
  BuildingCase3_eqFunction_2260(data, threadData);
  BuildingCase3_eqFunction_2261(data, threadData);
  BuildingCase3_eqFunction_2262(data, threadData);
  BuildingCase3_eqFunction_2263(data, threadData);
  BuildingCase3_eqFunction_2264(data, threadData);
  BuildingCase3_eqFunction_2265(data, threadData);
  BuildingCase3_eqFunction_2279(data, threadData);
  BuildingCase3_eqFunction_2292(data, threadData);
  BuildingCase3_eqFunction_2307(data, threadData);
  BuildingCase3_eqFunction_2308(data, threadData);
  BuildingCase3_eqFunction_2309(data, threadData);
  BuildingCase3_eqFunction_2310(data, threadData);
  BuildingCase3_eqFunction_2311(data, threadData);
  BuildingCase3_eqFunction_2312(data, threadData);
  BuildingCase3_eqFunction_2313(data, threadData);
  BuildingCase3_eqFunction_2314(data, threadData);
  BuildingCase3_eqFunction_2316(data, threadData);
  BuildingCase3_eqFunction_2317(data, threadData);
  BuildingCase3_eqFunction_2318(data, threadData);
  BuildingCase3_eqFunction_2319(data, threadData);
  BuildingCase3_eqFunction_2321(data, threadData);
  BuildingCase3_eqFunction_2322(data, threadData);
  BuildingCase3_eqFunction_2323(data, threadData);
  BuildingCase3_eqFunction_2324(data, threadData);
  BuildingCase3_eqFunction_2326(data, threadData);
  BuildingCase3_eqFunction_2327(data, threadData);
  BuildingCase3_eqFunction_2332(data, threadData);
  BuildingCase3_eqFunction_1193(data, threadData);
  BuildingCase3_eqFunction_1192(data, threadData);
  BuildingCase3_eqFunction_1191(data, threadData);
  BuildingCase3_eqFunction_1190(data, threadData);
  BuildingCase3_eqFunction_1189(data, threadData);
  BuildingCase3_eqFunction_1188(data, threadData);
  BuildingCase3_eqFunction_1187(data, threadData);
  BuildingCase3_eqFunction_1186(data, threadData);
  BuildingCase3_eqFunction_1185(data, threadData);
  BuildingCase3_eqFunction_1184(data, threadData);
  BuildingCase3_eqFunction_1183(data, threadData);
  BuildingCase3_eqFunction_1182(data, threadData);
  BuildingCase3_eqFunction_1181(data, threadData);
  BuildingCase3_eqFunction_1180(data, threadData);
  BuildingCase3_eqFunction_1179(data, threadData);
  BuildingCase3_eqFunction_1178(data, threadData);
  BuildingCase3_eqFunction_1177(data, threadData);
  BuildingCase3_eqFunction_1176(data, threadData);
  BuildingCase3_eqFunction_1175(data, threadData);
  BuildingCase3_eqFunction_1174(data, threadData);
  BuildingCase3_eqFunction_1173(data, threadData);
  BuildingCase3_eqFunction_1172(data, threadData);
  BuildingCase3_eqFunction_1171(data, threadData);
  BuildingCase3_eqFunction_1170(data, threadData);
  BuildingCase3_eqFunction_1169(data, threadData);
  BuildingCase3_eqFunction_1168(data, threadData);
  BuildingCase3_eqFunction_1167(data, threadData);
  BuildingCase3_eqFunction_1166(data, threadData);
  BuildingCase3_eqFunction_1165(data, threadData);
  BuildingCase3_eqFunction_1164(data, threadData);
  BuildingCase3_eqFunction_1163(data, threadData);
  BuildingCase3_eqFunction_1162(data, threadData);
  BuildingCase3_eqFunction_1161(data, threadData);
  BuildingCase3_eqFunction_1160(data, threadData);
  BuildingCase3_eqFunction_1159(data, threadData);
  BuildingCase3_eqFunction_1158(data, threadData);
  BuildingCase3_eqFunction_1157(data, threadData);
  BuildingCase3_eqFunction_1156(data, threadData);
  BuildingCase3_eqFunction_1155(data, threadData);
  BuildingCase3_eqFunction_1154(data, threadData);
  BuildingCase3_eqFunction_1153(data, threadData);
  BuildingCase3_eqFunction_1152(data, threadData);
  BuildingCase3_eqFunction_1151(data, threadData);
  BuildingCase3_eqFunction_1150(data, threadData);
  BuildingCase3_eqFunction_1149(data, threadData);
  BuildingCase3_eqFunction_1148(data, threadData);
  BuildingCase3_eqFunction_1147(data, threadData);
  BuildingCase3_eqFunction_1146(data, threadData);
  BuildingCase3_eqFunction_1145(data, threadData);
  BuildingCase3_eqFunction_1144(data, threadData);
  BuildingCase3_eqFunction_1143(data, threadData);
  BuildingCase3_eqFunction_1142(data, threadData);
  BuildingCase3_eqFunction_1141(data, threadData);
  BuildingCase3_eqFunction_1140(data, threadData);
  BuildingCase3_eqFunction_1139(data, threadData);
  BuildingCase3_eqFunction_1138(data, threadData);
  BuildingCase3_eqFunction_1137(data, threadData);
  BuildingCase3_eqFunction_1136(data, threadData);
  BuildingCase3_eqFunction_1135(data, threadData);
  BuildingCase3_eqFunction_1134(data, threadData);
  BuildingCase3_eqFunction_1133(data, threadData);
  BuildingCase3_eqFunction_1132(data, threadData);
  BuildingCase3_eqFunction_1131(data, threadData);
  BuildingCase3_eqFunction_1130(data, threadData);
  BuildingCase3_eqFunction_1129(data, threadData);
  BuildingCase3_eqFunction_1128(data, threadData);
  BuildingCase3_eqFunction_1127(data, threadData);
  BuildingCase3_eqFunction_1126(data, threadData);
  BuildingCase3_eqFunction_1125(data, threadData);
  BuildingCase3_eqFunction_1124(data, threadData);
  BuildingCase3_eqFunction_1123(data, threadData);
  BuildingCase3_eqFunction_1122(data, threadData);
  BuildingCase3_eqFunction_1121(data, threadData);
  BuildingCase3_eqFunction_1120(data, threadData);
  BuildingCase3_eqFunction_1119(data, threadData);
  BuildingCase3_eqFunction_1118(data, threadData);
  BuildingCase3_eqFunction_1117(data, threadData);
  BuildingCase3_eqFunction_1116(data, threadData);
  BuildingCase3_eqFunction_1115(data, threadData);
  BuildingCase3_eqFunction_1114(data, threadData);
  BuildingCase3_eqFunction_1113(data, threadData);
  BuildingCase3_eqFunction_1112(data, threadData);
  BuildingCase3_eqFunction_1111(data, threadData);
  BuildingCase3_eqFunction_1110(data, threadData);
  BuildingCase3_eqFunction_1109(data, threadData);
  BuildingCase3_eqFunction_1108(data, threadData);
  BuildingCase3_eqFunction_1107(data, threadData);
  BuildingCase3_eqFunction_1106(data, threadData);
  BuildingCase3_eqFunction_1105(data, threadData);
  BuildingCase3_eqFunction_1104(data, threadData);
  BuildingCase3_eqFunction_1103(data, threadData);
  BuildingCase3_eqFunction_1102(data, threadData);
  BuildingCase3_eqFunction_1101(data, threadData);
  BuildingCase3_eqFunction_1100(data, threadData);
  BuildingCase3_eqFunction_1099(data, threadData);
  BuildingCase3_eqFunction_1098(data, threadData);
  BuildingCase3_eqFunction_1097(data, threadData);
  BuildingCase3_eqFunction_1096(data, threadData);
  BuildingCase3_eqFunction_1095(data, threadData);
  BuildingCase3_eqFunction_1094(data, threadData);
  BuildingCase3_eqFunction_1093(data, threadData);
  BuildingCase3_eqFunction_1092(data, threadData);
  BuildingCase3_eqFunction_1091(data, threadData);
  BuildingCase3_eqFunction_1090(data, threadData);
  BuildingCase3_eqFunction_1089(data, threadData);
  BuildingCase3_eqFunction_1088(data, threadData);
  BuildingCase3_eqFunction_1087(data, threadData);
  BuildingCase3_eqFunction_1086(data, threadData);
  BuildingCase3_eqFunction_1085(data, threadData);
  BuildingCase3_eqFunction_1084(data, threadData);
  BuildingCase3_eqFunction_1083(data, threadData);
  BuildingCase3_eqFunction_1082(data, threadData);
  BuildingCase3_eqFunction_1081(data, threadData);
  BuildingCase3_eqFunction_1080(data, threadData);
  BuildingCase3_eqFunction_1079(data, threadData);
  BuildingCase3_eqFunction_1078(data, threadData);
  BuildingCase3_eqFunction_1077(data, threadData);
  BuildingCase3_eqFunction_1076(data, threadData);
  BuildingCase3_eqFunction_1075(data, threadData);
  BuildingCase3_eqFunction_1074(data, threadData);
  BuildingCase3_eqFunction_1073(data, threadData);
  BuildingCase3_eqFunction_1072(data, threadData);
  BuildingCase3_eqFunction_1071(data, threadData);
  BuildingCase3_eqFunction_1070(data, threadData);
  BuildingCase3_eqFunction_1069(data, threadData);
  BuildingCase3_eqFunction_1068(data, threadData);
  BuildingCase3_eqFunction_1067(data, threadData);
  BuildingCase3_eqFunction_1066(data, threadData);
  BuildingCase3_eqFunction_1065(data, threadData);
  BuildingCase3_eqFunction_1064(data, threadData);
  BuildingCase3_eqFunction_1063(data, threadData);
  BuildingCase3_eqFunction_1062(data, threadData);
  BuildingCase3_eqFunction_1061(data, threadData);
  BuildingCase3_eqFunction_1060(data, threadData);
  BuildingCase3_eqFunction_1059(data, threadData);
  BuildingCase3_eqFunction_1058(data, threadData);
  BuildingCase3_eqFunction_1057(data, threadData);
  BuildingCase3_eqFunction_1056(data, threadData);
  BuildingCase3_eqFunction_1055(data, threadData);
  BuildingCase3_eqFunction_1054(data, threadData);
  BuildingCase3_eqFunction_1053(data, threadData);
  BuildingCase3_eqFunction_1052(data, threadData);
  BuildingCase3_eqFunction_1051(data, threadData);
  BuildingCase3_eqFunction_1050(data, threadData);
  BuildingCase3_eqFunction_1049(data, threadData);
  BuildingCase3_eqFunction_1048(data, threadData);
  BuildingCase3_eqFunction_1047(data, threadData);
  BuildingCase3_eqFunction_1046(data, threadData);
  BuildingCase3_eqFunction_1045(data, threadData);
  BuildingCase3_eqFunction_1044(data, threadData);
  BuildingCase3_eqFunction_1043(data, threadData);
  BuildingCase3_eqFunction_1042(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif