#include <iostream>
#include "ITimeDiscretization.h"

ITimeDiscretization::ITimeDiscretization(double ti, double tf)
    : ti(ti), tf(tf) {}

//Parent


//Child
UniformTimeDiscretization::UniformTimeDiscretization(double ti, double tf, int step)
    : ITimeDiscretization(ti, tf), step(step) {}

UniformTimeDiscretization::~UniformTimeDiscretization(){}

double UniformTimeDiscretization::getTimeI() const
{
    return ti;
}
double UniformTimeDiscretization::getTimeF() const
{
    return tf;
}
int UniformTimeDiscretization::getStep() const
{
    //(tf-ti)/step
    return step;
}