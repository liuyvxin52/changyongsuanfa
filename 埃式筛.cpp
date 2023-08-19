#include<bits/stdc++.h>
using namespace std;
const int MAX=1e9;
bool isPrime[MAX]; 
void eraSieve(int MAX){ //欧拉筛 
    //计算MAX范围内所有的质数 
    memset(isPrime,true,sizeof(isPrime)); 
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<=MAX;i++){
        if(isPrime[i]){
            for(int j=2;j*i<=MAX;j++){
                isPrime[j*i]=false;
            }
        }
    } 
}
