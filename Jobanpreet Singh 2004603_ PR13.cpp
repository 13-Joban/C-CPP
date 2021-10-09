//   we will see a program in C++ that count and prints frequency of positive, zero, and negative numbers in array 

#include<iostream>
using namespace std;
int main()
{
    intpos=0, neg=0, zer=0, i, arr[10];
    cout<<"Enter array  ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    for(i=0; i<10; i++)
    {
        if(arr[i]>0)
            pos++;
        else if(arr[i]==0)
            zer++;
        else
            neg++;
    }
    cout<<"\nFrequency of Positive Numbers: "<<pos;
    cout<<"\nFrequency of Zero: "<<zer;
    cout<<"\nFrequency of Negative Numbers: "<<neg;
    cout<<endl;
    return 0;
}

output:
Enter array : 
1, 0, -3, 4, 5, 0, -8, 9, 6, 0
Frequency of Positive Numbers: 5
Frequency of Zero: 3
Frequency of Negative Numbers: 2
  
  

