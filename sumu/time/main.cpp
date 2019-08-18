#include "Sortedtype.cpp"
#include "TimeStamp.cpp"
#include <bits/stdc++.h> 

using namespace std;

int main()
{

    Sortedtype <TimeStamp> S1;


    TimeStamp temp1(13,13,02);
    S1.InsertItem (temp1);
    
    TimeStamp temp(15,34, 23);
    S1.InsertItem (temp);

    TimeStamp temp2(43,45,12);
    S1.InsertItem (temp2);


    cout << S1.LengthIs() << endl;

    TimeStamp temp3 (25,36,17);
    S1.InsertItem (temp3);
    TimeStamp temp4 (52,02,20);
    S1.InsertItem (temp4);

    cout << S1.LengthIs() << endl;

    TimeStamp t10;
    S1.ResetList();
    for(int i = 0; i<4; i++){
        S1.GetNextItem(t10);
        t10.Print();
    }

    S1.ResetList();

    S1.DeleteItem(temp3);

    cout<<endl<<"After deleting: ";

    for(int i = 0; i<4; i++){
        S1.GetNextItem(t10);
        t10.Print();
    }

}


