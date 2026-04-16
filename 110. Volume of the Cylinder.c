#include <stdio.h>
int main(){
    double radius, height, volume;
    const double PI = 3.141592653589793;

    printf("Enter the radius of the cylinder: ");
    scanf("%lf",&radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf",&height);

    volume = PI*radius*radius*height;
    printf("Volume of the cylinder: %.3lf\n",volume);
    return 0;
}
