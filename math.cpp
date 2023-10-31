#include "math.h"



Point Point::operator =(const Point& P) {
        if(P.identity)
            {
            this->identity = true;
            return *this;
            }

            this->identity=P.identity;
            this->x = P.x;
            this->y = P.y;
            return *this;
}




Line::Line(int _A, int _B):A(_A),B(_B){}
Line::Line(){}
Line::~Line(){}

Curve::Curve(int _A, int _B, int _C):Line(_A,_B),C(_C)
    {
    //if (this->isZeroDiscriminant()){
    //    std::cerr << "[!] Curve not defined, disriminant is Zero" << std::endl;
    //    std::cout << "[+ INFO ] Field : Z/" << primeField << "Z" << std::endl;
    //    std::cout << "[+ INFO ] A : " << A << " ; B : " << B << std::endl; 
    //    abort();
    //    }
    }
Curve::Curve(){}
Curve::~Curve(){}
EllipticCurve::EllipticCurve(int A, int B, int C, int D):Curve(A, B, C)
    {
      //  this->curve = new Curve(primeField, A, B);
       // this->FField = this->curve->getField();
    //this->identity.setIdentity(true);
    }

EllipticCurve::~EllipticCurve(){}
const Point& EllipticCurve::_inv(Point& Q, const Point& P) {
        if(P.isIdentity())
        {
                Q.setIdentity(true);
                return Q;
        }
        else
        {
                Q.setIdentity(false);
                Q.setX(P.getX());
        int tmp;
                //this->FField->sub(tmp,this->FField->zero,P.getY());

        Q.setY(tmp);
                return Q;
        }
}


Point& EllipticCurve::_double(Point& R, const Point& P) {
       // Point tmp;
/*        this->_inv(tmp,P);
        if(P.isIdentity() || (tmp == P))
            {
            R.setIdentity(true);
            return R;
            }
        else
                {
                //
                R.setIdentity(false);
                Element tmp;
                Element xs; // 3*x^2
                this->FField->mul(xs,P.getX(),P.getX());
                this->FField->init(tmp,(uint64_t)3);
        this->FField->mulin(xs,tmp);
        //
                Element ty; // 2*y
        this->FField->init(tmp,(uint64_t)2);
        this->FField->mul(ty,P.getY(),tmp);
                //
                Element slope; // m
        this->FField->add(tmp,xs,this->curve->getA());
        this->FField->div(slope,tmp,ty);
                //
                Element slope2; // m^2
        this->FField->mul(slope2,slope,slope);
                //
                Element tx; // 2x
                this->FField->add(tx,P.getX(),P.getX());
        //
                Element x3; // x_3
        this->FField->sub(x3,slope2,tx);
                //
                Element y3; // y_3
        this->FField->sub(tmp,P.getX(),x3);
        this->FField->sub(y3,this->FField->mulin(tmp, slope),P.getY());

        R.setX(x3);
        R.setY(y3);
        */
	return R;
        //        }
        }
bool EllipticCurve::verifyPoint(const Point& P) const {
        if(P.isIdentity())
        {
                return true;
        }
        int x3,y2;
        int Ax,rhs;
        //this->FField->mul(x3,P.getX(),P.getX());
    //this->FField->mulin(x3,P.getX());
      //  this->FField->mul(Ax,P.getX(),this->curve->getA());
    
    //this->FField->add(rhs,x3,Ax);
    //this->FField->addin(rhs,this->curve->getB());

   
    //this->FField->mul(y2,P.getY(),P.getY());
    return y2==rhs;
}

