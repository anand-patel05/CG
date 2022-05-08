#include<graphics.h>

void floodfill(int x, int y, int old, int newcol)  
{    
    if(getpixel(x,y) == old)  
    {  
        delay(1);           //----------extra than boundary fill
        putpixel(x,y,newcol);  
        floodfill(x+1,y,old,newcol);  
        floodfill(x-1,y,old,newcol);  
        floodfill(x,y+1,old,newcol);  
        floodfill(x,y-1,old,newcol);  
        floodfill(x+1,y+1,old,newcol);  
        floodfill(x-1,y+1,old,newcol);  
        floodfill(x+1,y-1,old,newcol);  
        floodfill(x-1,y-1,old,newcol);  
    }  
}  
int main()  
{  
    int gd=DETECT,gm;  
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    
    rectangle(50,50,100,100);  // xmin, xmax, ymin, ymax
    floodfill(51,51,0,GREEN);  // start co-ordinate
    return 0;   
}
