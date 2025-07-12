#include<iostream>
using namespace std;

string isPrime(int n){
    for(int i = 2; i*i<=n; i++){
        if(n % i == 0){
            return "the number is Non prime"; 
        }
    }
     return "prime";
}

int main(){
    int n = 473456;

    cout << isPrime(n) << endl;
    return 0;
}