#include<iostream>
using namespace std;
int binarySearch(int arr[], int p, int r, int number){
	if(p<=r){
		int mid=(p+r)/2;
		if (arr[mid] == number)
		return mid;
		if(arr[mid]>number)
		return binarySearch(arr,p,mid-1,number);
	    if(arr[mid]<number)
		return binarySearch(arr,mid+1,r,number);
		
	}
	return -1;
}
int main(void){
	int arr[]={1,3,7,15,18,20,25,30,36,40};
	int n= sizeof(arr)/sizeof(arr[0]);
	int number;
	cout<<"enter the number to search:\n";
	cin >> number;
	int index=binarySearch(arr,0,n-1,number);
	if(index == -1){
		cout<<number<<"is not present in the array";
	}
	else{
		cout << number << "is present at index" << index << "in the array";
	}
	return 0;
}
