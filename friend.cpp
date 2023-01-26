# include<bits/stdc++.h>
using namespace std;

 class student;
 string passcode;
 friend class bestfriend;
 
protected;
 int age;

 public;
 string name;
 int id;
  
 void int(){
 cout<<"My name is"<<name<<" , my id is "<<id<<" passcord is "<<passcode<<" endl;
void setter(string s, int a, string n, int i){
 passcode = s;
 age = a;

}

 friend void hacker(student s);
};

 void hacker(student s){
 
}:

  void hacker(student s){
 cout<<s.passcode<<" " <<s.age<<endl;
}

 class bestfriend{
 public:
 void sharingSecret(student s){
 cout<<s.passcode<<" "<<s.age<< endl;
 }
};

 int main(){
  student s1;
 s1.setter<<("0001",10,"Mohit",1);

 bestfriend bff;

 hacker(s1);

return 0;
} 
