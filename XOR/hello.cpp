#include <iostream>
#include <cmath>
#include <X11/Xlib.h>
//#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
   w = XCreateSimpleWindow(d, RootWindow(d, s), 10, 10, 1000, 1000, 5,
                           WhitePixel(d, s), BlackPixel(d, s));
XSetBackground(d, DefaultGC(d, s), WhitePixel(d, s));
XSetForeground(d, DefaultGC(d, s), WhitePixel(d, s));

   //XSelectInput(d, w, ExposureMask | KeyPressMask);
   XMapWindow(d, w);

double x1;// = 1;
bool f;
   while (1) {
  //         XClearWindow(d, w);

 	if(f)f=false;else f = true;     
//XNextEvent(d, &e);
      //if (e.type == Expose) {
         //XFillRectangle(d, w, DefaultGC(d, s), 20, 20, 10, 10);
         //XDrawString(d, w, DefaultGC(d, s), 10, 50, msg, strlen(msg));
         XDrawLine(d, w, DefaultGC(d, s), 500, 1000, 500, 0);
         XDrawLine(d, w, DefaultGC(d, s), 0, 500, 1000, 500);
         XDrawString(d, w, DefaultGC(d, s), 950, 490, "X", strlen("X"));
         XDrawString(d, w, DefaultGC(d, s), 450, 50, "Y", strlen("Y"));
	if(f){
	 std::cout<<"input x: "<<std::endl;
        std::cin>>x1;
           XClearWindow(d, w);
	}
	 for(double x =-5.65;x<5.65;x+=0.01){
 double m=0;
if(x1<0)m=x1-1;else if(x1>0)m=x1+1; else m=x1;
double y1 = abs(pow(x1,2));//pow(x1,3)-25*x1));
//double j = ((m*x1-y1));
XDrawPoint(d, w, DefaultGC(d, s), (x*10)+500, 500-(pow(x,2))*10);
XDrawPoint(d, w, DefaultGC(d, s), (x*10)+500, 500-(m*(x-x1)+y1)*10);
	 }

      //}
      //if (e.type == KeyPress)
      //break;
  //std::cout<<"input x: "<<std::endl;
  //std::cin>>x1;
   
   }

   XCloseDisplay(d);
   return 0;
}
