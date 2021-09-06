#include <iostream>
using namespace std;

//Move negative numbers to one side

int main() {
	int n;
	cin>>n;
	int arr[n];
	for( int i =0;i<n;i++){
	    cin>>arr[i];
	}
	for( int i=0;i<n;i++){
	    for( int j = 0 ;j<n;j++){
	        if( arr[j]<0 && i!=j){
	            swap(arr[i],arr[j]);
	        }
	    }
	}
	for( int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
