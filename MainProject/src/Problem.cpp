#include <iostream>
#include "Problem.h"
#include "Equation.cpp"
#include "ITimeDiscretization.cpp"

void Problem::solve(){
      
      Equation eq{}; //appeler une instance de classe Equation
      
      double ti=0.;
      double tf=5.;
      int step=1;
      
      ITimeDiscretization* t1 = new UniformTimeDiscretization(ti,tf,step);

      for (int i= t1->getTimeI(); i < t1->getTimeF(); i += t1->getStep())
      {
            std::cout << "compute equation at time : " << eq.compute(i) << "\n";
      }
}