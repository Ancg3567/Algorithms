#include<iostream.h>
#include<graphics.h>
#include<dos.h>
 
void floodFill(int r,int y,int oldcolor,int newcolor){
 if(getpixel(r,y) == oldcolor){
  putpixel(r,y,newcolor);
  floodFill(r+1,y,oldcolor,newcolor);
  floodFill(r,y+1,oldcolor,newcolor);
  floodFill(r-1,y,oldcolor,newcolor);
  floodFill(r,y-1,oldcolor,newcolor);
 }
}
 
int main(){
 int gm,gd=DETECT,radius;
 int r,y;
 cout<<"Enter x and y positions for circle: "<<endl;
 cin>>r>>y;
 cout<<"Enter radius of circle"<<endl;
 cin>>radius;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 circle(r,y,radius);
 floodFill(r,y,0,15);
 delay(3000);
 closegraph();
 return 0;
}
