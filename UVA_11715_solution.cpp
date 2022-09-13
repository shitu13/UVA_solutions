#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cas=0;
    while(scanf("%d", &n)!=EOF&&n!=0)
    {
        double u,v,t,s,a;
        if(n==1)
        {
            scanf("%lf %lf %lf", &u,&v,&t);
            cas++;
            a= (v-u)/t;
            s= (u+v)*t/2;
            printf("Case %d: %.3lf %.3lf\n", cas,s,a);
        }
        else if(n==2)
        {
            scanf("%lf %lf %lf", &u,&v,&a);
            cas++;
            t= (v-u)/a;
            s= (u+v)*t/2;
            printf("Case %d: %.3lf %.3lf\n", cas,s,t);
        }
        else if(n==3)
        {
            scanf("%lf %lf %lf", &u,&a,&s);
            cas++;
            v=sqrt(u*u+ (2*a*s));
            t= (v-u)/a;
            printf("Case %d: %.3lf %.3lf\n", cas,v,t);
        }
        else if(n==4)
        {
            scanf("%lf %lf %lf", &v,&a,&s);
            cas++;
            u= sqrt(v*v- (2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n", cas,u,t);
        }
    }
    return 0;
}
