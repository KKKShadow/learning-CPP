#include<iostream>
#include<climits>

using namespace std ;

int main(void)
{
    char c = 'A' ;
    int a = c ;

    cout << "c = " << c << " , ASCII value = " << a << endl ;
    a = a+1 ;
    cout.put(c) ;
    cout << endl ;
    cout <<"now ASCII value = " << a << endl ;
    cout.put(a) ;    // 输出的是ASCII值对应的字符
    cout << endl ;

    return 0 ;

}