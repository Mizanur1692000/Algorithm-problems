/*
#include<iostream>
using namespace std;


class myClass2{
  private:
  string name2;

  public:
  int id;
  void setname(string x)
{
  name2=x;
}
  string getname()
{
  return name2;
}
};

class myClass{
  public:
  int id;
  string name;
};

int main()
{
  myClass m1;
  m1.id=201014061;
  m1.name="Mizanur Rahman";
  cout<<"Id = "<<m1.id<<endl<<"Name = "<<m1.name<<endl<<endl;

  myClass2 m2;
  m2.id=11111111;
  m2.setname("Mizanur Rahman");
  cout<<"Id = "<<m2.id<<endl<<"Name = "<<m2.getname();
  return 0;
}
*/

#include<iostream>
using namespace std;

class person{
  public:
  string name;
  string id;
void display()
{
  cout<<"Name = "<<name<<endl<<"Id = "<<id;
}
};


class student:public person
{
  public:
  string age;
  void display1()
{
  cout<<endl<<"Age = "<<age;
}
};

int main()
{
  student p1;
  cout<<"Enter the name: ";
  getline(cin,p1.name);
  cout<<"Enter the id: ";
  cin>>p1.id;
  cout<<"Enter the age: ";
  cin>>p1.age;
  cout<<endl<<endl;
  p1.display();
  p1.display1();
}
