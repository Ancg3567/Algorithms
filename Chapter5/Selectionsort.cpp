#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"Enter number of elements";
    cin>>b;
    int arr[b];
    for(int i=0;i<b;i++){
        cin>>arr[i];
    }
     for(int i=0;i<b-1;i++){
         for(int j=i+1;j<b;j++){
             if(arr[j]<arr[i]){
             int temp=arr[j];
             arr[j]=arr[i];
             arr[i]=temp;
             }
         }
     }
     for(int i=0;i<b;i++){
         cout<<arr[i]<<" ";
     }
  return(0);
}
