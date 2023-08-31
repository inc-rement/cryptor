#include <iostream>
#include <cmath>
#include <X11/Xlib.h>
//#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include <iomanip>
class EllipticCurve;

int main(void) {
   Display *d;
   Window w;
   XEvent e;
   //const char *msg = "X";
   int s;

   d = XOpenDisplay(NULL);
   if (d == NULL) {
      fprintf(stderr, "Cannot open display\n");
      exit(1);
   }

   s = DefaultScreen(d);
   w = XCreateSimpleWindow(d, RootWindow(d, s), 30, 30, 1000, 1000, 5,
                           WhitePixel(d, s), BlackPixel(d, s));
XSetBackground(d, DefaultGC(d, s), WhitePixel(d, s));
XSetForeground(d, DefaultGC(d, s), WhitePixel(d, s));

   //XSelectInput(d, w, ExposureMask | KeyPressMask);
XSelectInput(d, w, ExposureMask | ButtonPressMask | KeyPressMask);
   
XMapWindow(d, w);

EllipticCurve ecc(0, -25, 0, 1);
EllipticCurve ecc1(0,1/6,1/2,1/3);
Point p;
Point t;
Point m1;
mpf_class c,g;
double y1;
double x3, y3;
double m=0;
double x1;// = 1;
bool f;
   while (1) {
     //      XClearWindow(d, w);

// 	if(f)f=false;else f = true;     
//XNextEvent(d, &e);
      //if(e.type==Expose) {
          if(f)f=false;else f = true;     
	 //XFillRectangle(d, w, DefaultGC(d, s), 20, 20, 10, 10);
         //XDrawString(d, w, DefaultGC(d, s), 10, 50, msg, strlen(msg));
         XDrawLine(d, w, DefaultGC(d, s), 500, 1000, 500, 0);
         XDrawLine(d, w, DefaultGC(d, s), 0, 500, 1000, 500);
         XDrawString(d, w, DefaultGC(d, s), 950, 490, "X", strlen("X"));
         XDrawString(d, w, DefaultGC(d, s), 450, 50, "Y", strlen("Y"));
	for(int i=10;i<120;i+=10)
	XDrawLine(d, w, DefaultGC(d, s), 440+i, 510, 440+i, 490);
        XDrawString(d, w, DefaultGC(d, s), 440, 480, "-5", strlen("-5"));
        XDrawString(d, w, DefaultGC(d, s), 550, 480, "5", strlen("5"));
	XDrawString(d, w, DefaultGC(d, s), 400, 200, "y^2=x^3-25x", strlen("y^2=x^3-25x"));

	 if(f){
	 std::cout<<"input x: "<<std::endl;
        std::cin>>x1;
	t.setX(x1);
	XClearWindow(d, w);
	 }
	 for(double x =-5.45;x<11.64;x+=0.01){
// double m=0;
//if(x1<0)m=(pow(x1,2))-2;else if(x1>0)m=pow(x1,2)+2; else m=pow(x1,2);
///t.seta(t.getX());
///mpf_pow_ui(c.get_mpf_t(), t.geta().get_mpf_t(), 2);
///mpf_sqrt(g.get_mpf_t(),c.get_mpf_t());

///m=g.get_d()-5+3;
//m=sqrt(pow(t.getX(),2))-5+3;
///m=m*m;

///t.setY(sqrt((pow(t.getX(),3))+ecc.getB()*t.getX()));
///y1=t.getY();
///x1=t.getX();
//t.setY((double)y1);
//if(x1>0)m=sqrt((pow(x1,2)))-2-5;
//double y1 = (pow(x1,3));//pow(x1,3)-25*x1));
//double j = ((m*xv1-y1));
//double y1=sqrt(pow(x1,3)-25*x1);
//XDrawPoint(d, w, DefaultGC(d, s), (x*10)+500, 500-((pow(x,3)))*10);
//if((m*(x-x1)+y1)>0)XDrawPoint(d, w, DefaultGC(d, s), (x*10)+500, 500-(m*(x-x1)+y1)*10);
//if((m*(x-x1)+y1)<0)XDrawPoint(d, w, DefaultGC(d, s), 500-abs(x*10), 500+(m*(abs(x)-x1)+y1)*10);

///Line tangent(1,1);
///XDrawPoint(d, w, DefaultGC(d, s), (x*10)+500, 500-(m*(x-x1)+y1)*10);

///XDrawArc(d, w, DefaultGC(d, s), t.getX()*10+497, 497-t.getY()*10, 5, 5, 0, 360 * 64);
///x3=((pow(m,2))-2*x1);
///y3=(m*(x1-x3)-y1);

///p.setX(x3);
///p.setY(y3);
///m1.seta(123456789.987654321);
///m1.setb(987654321.123456789);

//if(x1>0)x3=((pow(m,2))+x1-x1);

///XDrawArc(d, w, DefaultGC(d, s), 497+x3*10, 497-y3*10, 5, 5, 0, 360 * 64);

///XDrawPoint(d, w ,DefaultGC(d, s), (x*10)+500, 500-(sqrt(pow(x,3)-25*x))*10);
///XDrawPoint(d, w ,DefaultGC(d, s), (x*10)+500, (sqrt(pow(x,3)-25*x)*10)+500);
XDrawPoint(d, w ,DefaultGC(d, s), (x*10)+500, 500-(sqrt(pow(x,3)*1/3+pow(x,2)*1/2+1/6*x))*10);
XDrawPoint(d, w ,DefaultGC(d, s), (x*10)+500, (sqrt(pow(x,3)*1/3+pow(x,2)*1/2+1/6*x)*10)+500);



XDrawPoint(d, w ,DefaultGC(d, s), (x*10)+500, 500-(sqrt((((x)*(x+1))*(2*x+1))/3)*10));
XDrawPoint(d, w ,DefaultGC(d, s), (x*10)+500, (sqrt((((x)*(x+1))*(2*x+1))/3)*10)+500);


XDrawPoint(d, w ,DefaultGC(d, s), (x*10)+500, 500-(sqrt(pow(x,3)+pow(x,2)*3/2+1/2*x))*10);
XDrawPoint(d, w ,DefaultGC(d, s), (x*10)+500, (sqrt(pow(x,3)+pow(x,2)*3/2+1/2*x)*10)+500);





 }


if(f){
std::cout<<"---------"<<std::endl;
//std::cout<<std::round(p.getY())<<std::endl;
//std::cout<<std::round((sqrt(abs(pow(x3,3))+ecc.getB()*p.getX())))<<std::endl;
//std::cout << stvd::setprecision(20);
//std::cout<<m1.geta().get_d()<<std::endl;
//std::cout<<m1.getb().get_d()<<std::endl;

}

//      }
//      if (e.type == KeyPress)
	//if(f){
	 //XNextEvent(d, &e);vb
	   //   if(e.type==ButtonPress)
                //XSetForeground(dis, gc, white);
             // XDrawPoint(d, w, DefaultGC(d, s), e.xbutton.x, e.xbutton.y);
                
//     }



	      //break;
  //std::cout<<"input x: "<<std::endl;
  //std::cin>>x1;
   
   }

   XCloseDisplay(d);
   return 0;
}
