#include <iostream>
#include <string>
using namespace std;

struct inflatable{
    string name ;     // char name[20] ;
    float volume ;
    double price ;

} ;

int main(void)
{
    inflatable guest = {
        "Gloriouos Gloria" ,
        1.88,
        29.99
    } ;

    inflatable pal = {
      "Audacious Arthur" ,
      3.12,
      32.99
    };

    inflatable choice ;

    cout << "Expand your guest list with: " << guest.name << "and" << pal.name << endl ;
    cout << "You can have both for $" << guest.price + pal.price << "!" << endl ;
    
    cout << guest.name << "has a price of " << guest.price <<   endl ;
    choice = guest ;
    cout << "Now choice :" << choice.name << "has a price of " << choice.price << endl ;
    
    // 结构体数组
    inflatable num[2]{
        {"Bambi" , 0.5 , 21.99},
        {"Godzilla" , 2000, 565.99}
    };

    cout << "num : " << num[0].name << " and " << num[1].name << "have a volume of " ;
    cout << num[0].volume + num[1].volume << endl ;

    return 0 ;
}