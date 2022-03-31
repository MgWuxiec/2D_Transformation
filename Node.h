#pragma once
#include <iostream>
#include <Eigen/Dense>
#include <easyx.h>

using namespace Eigen;

class Node :
    public Vector3d
{
public:
    Node* next;
public:
    Node();
    Node(Node* next);
    void redefine(const Vector3d coord);
    void debug();
    void drawing();//如何设定半径和颜色？
};

