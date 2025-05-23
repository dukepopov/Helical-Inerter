model BuildingCase3Test2
  inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity) annotation(
    Placement(transformation(origin = {-132, -26}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
    Placement(transformation(origin = {-108, -56}, extent = {{0, 20}, {20, 40}})));
  // Rotation angle in radians
  Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic1(n = {0, 1, 0}, useAxisFlange = true, s(start = 0, fixed = true)) annotation(
    Placement(transformation(origin = {-54, -26}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.Body body1(m = 150, sphereDiameter = 0.2) annotation(
    Placement(transformation(origin = {-16, -26}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, 1, 0}, useAxisFlange = true, s(start = 0, fixed = true)) annotation(
    Placement(transformation(origin = {54, 4}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Revolute revolute(cylinderLength = 0.2, n = {0, 1, 0}, useAxisFlange = true) annotation(
    Placement(transformation(origin = {90, 4}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensorTop(get_a = true, get_r = true, get_v = true) annotation(
    Placement(transformation(origin = {134, 30}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.Body body(m = 100, sphereDiameter = 0.2) annotation(
    Placement(transformation(origin = {134, 4}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(density = 0, height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2) annotation(
    Placement(transformation(origin = {112, -38}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensorBottom(get_a = true, get_r = true, get_v = true) annotation(
    Placement(transformation(origin = {-36, -56}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar21(r = {0, 1, 0}, animation = true) annotation(
    Placement(transformation(origin = {10, -26}, extent = {{0, 20}, {20, 40}})));
  Modelica.Mechanics.Translational.Components.SpringDamper springDamper(c = 20, s_rel0 = 0, d = 10) annotation(
    Placement(transformation(origin = {54, 52}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.Translational.Components.IdealGearR2T idealGearR2T(ratio = 62.832) annotation(
    Placement(transformation(origin = {82, 71}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Mechanics.Rotational.Components.Inertia inertia(J = 0.24) annotation(
    Placement(transformation(origin = {110, 71}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Sine sine(amplitude = 0.1, f = 0.2) annotation(
    Placement(transformation(origin = {-133, -69}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.Translational.Sources.Position position annotation(
    Placement(transformation(origin = {-98, -68}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(world.frame_b, bar2.frame_a) annotation(
    Line(points = {{-122, -26}, {-108, -26}}, color = {95, 95, 95}));
  connect(prismatic1.frame_b, body1.frame_a) annotation(
    Line(points = {{-44, -26}, {-44, -27}, {-26, -27}, {-26, -26}}, color = {95, 95, 95}));
  connect(bar2.frame_b, prismatic1.frame_a) annotation(
    Line(points = {{-88, -26}, {-64, -26}}, color = {95, 95, 95}));
  connect(prismatic.frame_b, revolute.frame_a) annotation(
    Line(points = {{64, 4}, {80, 4}}, color = {95, 95, 95}));
  connect(absoluteSensorTop.frame_a, body.frame_a) annotation(
    Line(points = {{124, 30}, {124, 4}}, color = {95, 95, 95}));
  connect(body.frame_a, revolute.frame_b) annotation(
    Line(points = {{124, 4}, {100, 4}}, color = {95, 95, 95}));
  connect(absoluteSensorBottom.frame_a, body1.frame_a) annotation(
    Line(points = {{-26, -56}, {-26, -26}}, color = {95, 95, 95}));
  connect(prismatic.frame_a, bar21.frame_b) annotation(
    Line(points = {{44, 4}, {30, 4}}, color = {95, 95, 95}));
  connect(bar21.frame_a, body1.frame_a) annotation(
    Line(points = {{10, 4}, {-9, 4}, {-9, -26}, {-26, -26}}, color = {95, 95, 95}));
  connect(bodyBox.frame_a, body.frame_a) annotation(
    Line(points = {{112, -28}, {112, 4}, {124, 4}}, color = {95, 95, 95}));
  connect(springDamper.flange_a, prismatic.support) annotation(
    Line(points = {{44, 52}, {44, 10}, {50, 10}}, color = {0, 127, 0}));
  connect(springDamper.flange_b, prismatic.axis) annotation(
    Line(points = {{64, 52}, {66, 52}, {66, 10}, {62, 10}}, color = {0, 127, 0}));
  connect(inertia.flange_a, idealGearR2T.flangeR) annotation(
    Line(points = {{100, 71}, {92, 71}, {92, 72}}));
  connect(idealGearR2T.flangeT, prismatic.axis) annotation(
    Line(points = {{72, 72}, {62, 72}, {62, 10}}, color = {0, 127, 0}));
  connect(idealGearR2T.flangeR, revolute.axis) annotation(
    Line(points = {{92, 72}, {90, 72}, {90, 14}}));
  connect(sine.y, position.s_ref) annotation(
    Line(points = {{-122, -69}, {-110, -69}}, color = {0, 0, 127}));
  connect(position.flange, prismatic1.axis) annotation(
    Line(points = {{-88, -68}, {-46, -68}, {-46, -20}}, color = {0, 127, 0}));
  annotation(
    experiment(StartTime = 0, StopTime = 200, Tolerance = 1e-6, Interval = 0.002),
    uses(Modelica(version = "4.0.0")),
  Diagram(coordinateSystem(extent = {{-160, 60}, {160, -120}})),
  version = "");
end BuildingCase3Test2;
