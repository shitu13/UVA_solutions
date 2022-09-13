#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d", &T);
    for(int i=1;i<=T;i++){
    int n,k,p;
    scanf("%d %d %d", &n,&k,&p);
    int ans= p+k;
    while(ans>n){
        ans= ans-n;
    }
    printf("Case %d: %d\n", i, ans);
    }
    return 0;
}
