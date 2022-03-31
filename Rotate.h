#pragma once
#include "Transformation.h"
class Rotate :
    public Transformation
{
public:
    Rotate(double angle);
    void redefine(double angle);
};