#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
	int R[2][2] = {50, 50, 200, 200};              // rectangle co-ordinates
	int T[2] = {250, 100};                        // translation factor
    int gd = DETECT, gm, errorcode;
	initgraph (&gd, &gm, "C:\\TURBOC3\\BGI");
    
    setcolor (2);
	rectangle (R[0][0], R[0][1], R[1][0], R[1][1]);      // original rectangle

	// calculating translated coordinates
	R[0][0] = R[0][0] + T[0];
	R[0][1] = R[0][1] + T[1];
	R[1][0] = R[1][0] + T[0];
	R[1][1] = R[1][1] + T[1];

	setcolor(3);
	rectangle (R[0][0], R[0][1], R[1][0], R[1][1]);        // translated rectangle
    delay(10000);
	closegraph();
	return 0;
}
