#include<stdio.h>
#include<math.h>
main()
{
    int T;
    scanf("%d", &T);
    while(T--){
    long long int n,a,b,c,d,e,f,x,y,p;
    scanf("%lld", &n);
    a= n*567;
    b= a/9;
    c= b+7492;
    d= c*235;
    e= d/47;
    f= e-498;
    x= f%100;
    y= x/10;
    p= abs(y);
    printf("%lld\n", p);
    }
    return 0;
}