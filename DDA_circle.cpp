// DDA Circle Drawing Algorithm
#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

void pixel(float x, float y ,int c)
{
    putpixel(x+c, y+c, WHITE);
    putpixel(y+c, x+c, WHITE);
    putpixel(-x+c, y+c, WHITE);
    putpixel(-y+c, x+c, WHITE);
    putpixel(x+c, -y+c, WHITE);
    putpixel(y+c, -x+c, WHITE);
    putpixel(-x+c, -y+c, WHITE);
    putpixel(-y+c, -x+c, WHITE);
    return;
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int r;
    int c;
    cout << "Enter Radius of the Circle: ";
    cin >> r;

    cout << "Enter center of circle: ";
    cin >> c;

    float x = 0;
    float y = r;
    int n = ceil(log2(r));
    float E = pow(2, -n);
    while (y>=x)
    {
        pixel(x,y,c);
        x += E * y;
        y -= E * x;
    }

    getch();
    closegraph();
    return 0;
}