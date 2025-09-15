#include <iostream>
using namespace std;

int main(void){

    double wages[3] = {10000.1, 20000.2, 30000.3};
    short stacks[3] = {3, 2, 1};

    double *pw = wages ;
    short *ps = &stacks[0] ;

    cout << "pw = " << pw << ", *pw = "<< *pw << endl;
    pw = pw + 1 ;
    cout << " add 1 wo the pw pointer" << endl ;
    cout << "pw = " << pw << ", *pw = "<< *pw << endl;

    cout << "ps = " << ps << ", *ps = "<< *ps << endl;
    ps = ps + 2 ;
    cout << " add 1 wo the ps pointer" << endl ;
    cout << "ps = " << ps << ", *ps = "<< *ps << endl;

    cout << "stacks[0] = " << stacks[0] << " stacks[1] = "<< stacks[1] <<  endl;
    cout << "*stacks = " << *stacks << " *(stacks + 1) = "<< *(stacks + 1) <<  endl;
  //                     sizeof 没有把数组名当成地址，而是当成数组本身
    cout << "sizeof(wages) = " << sizeof(wages) << " sizeof(pw) = "<< sizeof(pw) << endl;

    // wages 为首地址，wages + 1 为第二个元素的地址
    // &wages 为整个数组的地址，&wages + 1 为整个数组的下一个地址 跳过三个double 3*8

    short *pas[20] ; // pas 是一个指针数组，数组中的每个元素都是指向short的指针
    short (*pas2)[20] ; // pas2 是一个指针，指向一个有20个short元素的数组


    return 0;
}