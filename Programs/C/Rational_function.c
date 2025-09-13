#include<stdio.h>
#include<math.h>
int main(){
    double x, f;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    f = (pow(x, 3) - 2 * pow(x,2)+ x - 6.3)/(pow(x,2)+ 0.05 * x + 3.14);
    printf("f(x) = %lf", f);
    return 0;
}
