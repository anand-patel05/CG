// Midpoint circle drawing algorithm
#include <stdio.h>
#include <graphics.h>
//#include <dos.h>

void Pixels(int xc, int yc, int x, int y)
{
	putpixel(xc+x, yc+y, 7);
	putpixel(xc-x, yc+y, 7);
	putpixel(xc+x, yc-y, 7);
	putpixel(xc-x, yc-y, 7);
	putpixel(xc+y, yc+x, 7);
	putpixel(xc-y, yc+x, 7);
	putpixel(xc+y, yc-x, 7);
	putpixel(xc-y, yc-x, 7);
}

int main()
{
	int xc, yc, r, x, y, d;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");        // initialize graph

    printf("\nEnter centre of circle: ");                // 250 250
    scanf("%d %d", &xc, &yc);
    printf("\nEnter radius of circle: ");               // 50
    scanf("%d", &r);

    x = 0, y = r;
	d = 1 - r;
	Pixels(xc, yc, x, y);

	while (y >= x)                          // for first octant
	{
		// for each pixel we will draw all eight pixels		
		if (d < 0)
        {
            x = x + 1;
            y = y;
            d = d + 2*x + 3;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            d = d + 2*(x - y) + 5; 
        }
		Pixels(xc, yc, x, y);
		delay(50);
	}
	delay(10000);
	return 0;
	closegraph();
}
