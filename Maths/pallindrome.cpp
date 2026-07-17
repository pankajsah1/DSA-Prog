#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
   
    int rev = 0;
    int dup = n;
    while(n>0){
        int lastDigit = n%10;
        rev = rev*10+lastDigit;
        n=n/10;
    }
    if (rev == dup ) cout << "Nuber is Pallindrome";
    else cout << "Not Pallindrome";
    return 0;
}