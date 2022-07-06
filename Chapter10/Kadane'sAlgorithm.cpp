#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int arr[MAX],b;
int MaximumSubSubarray(){
 int MaxSum=0,CrSum=0;
 for(int i=0;i<b;i++){
  CrSum=CrSum+arr[i];
  if(CrSum>MaxSum)
   MaxSum=CrSum;
  if(CrSum<0)
   CrSum=0;  
 }
 return MaxSum;
}
int main(){
 cout<<"Enter number of elements\n";
 cin>>b;
 cout<<"Enter elements\n";
 for(int i=0;i<b;i++){
  cin>>arr[i];
 } 
 cout<<"Array is:"<<endl;
 for(int i=0;i<b;i++)
  cout<<arr[i]<<" ";
 cout<<endl; 
	
 int Max=MaximumSubSubarray();
 cout<<"Maximum Sum is:"<<Max; 
}
