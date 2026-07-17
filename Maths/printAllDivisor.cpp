#include<iostream>
using namespace std;
void AllDivisor(int n){
    for(int i=1; i<=n; i++){
      if(n%i==0){
        cout << i << " " ;
      }
    }
}
int main(){
    int n;
     cout << "Enter a number: ";
     cin >> n;
    //  int i = 1;
    //  while(n>0){
    //     if(n%i==0){

    //     }
    //  }
    AllDivisor(n);

    return 0;
}