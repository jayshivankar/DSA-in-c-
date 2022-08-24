#include<iostream>
using namespace std;
int binarysearch(int key,int n ,int arr[]){
    int start=0;
    int end=n;
    int mid = start+(end-start)/2;
while(start <= end){
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] > key){
        end = mid-1;
    }
    else{
    start=mid+1;
}
}
return -1;
}

int main(){
int n;
int arr[n];
cout<<"enter the number of elements "<<endl;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}


int key;
cout<<"enter the element to find"<<endl;
cin>>key;
cout<<binarysearch(key, n , arr);
}

