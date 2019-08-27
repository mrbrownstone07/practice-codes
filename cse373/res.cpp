/* PROBLEM _ 01*/

#include <iostream>
#include <set>
#include <vector>
using namespace std;

set<int> numbers;
set<vector<int>> result;

void backTrack(int x, vector<int>& subResult, set<int>::iterator it){
    if(x < 0) return;
    if(x == 0) {
        result.insert(subResult);
        return;
    }

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

    if(result.size() == 0) cout << "-1\n";
    else{
        int lowest = 999999999;
        for(set<vector<int>>::iterator it = result.begin(); it != result.end(); it++){
            vector<int> sub = (*it);
            if(sub.size() < lowest) lowest = sub.size();
        }
        cout << lowest << "\n";
    }
}





/* PROBLEM _ 02 */

#include <iostream>
using namespace std; 
  
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    int lss = 0, buff, mem[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(buff = arr[0]; buff > 0; mem[buff%10] = 1, buff /= 10);
    for(int i = 1; i < n; i++){
        int curNum[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for(buff = arr[i]; buff > 0; curNum[buff%10] = 1, buff /= 10);

        for(int j = 0; j < 10; j++){
            if(curNum[j]){
                mem[j]++;
                lss = max(lss, mem[j]);
            } 
        }

        for(int j = 0; j < 10; j++) if(curNum[j]) mem[j] = lss;
    }
    cout << lss << "\n";
}