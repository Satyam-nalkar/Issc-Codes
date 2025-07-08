#include<iostream>
using namespace std;

string isPrime(int n){
    for(int i = 2; i*i<=n; i++){
        if(n % i == 0){
            return "Non prime"; 
        }
    }
     return "prime";
}  


void printDigits(int n){
    int sum = 0;
    while(n != 0 ){
        int digit = n % 10; 
        sum +=digit;
        n = n/10; 
    }
    cout << sum << endl;
}

int main(){
    int n = 3568;

    printDigits(n);
    return 0;
}