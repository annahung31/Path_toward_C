#include <iostream>
#include <queue>
using namespace std;


int main(){
    priority_queue<int> big;
    priority_queue<int,vector<int>,greater<int> > small;
    int i = 4;
    int n = 0;
    while (i--){
        cin >> n;
        big.push(n);
        small.push(n);
    }

    while (!big.empty()){
        cout << "big: " << big.top() << endl;
        big.pop();
    }

    while (!small.empty()){
        cout << "small: " << small.top() << endl;
        small.pop();
    }
    return 0;
}