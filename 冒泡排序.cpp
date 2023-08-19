#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[],int n){ //冒泡排序 
    for(int i=1;i<n;i++){
        bool flag=true;
        for(int j=1;j<=n-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                flag=false; //发生交换，则排序还未完成 
            }
        } 
        if(flag)  return ;//没有交换则说明已排好 
    }
} 
