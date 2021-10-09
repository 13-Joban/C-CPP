// we will see program to find array elements on even positions 


#include<iostream>

using namespace std;
int main()
{
   int arr[10], i;
  
   for(i=0; i<10; i++)
      cin>>arr[i];
   cout<<"List of array elements on even indexes:\n";
   for(i=0; i<10; i++)
   {
      if(i%2==0)
         cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}


output:
81 4 28 7 19 3 94 77 56 67
List of array elements  on even indexes:
81 28 19 94 56 
