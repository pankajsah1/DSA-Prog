#include<iostream>
using namespace std;
void printPatt(int n){
    // for(int i=0; i<n; i++){
    //     for(int j=1; j<=n-i-1; j++){
    //     cout << " ";
    //     }

    //     for(int j=1; j<=2*i+1; j++){
    //     cout << "*";
    //     }

    //     for(int j=1; j<=n-i-1; j++){
    //     cout << " ";
    //     }
    //     cout << endl;
    // }

    for(int i=0; i<n; i++){
        for(int j=1; j<=i; j++){
        cout << " ";
        }

        for(int j=1; j<=2*n-1-2*i; j++){
        cout << "*";
        }

        for(int j=1; j<=i; j++){
        cout << " ";
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