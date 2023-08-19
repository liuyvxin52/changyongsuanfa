#include<iostream>
using namespace std;
void shellSort(int a[],int len){ //希尔排序   (len代表数组长度) 
    for(int i=len/2;i>=1;i/=2){//增量 
        for(int j=0;j<i;j++){//分组 
            for(int k=i+j;k<len;k+=i){//排序 
                int temp=a[k];
                int x=k-i;
                while(x>=0&&temp<a[j]){
                    a[x+i]=a[x];//移动增量个单位 
                    x-=i;
                }
                a[x+i]=temp;
            }
        }
    } 
} 
