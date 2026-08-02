#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of your array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest) {
            largest = arr[i];
        }
    }
    cout << "Largest element in your array is: " << largest;
    return 0;
}