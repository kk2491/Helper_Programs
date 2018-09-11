#include <string>
#include <iostream>

int main()
{
	const std::string sentence = "id = 39, carla_type = vehicle, forward_speed = 0.79";
	std::cout << sentence << std::endl;
	
	std::string search1, search2;
	
	size_t pos1, pos2;
	
	search1 = "forward_speed";
	search2 = "vehicle";
	
	pos1 = sentence.find(search1);
	pos2 = sentence.find(search2);
	
	if(pos1 != std::string::npos)
	{
		std::cout << "sentence contains : "<< search1 << std::endl;
	}
	else if(pos2 != std::string::npos)
	{
		std::cout << "sentence contains : "<< search2 << std::endl;
	}	
	else
	{
		std::cout << "sentence doesn't contain : " << search1 << "and" << search2 <<	 std::endl;
	}
	 
	return 0;
		

}
