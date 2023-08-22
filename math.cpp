#include "math.h"
Curve::Curve(int A, int B, int C, int D)
    {
    this->A=A;
    this->B=B;
    this->C=C;
    this->D=D;

    //if (this->isZeroDiscriminant()){
    //    std::cerr << "[!] Curve not defined, disriminant is Zero" << std::endl;
    //    std::cout << "[+ INFO ] Field : Z/" << primeField << "Z" << std::endl;
    //    std::cout << "[+ INFO ] A : " << A << " ; B : " << B << std::endl; 
    //    abort();
    //    }
    }
Curve::Curve(){}
Curve::~Curve(){}
EllipticCurve::EllipticCurve(int A, int B, int C, int D):Curve(A, B, C, D)
    {
      //  this->curve = new Curve(primeField, A, B);
       // this->FField = this->curve->getField();
    //this->identity.setIdentity(true);
    }

EllipticCurve::~EllipticCurve(){}
