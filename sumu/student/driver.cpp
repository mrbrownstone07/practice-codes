#include "student.cpp"
#include <bits/stdc++.h>

using namespace std;

int main(){
    Student s1(123, 3.3, "asd");
    Student s2(124, 3.1, "afc");
    Student s3(125, 2.8, "agm");
    Student s4(126, 3.7, "asc");
    Student s5(127, 3.0, "acd");

    vector<Student> s {s1, s2, s3, s4, s5};
    sort(s.begin(), s.end());
    cout << "Sorted \n"; 
    for (auto x : s) 
        x.print(); 
}