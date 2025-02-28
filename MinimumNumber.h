#include<iostream>

using namespace std;
int MinimumInArry(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
          min=arr[i];
        }
    }
    return min;
}

void MinimumNumberIn3(int n1,int n2,int n3){

    if(n1<n2){
        if(n1<n3){
            cout<<n1<<" is Minimum number"<<endl;
        }
    }
    else if(n2<n3){
       cout<<n2<<" is minimu number"<<endl;

    }
    else{
        cout<<n3<<" is minimum number"<<endl;
    }
}

