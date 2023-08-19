#include <iostream>
#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
   Display *d;
   Window w;
   XEvent e;
   const char *msg = "Hello, World!";
   int s;

   d = XOpenDisplay(NULL);
   if (d == NULL) {
      fprintf(stderr, "Cannot open display\n");
      exit(1);
   }

   s = DefaultScreen(d);
   w = XCreateSimpleWindow(d, RootWindow(d, s), 10, 10, 1000, 1000, 5,
                           WhitePixel(d, s), BlackPixel(d, s));
   //win=XCreateSimpleWindow(dis, DefaultRootWindow(dis),0,0,1000,1000,5,white,black);
XSetBackground(d, DefaultGC(d, s), WhitePixel(d, s));
XSetForeground(d, DefaultGC(d, s), WhitePixel(d, s));

   XSelectInput(d, w, ExposureMask | KeyPressMask);
   XMapWindow(d, w);

double x1;// = 1;

   while (1) {
      XNextEvent(d, &e);
      if (e.type == Expose) {
         XFillRectangle(d, w, DefaultGC(d, s), 20, 20, 10, 10);
         XDrawString(d, w, DefaultGC(d, s), 10, 50, msg, strlen(msg));
      }
      if (e.type == KeyPress)
        break;
        //std::cout<<"input x: "<<std::endl;
        //std::cin>>x1;

   }

   XCloseDisplay(d);
   return 0;
}
