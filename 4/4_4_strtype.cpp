#include <iostream>
#include <string>

#include <cstring>
int main (void)
{
    using namespace std ;

    char charr1[20] ; 
    char charr2[20] = "jaguar" ;   // 美洲豹 美洲虎
    string str1 ;          //   string 类定义对象与使用字符数组类似  将自动调整大小以适应初始化值

    string str2  = "panther" ;  // 黑豹

    cout << "Enter a kind of feline : " ;     // 猫科动物  ocelot 豹
    cin >> charr1 ;
    cout << "Enter another kind of feline : " ; // tiger 老虎
    cin >> str1 ;
    cout << "Here are some felines : \n" ;
    cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl ;

    cout << "The thired letter in " << charr2 << " is " << charr2[2] << endl ;
    cout << "The thired letter in " << str2 << " is " << str2[2] << endl ;
    
    string s1 = "penguin";
    string s2 , s3 ;

    cout << "You can assign one string object to another : s2 = s1 "  << endl;
    s2 = s1 ;
    cout << "s1 : " << s1 << " , s2 : " << s2 << endl ;
    
    s2 = "buzzard" ;
    cout << "You can assign a C-style string to a string object : s2 = " << s2 << endl ;

    cout << "You can concatenate string with + : s3 = s1 + s2 " ;
    s3 = s1 + s2 ;  
    cout << "s3 = " << s3 << endl ;
    
    cout << "You can append a C-style string to a string object : s1 += s2 " << endl ;
    s1 += s2 ;
    cout << "s1 = " << s1 << endl ;

    s2 += " for a day" ;
    cout << "s2 = " << s2 << endl ;
    
    char char1[20], char2[20];
    strcpy(char1 , charr2) ;

    str2 += " paste" ;
    strcat(char1 , " juice") ;
    cout << "str2 = " << str2 << endl ;
    cout << "char1 = " << char1 << endl ;

    int len1 = str2.size() ;  // string 类定义了 size() 成员函数
    int len2 = strlen(char1) ; // 字符用 strlen() 函数
    cout << "len1 = " << len1 << " , len2 = " << len2 << endl ;
    return 0 ;
}