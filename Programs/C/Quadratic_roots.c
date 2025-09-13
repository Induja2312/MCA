#include<stdio.h>
#include<math.h>
int main(){
    double a, b, c, dis, root1, root2, real, img;
    printf("Enter the value of a, b and c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    dis = b * b - ( 4 * a * c);
    if (dis > 0){
        root1 = (- b - sqrt(dis))/ (2 * a);
        root2 = (- b + sqrt(dis))/ (2 * a);
        printf("Root 1: %lf\n Root 2: %lf", root1, root2);
    }
    else if (dis == 0){
        root1 = (-b)/ (2 * a);
        printf("Roots are equal, Root: %lf", root1);
    }
    else if (dis < 0){
        real = (-b)/(2 * a);
        img = sqrt(-dis)/(2 * a);
        printf("The roots are imaginary.\nRoot 1: %lf + %lfi\nRoot 2: %lf - %lfi", real, img, real, img);
    }
    else{
        printf("Invalid Input.");
    }
    return 0;

}