#include<iostream>
#include<map>
using namespace std;
void explainMap(){
    map<int, int> mpp;       //  map => map<key, value> mapp => map always sotre unique keys and in sorted order
    map<int, pair<int, int>> mpp;
    map< pair<int, int>, int> mpp;

    mpp[1] = 2;           // [{1, 2}]  => here 1 is key and 2 is value
    mpp.emplace({3,1});   // [{1,2}, {3,1}]
    mpp.insert({2, 4});   // Now , map will be like this => [{1,2}, {2,4}, {3,1}]  => Sorted order

    mpp[{2, 3}] = 10;     // here , 2 and 3 are key of the value 10.

    // iteration on map

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;  
    }
}
int main(){
    explainMap();
    return 0;
}
