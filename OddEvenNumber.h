#include<iostream>
using namespace std;

 string SingleNumber(int n){
    if(n%2==0) return "Its an Even Number.....";
    else return "Its an Odd Number....";

    return "Invlid Entry....";
 }
 void OddInArray(int arr[],int size)
 {
     cout<<"Indexes:::\t\t Numbers::::\n\n";
    for (int i = 1; i < size; i++)
    {
        if(arr[i]%2==1){
            cout<<i<<"\t\t"<<arr[i]<<"\n\n";
        }
    }
 }
    void EvenInArray(int arr[],int size)
    {
    cout<<"Indexes:::\t\t Numbers::::\n\n";
    for (int i = 0; i < size; i++)
    {
         
        if(arr[i]%2==0){
           cout<<i<<"\t\t"<<arr[i]<<"\n\n";
        }
    }
    }
    void EvenOddInArray(int arr[],int size){
        cout<<"<<<<<< Odd Numbers >>>>>>>>\n\n";
         OddInArray(arr,size);
        cout<<"<<<<<< Even Numbers >>>>>>>>\n\n";
        EvenInArray(arr,size);
    
    }

    void EvenInRange(int minN,int maxN)
    {
         
        for (int i = minN; i <= maxN; i++)
        {
         
        if(i%2==0){
           cout<<i<<"\t";
        }
         
    }
    }

void OddInRange(int minN,int maxN)
{
         
        for (int i = minN; i <= maxN; i++)
        {
         
        if(i%2==1){
           cout<<i<<"\t";
        }
         
    }
    }
 

 void SumOfOddNumberInRange(int First_Number,int Last_Number){
    int sum=0;
    for(int i=First_Number;i<=Last_Number;i++){
        if(i%2==1){
         sum+=i;
        }
    }
    cout<<sum<<endl;
 }
 
 void SumOfEvenNumberInRange(int First_Number,int Last_Number){
    int sum=0;
    for(int i=First_Number;i<=Last_Number;i++){
        if(i%2==0){
         sum+=i;
        }
    }
    cout<<sum<<endl;
 }