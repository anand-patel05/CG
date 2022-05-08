// Bresenham's Line Drawing Algorithm
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
int main()
{
    int x1, y1, x2, y2;
    float dx, dy, x, y, m, p;
    int gr = DETECT, gm;
    initgraph(&gr, &gm, "C:\\TURBOC3\\BGI");

    printf("\nEnter start co-ordinate: ");                // 100 200
    scanf("%d %d", &x1, &y1);
    printf("\nEnter final co-ordinate: ");               // 300 400
    scanf("%d %d", &x2, &y2);

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    m = dx  / dy;
    p = 2*dy - dx; 
    
    x = x1;
    y = y1;

    do
    {
        putpixel(x, y, WHITE);

        if (m >= 1)
        {
            if (p < 0)
            {
                x = x;
                y = y + 1;
                p = p + 2*dx;
            }
            else
            {
                x = x + 1;
                y = y + 1;
                p = p + 2*dx - dy;
            }
        }
        else
        {
            if (p < 0)
            {
                x = x + 1;
                y = y;
                p = p + 2*dy;
            }
            else
            {
                x = x + 1;
                y = y + 1;
                p = p + 2*dy - 2*dx;
            }
        }
        delay(30);
    } while(x <= x2);
    getch();
    closegraph();
}