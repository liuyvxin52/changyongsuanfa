#include<iostream>
using namespace std;
void InsertSort(int a[], int n){ //插入排序 
    for (int j=1;j<n;j++){
        int key=a[j]; 
        int i=j-1;  
        while (i>=0&&key<a[i]){
            //从后向前逐个比较已经排序过数组，如果比它小，则把后者用前者代替
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;//找到合适的位置了，赋值,在i索引的后面设置key值。
    }
}
