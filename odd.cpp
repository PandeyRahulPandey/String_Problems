#include<iostream>
using namespace std;
int main(){
    int a[100],i,n;
    int co=0,ce=0;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    cout<<"enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    for(int j=0;j<n;j++){
         if (a[j]%2==0)
        ce++;
        else
        co++;
    }
    cout<<endl<<endl<<endl;
    cout<<ce++<<endl<<endl;
    cout<<co++<<endl<<endl;
}