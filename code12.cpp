#include<iostream>
using namespace std;
int main()
{
   int n =15;
   bool isPrime = true;

   for(int i =2; i*i <= n;i++)
   {
    if(n % i == 0){
       isPrime = false;
       break;
    }
   }
   if(isPrime == true){
       cout << "prime number\n";
   }else{
       cout << "non prime number\n";

   }
   return 0;
}