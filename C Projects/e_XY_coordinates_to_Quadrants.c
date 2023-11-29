#include <stdio.h>

int main()
{
    float x,y;
    printf("Enter the x coordinate: - \n");
    scanf("%f",&x);
    printf("Enter the y coordinate: - \n");
    scanf("%f",&y);
    
    printf("Hence, (x,y) equivalent to ");

    if ((x*y)>0)
    {
        if (x>0)
        {
            printf("(%f,%f) lies in Ist Quadrant. \n",x,y);
        }
        else 
        {
            printf("(%f,%f) lies in IIIrd Quadrant. \n",x,y);
        }
    }
    else if ((x*y)==0)
    {
        if ((x==0)&&(y==0))
        {
            printf("(%f,%f) lies on Origin. \n",x,y);
        }
        else if ((x==0)&&(y!=0))
        {
            printf("(%f,%f) lies on y-axis. \n",x,y);
        }
        else 
        {
            printf("(%f,%f) lies on x-axis. \n",x,y);
        }
    }
    else  
    {
        if (x>0)
        {
            printf("(%f,%f) lies in IVth Quadrant. \n",x,y);
        }
        else 
        {
            printf("(%f,%f) lies in IInd Quadrant. \n",x,y);
        }
    }
    return 0;
}
