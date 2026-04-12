#include<iostream>
using namespace std;
void explainDeque(){
    deque<int> dq;                // A Deque is also a similar container like vector and list , 

    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back(); // {3, 4, 1}
    dq.push_front(); // {4, 1}

    dq.back();
    dq.front();

    // rest functons are same as vector and list
    // begin, end, rbegin, clear, insert , size, swap
}
int main(){
    explainDeque();
    return 0;
}