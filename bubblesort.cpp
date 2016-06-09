#include<iostream>
using namespace std;
void swap(int *a,int *b){
int temp;
temp = *a;
*a=*b;
*b=temp;
}
void bubblesort(int arr[],int n){
    for(int j=0;j<n;j++){
for(int i=0;i<n-1;i++){
    if(arr[i]<arr[i+1]){
        swap(&arr[i+1],&arr[i]);
    }
    }
}
}

void printarray(int arr[],int size){
cout<<"sorted list \n";
for(int i=size-1; i>=0;i--){
    cout<<arr[i];
    cout<<"\n";
}
}
int main(){
int arr[50];
int n;
cout<<"enter the number of elements u want to enter";
cin>>n;
cout<<"enter the elements";
for(int g=0;g<n;g++){
    cin>>arr[g];
}
bubblesort(arr,n);
printarray(arr,n);
return 0;
}
