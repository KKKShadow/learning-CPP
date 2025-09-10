#include <iostream>
#include <string>
using namespace std ;


union one2all{
    char ch ;
    int n ;
};

enum spactrum{
  red,orange,yellow,green ,blue,indigo,violet
};

/*
 * 主函数程序
 * 演示结构体变量的定义、赋值和输出
 */
int main(void){  // 程序入口函数

    one2all num ;
    cout << "size of num :" << sizeof(num)<<endl;
    num.ch = 'A';
    cout << "num.ch : " << num.ch << endl;
    cout << "num.n : " << num.n << endl;

    spactrum color = blue ;
    cout << "color : " << color << endl;
    return 0 ;
}