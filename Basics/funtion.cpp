#include<iostream>
using namespace std;
// void printName(string name){
//     cout << "Hey " << name << endl;
// }
int printSum(int x, int y){
    int sum = x+y;
    return sum;
}
int main(){
    // string name1;
    // cin >> name1;
    // printName(name1);

    // string name2;
    // cin >> name2;
    // printName(name2);

    int a , b;
    cin >> a >> b;
    cout << printSum(a, b);
    return 0;
}