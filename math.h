class Curve{
    private:
        int A,B;
    public:
        Curve();
        Curve(int A, int B);
        ~Curve();
        bool isZeroDiscriminant();
        int getA(){
            return this->A;
        };
        int getB(){
            return this->B;
        };


};

class EllipticCurve:public Curve{
public:
    EllipticCurve();
    EllipticCurve(int A, int B);
    ~EllipticCurve();





};


