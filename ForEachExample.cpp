#include <iostream>
#include <vector>

int main()
{
	std::vector<int> Years = {1998, 2011, 2014, 2017, 2020};

	for (auto Year : Years) 
	/* 
	* Foreach is an easier way to iterate through all elements of an array.
	* It's not even necessary to specify the type of the array, just use 'auto';
	* It works the same way as a common 'for' but it's a little easier to use.
	* The variable used to iterate through the elements (in this case 'Year') can have any name. 
	* But you must use the correct array name. 
	*/
	{
		std::cout << Year << "\n";
	}
}