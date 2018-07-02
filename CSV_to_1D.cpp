#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

bool getParam( string p_strline,  double* Data)
{
   unsigned char start = 0;
   unsigned char j = 0;
   bool ret = true;

   for(unsigned char i = 0; i <  p_strline.length()  ; i++ ){
     if((p_strline.c_str()[i] == ';')){
        string str = p_strline.substr(start, (i - start));
        if(str.length() == 0){
         ret = false;
        }
        else{
          Data[j++] = atof(str.c_str());
//          cout << atof(str.c_str()) << endl;
        }
        start = i+1;
     }
   }
}

int main(void)
{
   //FILE* l_fptr = fopen("MapData.csv", "r");
  string line;
  double Data[][9] = { 0x00 };
  ifstream mapfile ("MapData.csv");
  if (mapfile.is_open())
  {
    while ( getline (mapfile,line) && line.length() > 0 )
    {
      cout << line << '\n';
       getParam(line, Data);

       for(int i = 0 ; i < 9 ; i++){
         cout << Data[i] << endl;
        }
    }

    cout << "done";
    mapfile.close();
  }
  }
  
  
