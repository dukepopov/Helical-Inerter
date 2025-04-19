model BuildingCase2
  inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity) annotation(
    Placement(transformation(origin = {-190, -28}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
    Placement(transformation(origin = {-166, -58}, extent = {{0, 20}, {20, 40}})));
  // Rotation angle in radians
  Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic1(n = {0, 1, 0}, useAxisFlange = true, s(start = 0, fixed = true)) annotation(
    Placement(transformation(origin = {-112, -28}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.Body body1(m = 10, sphereDiameter = 0.2) annotation(
    Placement(transformation(origin = {-60, -28}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, 1, 0}, useAxisFlange = true, s(start = 0, fixed = true)) annotation(
    Placement(transformation(origin = {116, 10}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Revolute revolute(cylinderLength = 0.2, n = {0, 1, 0}, useAxisFlange = true) annotation(
    Placement(transformation(origin = {152, 10}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensorTop(get_a = true, get_r = true, get_v = true) annotation(
    Placement(transformation(origin = {196, 36}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.Body body(m = 100, sphereDiameter = 0.2) annotation(
    Placement(transformation(origin = {196, 10}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(density = 0, height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2) annotation(
    Placement(transformation(origin = {174, -32}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensorBottom(get_a = true, get_r = true, get_v = true) annotation(
    Placement(transformation(origin = {-94, -58}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar21(r = {0, 0.5, 0}, animation = false) annotation(
    Placement(transformation(origin = {-28, -58}, extent = {{0, 20}, {20, 40}})));
  Modelica.Mechanics.Translational.Components.SpringDamper springDamper(c = 80, d = 100, s_rel0 = 0) annotation(
    Placement(transformation(origin = {116, 58}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.Body body11(m = 15, sphereDiameter = 0.2) annotation(
    Placement(transformation(origin = {44, -38}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar211(r = {0, 0.5, 0}, animation = false) annotation(
    Placement(transformation(origin = {54, -26}, extent = {{0, 20}, {20, 40}})));
  Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic2(n = {0, 1, 0}, s(fixed = true, start = 0), useAxisFlange = true) annotation(
    Placement(transformation(origin = {12, -28}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.Translational.Components.SpringDamper springDamper1(c = 80, d = 100, s_rel0 = 0) annotation(
    Placement(transformation(origin = {14, 2}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensorTMD(get_a = true, get_r = true, get_v = true) annotation(
    Placement(transformation(origin = {74, -46}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.Translational.Components.Spring spring(c = 80) annotation(
    Placement(transformation(origin = {-110, -7}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Sources.Sine sine1[3](amplitude = {0, 1, 0}, f = {0, 1, 0}) annotation(
    Placement(transformation(origin = {-125, -97}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Forces.WorldForce force1 annotation(
    Placement(transformation(origin = {-89, -96}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(world.frame_b, bar2.frame_a) annotation(
    Line(points = {{-180, -28}, {-166, -28}}, color = {95, 95, 95}));
  connect(prismatic1.frame_b, body1.frame_a) annotation(
    Line(points = {{-102, -28}, {-102, -29}, {-70, -29}, {-70, -28}}, color = {95, 95, 95}));
  connect(bar2.frame_b, prismatic1.frame_a) annotation(
    Line(points = {{-146, -28}, {-122, -28}}, color = {95, 95, 95}));
  connect(prismatic.frame_b, revolute.frame_a) annotation(
    Line(points = {{126, 10}, {142, 10}}, color = {95, 95, 95}));
  connect(absoluteSensorTop.frame_a, body.frame_a) annotation(
    Line(points = {{186, 36}, {186, 10}}, color = {95, 95, 95}));
  connect(body.frame_a, revolute.frame_b) annotation(
    Line(points = {{186, 10}, {162, 10}}, color = {95, 95, 95}));
  connect(absoluteSensorBottom.frame_a, body1.frame_a) annotation(
    Line(points = {{-84, -58}, {-84, -43}, {-70, -43}, {-70, -28}}, color = {95, 95, 95}));
  connect(bar21.frame_a, body1.frame_a) annotation(
    Line(points = {{-28, -28}, {-70, -28}}, color = {95, 95, 95}));
  connect(bodyBox.frame_a, body.frame_a) annotation(
    Line(points = {{174, -22}, {174, 10}, {186, 10}}, color = {95, 95, 95}));
  connect(springDamper.flange_a, prismatic.support) annotation(
    Line(points = {{106, 58}, {106, 16}, {112, 16}}, color = {0, 127, 0}));
  connect(springDamper.flange_b, prismatic.axis) annotation(
    Line(points = {{126, 58}, {128, 58}, {128, 16}, {124, 16}}, color = {0, 127, 0}));
  connect(bar21.frame_b, prismatic2.frame_a) annotation(
    Line(points = {{-8, -28}, {2, -28}}, color = {95, 95, 95}));
  connect(prismatic2.support, springDamper1.flange_a) annotation(
    Line(points = {{8, -22}, {4, -22}, {4, 2}}, color = {0, 127, 0}));
  connect(springDamper1.flange_b, prismatic2.axis) annotation(
    Line(points = {{24, 2}, {28, 2}, {28, -22}, {20, -22}}, color = {0, 127, 0}));
  connect(prismatic2.frame_b, body11.frame_a) annotation(
    Line(points = {{22, -28}, {44, -28}}, color = {95, 95, 95}));
  connect(body11.frame_a, bar211.frame_a) annotation(
    Line(points = {{44, -28}, {44, 4}, {54, 4}}, color = {95, 95, 95}));
  connect(bar211.frame_b, prismatic.frame_a) annotation(
    Line(points = {{74, 4}, {106, 4}, {106, 10}}, color = {95, 95, 95}));
  connect(absoluteSensorTMD.frame_a, body11.frame_a) annotation(
    Line(points = {{64, -46}, {56, -46}, {56, -28}, {44, -28}}, color = {95, 95, 95}));
  connect(spring.flange_a, prismatic1.support) annotation(
    Line(points = {{-120, -6}, {-122, -6}, {-122, -22}, {-116, -22}}, color = {0, 127, 0}));
  connect(spring.flange_b, prismatic1.axis) annotation(
    Line(points = {{-100, -6}, {-96, -6}, {-96, -22}, {-104, -22}}, color = {0, 127, 0}));
  connect(sine1.y, force1.force) annotation(
    Line(points = {{-114, -97}, {-102, -97}, {-102, -95}}, color = {0, 0, 127}, thickness = 0.5));
  connect(force1.frame_b, body1.frame_a) annotation(
    Line(points = {{-78, -96}, {-70, -96}, {-70, -28}}, color = {95, 95, 95}));
  annotation(
    experiment(StartTime = 0, StopTime = 200, Tolerance = 1e-6, Interval = 0.002),
    uses(Modelica(version = "4.0.0")),
    Diagram(coordinateSystem(extent = {{-220, 80}, {220, -120}})),
    version = "");
end BuildingCase2;
