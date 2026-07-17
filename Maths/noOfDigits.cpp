#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    int count = 0;
    while(n>0){
        int lastDigit = n%10;
        sum = sum*10+lastDigit;
        n = n/10;
        count = count + 1;
    }
    // cout << "Reverse of your number is: "<< sum;
    cout << "Total " << count << " digits present in your number.";
    return 0;
}