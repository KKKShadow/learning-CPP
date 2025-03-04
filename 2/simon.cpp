#include<iostream>


void simon(int n);
int stonetolb( int sts);

using namespace std;

int main()
{



    cout << "input number " << endl;
    
    int num ;
    cin >> num;

    simon(num);

    cout << "Done" << endl;    




    int stone, pounds;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    pounds = stonetolb(stone);    
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}


void simon(int n)
{

    cout << "simon says touch your toes " << n << " times" << endl;
}

int stonetolb( int sts)
{
    int pounds = 14*sts;
    return pounds;
}
