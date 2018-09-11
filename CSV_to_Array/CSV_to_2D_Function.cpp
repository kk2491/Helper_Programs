#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <stdint.h>

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
  uint8_t l_u8RowIndex = 0;
  double Data[10][9] = { 0x00 };
 
  ifstream mapfile ("MapData.csv");
  if (mapfile.is_open())
  {
    while ( getline (mapfile,line) && line.length() > 0 )
    {
      cout << line << '\n';
       getParam(line, Data[l_u8RowIndex]);

       l_u8RowIndex++;

    }


    for(int temp1 = 0; temp1 < 3; temp1 ++)
    {
        for(int temp2 = 0; temp2 < 5; temp2 ++)
        {
            cout << Data[temp1][temp2] << endl;
            
        }
        cout << "One row done" << endl;
    }

    cout << "done";
    mapfile.close();
  }
  }
  
  
