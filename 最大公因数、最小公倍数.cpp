#include<bits/stdc++.h>
using namespace std;
int gcd1(int a,int b){ //辗转相除递归解法 
    if(b==0)  return a;
    return gcd1(b,a%b); 
} 
int gcd2(int a,int b){ //辗转相除法求解 
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
} 
int lcm(int a,int b){ //最小公倍数 
    return a*b/gcd1(a,b);
}
