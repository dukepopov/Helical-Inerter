model HelicalTwoBodyInerter
  inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity) annotation(
    Placement(transformation(origin = {-50, 46}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
    Placement(transformation(origin = {-26, 16}, extent = {{0, 20}, {20, 40}})));
  // Rotation angle in radians
  Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic1(n = {0, 1, 0}, useAxisFlange = true, s(start = 0, fixed = true)) annotation(
    Placement(transformation(origin = {24, 36}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.Translational.Components.Spring spring1(c = 10, s_rel0 = 0) annotation(
    Placement(transformation(origin = {50, 34}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Parts.Body body1(m = 100, sphereDiameter = 0.2) annotation(
    Placement(transformation(origin = {44, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, 1, 0}, useAxisFlange = true, s(start = 0, fixed = true)) annotation(
    Placement(transformation(origin = {24, -52}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Joints.Revolute revolute(cylinderLength = 0.2, n = {0, 1, 0}, useAxisFlange = true) annotation(
    Placement(transformation(origin = {24, -82}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor2(get_a = true, get_r = true, get_v = true) annotation(
    Placement(transformation(origin = {66, -102}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Parts.Body body(m = 150, sphereDiameter = 0.2, I_33 = 135) annotation(
    Placement(transformation(origin = {24, -112}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.Translational.Components.Spring spring(c = 20, s_rel(start = 0), s_rel0 = -1) annotation(
    Placement(transformation(origin = {50, -54}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(density = 0, height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2) annotation(
    Placement(transformation(origin = {-28, -112}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(get_a = true, get_r = true, get_v = true) annotation(
    Placement(transformation(origin = {-20, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar21(r = {0, 1, 0}, animation = false) annotation(
    Placement(transformation(origin = {-6, -14}, extent = {{0, 20}, {20, 40}}, rotation = -90)));
  Modelica.Mechanics.Translational.Components.IdealGearR2T idealGearR2T(ratio = 62.832) annotation(
    Placement(transformation(origin = {90, -82}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.Rotational.Components.Inertia inertia(J = 135) annotation(
    Placement(transformation(origin = {92, -112}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(world.frame_b, bar2.frame_a) annotation(
    Line(points = {{-40, 46}, {-26, 46}}, color = {95, 95, 95}));
  connect(prismatic1.frame_b, body1.frame_a) annotation(
    Line(points = {{24, 26}, {24, 13}, {34, 13}, {34, 0}}, color = {95, 95, 95}));
  connect(bar2.frame_b, prismatic1.frame_a) annotation(
    Line(points = {{-6, 46}, {24, 46}}, color = {95, 95, 95}));
  connect(spring1.flange_a, prismatic1.support) annotation(
    Line(points = {{50, 44}, {40, 44}, {40, 40}, {30, 40}}, color = {0, 127, 0}));
  connect(spring1.flange_b, prismatic1.axis) annotation(
    Line(points = {{50, 24}, {40, 24}, {40, 28}, {30, 28}}, color = {0, 127, 0}));
  connect(prismatic.frame_b, revolute.frame_a) annotation(
    Line(points = {{24, -62}, {24, -72}}, color = {95, 95, 95}));
  connect(absoluteSensor2.frame_a, body.frame_a) annotation(
    Line(points = {{56, -102}, {24, -102}}, color = {95, 95, 95}));
  connect(body.frame_a, revolute.frame_b) annotation(
    Line(points = {{24, -102}, {24, -92}}, color = {95, 95, 95}));
  connect(spring.flange_a, prismatic.support) annotation(
    Line(points = {{50, -44}, {41, -44}, {41, -48}, {30, -48}}, color = {0, 127, 0}));
  connect(spring.flange_b, prismatic.axis) annotation(
    Line(points = {{50, -64}, {41, -64}, {41, -60}, {30, -60}}, color = {0, 127, 0}));
  connect(absoluteSensor.frame_a, body1.frame_a) annotation(
    Line(points = {{-10, 0}, {34, 0}}, color = {95, 95, 95}));
  connect(prismatic.frame_a, bar21.frame_b) annotation(
    Line(points = {{24, -42}, {24, -34}}, color = {95, 95, 95}));
  connect(bar21.frame_a, body1.frame_a) annotation(
    Line(points = {{24, -14}, {24, 0}, {34, 0}}, color = {95, 95, 95}));
  connect(bodyBox.frame_a, body.frame_a) annotation(
    Line(points = {{-28, -102}, {24, -102}}, color = {95, 95, 95}));
  connect(idealGearR2T.flangeR, revolute.axis) annotation(
    Line(points = {{80, -82}, {34, -82}}));
  connect(idealGearR2T.flangeT, prismatic.axis) annotation(
    Line(points = {{100, -82}, {102, -82}, {102, -60}, {30, -60}}, color = {0, 127, 0}));
  connect(inertia.flange_a, idealGearR2T.flangeR) annotation(
    Line(points = {{82, -112}, {80, -112}, {80, -82}}));
  annotation(
    experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
    uses(Modelica(version = "4.0.0")),
    Diagram(coordinateSystem(extent = {{-60, 60}, {100, -140}})));
end HelicalTwoBodyInerter;
