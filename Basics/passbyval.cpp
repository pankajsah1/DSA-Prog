// #include<iostream>
// using namespace std;
// void changeName(string s){
//     s[0] = 't';
//     cout << s <<endl;
// }
// int main(){
//     string s = "raj";
//     changeName(s);
//     cout << s;
// return 0;
// }

// PASS BY REFERENCE

// #include<iostream>
// using namespace std;
// void changeName(string &s){
//     s[0] = 't';
//     cout << s <<endl;
// }
// int main(){
//     string s = "raj";
//     changeName(s);
//     cout << s;
//     return 0;
// }

// AN ARRAY ALWAYS GO WITH PASS BY REFERENCE 

#include<iostream>
using namespace std;
void updateArr(int arr[], int size){
    arr[0] += 100;
    cout << "Value inside the function: " << arr[0] << endl;
}
int main(){
    int n = 5;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }
    updateArr(arr, n);
    cout << "Value inside the main: " << arr[0] << endl;
    return 0;
}