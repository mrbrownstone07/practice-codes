#include <iostream>
#include "Sortedtype.cpp"
#include "student.cpp"
#include <set>
#include <vector>
using namespace std;

int main(){
    Student s1(123, 3.3, "asd");
    Student s2(124, 3.1, "afc");
    Student s3(125, 2.8, "agm");
    Student s4(126, 3.7, "asc");
    Student s5(127, 3.0, "acd");

    // Sortedtype<Student> s;

    // s.InsertItem(s1);
    // s.InsertItem(s2);
    // s.InsertItem(s3);
    // s.InsertItem(s4);
    // s.InsertItem(s5);

    // cout << "Lenght is: " << s.LengthIs() << endl;

    // Student temp;
    // for(int i = 0; i < s.LengthIs(); i++){
    //     s.GetNextItem(temp);
    //     temp.print();
    //     cout << "\n";
    // }s.ResetList();

    set<Student> s;
    vector<Student>
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);
    s.insert(s5);

    Student s;
    cout << "mymultiset contains:";
    for (set<Student>::iterator it=s.begin(); it!=s.end(); ++it){
        s = *it;

    }
        
}