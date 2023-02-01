// Digital Differential Analyzer Line Drawing Algorithm
#include <graphics.h>
#include <iostream>
#include <cmath>
#include<conio.h>
using namespace std;

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x1, y1, x2, y2, m;

    cout << "Enter X1-Coordinate: ";
    cin >> x1;

    cout << "Enter Y1-Coordinate: ";
    cin >> y1;

    cout << "Enter X2-Coordinate: ";
    cin >> x2;

    cout << "Enter Y2-Coordinate: ";
    cin >> y2;

    m = (y2 - y1) / (x2 - x1);
    int dx=(x2-x1);
    int dy=(y2-y1);
    if(dx>=dy){
        dx=1;
        int x=x1;
        float y=y1;
        while (x<=x2)
        {
            putpixel(x,round(y),WHITE);
            x+=1;
            y+=m;
        }  
    }
    else{
        dy=1;
        float x=x1;
        int y=y1;
        while (x<=x2)
        {
            putpixel(round(x),y,WHITE);
            x+=(1/m);
            y+=1;
        } 
    }
    // int y = y1;
    // for (int x = x1; x <= x2; x++)
    // {
    //     putpixel(x, round(y), WHITE);
    //     y += m;
    // }

    // float dx = (x2-x1);
    // float dy = (y2-y1);
    // float length;
    // if(dx>=dy){
    //     length=dx;
    // }
    // else{
    //     length=dy;
    // }
    // dx/=length;
    // dy/=length;
    // float y=y1;
    // float x=x1;
    // while(x<=x2){
    //     putpixel(round(x),round(y),WHITE);
    //     x+=(0.5*dx);
    //     y+=(0.5*dy);
    //     cout<<"("<<x<<","<<y<<")"<<endl;
    // }
    getch();
    closegraph();
    
    return 0;
}