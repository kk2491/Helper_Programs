#include "include/test_1.h"
#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main(int argc, char *argv[])
{

	// Call function
	// int flag_modifier();

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

