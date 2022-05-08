// DDA Line Drawing Algorithm
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
int main()
{
    int x1, y1, x2, y2;
    float dx, dy, x, y, m;
    int gr = DETECT, gm;
    initgraph(&gr, &gm, "C:\\TURBOC3\\BGI");

    printf("\nEnter start co-ordinate: ");                // 100 200
    scanf("%d %d", &x1, &y1);
    printf("\nEnter final co-ordinate: ");               // 300 400
    scanf("%d %d", &x2, &y2);

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    m = dx  / dy; 
    
    x = x1;
    y = y1;

    do
    {
        putpixel(x,y,WHITE);

        if (dx >= dy)
        {
            dx = 1;
            x = x + dx;
            y = y + m;
        }
        else
        {
            dy = 1;
            x = x + 1.0 / m;
            y = y + dy;
        }
        delay(30);
    } while(x <= x2);
    getch();
    closegraph();
}