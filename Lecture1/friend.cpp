#include<bits/stdc++.h>
using namespace std;
class student{
    string passcode;
    friend class bestfriend;
    protected :
    int age;
    public :
    string name;
    int id;
    void into(){
        cout<<" my name is"<<name<<",my id is "<<id<<"passcode is"<<passcode<<endl;
            }
            void setPass(string s){
                passcode = s;
                age = a;
            }

};
class bestfriend{
    public :
    void sharingsecret(student s){
        cout<<s.passcode<<""<<s.age<<endl;
    }
};
int main(){
    student s1;
    s1.setPass("0001",10);
    bestfriend bff;
    bff.sharingsecret(s1);
    return 0;
}