#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    int dup = n;
    
    while(n>0){
        int lastDigit = n%10;
        sum = sum+(lastDigit*lastDigit*lastDigit);
        n = n/10;
    }
    
    if (sum == dup) cout << "Number is Armsrtong";
    else cout << "Not Armstrong.";
    return 0;
}