#include <bits/stdc++.h> 
using namespace std; 
  
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    int longestSubSequence = 1, buffer, lastNumber[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(buffer = arr[0]; buffer > 0; lastNumber[buffer%10] = 1, buffer /= 10);
    for(int i = 1; i < n; i++){
        int currentNumber[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for(buffer = arr[0]; buffer > 0; currentNumber[buffer%10] = 1, buffer /= 10);

        for(int j = 0; j < 10; j++){
            if(currentNumber[j]){
                lastNumber[j]++;
                longestSubSequence = max(longestSubSequence, lastNumber[j]);
            } 
        }

        for(int j = 0; j < 10; j++) if(currentNumber[j]) lastNumber[j] = longestSubSequence;
    }
    cout << longestSubSequence << "\n";
}