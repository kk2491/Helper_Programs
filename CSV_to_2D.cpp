#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;


int main(void)
{
    string line;
    double Data[10][10];
    string p_strline;
    unsigned char start;
    bool ret;
    unsigned char j = 0;
    ifstream mapfile ("MapData.csv");
    if (mapfile.is_open())
    {
        unsigned char k = 0;
        while ( getline (mapfile,line) && line.length() > 0 )
        {
            cout << line << endl;
            j = 0;
            unsigned char start = 0; 
	        for(unsigned char i =0; i < line.length(); i++)
	        {
                
		        if((line.c_str()[i] == ';'))
                {
        	        string str = line.substr(start, (i - start));
        	        if(str.length() != 0)
                    {
         	            
          	            Data[k][j] = atof(str.c_str());
                        j = j + 1;
                        //cout << atof(str.c_str()) << endl;
        	        }
        	        start = i+1;
                }
		    }
            k = k + 1;
	    }
	    

    }

    //cout << "done" << endl;
    mapfile.close();

    for(int temp1 = 0; temp1 < 3; temp1 ++)
    {
        for(int temp2 = 0; temp2 < 5; temp2 ++)
        {
            cout << Data[temp1][temp2] << endl;
            
        }
        cout << "One row done" << endl;
    }


  
}

