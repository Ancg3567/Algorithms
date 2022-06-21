#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter length of array"<<endl;
    cin>>y;
    int arr[y];
    cout<<"enter "<<y<<" value";
    for(int i=0;i<y;i++){
        cin>>arr[i];
    }
    for(int i=1;i<y;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<y;i++){
        cout<<arr[i]<<" ";
    }
    return(0);
}
