#include<iostream>
#define MAX 11
int arr[MAX];
using namespace std;
void heapify(int k,int i)
{
 int left,right,largest=i;
 left=2*i+1;
 right=left+1;
 int temp;
 if(left<k&&arr[left]>arr[largest])
 {
 largest=left;
 }
 if(right<k&&arr[right]>arr[largest])
 {
 largest=right;
 }
 if(largest!=i)
 {
  temp=arr[i];
  arr[i]=arr[largest];
  arr[largest]=temp;
  heapify(k,largest);
 }
}
void build_heap(int k)
{
int i,temp;
 for(i=k/2-1;i>=0;i--)
 heapify(k,i);
}
void heap_sort(int k)
{
 build_heap(k);
 for(int i=k-1;i>0;i--) 
 {
  int temp=arr[0];
  arr[0]=arr[i];
  arr[i]=temp;
  heapify(i,0);
 }
}
int main()
{
int k;
 cout<<"Enter the number of elements\n";
 cin>>k;
 cout<<"Enter the elements\n";
 for(int i=0;i<k;i++)
 cin>>arr[i];
	
 cout<<"Entered numbers are:\n";
 for(int i=0;i<k;i++)
 cout<<arr[i]<<" ";
	
 heap_sort(k);
cout<<"\nSorted array is:\n";
 for(int i=0;i<k;i++)
 cout<<arr[i]<<" ";
}
