#include<iostream>
using namespace std;
class employe
{
    private:
    int employeid;
    char employename;
    public:
    void getdata()
    {
        cout<<"employid:\n";
        cin>>employeid;
        cout<<"employename:\n"
        cin>>employename;  
    }
    void display()
    {
        cout<<"employeid">>emloyeid;
        cout<<"\nemployename">>employename;
    }

    

};
 int main()
 {
    employe e;
    e.getdata();
    e.display();
    return 0;
 }