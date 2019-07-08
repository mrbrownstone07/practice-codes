#include "Sortedtype.cpp"
//#include "TimeStamp.cpp"
#include <iostream>

using namespace std;

int main()
{

    // Sortedtype <TimeStamp> S1;


    // TimeStamp temp1(13,13,02);
    // S1.InsertItem (temp1);
    
    // TimeStamp temp(15,34, 23);
    // S1.InsertItem (temp);

    // TimeStamp temp2(43,45,12);
    // S1.InsertItem (temp2);







    // cout << S1.LengthIs() << endl;

    // TimeStamp temp3 (25,36,17);
    // S1.InsertItem (temp3);
    // TimeStamp temp4 (52,02,20);
    // S1.InsertItem (temp4);

    // cout << S1.LengthIs() << endl;

    // TimeStamp t10(0, 0, 0);



    // for(int i = 0; i<4; i++){
    //     S1.GetNextItem(t10);
    //     t10.Print();
    //     cout << "*" << endl;
    // }

    // S1.ResetList();

    // S1.DeleteItem(temp3);

    // cout<<endl<<"After deleting: ";

    // for(int i = 0; i<4; i++){
    //     S1.GetNextItem(t10);
    //     t10.Print();
    // }

    Sortedtype <TimeStamp> s1;

    TimeStamp t1(10,2,3);
    TimeStamp t2(8,5,50);
    TimeStamp t3(11,40,33);

    //t1.Print();
    //t2.Print();
    //t3.Print();

    s1.InsertItem(t1);
    s1.InsertItem(t2);
    s1.InsertItem(t3);

    s1.ResetList();
    TimeStamp temp;
    
    for(int i = 0; i < s1.LengthIs(); i++){
        s1.GetNextItem(temp);
        temp.Print();
    }

    cout << (t1 > t2 ? "true" : "flase") << endl;
    cout << (t2 > t3 ? "true" : "flase") << endl;
    cout << (t1 < t3 ? "true" : "flase") << endl;
}


