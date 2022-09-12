#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,price;
    while(scanf("%d", &N)!=EOF){
    int i,j,ans,ans1,arr[N];
    for(i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &price);
    int diff= price;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if((arr[i]+arr[j]==price)&&abs(arr[i]-arr[j])<diff){
              ans= arr[i];
              ans1= arr[j];
              diff= abs(arr[i]-arr[j]);
            }
        }
    }
    if(ans<=ans1)
        printf("Peter should buy books whose prices are %d and %d.\n\n", ans,ans1);
    else
        printf("Peter should buy books whose prices are %d and %d.\n\n", ans1,ans);
    }
    return 0;
}