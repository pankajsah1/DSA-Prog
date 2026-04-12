#include<iostream>
using namespace std;
 void explainPair(){
        pair<int, int> p = {1, 3};
        cout << p.first << " " << p.second << endl;

        pair<int, pair<int, int>> pr = {1, {3, 4}};
        cout << pr.first << " " << pr.second.second << " " << pr.second.first << endl;

        pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
        cout << arr[1].second;
    }
int main () {
    explainPair();
    return 0;
}