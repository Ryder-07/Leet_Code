#include <iostream>
using namespace std;

int main(){
	
	int arr[5];
	int i=0;
	int j=0;
	/*for (int i=0;i<5;i++){
		cout<<"enter the "<<i+1<<" number in the array";
		cin>>arr[i];
	}
	
	for (int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}*/
	
	
	do{
	 
		cout<<"enter the "<<i+1<<" number in the array";
		cin>>arr[i];
		++i;
		
         }while (i<5);
	do {
	
		
		cout<<arr[j]<<" ";
		++j;
		
	
}while (j<5);
}
