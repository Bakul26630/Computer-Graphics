// Mid-Point Line Drawing Algorithm
#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);

    int x1,x2,y1,y2;
    cout<<"Enter X1-Coordinate: ";
    cin>>x1;
    cout<<"Enter Y1-Coordinate: ";
    cin>>y1;
    cout<<"Enter X2-Coordinate: ";
    cin>>x2;
    cout<<"Enter Y2-Coordinate: ";
    cin>>y2;

    int dx=x2-x1;
    int dy=y2-y1;
    int d=2*dy-dx;
    int dE = 2*dy;
    int dNE = 2*(dy-dx);
    int x=x1;
    int y=y1;

    putpixel(x,y,WHITE);

    while(x<x2){
        if(d<=0){
            d+=dE;
            x+=1;
        }
        else{
            d+=dNE;
            x+=1;
            y+=1;
        }
        putpixel(x,y,WHITE);
    }

    getch();
    closegraph();
    return 0;
}