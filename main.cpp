#include <iostream>
#include "SLIB.h"
#include <string>
#include <vector>

using std::cout, std::endl, std::string, std::vector;

int main()
{
//	SLIB v(1,1);
//	cout<<"\n";
//	cout<<v.getNorm()<<endl;
//	string text = "\nTo jest przykladowy tekst";
//	cout<<text.at(60)<<endl;
//	cout<<text[60]<<endl;
//	cout<<text.replace(0,2,"to naprawdę")<<endl;
//	auto pos = text.find("jest");
//	cout<<pos<<endl;
//	string toReplace = "jest";
//	auto pos = text.find(toReplace);
//	cout<<text.replace(pos, toReplace.length(), "JEST")<<endl;
//	cout<<text.insert(2, "JESTJESTJEST!")<<endl;
//	text.push_back('a');
//	cout<<text<<endl;
//	vector<int> numbers = {1,2,3};
//	cout<<numbers.at(2)<<endl;
//	//nie sprawdza zakresu
//	cout<<numbers[2]<<endl;
//	cout<<numbers.size()<<endl;
//	numbers.push_back(4);
//	for(int i : numbers)
//	{
//		cout<<i<<endl;
//	}

	vector<SLIB> vectors;
	for(int i; i<10; i++)
	{
		vectors.push_back(SLIB(i,i));
	}
	vectors.pop_back();
	for(auto v: vectors)
	{
		printf("[%d, %d]\n", v.getX(), v.getY());	
	}


}

