#include<stdio.h>
main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        double l,w,area,r;
        double pi= acos(0.0);
        scanf("%lf", &l);
        w= (3.0/5.0)*l;
        r= (1.0/5.0)*l;
        area= pi*r*r*2;
        printf("%.2lf %.2lf\n", area, (l*w)-area);
    }
    return 0;
}
