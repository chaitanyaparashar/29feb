#include<iostream>
using namespace std;
void sorting(int arr[],int n){
int key,k,j,temp;
k=0;
for(int i=1;i<n;i++){
    key=i;
    for(j=k;j>=0;j--){

        if(arr[key]<arr[j])
        {

            temp=arr[key];
            arr[key]=arr[j];
            arr[j]=temp;
        }
        key=j;
    }k++;
}
}
int main(){
    int n;
int arr[]={7,4,1,8,5,22};
n=6;
sorting(arr,n);
for(int f=0;f<n;f++){
    cout<<arr[f];
}
return 0;
}
