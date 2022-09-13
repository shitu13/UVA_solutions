#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d", &T);
    for(int i=1;i<=T;i++){
       int N,c,max=0;
       scanf("%d", &N);
       for(int j=0;j<N;j++){
        scanf("%d", &c);
        if(c>max)
            max=c;
       }
       printf("Case %d: %d\n", i,max);
    }
    return 0;
}
