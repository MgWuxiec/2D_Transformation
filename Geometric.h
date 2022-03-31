#pragma once
#include "Node.h"

class Geometric :
    public Node
{
private:
    int length;
public:
    enum drawingAim {
        Line = 1,
        Point = 2,
        All = Line | Point
    };
public:
    Geometric();
    Geometric(int length);
    int getLength();
    void debug();
    Node& at(int number);
    void drawing(int aim = Line);
    void transformation(Matrix3d& trans);

    //已启用成员方法
    void drawingLines();
    void drawingPoints();
};