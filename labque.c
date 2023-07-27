#include<stdio.h>
int main(){
    int a[100],n,i,t;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i+1]<0&&a[i]>0){
        t=a[i+1];
        a[i+1]=a[i];
        a[i]=t;
        }
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}