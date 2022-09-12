#include<stdio.h>
#include<math.h>
main()
{
    double a,b,f;
    while(scanf("%lf %lf", &a,&b)!=EOF){
        f=pow(b,(1/a));
        printf("%.0lf\n",f);
    }
    return 0;
}