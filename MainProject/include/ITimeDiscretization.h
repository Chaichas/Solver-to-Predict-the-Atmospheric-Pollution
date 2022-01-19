#include <iostream>
//Declaration des classes

#ifndef ITimeDiscretization_H_
#define ITimeDiscretization_H_

class ITimeDiscretization
{
protected:
    double ti = 0.;
    double tf = 0.;

public:

   ITimeDiscretization(double ti, double tf);
    //Destructeurs
    virtual ~ITimeDiscretization() = default;

    // Methode get pour acceder aux variables de la classe
    virtual double getTimeI() const = 0;
    virtual double getTimeF() const = 0;
    virtual int getStep() const = 0;
};

// UniformTimeDiscretization est derivee de ITimeDiscretization
class UniformTimeDiscretization : public ITimeDiscretization{
  private:
  int step ;

  public:
    UniformTimeDiscretization(double ti, double tf, int step);

  //Destructeurs
    ~UniformTimeDiscretization();

  //Methodes
  double getTimeI() const override;
  double getTimeF() const override;
  int getStep() const override;
  };


  #endif
