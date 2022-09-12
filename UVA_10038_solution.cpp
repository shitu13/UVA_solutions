#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c,n,arr[3005],b[3005];
    while(scanf("%d", &n)!=EOF){
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    c=1;
    for(i=0;i<n-1;i++){
        b[i]= abs(arr[i]-arr[i+1]);
    }
    sort(b,b+i);
    for(i=1;i<n;i++){
        if(b[i]==b[i-1]){
            c=0;
            break;
        }
    }
    if(c==0)
        printf("Not jolly\n");
    else
      printf("Jolly\n");
    }
    return 0;
}