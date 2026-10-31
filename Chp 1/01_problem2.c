/* Calculate the area of a circle and modify the same program to calculate the volume of
a cylinder given its radius and height.*/

#include <stdio.h>

int main(){
    float radius, height;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    printf("Enter height of the cylinder: ");
    scanf("%f", &height);
    float area = 3.14 *radius*radius;
    float volume = area * height;
    printf("Area of the circle is %f \n", area);
    printf("Volume of the cylinder is %f", volume);
    return 0;
}