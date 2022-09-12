#include<stdio.h>
#include<math.h>
main()
{
    double a,b,i,n,m,temp;
    int count;
    while(scanf("%lf %lf", &a,&b)!=EOF)
    {
    if(a==0&&b==0) break;
    for(i=a,count=0;i<=b;i=i+1.0){
        n=sqrt(i);
        m=ceil(n);
        if(n==m) {
            count++;
        }
    }
    printf("%d\n", count);
    }
    return 0;
}