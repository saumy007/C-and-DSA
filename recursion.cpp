//recursion problem

#include<iostream>
using namespace std;

    int factorial(int n){
        //base case
        if(n == 0){
            return 1;
        }

        
        return n * factorial(n-1);



    }
    int main(){
        int n;
        cin >> n;
        int res = factorial(n);
        cout<<res<<endl;
    }
