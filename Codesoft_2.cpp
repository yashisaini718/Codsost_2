#include <iostream>
#include<cstdlib>
using namespace std;
int main(){
    cout <<"\t\tSIMPLE CALCULATOR !";
    while(true){
        cout<<"\nChoose one of the following operations !";
        cout<<"\n1 for Addition !";
        cout<<"\n2 for Subtraction !";
        cout<<"\n3 for Multiplication !";
        cout<<"\n4 for Division !";
        cout<<"\n0 for End !";
        int choice;
        cout<<"\n\nEnter your choice : ";
        cin>>choice;

        //exit the calculation
        if (choice == 0){
            exit (0);
        }
        //inputting the numbers
        int a,b;
        cout<<"\nEnter two numbers : ";
        cin>>a>>b;

        //for addition 
        if (choice == 1){
            cout<<"Sum of numbers : "<<a+b<<endl;
        }

        //for subtraction
        else if (choice ==2){
            cout<<"Difference of numbers : "<<a-b<<endl;
        }

        //for multiplication
        else if (choice == 3){
            cout<<"Product of numbers : "<<a*b<<endl;
        }

        //for division
        else if (choice == 4){
            cout<<"Quotient of numbers : "<<a/b<<endl;
        }

        
        else{
            cout<<"Invalid choice !";
        }
    }
    return 0;
}
