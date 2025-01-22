model test
  inner Modelica.Mechanics.MultiBody.World world annotation(
    Placement(transformation(origin = {-54, 20}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Prismatic prismatic(useAxisFlange = true)  annotation(
    Placement(transformation(origin = {-14, 20}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.MultiBody.Joints.Revolute revolute(n = {0, 1, 0}, useAxisFlange = true)  annotation(
    Placement(transformation(origin = {16, 20}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Mechanics.Rotational.Components.IdealGearR2T idealGearR2T(ratio = 2)  annotation(
    Placement(transformation(origin = {2, 52}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Mechanics.MultiBody.Parts.Body body(m = 1)  annotation(
    Placement(transformation(origin = {52, 20}, extent = {{-10, -10}, {10, 10}})));
equation
  connect(world.frame_b, prismatic.frame_a) annotation(
    Line(points = {{-44, 20}, {-24, 20}}, color = {95, 95, 95}));
  connect(prismatic.frame_b, revolute.frame_a) annotation(
    Line(points = {{-4, 20}, {6, 20}}, color = {95, 95, 95}));
  connect(idealGearR2T.flangeT, prismatic.axis) annotation(
    Line(points = {{-8, 52}, {-6, 52}, {-6, 26}}, color = {0, 127, 0}));
  connect(revolute.axis, idealGearR2T.flangeR) annotation(
    Line(points = {{16, 30}, {16, 52}, {12, 52}}));
  connect(revolute.frame_b, body.frame_a) annotation(
    Line(points = {{26, 20}, {42, 20}}, color = {95, 95, 95}));
  annotation(
    uses(Modelica(version = "4.0.0")));
end test;
