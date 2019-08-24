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