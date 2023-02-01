#include<iostream>
#include <graphics.h>
using namespace std;
int main()
{
	cout<<"Circle";
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	circle(250, 200, 50);
	getch();
	closegraph();
	return 0;
}