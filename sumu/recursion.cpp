#include <iostream>
#include <math.h>
using namespace std;

int getSumOfDigits(int num){
    return (num == 0 ? 0 : (num % 10 + getSumOfDigits(num / 10)));
}

int sumOfArray(int* arr, int index){
    return (index < 0 ? 0 : sumOfArray(arr, index-1) + arr[index]);
}

int fib (int n){
    if (n==0)return 0;
    if (n==1)return 1;
    else return fib(n-1)+fib(n-2);
}
 
int factorial (int n){
    if (n==0) return 1;
    else return n*factorial(n-1);
}
 
int sumOfDigits(int x){
    if (x == 0) return 0;
    else return (x%10)+ sumOfDigits(x/10);
}
 
int findmin (int  a [], int size){
    if (size == 0)
        return a[size];
    else if (a[size-1]>= a[size]){
        a[size-1] = a[size];
        return findmin(a, size-1);
    }
    else return findmin (a, size-1);
}
 
int DecToBin (int dec){
     if (dec == 0)
      return 0;
   else
      return dec % 2 + 10 * (DecToBin(dec / 2));
}
 
double fn (int x){
    if (x==0)
        return 1;
    else return (1/(pow(2.0 , x))) +fn (x-1);
}

int main(){
    cout << fn(4) << "\n";
    cout << DecToBin(8) << "\n";
    int arr[4] = {2,4,1,3};
    cout << findmin(arr, 3) << "\n";
    cout << sumOfDigits(1234) << "\n";
    int arr2[4] = {1,2,3,4};
    cout << sumOfArray(arr2, 3) << "\n";
    cout << factorial(5) << "\n";
    cout << fib(4) << "\n";
}
