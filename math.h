class Line{
    private:
        int A, B;
    public:
        Line();
        Line(int A, int B);
        ~Line();
        bool isZeroDiscriminant();
        int getA(){
            return this->A;
        };
        int getB(){
            return this->B;
        };
};

class Curve:public Line{
    private:
        int C;
    public:
        Curve();
        Curve(int A, int B, int C);
        ~Curve();
        //bool isZeroDiscriminant();
        //int getA(){
        //    return this->A;
        //};
        //int getB(){
        //    return this->B;
        //};
	int getC(){
	    return this->C;
	};

};

class EllipticCurve:public Curve{
	private:
	int D;
	public:
    EllipticCurve();
    EllipticCurve(int A, int B, int C, int D);
    ~EllipticCurve();
       int getD(){
            return this->D;
        };





};


