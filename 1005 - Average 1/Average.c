#include<stdio.h>
int main()
{
    double a,b,m;

    //input number
    scanf("%lf%lf",&a,&b);
    m=((a*3.5)+(b*7.5))/11.0;
    printf("MEDIA = %.5lf\n",m);
    return 0;
}
