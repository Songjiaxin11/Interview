#include "vex.h"
#include "robot-config.h"
#include "chassis.h"
#include <iostream>
#undef __ARM_NEON__
#undef __ARM_NEON
#include <eigen3/Eigen/Dense>
using namespace Eigen;
using namespace vex;
using namespace std;

competition Competition;

void autonomous(void)
{
}

void usercontrol(void)
{
  wait(20, msec);
}

int main()
{
  /*
  (5 points)
  Calibrate the inertial sensor
  初始化陀螺仪
  */
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // This is the variable using in the following Tasks
  // 这是下面任务中使用的变量
  Vector2d initial_velocity(10, 10);

  /*
  (5 points)
  Create a Chassis object called myChassis,
  Use the constructor to initialize it with initial_velocity
  创造一个名为myChassis的Chassis对象，
  使用构造函数将其参数设置为initial_velocity
  */

  /*
   (8 points)
   Get the velocity of myChassis by using getTrans() and the properties of Vector2d
   print them by using cout
   使用getTrans()获取myChassis的速度，并使用Vector2d的属性打印它们
   打印形式:
   Form: Current Velocity: x: 10, y: 10
 */

  /*
  (6 points)
  use `new` operator to create a pointer to a Vector2d object(Vector2d* ) called velocity_Ptr,
   initialize it with its x component vx = 20 and its y component vy = 20
  使用`new`运算符创建一个指向Vector2d对象(Vector2d* )的指针，名为velocity_Ptr，
  其x分量vx = 20, y分量vy = 20进行初始化
  */

  /*
  (5 points)
  Use the function updateTrans() to update the velocity of myChassis
  使用updateTrans()函数更新myChassis的速度(即将velocity_Ptr的速度加到myChassis的速度上)
  */

  /*
  (4 points)
  Use `cout` to print the updated velocity of myChassis
  使用`cout`打印myChassis的更新后的速度
  形式: Updated Velocity: x: x_value, y: y_value
  */

  // This is the variable using in the following Tasks
  // 这是下面任务中使用的变量
  Vector2d rotated_velocity;

  while (true)
  {
    /*
    (5 points)
    Get the angle of the inertial sensor and store it in a variable called theta
    获取陀螺仪的角度并将其存储在名为theta的变量中
    */

    /*
    (5 points)
    Use the function rotateTrans() to accomplish the coordinate transformation
    使用rotateTrans()函数完成坐标系转换
    */

    /*
    (5 points)
    Refer to the given function in Requirements.pdf to print the Rotated velocity on the screen of brain
    参考Requirements.pdf中给出的函数，在brain屏幕上打印rotated_velocity
    形式: Rotated Velocity: x: x_value, y: y_value
    */

    wait(100, msec);
  }
}
