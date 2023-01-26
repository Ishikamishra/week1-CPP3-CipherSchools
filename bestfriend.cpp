#include<bits/stdc++.h>
using namespace std;

class student{
    string passcode;
    friend class bestfriend;
    
    protected:
    
    int age;
    //int,char,string,float..
    public :
    string name;
    int id;
    
    void into(){
        cout<<"My name is "<<name<<",my id is"<< "psscord is"<<passcode<<endl;
    }
    
    void setPass(string s, int a){
        passcode=s;
        age = a;
    }
    //friend class bestfriend;
};
    class bestfriend{
    
    public:
    void sharingSecret(student s){
        cout<<s.passcode<<s.age<<endl;
    }
};

 int main(){
     
     student s1;
     s1.setPass("0001",10);
     
     bestfriend bff;
     bff.sharingSecret(s1);
     //s1.passcode="001";
     
     return 0;
 }
