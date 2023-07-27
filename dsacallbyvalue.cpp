#include<iostream>
using namespace std;
#define MAX 10
int iNS(int [],int);
int dEL(int [],int);
void dISP(int [],int );
main(){
    int A[MAX],t=-1,ch;
    do {
        cout<<"enter the case number:"<<endl;
        cin>>ch;
        switch(ch){
            case 1:  if (t>=MAX-1)
                      cout <<"array A is full:"<<endl;
                    else
                        t=iNS(A,t);
                        break;
            case 2:   if (t==-1)
                        cout <<" A is empty:"<<endl;
                      else
                      t=dEL(A,t);
                      break;
            case 3:  if (t==-1)
                     cout<<"array is empty:"<<endl;
                     else
                     dISP(A,t);
                     break;
            }
        }
    while(ch<=3);
    cout<<t;
    }

        int iNS(int A[],int t)
        {
            t++;
            cout<<"enter the element you want to input :"<<endl;
            cin>>A[t];
            return t;
        }   
        void dISP(int A[],int t)
        {
            while(t>=0){
            cout<<A[t];
            t--;
            }
        }
        int dEL(int A[],int t)
        {
            cout<<"deleted element is :"<<A[t]<<endl;
            t--;
            return t;
        }
                 


