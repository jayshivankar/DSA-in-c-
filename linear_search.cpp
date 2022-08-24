#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
     for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    /*for(int i=0;i<n;i++){
        cout<<arr[i];
    }*/
int key ;

cout<<"enter the element you want to find"<<endl;
cin>>key;
cout<<linearsearch(arr,n,key)<<endl;
}


