#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){
    //base case
    if(n==0){
        return ;
    }
    //preocessing
    int digit = n%10;
    n = n/10;

    //recursice call

    sayDigit(n,arr);
    cout << arr[digit] << "  ";

}



int main(){
    string arr[10] = {"zero", "one", "two",
                "three", "four", "five", 
                "six", "seven", "eight", "nine"
    };
    int n ;
    cin>> n;
    cout <<endl <<endl<<endl<<endl;
    sayDigit(n,arr);
    cout << endl <<endl <<endl;
}