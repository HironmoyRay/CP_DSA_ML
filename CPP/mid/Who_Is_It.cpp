#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int ID;
    char name[101];
    char section;
    int total_marks;
};

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        Student st1, st2, st3;

        cin>>st1.ID>>st1.name>>st1.section>>st1.total_marks;
        cin>>st2.ID>>st2.name>>st2.section>>st2.total_marks;
        cin>>st3.ID>>st3.name>>st3.section>>st3.total_marks;

        Student top = st1;

        if((st2.total_marks>top.total_marks)||(st2.total_marks==top.total_marks && st2.ID<top.ID)){
            top=st2;
        }
        if((st3.total_marks>top.total_marks)||(st3.total_marks==top.total_marks && st3.ID<top.ID)){
            top=st3;
        }

        cout<<top.ID<<" "<<top.name<<" "<<top.section<<" "<<top.total_marks<<endl;
    }
    
    return 0;
}
