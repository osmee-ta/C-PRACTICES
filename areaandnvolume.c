#include<stdio.h>

int main() {
    int r = 4;
    int h = 6;

    printf("the area of the circle with radius %d is %f\n" , r, 3.14*r*r);

    printf("the area of the cylinder with radius %d and height %d is %f", r, h,3.14*r*r*h);
    return 0;
}