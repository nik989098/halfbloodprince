#include<iostream>
using namespace std;
class student   
{
    private:
        int rollno;
        char name;
       public:
       void getdata()
       {
           cout<<"enter rollno\n";
           cin>>rollno;
           cout<<"enter name\n";
           cin>>name;

       }
       void display()
       {
           cout<<"roll no:"<<rollno;
           cout<<"\nname:\n"<<name;
       }
       
};
    int main()
    {
        student s;
        s.getdata();
        s.display();
        return 0;
    }