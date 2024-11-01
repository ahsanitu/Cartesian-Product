#include<iostream>
using namespace std;

void inputArray(int arr[],int size);

int main(){

        cout<<"******************CARTESIAN PRODUCT******************";
        cout<<endl<<endl;

    //  bool status = true;

     // while(status){ // remove this to make code repeatable

            cout<<"Enter the number of elements in set A : ";
            int size_A;
            cin>>size_A;
            
            int* setA = new int[size_A];    // allocating memory at runtime and assigning the address to the pointer "setA"

            cout<<endl;
            cout<<"Enter the elements of set A : ";
            inputArray(setA,size_A);                

            cout<<"Enter the number of elements in set B : ";
            int size_B;
            cin>>size_B;

            int* setB = new int[size_B];    // allocating memory at runtime and assigning the address to pointer "setB"


     // }






    return 0;
}

void inputArray(int arr[],int size){ // function to take input in array

for(int i = 0 ; i<size ; i++ )
    cin >> arr[i];
}