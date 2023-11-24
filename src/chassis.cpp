#undef __ARM_NEON__
#undef __ARM_NEON
#include <iostream>
#include <eigen3/Eigen/Dense> // Include the Eigen library
#include <vex.h>
#include "robot-config.h"
#include "chassis.h"
using namespace Eigen;
using namespace std;

//Functions
//Accessor Function, it returns the member varible trans of the class
//访问器，返回类的成员变量trans
Vector2d Chassis:: getTrans() const
{
    return trans;
}

/**
 * @brief Function to compute the magnitude of the vector 
 * 计算向量的模
 * 5 points
 * @return double 
 */
double Chassis::magn() const
{
    // implement your code here
}

/**
 * @brief  Function to compute the direction of the vector
 * 计算向量的方向角, 参考Requirements.pdf中的示意图
 * 5 points
 * @return double 
 */
double Chassis::alpha() const
{
    // implement your code here
}

/**
 * @brief Function for coordinate transformation (From robot coordinate to world coordinate)
 * 坐标系转换(从机器人坐标系到世界坐标系), 参考Requirements.pdf中的示意图
 * 20 points
 * @param theta 
 * @return Vector2d 
 */
Vector2d Chassis::rotateTrans(double theta)
{
    // implement your code here
}

/**
 * @brief Function taking a pointer to a Vector2d object,
 * it updates the velocity by adding the new velocity to the current velocity
 * 通过指向Vector2d对象的指针来更新速度，将新速度加到当前速度上
 * 15 points
 * @param velocity_Ptr 
 */
void Chassis::updateTrans(Vector2d* velocity_Ptr)
{
    // implement your code here
}