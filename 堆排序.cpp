#include<iostream>
using namespace std;
void MaxSort(int a[], int i, int n)
{
    int j=2*i+1;//找到当前结点的左孩子
    int temp=a[i];
    while(j<n){
        if(j+1<n&&a[j]<a[j+1])//判断条件，第一个条件是判断是不是最后一个结点。                    
            j++;
        if(temp>a[j])//因为我们是MaxSort所以如果父结点本身就大不用判断直接跳出循环。
            break;
        else{
            a[i]=a[j];
            i=j;
            j=2*i+1;
        }
    }
    a[i]=temp;//交换 
}
void HeapSort(int a[], int n){ //堆排序 

    for(int i= n/2-1;i>=0;i--)//从最后一个结点的父结点开始向前遍历
        MaxSort(a,i,n);
    for(int i=n-1;i>=1;i--)
    {
        MaxSort(a,0,i);
    }
}
