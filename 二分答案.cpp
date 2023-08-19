#include<bits/stdc++.h>
using namespace std;
int binarySearch(int left,int right){ //二分答案 
    int ans=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(check(mid)){
            ans=mid;
            left=mid+1;//right=mid-1; 
        }
        else{
            right=mid-1;//left=mid+1; 
        }
    } 
    return ans; 
}

int binarySearch(int left,int right){
    while(left<right){
        int mid=(left+right)/2;
        if(check(mid)){
            left=mid;//right=mid;
        }
        else{
            right=mid-1;//left=mid+1;
        }
    }
    return left;//return right;
}
