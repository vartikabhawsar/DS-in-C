#include <iostream>
using namespace std;
class employee
{
    static char name[20];
    static char desig[10];
    static float sal;
    
    public:
    static void input()
    {
        cin>>name;
        cin>>desig;
        cin>>sal;
    }
    static void avg()
    {
        float a = sal/5;
        cout<<a;
    }};
   float employee:: sal=0;
   char employee:: name[20]={};
   char employee:: desig[10]={};
 

int main()
{
    employee :: input();
    employee::avg();
}