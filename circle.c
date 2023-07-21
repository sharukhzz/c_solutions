#include<stdio.h>
void areaofcircle(int r)
{
    int area,circum,diameter;
    area=pi*r*r;
    circum=2*pi*r;
    diameter=r/2;
    printf("area%d\n",area);
    printf("circum%d",circum);
    printf("diameter%d",diameter);
}
int main()
{
    int r=2;
    areaofcircle(r);
}

