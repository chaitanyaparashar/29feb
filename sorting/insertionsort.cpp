#include<iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int key;
    int j;
    for(int i=1;i<n;i++){
        j=i-1;
        key=arr[i];

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
         arr[j+1]=key;
    }
}


void printArray(int arr[], int n)
{
   int i;
   cout<<"sorted array";
   cout<<"\n";
   for (i=0; i < n; i++){
     cout<<arr[i];
     cout<<"\n";
   }
}



    int main(){
        int n;
        int arr[50];

        cout<<"elements u want to enter \n";
        cin>>n;
        cout<<"enter elements of array \n";
        for(int j=0;j<n;j++){
            cin>>arr[j];

        }
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
    }
