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

            cout<<endl;

            cout<<"Enter the number of elements in set B : ";
            int size_B;
            cin>>size_B;
            cout<<endl;

            int* setB = new int[size_B];    // allocating memory at runtime and assigning the address to pointer "setB"
             cout<<"Enter the elements of set B : ";
            inputArray(setB, size_B);

            cout<<endl;

            cout<<"Set A = {";

                for(int i=0; i<size_A ; i++ ){
                    
                    cout<<setA[i];

                    if(i != size_A - 1)
                        cout<<",";
                    
                }

            cout<<"}";

             cout<<endl;

            cout<<"Set B = {";

                for(int i=0; i<size_B ; i++ ){
                    
                    cout<<setB[i];

                    if(i != size_B - 1)
                        cout<<",";
                    
                }

            cout<<"}";

            // A x B

            cout<<endl;
            cout<<endl;


            cout<<"A x B : {";
            
            for(int i=0 ; i<size_A ; i++){
                for(int j=0 ; j<size_B ; j++){

                    cout<<"("<<setA[i]<<","<<setB[j]<<")";

                }
                if( i != size_A-1)
                    cout<<",";
            }
            cout<<"}";
            cout<<endl<<endl;

            // BxA
             cout<<"B x A : {";
            
            for(int i=0 ; i<size_B ; i++){
                for(int j=0 ; j<size_A ; j++){

                    cout<<"("<<setB[i]<<","<<setA[j]<<")";

                }
                if( i != size_B-1)
                    cout<<",";
            }
            cout<<"}";

     // }   






    return 0;
}

void inputArray(int arr[],int size){ // function to take input in array

for(int i = 0 ; i<size ; i++ )
    cin >> arr[i];
}

