#include<bits/stdc++.h>
using namespace std;
long int i,n,arr[2000005];

int main()
{
    while(scanf("%ld", &n)!=EOF){
            if(n==0)
                break;
        for(i=0;i<n;i++){
            scanf("%ld", &arr[i]);
        }
        sort(arr,arr+i);
        for(i=0;i<n;i++){
            printf("%ld", arr[i]);
            if(i<n-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}


