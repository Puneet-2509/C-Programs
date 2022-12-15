#include<iostream>
using namespace std;
void merge(int array1[],int array2[],int array3[],int num1,int num2){
	int i=0,j=0,k=0;
	int t=num1 + num2;
	while(i<num1 && j<num2){
		if(array1[i]<array2[j]){
			array3[k++]=array1[i++];
			}
		else{
			array3[k++]=array2[j++];
			}
	while(i<num1){
		array3[k++]=array1[i++];
		}
	while(j<num2){
		array3[k++]=array2[j++];
		}
	}
	cout<<endl;
	cout<<"the merged array is: "<<endl;
	for(int z=0;z<t; z++){
		cout<<array3[z]<<"\t";
	}
}

int main(){
	int n, m;
	cout<<"enter your order of first array: ";
	cin>>n;
	int a1[n];
	cout<<"enter the elements for first array:"<<endl;
	for(int i=0;i<n;i++){
		cin>>a1[i];}
	cout<<"your first array is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<a1[i]<<"\t";}
	cout<<endl;
	
	cout<<"enter your order of second array: ";
	cin>>m;
	cout<<"enter the elements for second array:"<<endl;
	int a2[m];
	for(int i=0;i<m ;i++){
		cin>>a2[i];}
	cout<<"your second array is:"<<endl;
	for(int i=0;i<m ;i++){
		cout<<a2[i]<<"\t";
		}
		
	int p=n + m;
	int a3[p];
	merge(a1,a2,a3,n,m);
	return 0;
}
