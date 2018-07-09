/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

#define AA
#define BB
#define CC

int main()
{
    
#ifdef AA
    cout<<"Hello World";
#endif

#ifdef CC
    cout<<"Hello World1";
#endif

#ifdef BB
    cout<<"Hello World2";
#endif

    return 0;
}

