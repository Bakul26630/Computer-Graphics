// Straight horizontal and vertical line

#include <graphics.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int length;
    int x, y;
    char orientation;

    cout << "Enter Y-coordinate: ";
    cin >> y;
    cout << "Enter X-coordinate: ";
    cin >> x;

    cout << "Horizontal(H) or Vertical(V) Line: ";
    cin >> orientation;

    cout << "Enter Line Length: ";
    cin >> length;

    if (orientation == 'H')
    {
        for(int i=x ; i<=length ; i++)
        {
            putpixel(i,y,WHITE);
        }
    }
    else{
         for(int i=y ; i<=length ; i++)
        {
            putpixel(x,i,WHITE);
        }
    }
    getch();
    closegraph();
    return 0;
}