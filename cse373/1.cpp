#include <iostream>
#include <set>
#include <vector>
using namespace std;

set<int> numbers;
set<vector<int>> result;

void backTrack(int x, vector<int>& subResult, set<int>::iterator& it){
    if(x < 0) return;
    if(x == 0) result.insert(subResult);
    
    while(it != numbers.end() && (x - *it) >= 0){
        subResult.push_back(*it);
        backTrack((x - *it), subResult, it);
        it++;
        subResult.pop_back();
    }
}

void findCombinations(int x){
    vector<int> subResult;
    set<int>::iterator it = numbers.begin();
    backTrack(x, subResult, it);
}

int main(){
    int x, n, buff;
    cin >> x >> n;
    
    for(int i = 0; i < n; i++){
        cin >> buff;
        numbers.insert(buff);
    }

    for(auto it = numbers.begin(); it != numbers.end(); it++) 
        if(*it > x) {
            numbers.erase(it, numbers.end());
            break;
        }

    findCombinations(x);

    for(set<vector<int>>::iterator it = result.begin(); it != result.end(); it++){
        vector<int> sub = (*it);
        cout << sub.size() << ",";
    }cout << "\n";

    set<vector<int>>::iterator it = result.begin();
    cout << ((*it).size() >= 1 ? (*it).size() : -1) << "\n";
}