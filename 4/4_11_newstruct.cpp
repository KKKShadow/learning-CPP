#include <iostream>
#include <cstring>
using namespace std ;


struct inflatable
{
    char name[20];
    float volume;
    double price;
};
char *getname(void);
int main(void)
{
    inflatable *ps = new inflatable;
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name,20) ;
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;
    cout << "Enter price: $";
    cin >> ps->price;

    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << " cubic feet" << endl;
    cout << "Price: $" << ps->price << endl;

    delete ps;

    char *name ;
    name = getname();
    cout << name << " at " << (int*)name << endl;

    delete [] name;
    name = getname();
    cout << name << " at " << (int*)name << endl;
    delete [] name;

    return 0;
}


char *getname(void)
{
    char tmp[80];
    cout << "Enter your name: ";
//    cin.getline(tmp,80);
    cin >> tmp;
    
    
    char *pn = new char[strlen(tmp) + 1 ];

    strcpy(pn,tmp);
    return pn ;
}