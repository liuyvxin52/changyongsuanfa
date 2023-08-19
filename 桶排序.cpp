#include<iostream>
using namespace std;
void countingSort(int a[],int n){ //桶排序 
    //maxnum 值的最大范围
    int b[maxnum]={0},minn=a[1],maxn=a[1];
    for(int i=1;i<=n;i++){
        b[a[i]]++;
        minn=min(a[i],minn);
        maxn=max(a[i],maxn);
    } 
    for(int k=0,i=minn;i<=maxn;i++){
        for(int j=1;j<b[i];j++){
            a[++k]=i;
        }
    }
} 
