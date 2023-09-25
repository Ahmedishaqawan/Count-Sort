#include<iostream>
#include<vector>
using namespace std;
void Count_Sort(vector<int>& arr){
	int max;
	int n=arr.size();
	for(int i=1;i<=n;i++){
		if(arr[i]>arr[i-1]){
			max=arr[i];
		}
	}
	vector<int>count;
	for(int i=0;i<n;i++){
		count[arr[i]]++;
	}
	for(int i=0;i<max;i++){
		count[i]+=count[i-1];
	}
	vector<int>output;
	for(int i=n-1;i>=0;i++){
		output[count[i]=arr[i]];
		count[i]--;
	}
	for(int i=1;i<=n;i++){
		arr[i]=output[i];
	}
}
int main(){
	int arr[20]={1,3,2,3,4,1,6,4,3};
	Count_Sort(arr);
	cout<<"Original Array Is:";
	cout<<arr;
	cout<<"Sorted Array Is:";
	for(int i=0;i<arr.size();i++){
		cout<<arr[i];
	}
}
