#include<bits/stdc++.h>
using namespace std;
const int MAX=1e7;
bool isPrime[MAX];
int prime[MAX]; 
void EulerSieve(int MAX){ //欧拉筛 
    memset(isPrime,true,sizeof(isPrime)); 
    isPrime[0]=isPrime[1]=false;
    int cnt=0; //质数个数 
    for(int i=2;i<=MAX;i++){
        if(isPrime[i]){
            prime[cnt++]=i;
        }
        for(int j=0;j<cnt&&prime[j]*i<=MAX;j++){
            isPrime[prime[j]*i]=false;
            if(i%prime[j]==0)  break;
        }
    } 
}
