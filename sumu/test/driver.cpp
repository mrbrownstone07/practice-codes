#include "UnsortedType.cpp"
#include <iostream>
using namespace std;

int main(){
    int n, m, buffer;
    UnsortedType <int> l1, l2, l3;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> buffer;
        l1.InsertItem(buffer);
    }

    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> buffer;
        l2.InsertItem(buffer);
    }

    int i = 0, j = 0;
    int a1, a2;

    l1.GetNextItem(a1);
    l2.GetNextItem(a2);
    
    while(i < n-1 && j < m-1){
        if(a1 > a2){
            l3.InsertItem(a2);
            l2.GetNextItem(a2);
            j++;
        }
        else{
            l3.InsertItem(a1);
            l1.GetNextItem(a1);
            i++;
        }    
    }

    while(i < n){
        l3.InsertItem(a1);
        l1.GetNextItem(a1);
        i++;
    }

    while(j < m){
        l3.InsertItem(a2);
        l2.GetNextItem(a2);
        j++;
    }

    for(int i = 0; i<l3.LengthIs(); i++){
        l3.GetNextItem(buffer);
        cout << buffer << " ";    
    }
    cout << "\n";
    l3.ResetList();

}