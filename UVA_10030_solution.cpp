#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d", &T);
    while(T--){
    int f;
    double a,b,c,ans=0.0;
    scanf("%d", &f);
    while(f--){
        scanf("%lf %lf %lf", &a,&b,&c);
        ans= ans+((a/b)*b*c);
    }
    printf("%.0lf\n", ans);
    }
    return 0;
}
