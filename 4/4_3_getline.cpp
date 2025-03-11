#include <iostream>


using namespace std;

int main (void)
{

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name,ArSize);          //alistair dreeb           //alistair dreeb
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert,ArSize);      // cin 遇到空格就结束了，所以只有alistair
    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";

    char name2[ArSize];
    char dessert2[ArSize];
    cout << "Enter your name:\n";
    cin.get(name2,ArSize);          //alistair dreeb           //alistair dreeb
    cin.get(); // 读取缓冲区的换行符
    cout << "Enter your favorite dessert:\n";
    cin.get( dessert2 , ArSize);      // cin 遇到空格就结束了，所以只有alistair
    cout << "I have some delicious " << dessert2 << " for you, " << name2 << ".\n";


    //下午看了学院带着去看的电影您的声音 也就中间讲电梯问题比较有意思，其他的都是一些主题不太明确的片段

    return 0 ;

}



