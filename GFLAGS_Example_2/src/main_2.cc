#include "include/test_1.h"
#include "include/main_2.h"
#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#include <iostream>

using namespace std;
 
// function returning the max between two numbers
int flag_modifier(int option)
{
   	// local variable declaration
   		
	switch(option)
	{
		case 1: // Edit gflags
			FLAGS_sample_bool = 0;
			break;
		
		case 2: // Edit gflags
			FLAGS_sample_double = 888.888;
			break;
		
		case 3: // Edit gflags
			FLAGS_sample_string = "Meow Meow !!!!";
			break;
			
		case 4: // Edit gflags
			FLAGS_sample_int = 4444;
			break;
		
		case 5: // Edit gflags
			FLAGS_sample_string = "DaDaDaDadaaDadaa !!!!";
			break;
		
		default: // Some statement
			break;
	}	
	
	return 0;
	
}



/*
using namespace std;

int main(int argc, char *argv[])
{

 	gflags::SetUsageMessage("Some usage message");
  	gflags::SetVersionString("1.0.0");
  	gflags::ParseCommandLineFlags(&argc, &argv, true);
  	// if (FLAGS_verbose) std::cout << gflags::ProgramInvocationShortName() << ": ";
  	// std::cout << FLAGS_message << std::endl;
  	gflags::ShutDownCommandLineFlags();

	for(int i = 0; i < 5; i++)
	{
		cout << "Lets start the gflags test...!!!! \n";
		cout << "Sample bool value is   : " << FLAGS_sample_bool << "\n";
		cout << "Sample double value is : " << FLAGS_sample_double << "\n";
		cout << "Sample string value is : " << FLAGS_sample_string << "\n";
		cout << "Sample int value is    : " << FLAGS_sample_int << "\n";
	
		sleep(1);
	}
	
	return 0;
}
*/
