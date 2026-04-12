#include<iostream>
using namespace std;
void printPatt(int n){
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << num; 
            num = num + 1;
        }
        cout << endl;  
    }
}
int main(){
    int n;
    cout << "Enter the no. of lines: ";
    cin >> n;
    printPatt(n);
    return 0;
}