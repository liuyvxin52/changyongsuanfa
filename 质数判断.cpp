#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num){ //质数判断 
    if(num<2)  return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0)  return false;
    } 
    return true;
} 
