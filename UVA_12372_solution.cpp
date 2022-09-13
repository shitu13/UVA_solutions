#include<stdio.h>
int main()
{
    int T,cas=0;
    scanf("%d", &T);
    while(T--){
        double l,w,h;
        scanf("%lf %lf %lf", &l,&w,&h);
        cas++;
        if(l<=20&&w<=20&&h<=20)
            printf("Case %d: good\n",cas);
        else
            printf("Case %d: bad\n",cas);
    }
    return 0;
}
