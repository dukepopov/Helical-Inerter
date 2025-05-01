package HelicalInerterPackage
  model HelicalSingleBody
    inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity) annotation(
      Placement(transformation(origin = {-60, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body body2(m = 100, r_CM = {0, 0, 0}, sphereDiameter = 0.2) annotation(
      Placement(transformation(origin = {24, -46}, extent = {{-10, 10}, {10, -10}}, rotation = 270)));
    Modelica.Mechanics.MultiBody.Forces.Spring spring2(c = 10, width = 0.1, s_unstretched = 0) annotation(
      Placement(transformation(origin = {48, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(origin = {-24, -2}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, 1, 0}, useAxisFlange = true, s(start = 1)) annotation(
      Placement(transformation(origin = {24, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(get_a = true, get_r = true, get_v = true) annotation(
      Placement(transformation(origin = {72, -30}, extent = {{-10, -10}, {10, 10}})));
  equation
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-50, 28}, {-24, 28}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic.frame_a) annotation(
      Line(points = {{-4, 28}, {22, 28}, {22, 0}, {24, 0}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, body2.frame_a) annotation(
      Line(points = {{24, -20}, {24, -36}}, color = {95, 95, 95}));
    connect(spring2.frame_a, bar2.frame_b) annotation(
      Line(points = {{48, 0}, {48, 28}, {-4, 28}}, color = {95, 95, 95}));
    connect(spring2.frame_b, body2.frame_a) annotation(
      Line(points = {{48, -20}, {48, -36}, {24, -36}}, color = {95, 95, 95}));
    connect(body2.frame_a, absoluteSensor.frame_a) annotation(
      Line(points = {{24, -36}, {43, -36}, {43, -30}, {62, -30}}, color = {95, 95, 95}));
    annotation(
      experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram);
  end HelicalSingleBody;

  model InerterForce
    extends Modelica.Blocks.Icons.Block;
    // Inputs
    Modelica.Blocks.Interfaces.RealInput a1[3] "Linear acceleration vector [m/s²]" annotation(
      Placement(transformation(origin = {-120, 84}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-118, 82}, extent = {{-20, -20}, {20, 20}})));
    Modelica.Blocks.Interfaces.RealInput a2[3] "Linear acceleration vector [m/s²]" annotation(
      Placement(transformation(origin = {-120, 36}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-118, 28}, extent = {{-20, -20}, {20, 20}})));
    // Output
    Modelica.Blocks.Interfaces.RealOutput F[3] "Inertial force vector [N]" annotation(
      Placement(transformation(origin = {110, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {110, 0}, extent = {{-10, -10}, {10, 10}})));
    // Parameter for inertance
    parameter Real inertance = 5 "Inertance value";
  equation
// Inertial force calculation based on the difference in accelerations
    F = -inertance*(a1 - a2);
  end InerterForce;

  model SingleBodyInerter
    inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.UniformGravity) annotation(
      Placement(transformation(origin = {-36, 30}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body body2(m = 1, r_CM = {0, 0, 0}, sphereDiameter = 0.2) annotation(
      Placement(transformation(origin = {24, -40}, extent = {{-10, 10}, {10, -10}}, rotation = 270)));
    Modelica.Mechanics.MultiBody.Forces.Spring spring2(c = 30, width = 0.1, s_unstretched = 0.1) annotation(
      Placement(transformation(origin = {48, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, -1, 0}, useAxisFlange = true, s(start = 0.1)) annotation(
      Placement(transformation(origin = {24, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(get_a = true) annotation(
      Placement(transformation(origin = {72, -30}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor1(get_a = true) annotation(
      Placement(transformation(origin = {72, 62}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Forces.Force force annotation(
      Placement(transformation(origin = {-20, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    InerterForce inerterForce annotation(
      Placement(transformation(origin = {72, 22}, extent = {{-10, -10}, {10, 10}})));
  equation
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-26, 30}, {0, 30}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic.frame_a) annotation(
      Line(points = {{20, 30}, {24, 30}, {24, 0}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, body2.frame_a) annotation(
      Line(points = {{24, -20}, {24, -30}}, color = {95, 95, 95}));
    connect(spring2.frame_a, bar2.frame_b) annotation(
      Line(points = {{48, 0}, {48, 30}, {20, 30}}, color = {95, 95, 95}));
    connect(spring2.frame_b, body2.frame_a) annotation(
      Line(points = {{48, -20}, {48, -30}, {24, -30}}, color = {95, 95, 95}));
    connect(body2.frame_a, absoluteSensor.frame_a) annotation(
      Line(points = {{24, -30}, {62, -30}}, color = {95, 95, 95}));
    connect(bar2.frame_b, absoluteSensor1.frame_a) annotation(
      Line(points = {{20, 30}, {20, 41}, {62, 41}, {62, 62}}, color = {95, 95, 95}));
    connect(force.frame_a, bar2.frame_b) annotation(
      Line(points = {{-20, 0}, {-20, 14}, {24, 14}, {24, 30}, {20, 30}}, color = {95, 95, 95}));
    connect(force.frame_b, body2.frame_a) annotation(
      Line(points = {{-20, -20}, {-20, -30}, {24, -30}}, color = {95, 95, 95}));
    connect(absoluteSensor.a, inerterForce.a1) annotation(
      Line(points = {{70, -40}, {92, -40}, {92, 4}, {52, 4}, {52, 30}, {60, 30}}, color = {0, 0, 127}, thickness = 0.5));
    connect(absoluteSensor1.a, inerterForce.a2) annotation(
      Line(points = {{70, 51}, {70, 24}, {60, 24}}, color = {0, 0, 127}, thickness = 0.5));
    connect(inerterForce.F, force.force) annotation(
      Line(points = {{84, 22}, {90, 22}, {90, 8}, {-2, 8}, {-2, -4}, {-8, -4}}, color = {0, 0, 127}, thickness = 0.5));
    annotation(
      experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")));
  end SingleBodyInerter;

  model TwoBodyInerter
    inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity) annotation(
      Placement(transformation(origin = {-34, 30}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Forces.Spring spring2(c = 30, s_unstretched = 0.1, width = 0.1, animation = false) annotation(
      Placement(transformation(origin = {48, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, -1, 0}, s(start = 0.15), useAxisFlange = true) annotation(
      Placement(transformation(origin = {24, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor1(get_a = true) annotation(
      Placement(transformation(origin = {88, -86}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic1(n = {0, -1.5, 0}, useAxisFlange = true, s(start = 0.1)) annotation(
      Placement(transformation(origin = {24, -68}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Parts.Body body(r_CM = {0, 0, 0}, m = 1, sphereDiameter = 0.06) annotation(
      Placement(transformation(origin = {24, -96}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Forces.Spring spring21(c = 30, s_unstretched = 0.1, width = 0.1, animation = false) annotation(
      Placement(transformation(origin = {54, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
    Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(r = {0, -0.01, 0}, length = 0.06, width = 0.06, height = 0.06) annotation(
      Placement(transformation(origin = {24, -38}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor2(get_a = true) annotation(
      Placement(transformation(origin = {86, -48}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Forces.Force force annotation(
      Placement(transformation(origin = {-34, -70}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    InerterForce inerterForce annotation(
      Placement(transformation(origin = {-50, -40}, extent = {{-10, -10}, {10, 10}})));
  equation
    connect(bar2.frame_b, prismatic.frame_a) annotation(
      Line(points = {{20, 30}, {24, 30}, {24, 0}}, color = {95, 95, 95}));
    connect(spring2.frame_a, bar2.frame_b) annotation(
      Line(points = {{48, 0}, {48, 30}, {20, 30}}, color = {95, 95, 95}));
    connect(bar2.frame_a, world.frame_b) annotation(
      Line(points = {{0, 30}, {-24, 30}}, color = {95, 95, 95}));
    connect(body.frame_a, prismatic1.frame_b) annotation(
      Line(points = {{24, -86}, {24, -78}}, color = {95, 95, 95}));
    connect(spring21.frame_b, body.frame_a) annotation(
      Line(points = {{54, -80}, {54, -86}, {24, -86}}, color = {95, 95, 95}));
    connect(body.frame_a, absoluteSensor1.frame_a) annotation(
      Line(points = {{24, -86}, {78, -86}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, bodyBox.frame_a) annotation(
      Line(points = {{24, -20}, {24, -28}}, color = {95, 95, 95}));
    connect(bodyBox.frame_b, prismatic1.frame_a) annotation(
      Line(points = {{24, -48}, {24, -58}}, color = {95, 95, 95}));
    connect(spring21.frame_a, bodyBox.frame_b) annotation(
      Line(points = {{54, -60}, {54, -48}, {24, -48}}, color = {95, 95, 95}));
    connect(spring2.frame_b, bodyBox.frame_b) annotation(
      Line(points = {{48, -20}, {48, -48}, {24, -48}}, color = {95, 95, 95}));
    connect(absoluteSensor2.frame_a, bodyBox.frame_b) annotation(
      Line(points = {{76, -48}, {24, -48}}, color = {95, 95, 95}));
    connect(absoluteSensor1.a, inerterForce.a1) annotation(
      Line(points = {{86, -96}, {88, -96}, {88, -116}, {-82, -116}, {-82, -32}, {-62, -32}}, color = {0, 0, 127}, thickness = 0.5));
    connect(absoluteSensor2.a, inerterForce.a2) annotation(
      Line(points = {{84, -58}, {68, -58}, {68, -108}, {-76, -108}, {-76, -38}, {-62, -38}}, color = {0, 0, 127}, thickness = 0.5));
    connect(inerterForce.F, force.force) annotation(
      Line(points = {{-38, -40}, {-12, -40}, {-12, -64}, {-22, -64}}, color = {0, 0, 127}, thickness = 0.5));
    connect(force.frame_a, bodyBox.frame_b) annotation(
      Line(points = {{-34, -60}, {-34, -54}, {24, -54}, {24, -48}}, color = {95, 95, 95}));
    connect(force.frame_b, body.frame_a) annotation(
      Line(points = {{-34, -80}, {-34, -86}, {24, -86}}, color = {95, 95, 95}));
    annotation(
      experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-80, 40}, {120, -120}})),
      version = "");
  end TwoBodyInerter;

  model LeadScrew
    parameter Real lead = 0.5;
    // Lead of 50 cm per 2π rotation
    extends Modelica.Blocks.Icons.Block;
    // Input
    Modelica.Blocks.Interfaces.RealInput s "Linear displacement vector [m]" annotation(
      Placement(transformation(origin = {-120, 84}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-118, 82}, extent = {{-20, -20}, {20, 20}})));
    // Output
    Modelica.Blocks.Interfaces.RealOutput F "Inertial force vector [N]" annotation(
      Placement(transformation(origin = {110, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {110, 0}, extent = {{-10, -10}, {10, 10}})));
    Real angle;
    // Rotation angle in radians
  equation
    angle = (2*Modelica.Constants.pi/lead)*s;
    F = angle;
  end LeadScrew;

  model HelicalSingleBodyTest
    inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.UniformGravity) annotation(
      Placement(transformation(origin = {-60, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Forces.Spring spring2(c = 100, width = 0.1, s_unstretched = 0.1) annotation(
      Placement(transformation(origin = {64, 18}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(origin = {-24, -2}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, -1, 0}, useAxisFlange = true, s(start = 0.1)) annotation(
      Placement(transformation(origin = {24, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Joints.Revolute revolute(useAxisFlange = true, cylinderLength = 0.2, n = {0, 1, 0}) annotation(
      Placement(transformation(origin = {24, -40}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.Rotational.Sources.Position position annotation(
      Placement(transformation(origin = {80, -42}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
    // Rotation angle in radians
    Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2) annotation(
      Placement(transformation(origin = {24, -66}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    LeadScrew leadScrew annotation(
      Placement(transformation(origin = {88, -12}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(get_a = true) annotation(
      Placement(transformation(origin = {132, -42}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor1(get_a = true) annotation(
      Placement(transformation(origin = {106, 48}, extent = {{-10, -10}, {10, 10}})));
  equation
// Send [0, prismatic.s, 0] to leadScrew.u_abs
    leadScrew.s = prismatic.s;
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-50, 28}, {-24, 28}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic.frame_a) annotation(
      Line(points = {{-4, 28}, {22, 28}, {22, 0}, {24, 0}}, color = {95, 95, 95}));
    connect(spring2.frame_a, bar2.frame_b) annotation(
      Line(points = {{64, 28}, {-4, 28}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, revolute.frame_a) annotation(
      Line(points = {{24, -20}, {24, -30}}, color = {95, 95, 95}));
    connect(position.flange, revolute.axis) annotation(
      Line(points = {{70, -42}, {34, -42}, {34, -40}}));
    connect(bodyBox.frame_a, revolute.frame_b) annotation(
      Line(points = {{24, -56}, {24, -50}}, color = {95, 95, 95}));
    connect(bodyBox.frame_b, spring2.frame_b) annotation(
      Line(points = {{24, -76}, {64, -76}, {64, 8}}, color = {95, 95, 95}));
    connect(leadScrew.F, position.phi_ref) annotation(
      Line(points = {{99, -12}, {98, -12}, {98, -42}, {92, -42}}, color = {0, 0, 127}));
    connect(absoluteSensor1.frame_a, bar2.frame_b) annotation(
      Line(points = {{96, 48}, {4, 48}, {4, 28}, {-4, 28}}, color = {95, 95, 95}));
    connect(absoluteSensor.frame_a, bodyBox.frame_a) annotation(
      Line(points = {{122, -42}, {102, -42}, {102, -56}, {24, -56}}, color = {95, 95, 95}));
    annotation(
      experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-100, 60}, {180, -100}})));
  end HelicalSingleBodyTest;

  model HelicalSingleBodyTest2
    inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.UniformGravity) annotation(
      Placement(transformation(origin = {-60, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Forces.Spring spring2(c = 100, width = 0.1, s_unstretched = 0.1) annotation(
      Placement(transformation(origin = {64, 18}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(origin = {-24, -2}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, -1, 0}, useAxisFlange = true, s(start = 0.1)) annotation(
      Placement(transformation(origin = {24, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Joints.Revolute revolute(useAxisFlange = true, cylinderLength = 0.2, n = {0, 1, 0}) annotation(
      Placement(transformation(origin = {24, -40}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.Rotational.Sources.Position position annotation(
      Placement(transformation(origin = {80, -42}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
    // Rotation angle in radians
    Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2) annotation(
      Placement(transformation(origin = {24, -66}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    LeadScrew leadScrew annotation(
      Placement(transformation(origin = {80, -10}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(get_a = true) annotation(
      Placement(transformation(origin = {132, -42}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor1(get_a = true) annotation(
      Placement(transformation(origin = {106, 48}, extent = {{-10, -10}, {10, 10}})));
    HelicalInerterPackage.InerterForce inerterForce annotation(
      Placement(transformation(origin = {138, 10}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Forces.Force force annotation(
      Placement(transformation(origin = {-78, -86}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  equation
// Send [0, prismatic.s, 0] to leadScrew.u_abs
    leadScrew.s = prismatic.s;
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-50, 28}, {-24, 28}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic.frame_a) annotation(
      Line(points = {{-4, 28}, {22, 28}, {22, 0}, {24, 0}}, color = {95, 95, 95}));
    connect(spring2.frame_a, bar2.frame_b) annotation(
      Line(points = {{64, 28}, {-4, 28}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, revolute.frame_a) annotation(
      Line(points = {{24, -20}, {24, -30}}, color = {95, 95, 95}));
    connect(position.flange, revolute.axis) annotation(
      Line(points = {{70, -42}, {34, -42}, {34, -40}}));
    connect(bodyBox.frame_a, revolute.frame_b) annotation(
      Line(points = {{24, -56}, {24, -50}}, color = {95, 95, 95}));
    connect(bodyBox.frame_b, spring2.frame_b) annotation(
      Line(points = {{24, -76}, {64, -76}, {64, 8}}, color = {95, 95, 95}));
    connect(leadScrew.F, position.phi_ref) annotation(
      Line(points = {{92, -10}, {98, -10}, {98, -42}, {92, -42}}, color = {0, 0, 127}));
    connect(absoluteSensor.a, inerterForce.a1) annotation(
      Line(points = {{130, -53}, {152, -53}, {152, -9}, {112, -9}, {112, 18}, {126, 18}}, color = {0, 0, 127}, thickness = 0.5));
    connect(absoluteSensor1.frame_a, bar2.frame_b) annotation(
      Line(points = {{96, 48}, {4, 48}, {4, 28}, {-4, 28}}, color = {95, 95, 95}));
    connect(absoluteSensor.frame_a, bodyBox.frame_a) annotation(
      Line(points = {{122, -42}, {102, -42}, {102, -56}, {24, -56}}, color = {95, 95, 95}));
    connect(absoluteSensor1.a, inerterForce.a2) annotation(
      Line(points = {{104, 37}, {104, 27}, {126, 27}, {126, 13}}, color = {0, 0, 127}, thickness = 0.5));
    connect(force.frame_a, bar2.frame_b) annotation(
      Line(points = {{-78, -76}, {-78, -10}, {-4, -10}, {-4, 28}}, color = {95, 95, 95}));
    connect(force.frame_b, bodyBox.frame_a) annotation(
      Line(points = {{-78, -96}, {-6, -96}, {-6, -56}, {24, -56}}, color = {95, 95, 95}));
    connect(inerterForce.F, force.force) annotation(
      Line(points = {{149, 10}, {180, 10}, {180, -80}, {-66, -80}}, color = {0, 0, 127}, thickness = 0.5));
    annotation(
      experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-100, 60}, {180, -100}})));
  end HelicalSingleBodyTest2;

  model InerterForce2
    extends Modelica.Blocks.Icons.Block;
    // Inputs
    Modelica.Blocks.Interfaces.RealInput a1[3] "Linear acceleration vector [m/s²]" annotation(
      Placement(transformation(origin = {-120, 84}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-118, 82}, extent = {{-20, -20}, {20, 20}})));
    Modelica.Blocks.Interfaces.RealInput a2[3] "Linear acceleration vector [m/s²]" annotation(
      Placement(transformation(origin = {-120, 36}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-118, 28}, extent = {{-20, -20}, {20, 20}})));
    // Output
    Modelica.Blocks.Interfaces.RealOutput F[3] "Inertial force vector [N]" annotation(
      Placement(transformation(origin = {110, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {110, 0}, extent = {{-10, -10}, {10, 10}})));
    // Parameter for inertance
    parameter Real inertance = 12.566 "Inertance value";
  equation
// Inertial force calculation based on the difference in accelerations
    F = -inertance*(a1 - a2);
  end InerterForce2;

  model HelicalSingleBodySphere1
    inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.UniformGravity) annotation(
      Placement(transformation(origin = {-60, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Forces.Spring spring2(c = 30, width = 0.1, s_unstretched = 0.1) annotation(
      Placement(transformation(origin = {64, 18}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(origin = {-24, -2}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, -1, 0}, useAxisFlange = true, s(start = 0.1)) annotation(
      Placement(transformation(origin = {24, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Joints.Revolute revolute(useAxisFlange = true, cylinderLength = 0.2, n = {0, 1, 0}) annotation(
      Placement(transformation(origin = {24, -40}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.Rotational.Sources.Position position annotation(
      Placement(transformation(origin = {80, -42}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
    // Rotation angle in radians
    LeadScrew leadScrew annotation(
      Placement(transformation(origin = {88, -12}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(get_a = true) annotation(
      Placement(transformation(origin = {132, -42}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor1(get_a = true) annotation(
      Placement(transformation(origin = {106, 48}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body body(m = 5, sphereDiameter = 0.2, I_11 = 0.08, I_22 = 0.08, I_33 = 0.08) annotation(
      Placement(transformation(origin = {24, -76}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  equation
// Send [0, prismatic.s, 0] to leadScrew.u_abs
    leadScrew.s = prismatic.s;
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-50, 28}, {-24, 28}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic.frame_a) annotation(
      Line(points = {{-4, 28}, {22, 28}, {22, 0}, {24, 0}}, color = {95, 95, 95}));
    connect(spring2.frame_a, bar2.frame_b) annotation(
      Line(points = {{64, 28}, {-4, 28}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, revolute.frame_a) annotation(
      Line(points = {{24, -20}, {24, -30}}, color = {95, 95, 95}));
    connect(position.flange, revolute.axis) annotation(
      Line(points = {{70, -42}, {34, -42}, {34, -40}}));
    connect(leadScrew.F, position.phi_ref) annotation(
      Line(points = {{99, -12}, {98, -12}, {98, -42}, {92, -42}}, color = {0, 0, 127}));
    connect(absoluteSensor1.frame_a, bar2.frame_b) annotation(
      Line(points = {{96, 48}, {4, 48}, {4, 28}, {-4, 28}}, color = {95, 95, 95}));
    connect(body.frame_a, revolute.frame_b) annotation(
      Line(points = {{24, -66}, {24, -50}}, color = {95, 95, 95}));
    connect(spring2.frame_b, body.frame_a) annotation(
      Line(points = {{64, 8}, {64, -66}, {24, -66}}, color = {95, 95, 95}));
    connect(absoluteSensor.frame_a, body.frame_a) annotation(
      Line(points = {{122, -42}, {122, -66}, {24, -66}}, color = {95, 95, 95}));
    annotation(
      experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-100, 60}, {180, -100}})));
  end HelicalSingleBodySphere1;

  model HelicalSingleBodySphere2
    inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.UniformGravity) annotation(
      Placement(transformation(origin = {-42, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Forces.Spring spring2(c = 100, width = 0.1, s_unstretched = 0.1) annotation(
      Placement(transformation(origin = {44, 18}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(origin = {-24, -2}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, -1, 0}, useAxisFlange = true, s(start = 0.1)) annotation(
      Placement(transformation(origin = {24, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Joints.Revolute revolute(useAxisFlange = true, cylinderLength = 0.2, n = {0, 1, 0}) annotation(
      Placement(transformation(origin = {24, -40}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.Rotational.Sources.Position position annotation(
      Placement(transformation(origin = {66, -42}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
    // Rotation angle in radians
    LeadScrew leadScrew annotation(
      Placement(transformation(origin = {66, -10}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(get_a = true) annotation(
      Placement(transformation(origin = {112, -60}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor1(get_a = true) annotation(
      Placement(transformation(origin = {86, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Forces.Force force annotation(
      Placement(transformation(origin = {-4, -90}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Parts.Body body(I_33 = 10, m = 25, sphereDiameter = 0.2) annotation(
      Placement(transformation(origin = {24, -70}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    InerterForce2 inerterForce2 annotation(
      Placement(transformation(origin = {104, -36}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2, density = 0) annotation(
      Placement(transformation(origin = {24, -102}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor Results(get_a = true, get_r = true, get_v = true) annotation(
      Placement(transformation(origin = {-54, -75}, extent = {{-10, -10}, {10, 10}})));
  equation
// Send [0, prismatic.s, 0] to leadScrew.u_abs
    leadScrew.s = prismatic.s;
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-32, 28}, {-24, 28}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic.frame_a) annotation(
      Line(points = {{-4, 28}, {22, 28}, {22, 0}, {24, 0}}, color = {95, 95, 95}));
    connect(spring2.frame_a, bar2.frame_b) annotation(
      Line(points = {{44, 28}, {-4, 28}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, revolute.frame_a) annotation(
      Line(points = {{24, -20}, {24, -30}}, color = {95, 95, 95}));
    connect(position.flange, revolute.axis) annotation(
      Line(points = {{56, -42}, {36, -42}, {36, -40}, {34, -40}}));
    connect(leadScrew.F, position.phi_ref) annotation(
      Line(points = {{77, -10}, {78, -10}, {78, -42}}, color = {0, 0, 127}));
    connect(absoluteSensor1.frame_a, bar2.frame_b) annotation(
      Line(points = {{76, 28}, {-4, 28}}, color = {95, 95, 95}));
    connect(force.frame_a, bar2.frame_b) annotation(
      Line(points = {{-4, -80}, {-4, 28}}, color = {95, 95, 95}));
    connect(force.frame_b, body.frame_a) annotation(
      Line(points = {{-4, -100}, {8, -100}, {8, -60}, {24, -60}}, color = {95, 95, 95}));
    connect(spring2.frame_b, body.frame_a) annotation(
      Line(points = {{44, 8}, {44, -60}, {24, -60}}, color = {95, 95, 95}));
    connect(absoluteSensor.frame_a, body.frame_a) annotation(
      Line(points = {{102, -60}, {24, -60}}, color = {95, 95, 95}));
    connect(body.frame_a, revolute.frame_b) annotation(
      Line(points = {{24, -60}, {24, -50}}, color = {95, 95, 95}));
    connect(absoluteSensor.a, inerterForce2.a1) annotation(
      Line(points = {{110, -71}, {88, -71}, {88, -28}, {92, -28}}, color = {0, 0, 127}, thickness = 0.5));
    connect(absoluteSensor1.a, inerterForce2.a2) annotation(
      Line(points = {{84, 17}, {84, -33}, {92, -33}}, color = {0, 0, 127}, thickness = 0.5));
    connect(inerterForce2.F, force.force) annotation(
      Line(points = {{115, -36}, {124, -36}, {124, -84}, {8, -84}}, color = {0, 0, 127}, thickness = 0.5));
    connect(bodyBox.frame_a, body.frame_a) annotation(
      Line(points = {{24, -92}, {24, -60}}, color = {95, 95, 95}));
  connect(Results.frame_a, body.frame_a) annotation(
      Line(points = {{-64, -74}, {-64, -60}, {24, -60}}, color = {95, 95, 95}));
    annotation(
      experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-80, 60}, {160, -120}})));
  end HelicalSingleBodySphere2;

  model GearTest
    inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.UniformGravity) annotation(
      Placement(transformation(origin = {-60, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(origin = {-24, -2}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, -1, 0}, useAxisFlange = true, s(start = 0.1)) annotation(
      Placement(transformation(origin = {24, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Joints.Revolute revolute(useAxisFlange = true, cylinderLength = 0.2, n = {0, 1, 0}) annotation(
      Placement(transformation(origin = {24, -40}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    // Rotation angle in radians
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(get_a = true) annotation(
      Placement(transformation(origin = {132, -60}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor1(get_a = true) annotation(
      Placement(transformation(origin = {106, 48}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body body(I_33 = 0.08, m = 5, sphereDiameter = 0.2) annotation(
      Placement(transformation(origin = {24, -70}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2, density = 0) annotation(
      Placement(transformation(origin = {-12, -70}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.Rotational.Components.IdealGearR2T idealGearR2T(ratio = 12.566, useSupportT = false) annotation(
      Placement(transformation(origin = {80, -40}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.Translational.Components.Spring spring(c = 30, s_rel0 = 0.1) annotation(
      Placement(transformation(origin = {72, -2}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  equation
// Send [0, prismatic.s, 0] to leadScrew.u_abs
//  leadScrew.s = prismatic.s;
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-50, 28}, {-24, 28}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic.frame_a) annotation(
      Line(points = {{-4, 28}, {22, 28}, {22, 0}, {24, 0}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, revolute.frame_a) annotation(
      Line(points = {{24, -20}, {24, -30}}, color = {95, 95, 95}));
    connect(absoluteSensor1.frame_a, bar2.frame_b) annotation(
      Line(points = {{96, 48}, {4, 48}, {4, 28}, {-4, 28}}, color = {95, 95, 95}));
    connect(absoluteSensor.frame_a, body.frame_a) annotation(
      Line(points = {{122, -60}, {24, -60}}, color = {95, 95, 95}));
    connect(body.frame_a, revolute.frame_b) annotation(
      Line(points = {{24, -60}, {24, -50}}, color = {95, 95, 95}));
    connect(bodyBox.frame_a, body.frame_a) annotation(
      Line(points = {{-12, -60}, {24, -60}}, color = {95, 95, 95}));
    connect(revolute.axis, idealGearR2T.flangeR) annotation(
      Line(points = {{34, -40}, {70, -40}}));
    connect(idealGearR2T.flangeT, prismatic.axis) annotation(
      Line(points = {{90, -40}, {90, -18}, {30, -18}}, color = {0, 127, 0}));
    connect(spring.flange_a, prismatic.support) annotation(
      Line(points = {{72, 8}, {30, 8}, {30, -6}}, color = {0, 127, 0}));
    connect(spring.flange_b, prismatic.axis) annotation(
      Line(points = {{72, -12}, {72, -18}, {30, -18}}, color = {0, 127, 0}));
    annotation(
      experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-80, 60}, {160, -120}})));
  end GearTest;

  model GearTest2
    inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.UniformGravity) annotation(
      Placement(transformation(origin = {-48, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(origin = {-24, -2}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, -1, 0}, useAxisFlange = true, s(start = 0.1)) annotation(
      Placement(transformation(origin = {24, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Joints.Revolute revolute(useAxisFlange = true, cylinderLength = 0.2, n = {0, 1, 0}) annotation(
      Placement(transformation(origin = {24, -40}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    // Rotation angle in radians
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(get_a = true) annotation(
      Placement(transformation(origin = {52, -60}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor1(get_a = true) annotation(
      Placement(transformation(origin = {78, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body body(sphereDiameter = 0.2, m = 5) annotation(
      Placement(transformation(origin = {24, -70}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2, density = 0) annotation(
      Placement(transformation(origin = {-4, -70}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.Rotational.Components.IdealGearR2T idealGearR2T(ratio = 12.566) annotation(
      Placement(transformation(origin = {80, -40}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.Translational.Components.Spring spring(c = 100, s_rel0 = 0.1) annotation(
      Placement(transformation(origin = {50, -12}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.Rotational.Components.Inertia inertia(J = 10) annotation(
      Placement(transformation(origin = {80, -70}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor Results(get_a = true, get_r = true, get_v = true) annotation(
      Placement(transformation(origin = {-53, -65}, extent = {{-10, -10}, {10, 10}})));
  equation
// Send [0, prismatic.s, 0] to leadScrew.u_abs
//  leadScrew.s = prismatic.s;
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-38, 28}, {-24, 28}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic.frame_a) annotation(
      Line(points = {{-4, 28}, {22, 28}, {22, 0}, {24, 0}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, revolute.frame_a) annotation(
      Line(points = {{24, -20}, {24, -30}}, color = {95, 95, 95}));
    connect(absoluteSensor1.frame_a, bar2.frame_b) annotation(
      Line(points = {{68, 28}, {-4, 28}}, color = {95, 95, 95}));
    connect(absoluteSensor.frame_a, body.frame_a) annotation(
      Line(points = {{42, -60}, {24, -60}}, color = {95, 95, 95}));
    connect(body.frame_a, revolute.frame_b) annotation(
      Line(points = {{24, -60}, {24, -50}}, color = {95, 95, 95}));
    connect(bodyBox.frame_a, body.frame_a) annotation(
      Line(points = {{-4, -60}, {24, -60}}, color = {95, 95, 95}));
    connect(revolute.axis, idealGearR2T.flangeR) annotation(
      Line(points = {{34, -40}, {70, -40}}));
    connect(idealGearR2T.flangeT, prismatic.axis) annotation(
      Line(points = {{90, -40}, {90, -18}, {30, -18}}, color = {0, 127, 0}));
    connect(spring.flange_a, prismatic.support) annotation(
      Line(points = {{50, -2}, {41, -2}, {41, -6}, {30, -6}}, color = {0, 127, 0}));
    connect(spring.flange_b, prismatic.axis) annotation(
      Line(points = {{50, -22}, {41, -22}, {41, -18}, {30, -18}}, color = {0, 127, 0}));
    connect(inertia.flange_a, idealGearR2T.flangeR) annotation(
      Line(points = {{70, -70}, {70, -40}}));
  connect(Results.frame_a, body.frame_a) annotation(
      Line(points = {{-62, -64}, {-66, -64}, {-66, -52}, {24, -52}, {24, -60}}, color = {95, 95, 95}));
    annotation(
      experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-80, 60}, {160, -120}})));
  end GearTest2;

  model GearTestTwoBody
    inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.UniformGravity) annotation(
      Placement(transformation(origin = {-20, 44}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(origin = {4, 14}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, -1, 0}, useAxisFlange = true, s(start = 0.1)) annotation(
      Placement(transformation(origin = {24, -50}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Joints.Revolute revolute(useAxisFlange = true, cylinderLength = 0.2, n = {0, 1, 0}) annotation(
      Placement(transformation(origin = {24, -80}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    // Rotation angle in radians
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(get_a = true, get_v = true) annotation(
      Placement(transformation(origin = {52, -100}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body body(sphereDiameter = 0.2, m = 5, I_33 = 0.08) annotation(
      Placement(transformation(origin = {24, -110}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2, density = 0) annotation(
      Placement(transformation(origin = {-2, -110}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.Rotational.Components.IdealGearR2T idealGearR2T(ratio = 12.566) annotation(
      Placement(transformation(origin = {80, -80}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.Translational.Components.Spring spring(c = 300, s_rel0 = 0.1) annotation(
      Placement(transformation(origin = {50, -52}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic1(n = {0, -1, 0}, s(start = 0.1), useAxisFlange = true) annotation(
      Placement(transformation(origin = {24, 28}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.Translational.Components.Spring spring1(c = 300, s_rel0 = 0.1) annotation(
      Placement(transformation(origin = {50, 26}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Parts.Body body1(I_33 = 0.08, m = 5, sphereDiameter = 0.2) annotation(
      Placement(transformation(origin = {34, 0}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar21(r = {0, -0.4, 0}) annotation(
      Placement(transformation(origin = {-6, -12}, extent = {{0, 20}, {20, 40}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor2(get_a = true, get_v = true) annotation(
      Placement(transformation(origin = {-8, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
    Modelica.Mechanics.Rotational.Sensors.TorqueSensor torqueSensor annotation(
      Placement(transformation(origin = {80, -120}, extent = {{-10, -10}, {10, 10}})));
  equation
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-10, 44}, {4, 44}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, revolute.frame_a) annotation(
      Line(points = {{24, -60}, {24, -70}}, color = {95, 95, 95}));
    connect(absoluteSensor.frame_a, body.frame_a) annotation(
      Line(points = {{42, -100}, {24, -100}}, color = {95, 95, 95}));
    connect(body.frame_a, revolute.frame_b) annotation(
      Line(points = {{24, -100}, {24, -90}}, color = {95, 95, 95}));
    connect(bodyBox.frame_a, body.frame_a) annotation(
      Line(points = {{-2, -100}, {24, -100}}, color = {95, 95, 95}));
    connect(revolute.axis, idealGearR2T.flangeR) annotation(
      Line(points = {{34, -80}, {70, -80}}));
    connect(idealGearR2T.flangeT, prismatic.axis) annotation(
      Line(points = {{90, -80}, {90, -58}, {30, -58}}, color = {0, 127, 0}));
    connect(spring.flange_a, prismatic.support) annotation(
      Line(points = {{50, -42}, {41, -42}, {41, -46}, {30, -46}}, color = {0, 127, 0}));
    connect(spring.flange_b, prismatic.axis) annotation(
      Line(points = {{50, -62}, {41, -62}, {41, -58}, {30, -58}}, color = {0, 127, 0}));
    connect(prismatic1.frame_b, body1.frame_a) annotation(
      Line(points = {{24, 18}, {24, 0}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic1.frame_a) annotation(
      Line(points = {{24, 44}, {24, 38}}, color = {95, 95, 95}));
    connect(spring1.flange_a, prismatic1.support) annotation(
      Line(points = {{50, 36}, {30, 36}, {30, 32}}, color = {0, 127, 0}));
    connect(spring1.flange_b, prismatic1.axis) annotation(
      Line(points = {{50, 16}, {30, 16}, {30, 20}}, color = {0, 127, 0}));
    connect(prismatic.frame_a, bar21.frame_b) annotation(
      Line(points = {{24, -40}, {24, -32}}, color = {95, 95, 95}));
    connect(bar21.frame_a, body1.frame_a) annotation(
      Line(points = {{24, -12}, {24, 0}}, color = {95, 95, 95}));
    connect(absoluteSensor2.frame_a, body1.frame_a) annotation(
      Line(points = {{2, 0}, {24, 0}}, color = {95, 95, 95}));
    connect(torqueSensor.flange_a, revolute.axis) annotation(
      Line(points = {{70, -120}, {34, -120}, {34, -80}}));
    annotation(
      experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-60, 60}, {100, -140}})));
  end GearTestTwoBody;

  model SingleBodyInerter12
    inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity) annotation(
      Placement(transformation(origin = {-48, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(origin = {-24, -2}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, 1, 0}, useAxisFlange = true, s(start = 1, fixed = true)) annotation(
      Placement(transformation(origin = {24, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Joints.Revolute revolute(useAxisFlange = true, cylinderLength = 0.2, n = {0, 1, 0}) annotation(
      Placement(transformation(origin = {24, -40}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    // Rotation angle in radians
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor SingleBodyNoInerter(get_a = true, get_r = true, get_v = true) annotation(
      Placement(transformation(origin = {66, -60}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor1(get_a = true) annotation(
      Placement(transformation(origin = {78, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body body(sphereDiameter = 0.2, m = 100) annotation(
      Placement(transformation(origin = {24, -70}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2, density = 0) annotation(
      Placement(transformation(origin = {-46, -70}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.Translational.Components.Spring spring(c = 4000, s_rel0 = 0, s_rel(start = 0)) annotation(
      Placement(transformation(origin = {50, -12}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  equation
// Send [0, prismatic.s, 0] to leadScrew.u_abs
//  leadScrew.s = prismatic.s;
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-38, 28}, {-24, 28}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic.frame_a) annotation(
      Line(points = {{-4, 28}, {22, 28}, {22, 0}, {24, 0}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, revolute.frame_a) annotation(
      Line(points = {{24, -20}, {24, -30}}, color = {95, 95, 95}));
    connect(absoluteSensor1.frame_a, bar2.frame_b) annotation(
      Line(points = {{68, 28}, {-4, 28}}, color = {95, 95, 95}));
    connect(SingleBodyNoInerter.frame_a, body.frame_a) annotation(
      Line(points = {{56, -60}, {24, -60}}, color = {95, 95, 95}));
    connect(body.frame_a, revolute.frame_b) annotation(
      Line(points = {{24, -60}, {24, -50}}, color = {95, 95, 95}));
    connect(bodyBox.frame_a, body.frame_a) annotation(
      Line(points = {{-46, -60}, {24, -60}}, color = {95, 95, 95}));
    connect(spring.flange_a, prismatic.support) annotation(
      Line(points = {{50, -2}, {41, -2}, {41, -6}, {30, -6}}, color = {0, 127, 0}));
    connect(spring.flange_b, prismatic.axis) annotation(
      Line(points = {{50, -22}, {41, -22}, {41, -18}, {30, -18}}, color = {0, 127, 0}));
    annotation(
      experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-80, 60}, {160, -120}})));
  end SingleBodyInerter12;

  model SingleBodyInerter2
    inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity) annotation(
      Placement(transformation(origin = {-48, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(origin = {-24, -2}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, 1, 0}, useAxisFlange = true, s(start = 1, fixed = true)) annotation(
      Placement(transformation(origin = {24, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Joints.Revolute revolute(useAxisFlange = true, cylinderLength = 0.2, n = {0, 1, 0}) annotation(
      Placement(transformation(origin = {24, -40}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    // Rotation angle in radians
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor SingleBodyWithInerter(get_a = true, get_r = true, get_v = true) annotation(
      Placement(transformation(origin = {66, -60}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor1(get_a = true) annotation(
      Placement(transformation(origin = {78, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body body(sphereDiameter = 0.2, m = 100) annotation(
      Placement(transformation(origin = {24, -70}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2, density = 0) annotation(
      Placement(transformation(origin = {-46, -70}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.Translational.Components.Spring spring(c = 4000, s_rel0 = 0, s_rel(start = 0)) annotation(
      Placement(transformation(origin = {50, -12}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.Rotational.Components.Inertia inertia(J = 1) annotation(
      Placement(transformation(origin = {118, -62}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.Translational.Components.IdealGearR2T idealGearR2T(ratio = 10) annotation(
      Placement(transformation(origin = {100, -40}, extent = {{-10, -10}, {10, 10}})));
  equation
// Send [0, prismatic.s, 0] to leadScrew.u_abs
//  leadScrew.s = prismatic.s;
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-38, 28}, {-24, 28}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic.frame_a) annotation(
      Line(points = {{-4, 28}, {22, 28}, {22, 0}, {24, 0}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, revolute.frame_a) annotation(
      Line(points = {{24, -20}, {24, -30}}, color = {95, 95, 95}));
    connect(absoluteSensor1.frame_a, bar2.frame_b) annotation(
      Line(points = {{68, 28}, {-4, 28}}, color = {95, 95, 95}));
    connect(SingleBodyWithInerter.frame_a, body.frame_a) annotation(
      Line(points = {{56, -60}, {24, -60}}, color = {95, 95, 95}));
    connect(body.frame_a, revolute.frame_b) annotation(
      Line(points = {{24, -60}, {24, -50}}, color = {95, 95, 95}));
    connect(bodyBox.frame_a, body.frame_a) annotation(
      Line(points = {{-46, -60}, {24, -60}}, color = {95, 95, 95}));
    connect(spring.flange_a, prismatic.support) annotation(
      Line(points = {{50, -2}, {41, -2}, {41, -6}, {30, -6}}, color = {0, 127, 0}));
    connect(spring.flange_b, prismatic.axis) annotation(
      Line(points = {{50, -22}, {41, -22}, {41, -18}, {30, -18}}, color = {0, 127, 0}));
    connect(idealGearR2T.flangeT, prismatic.axis) annotation(
      Line(points = {{110, -40}, {110, -18}, {30, -18}}, color = {0, 127, 0}));
    connect(idealGearR2T.flangeR, revolute.axis) annotation(
      Line(points = {{90, -40}, {34, -40}}));
    connect(inertia.flange_a, idealGearR2T.flangeR) annotation(
      Line(points = {{108, -62}, {90, -62}, {90, -40}}));
    annotation(
      experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-80, 60}, {160, -120}})));
  end SingleBodyInerter2;

  model HelicalTwoBodyNoInerter
  inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity) annotation(
      Placement(transformation(origin = {-134, 6}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(origin = {-110, -24}, extent = {{0, 20}, {20, 40}})));
    // Rotation angle in radians
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic1(n = {0, 1, 0}, useAxisFlange = true, s(start = 0, fixed = true)) annotation(
      Placement(transformation(origin = {-60, 6}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.Translational.Components.Spring spring1(c = 4000, s_rel0 = 0) annotation(
      Placement(transformation(origin = {-58, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body LowerBody(m = 100, sphereDiameter = 0.2) annotation(
      Placement(transformation(origin = {-26, 6}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, 1, 0}, useAxisFlange = true, s(start = 0, fixed = true)) annotation(
      Placement(transformation(origin = {36, 6}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Joints.Revolute revolute(cylinderLength = 0.2, n = {0, 1, 0}, useAxisFlange = true) annotation(
      Placement(transformation(origin = {64, 6}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body TopBody(m = 150, sphereDiameter = 0.2) annotation(
      Placement(transformation(origin = {100, 6}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(density = 0, height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2) annotation(
      Placement(transformation(origin = {78, -28}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar21(r = {0, 1, 0}, animation = false) annotation(
      Placement(transformation(origin = {-8, -24}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.Rotational.Sensors.TorqueSensor torqueSensor annotation(
      Placement(transformation(origin = {74, 46}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.Translational.Components.Spring spring11(c = 2000, s_rel0 = -1) annotation(
      Placement(transformation(origin = {36, 31}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor UnsprungMassNoInerter(get_a = true, get_r = true, get_v = true) annotation(
      Placement(transformation(origin = {7, 56}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor SprungMassNoInerter(get_a = true, get_r = true, get_v = true) annotation(
      Placement(transformation(origin = {118, 21}, extent = {{-10, -10}, {10, 10}})));
  equation
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-124, 6}, {-110, 6}}, color = {95, 95, 95}));
    connect(prismatic1.frame_b, LowerBody.frame_a) annotation(
      Line(points = {{-50, 6}, {-36, 6}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic1.frame_a) annotation(
      Line(points = {{-90, 6}, {-70, 6}}, color = {95, 95, 95}));
    connect(spring1.flange_a, prismatic1.support) annotation(
      Line(points = {{-68, 28}, {-68, 12}, {-64, 12}}, color = {0, 127, 0}));
    connect(spring1.flange_b, prismatic1.axis) annotation(
      Line(points = {{-48, 28}, {-50, 28}, {-50, 12}, {-52, 12}}, color = {0, 127, 0}));
    connect(prismatic.frame_b, revolute.frame_a) annotation(
      Line(points = {{46, 6}, {54, 6}}, color = {95, 95, 95}));
    connect(TopBody.frame_a, revolute.frame_b) annotation(
      Line(points = {{90, 6}, {74, 6}}, color = {95, 95, 95}));
    connect(prismatic.frame_a, bar21.frame_b) annotation(
      Line(points = {{26, 6}, {12, 6}}, color = {95, 95, 95}));
    connect(bar21.frame_a, LowerBody.frame_a) annotation(
      Line(points = {{-8, 6}, {-36, 6}}, color = {95, 95, 95}));
    connect(bodyBox.frame_a, TopBody.frame_a) annotation(
      Line(points = {{78, -18}, {79, -18}, {79, 6}, {90, 6}}, color = {95, 95, 95}));
    connect(torqueSensor.flange_a, revolute.axis) annotation(
      Line(points = {{64, 46}, {64, 16}}));
    connect(spring11.flange_b, prismatic.axis) annotation(
      Line(points = {{46, 31}, {46, 18.5}, {44, 18.5}, {44, 12}}, color = {0, 127, 0}));
    connect(spring11.flange_a, prismatic.support) annotation(
      Line(points = {{26, 31}, {26, 12}, {32, 12}}, color = {0, 127, 0}));
    connect(UnsprungMassNoInerter.frame_a, LowerBody.frame_a) annotation(
      Line(points = {{-3, 56}, {-10.5, 56}, {-10.5, 6}, {-36, 6}}, color = {95, 95, 95}));
  connect(TopBody.frame_a, SprungMassNoInerter.frame_a) annotation(
      Line(points = {{90, 6}, {90, 22}, {108, 22}}, color = {95, 95, 95}));
    annotation(
      experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-160, 80}, {140, -40}})));
  end HelicalTwoBodyNoInerter;

  model HelicalTwoBodyInerter
  inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity) annotation(
      Placement(transformation(origin = {-134, 6}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(origin = {-110, -24}, extent = {{0, 20}, {20, 40}})));
    // Rotation angle in radians
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic1(n = {0, 1, 0}, useAxisFlange = true, s(start = 0, fixed = true)) annotation(
      Placement(transformation(origin = {-60, 6}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.Translational.Components.Spring spring1(c = 4000, s_rel0 = 0) annotation(
      Placement(transformation(origin = {-58, 28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body LowerBody(m = 100, sphereDiameter = 0.2) annotation(
      Placement(transformation(origin = {-26, 6}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(n = {0, 1, 0}, useAxisFlange = true, s(start = 0, fixed = true)) annotation(
      Placement(transformation(origin = {36, 6}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Joints.Revolute revolute(cylinderLength = 0.2, n = {0, 1, 0}, useAxisFlange = true) annotation(
      Placement(transformation(origin = {64, 6}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body TopBody(m = 150, sphereDiameter = 0.2) annotation(
      Placement(transformation(origin = {100, 6}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(density = 0, height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2) annotation(
      Placement(transformation(origin = {78, -28}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar21(r = {0, 1, 0}, animation = false) annotation(
      Placement(transformation(origin = {-8, -24}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.Rotational.Sensors.TorqueSensor torqueSensor annotation(
      Placement(transformation(origin = {74, 46}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.Translational.Components.Spring spring11(c = 2000, s_rel0 = -1) annotation(
      Placement(transformation(origin = {36, 31}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor UnsprungMassInerter(get_a = true, get_r = true, get_v = true) annotation(
      Placement(transformation(origin = {7, 56}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor SprungMassInerter(get_a = true, get_r = true, get_v = true) annotation(
      Placement(transformation(origin = {118, 21}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.Translational.Components.IdealGearR2T idealGearR2T(ratio = 10) annotation(
      Placement(transformation(origin = {45, 74}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Mechanics.Rotational.Components.Inertia inertia(J = 1) annotation(
      Placement(transformation(origin = {77, 74}, extent = {{-10, -10}, {10, 10}})));
  equation
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-124, 6}, {-110, 6}}, color = {95, 95, 95}));
    connect(prismatic1.frame_b, LowerBody.frame_a) annotation(
      Line(points = {{-50, 6}, {-36, 6}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic1.frame_a) annotation(
      Line(points = {{-90, 6}, {-70, 6}}, color = {95, 95, 95}));
    connect(spring1.flange_a, prismatic1.support) annotation(
      Line(points = {{-68, 28}, {-68, 12}, {-64, 12}}, color = {0, 127, 0}));
    connect(spring1.flange_b, prismatic1.axis) annotation(
      Line(points = {{-48, 28}, {-50, 28}, {-50, 12}, {-52, 12}}, color = {0, 127, 0}));
    connect(prismatic.frame_b, revolute.frame_a) annotation(
      Line(points = {{46, 6}, {54, 6}}, color = {95, 95, 95}));
    connect(TopBody.frame_a, revolute.frame_b) annotation(
      Line(points = {{90, 6}, {74, 6}}, color = {95, 95, 95}));
    connect(prismatic.frame_a, bar21.frame_b) annotation(
      Line(points = {{26, 6}, {12, 6}}, color = {95, 95, 95}));
    connect(bar21.frame_a, LowerBody.frame_a) annotation(
      Line(points = {{-8, 6}, {-36, 6}}, color = {95, 95, 95}));
    connect(bodyBox.frame_a, TopBody.frame_a) annotation(
      Line(points = {{78, -18}, {79, -18}, {79, 6}, {90, 6}}, color = {95, 95, 95}));
    connect(torqueSensor.flange_a, revolute.axis) annotation(
      Line(points = {{64, 46}, {64, 16}}));
    connect(spring11.flange_b, prismatic.axis) annotation(
      Line(points = {{46, 31}, {46, 18.5}, {44, 18.5}, {44, 12}}, color = {0, 127, 0}));
    connect(spring11.flange_a, prismatic.support) annotation(
      Line(points = {{26, 31}, {26, 12}, {32, 12}}, color = {0, 127, 0}));
    connect(UnsprungMassInerter.frame_a, LowerBody.frame_a) annotation(
      Line(points = {{-3, 56}, {-10.5, 56}, {-10.5, 6}, {-36, 6}}, color = {95, 95, 95}));
    connect(TopBody.frame_a, SprungMassInerter.frame_a) annotation(
      Line(points = {{90, 6}, {90, 22}, {108, 22}}, color = {95, 95, 95}));
    connect(inertia.flange_a, idealGearR2T.flangeR) annotation(
      Line(points = {{67, 74}, {53, 74}, {53, 75}, {55, 75}}));
  connect(idealGearR2T.flangeT, prismatic.axis) annotation(
      Line(points = {{36, 74}, {36, 12}, {44, 12}}, color = {0, 127, 0}));
    annotation(
      experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-160, 80}, {140, -40}})));
  end HelicalTwoBodyInerter;

  model BuildingCase1
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
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor2(get_a = true, get_r = true, get_v = true) annotation(
      Placement(transformation(origin = {134, 30}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body body(m = 100, sphereDiameter = 0.2) annotation(
      Placement(transformation(origin = {134, 4}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(density = 0, height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2) annotation(
      Placement(transformation(origin = {112, -38}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(get_a = true, get_r = true, get_v = true) annotation(
      Placement(transformation(origin = {-36, -56}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar21(r = {0, 1, 0}, animation = true) annotation(
      Placement(transformation(origin = {10, -26}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.Translational.Components.SpringDamper springDamper(c = 20, d = 10, s_rel0 = -1) annotation(
      Placement(transformation(origin = {54, 52}, extent = {{-10, -10}, {10, 10}})));
  equation
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-122, -26}, {-108, -26}}, color = {95, 95, 95}));
    connect(prismatic1.frame_b, body1.frame_a) annotation(
      Line(points = {{-44, -26}, {-44, -27}, {-26, -27}, {-26, -26}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic1.frame_a) annotation(
      Line(points = {{-88, -26}, {-64, -26}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, revolute.frame_a) annotation(
      Line(points = {{64, 4}, {80, 4}}, color = {95, 95, 95}));
    connect(absoluteSensor2.frame_a, body.frame_a) annotation(
      Line(points = {{124, 30}, {124, 4}}, color = {95, 95, 95}));
    connect(body.frame_a, revolute.frame_b) annotation(
      Line(points = {{124, 4}, {100, 4}}, color = {95, 95, 95}));
    connect(absoluteSensor.frame_a, body1.frame_a) annotation(
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
    annotation(
      experiment(StartTime = 0, StopTime = 100, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-160, 40}, {160, -80}})));
  end BuildingCase1;

  model BuildingCase2
    inner Modelica.Mechanics.MultiBody.World world(gravityType = Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity) annotation(
      Placement(transformation(origin = {-190, -28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar2(r = {0.3, 0, 0}) annotation(
      Placement(transformation(origin = {-166, -58}, extent = {{0, 20}, {20, 40}})));
    // Rotation angle in radians
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic1(n = {0, 1, 0}, useAxisFlange = true, s(start = 0, fixed = true)) annotation(
      Placement(transformation(origin = {-112, -28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body body1(m = 150, sphereDiameter = 0.2) annotation(
      Placement(transformation(origin = {-74, -28}, extent = {{-10, -10}, {10, 10}})));
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
    Modelica.Mechanics.Translational.Components.SpringDamper springDamper(c = 20, d = 100, s_rel0 = -1) annotation(
      Placement(transformation(origin = {116, 58}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body body11(m = 15, sphereDiameter = 0.2) annotation(
      Placement(transformation(origin = {38, -38}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar211(r = {0, 0.5, 0}, animation = false) annotation(
      Placement(transformation(origin = {54, -26}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic2(n = {0, 1, 0}, s(fixed = true, start = 0), useAxisFlange = true) annotation(
      Placement(transformation(origin = {12, -28}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.Translational.Components.SpringDamper springDamper1(c = 20, d = 100, s_rel0 = -1) annotation(
      Placement(transformation(origin = {14, 2}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensorTMD(get_a = true, get_r = true, get_v = true) annotation(
      Placement(transformation(origin = {74, -46}, extent = {{-10, -10}, {10, 10}})));
  equation
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-180, -28}, {-166, -28}}, color = {95, 95, 95}));
    connect(prismatic1.frame_b, body1.frame_a) annotation(
      Line(points = {{-102, -28}, {-102, -29}, {-84, -29}, {-84, -28}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic1.frame_a) annotation(
      Line(points = {{-146, -28}, {-122, -28}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, revolute.frame_a) annotation(
      Line(points = {{126, 10}, {142, 10}}, color = {95, 95, 95}));
    connect(absoluteSensorTop.frame_a, body.frame_a) annotation(
      Line(points = {{186, 36}, {186, 10}}, color = {95, 95, 95}));
    connect(body.frame_a, revolute.frame_b) annotation(
      Line(points = {{186, 10}, {162, 10}}, color = {95, 95, 95}));
    connect(absoluteSensorBottom.frame_a, body1.frame_a) annotation(
      Line(points = {{-84, -58}, {-84, -28}}, color = {95, 95, 95}));
    connect(bar21.frame_a, body1.frame_a) annotation(
      Line(points = {{-28, -28}, {-84, -28}}, color = {95, 95, 95}));
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
      Line(points = {{22, -28}, {38, -28}}, color = {95, 95, 95}));
    connect(body11.frame_a, bar211.frame_a) annotation(
      Line(points = {{38, -28}, {38, 4}, {54, 4}}, color = {95, 95, 95}));
    connect(bar211.frame_b, prismatic.frame_a) annotation(
      Line(points = {{74, 4}, {106, 4}, {106, 10}}, color = {95, 95, 95}));
    connect(absoluteSensorTMD.frame_a, body11.frame_a) annotation(
      Line(points = {{64, -46}, {56, -46}, {56, -28}, {38, -28}}, color = {95, 95, 95}));
    annotation(
      experiment(StartTime = 0, StopTime = 200, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-220, 80}, {220, -80}})));
  end BuildingCase2;

  model BuildingCase3
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
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor2(get_a = true, get_r = true, get_v = true) annotation(
      Placement(transformation(origin = {134, 30}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.Body body(m = 100, sphereDiameter = 0.2) annotation(
      Placement(transformation(origin = {134, 4}, extent = {{-10, -10}, {10, 10}})));
    Modelica.Mechanics.MultiBody.Parts.BodyBox bodyBox(density = 0, height = 0.06, length = 0.06, r = {0, -0.01, 0}, width = 0.2) annotation(
      Placement(transformation(origin = {118, -28}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Mechanics.MultiBody.Sensors.AbsoluteSensor absoluteSensor(get_a = true, get_r = true, get_v = true) annotation(
      Placement(transformation(origin = {-36, -56}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
    Modelica.Mechanics.MultiBody.Parts.FixedTranslation bar21(r = {0, 1, 0}, animation = true) annotation(
      Placement(transformation(origin = {10, -26}, extent = {{0, 20}, {20, 40}})));
    Modelica.Mechanics.Translational.Components.SpringDamper springDamper(c = 20, s_rel0 = -1, d = 10) annotation(
      Placement(transformation(origin = {54, 52}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.Translational.Components.IdealGearR2T idealGearR2T(ratio = 62.832) annotation(
      Placement(transformation(origin = {82, 67}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Mechanics.Rotational.Components.Inertia inertia(J = 13.5) annotation(
      Placement(transformation(origin = {110, 67}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.Translational.Components.Spring spring1(c = 10, s_rel0 = 0) annotation(
      Placement(transformation(origin = {-51, 2}, extent = {{-10, -10}, {10, 10}})));
  equation
    connect(world.frame_b, bar2.frame_a) annotation(
      Line(points = {{-122, -26}, {-108, -26}}, color = {95, 95, 95}));
    connect(prismatic1.frame_b, body1.frame_a) annotation(
      Line(points = {{-44, -26}, {-44, -27}, {-26, -27}, {-26, -26}}, color = {95, 95, 95}));
    connect(bar2.frame_b, prismatic1.frame_a) annotation(
      Line(points = {{-88, -26}, {-64, -26}}, color = {95, 95, 95}));
    connect(prismatic.frame_b, revolute.frame_a) annotation(
      Line(points = {{64, 4}, {80, 4}}, color = {95, 95, 95}));
    connect(absoluteSensor2.frame_a, body.frame_a) annotation(
      Line(points = {{124, 30}, {124, 4}}, color = {95, 95, 95}));
    connect(body.frame_a, revolute.frame_b) annotation(
      Line(points = {{124, 4}, {100, 4}}, color = {95, 95, 95}));
    connect(absoluteSensor.frame_a, body1.frame_a) annotation(
      Line(points = {{-26, -56}, {-26, -26}}, color = {95, 95, 95}));
    connect(prismatic.frame_a, bar21.frame_b) annotation(
      Line(points = {{44, 4}, {30, 4}}, color = {95, 95, 95}));
    connect(bar21.frame_a, body1.frame_a) annotation(
      Line(points = {{10, 4}, {-9, 4}, {-9, -26}, {-26, -26}}, color = {95, 95, 95}));
    connect(bodyBox.frame_a, body.frame_a) annotation(
      Line(points = {{118, -18}, {118, 4}, {124, 4}}, color = {95, 95, 95}));
    connect(springDamper.flange_a, prismatic.support) annotation(
      Line(points = {{44, 52}, {44, 10}, {50, 10}}, color = {0, 127, 0}));
    connect(springDamper.flange_b, prismatic.axis) annotation(
      Line(points = {{64, 52}, {66, 52}, {66, 10}, {62, 10}}, color = {0, 127, 0}));
  connect(prismatic.axis, idealGearR2T.flangeT) annotation(
      Line(points = {{62, 10}, {62, 68}, {72, 68}}, color = {0, 127, 0}));
  connect(idealGearR2T.flangeR, revolute.axis) annotation(
      Line(points = {{92, 68}, {90, 68}, {90, 14}}));
  connect(inertia.flange_a, idealGearR2T.flangeR) annotation(
      Line(points = {{100, 67}, {92, 67}, {92, 68}}));
  connect(spring1.flange_a, prismatic1.support) annotation(
      Line(points = {{-60, 2}, {-62, 2}, {-62, -20}, {-58, -20}}, color = {0, 127, 0}));
  connect(prismatic1.axis, spring1.flange_b) annotation(
      Line(points = {{-46, -20}, {-40, -20}, {-40, 2}}, color = {0, 127, 0}));
    annotation(
      experiment(StartTime = 0, StopTime = 100, Tolerance = 1e-6, Interval = 0.002),
      uses(Modelica(version = "4.0.0")),
      Diagram(coordinateSystem(extent = {{-160, 40}, {160, -80}})));
  end BuildingCase3;
  annotation(
    uses(Modelica(version = "4.0.0")));
end HelicalInerterPackage;
