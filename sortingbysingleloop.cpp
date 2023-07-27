#include<iostream>
using namespace std;
int main(){
int n1,n2,arr[120];
cout <<"enter the vaue of n1 and n2:"<<endl;
cin>>n1>>n2;
cout<<"enter the elements of the array:"<<endl;
for(int i=0;i<n1+n2;i++){
    cin>>arr[i];
}
for(int i=0;i<n1+n2;i++){
    if(arr[i]>arr[i+1]){
        int t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;
        i=-1;
    }
}
cout<<endl<<endl<<endl;
for(int i=0;i<n1+n2;i++){
    cout<<arr[i]<<" "<<endl;
}
}
