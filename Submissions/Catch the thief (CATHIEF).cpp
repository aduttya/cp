/**
 *	Author: Ajay
 *
 *	Created: Sunday, January 24, 2021	19:10:36 IST
 *
 *	Problem: Catch the thief (CATHIEF)
 *	Problem Statement: https://www.codechef.com/problems/CATHIEF
**/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        ll x,y,k,n;
        scanf("%lld",&x);
        scanf("%lld",&y);
        scanf("%lld",&k);
        scanf("%lld",&n);
        ll val = llabs(x-y);
        if(val % k == 0){
            val = val/k;
            if(val % 2 == 0)
                printf("Yes\n");
            else
                printf("No\n");
        }
        else
            printf("No\n");
    }
    
}
