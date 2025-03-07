#include<iostream>
#include <cstring>


using namespace std;



int main (void)
{
    const int Size = 15;
    char name1[Size]; // empty array
    char name2[Size] = "C++owboy"; // initialized array

    cout << "Howdy! I'm " << name2 <<" . What is your name ?" << endl;
    cin >> name1;
    cout << "Well, " << name1 << ", your name has " << strlen(name1) << " letters and is stored ";
    cout << "in an array of " << sizeof(name1) << " bytes.\n";

    // strlen function is used to find the length of a string 
    // sizeof operator is used to find the size of an array
    // sizeof operator is used to find the size of an element in an array


    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin >> name;                   //alistair dreeb
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";



    return 0 ;
}