#include<bits/stdc++.h>
using namespace std;
void quickSort(int a[],int start,int end){ //快速排序，等同于sort()函数 
    int mid=a[(start+end)/2],l=start,r=end;
    while(l<r){
        while(a[l]<mid)  l++;
        while(a[r]>mid)  r--;
        if(l<=r)  swap(a[l++],a[r--]);
    } 
    if(start<r) quickSort(a,start,r);
    if(l<end)  quickSort(a,l,end);
} 
