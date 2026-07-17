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
        cout << it.first << " " << it.second << endl;  // print {1,2}  {2,4}
    }

    cout << map[1]   // print 2
    cout << map[5]   // null

    auto it = mpp.find(3);
    cout << *(it).second;     // print {3,1}

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // erase , swap, size empty, are same as ohter container....
}

void explainMultliOrderMap(){
    // everything same as map , only it can store multiple keys
    // we can store duplicate keys over here like => {1,2} and again {1, 3} here two key with the same value can be stored

}

void explainUnOrderMap(){
    // same as set and unordered set difference
    // it always store unique keys but not in order...
}
int main(){
    explainMap();
    return 0;
}
