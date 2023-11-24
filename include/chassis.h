#ifndef VELOCITY_H
#define VELOCITY_H
#undef __ARM_NEON__
#undef __ARM_NEON
#include <iostream>
#include <eigen3/Eigen/Dense> // Include the Eigen library
#include <vex.h>
#include "robot-config.h"
using namespace Eigen;
using namespace std;
class Chassis
{
private:
    Vector2d trans;

public:
    // Constructor 构造函数
    // It's used in main.cpp, you don't need to implement it.
    // 你不需要实现它，它在main.cpp中被调用
    Chassis(const Vector2d &vt) : trans(vt) {}

    // Accessor Function 访问器
    // It's used in main.cpp, you don't need to implement it.
    // 你不需要实现它，它在main.cpp中被调用, chassis.cpp中已经实现
    Vector2d getTrans() const;

    // Functions
    // 1. (5 points) Function to compute the magnitude of the vector
    //计算向量的模
    double magn() const;

    // 2. (5 points) Function to compute the direction of the vector
    // Note: see the schematic diagram in the pdf
    // 计算向量的方向角, 参考Requirements.pdf中的示意图
    double alpha() const;

    // 3. (20 points) Function for coordinate transformation
    // (From robot coordinate to world coordinate)
    // Note: see the schematic diagram in the pdf
    // 坐标系转换(从机器人坐标系到世界坐标系), 参考Requirements.pdf中的示意图
    Vector2d rotateTrans(double theta);

    // 4. (15 points) Function taking a pointer to a Vector2d object,
    // it updates the velocity by adding the new velocity to the current velocity
    // 通过指向Vector2d对象的指针来更新速度，将新速度加到当前速度上
    void updateTrans(Vector2d *velocity_Ptr);
};

#endif // VELOCITY_H