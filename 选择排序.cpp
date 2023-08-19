#include<bits/stdc++.h>
using namespace std;
void selectSort(int a[],int n){ //选择排序 
    for(int i=1;i<n;i++){ //n-1次下标 
        int minn=i; //最小值的下标 
        for(int j=i+1;j<=n;j++){
            if(a[j]<a[minn])  minn=j;
        }
        if(minn!=i){
            swap(a[i],a[minn]);
        }
    } 
}
