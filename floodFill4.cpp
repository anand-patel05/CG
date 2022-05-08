 #include<graphics.h>  

void flood(int x,int y,int defaultColor, int fillColor)  
{  
    if(getpixel(x,y) == defaultColor)  
    {  
        delay(1);  
        putpixel(x,y,fillColor);  
        flood(x+1,y,defaultColor, fillColor);  
        flood(x-1,y,defaultColor, fillColor);  
        flood(x,y+1,defaultColor, fillColor);  
        flood(x,y-1,defaultColor, fillColor);  
    }  
}  
int main()  
{  
    int gd=DETECT,gm;  
    initgraph(&gd,&gm,"C:/TURBOC3/BGI");  

    rectangle(50,50,100,100);  
    flood(75,75,0,YELLOW); 
    return 0;  
}
