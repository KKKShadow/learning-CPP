#include<iostream>

using namespace std ;

int main (void)
{
    cout.setf(ios_base::fixed , ios_base::floatfield );

    cout << "Tnteger division : 9/5 = " << 9/5 << endl ;
    cout << "Floating-point division : 9.0/5.0 = " << 9.0/5.0 << endl ;
//   转换为同一类型  把5转换为5.0运算
    cout << "Mixed division : 9.0/5 = " << 9.0/5 << endl ;
    cout << "double constants : 1e7/9.0 = " << 1e7/9.0 << endl ;
    cout << "float constants : 1e7f/9.0f = " << 1e7f/9.0f << endl ;
  
    const int Lbs_per_stn = 14 ;
    int lbs ;
    cout << "Enter your weight in pounds : " ;
    cin >> lbs ;
    int stone = lbs / Lbs_per_stn ;
    int pounds = lbs % Lbs_per_stn ;
    cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s).\n" ;
  
    return 0 ;
}