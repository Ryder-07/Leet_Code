#include<iostream>
using namespace std;

int main(){
	int arr[5];
	int i=0,j=0;

 	while(i<5){
 		cout<<"enter the value of array";
 		cin>>arr[i];
 		i++;
 		}
    int *p=arr;
	do{
		
		cout<<"the value at *p is "<<*(p+j)<<endl;
		j++;
	}while(j<5);
}
