#include<stdio.h>
#include "myMath.h"

int main(){
	double x;
	printf("Please insert a real number: \n");
	scanf("%lf",&x);
    double ans1 = sub(add(Exp((int)x), Pow(x,3)),2);
    double ans2 = add(mul(3,x), mul(2,Pow(x,2)));
    double ans3 = sub(div(mul(4,Pow(x,3)),5), mul(2,x));
    printf("The value of f(x) = e^x + x^3 -2 at the point %lf is: %0.4lf \n", x,ans1);
    printf("The value of f(x) = 3x + 2x^2 at the point %lf is: %0.4lf \n", x,ans2);
    printf("The value of f(x) = ((4x^3) / 5) - 2x at the point %lf is: %0.4lf \n", x,ans3);

return 0;
}
