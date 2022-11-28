#include <stdio.h>
#include <math.h>
// My frist messege
int main()
{
    float x, y, S;

    printf("Write the numbers:");
    scanf("%f", &x);
    scanf("%f", &y);
    printf("x = %f, y = %f \n", x, y);

    S = 3.6*pow(sin(x) + cos(pow(y,2)), 3) - tan(sqrt(pow(sin(x), 2) + pow(cos(x), 2)));

    printf("Your answer is: %f", S);

    return 0;

}