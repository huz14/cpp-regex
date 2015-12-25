/*
-	Author : Jon Hu
-	Time : 2015.12.25
-	All rights reserved
*/

#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <iterator>

std::vector< std::string > search(const std::string& pattern, const std::string& text)
{
	std::vector< std::string > ret(0);
	std::regex regPattern(pattern);
	std::sregex_iterator it(text.begin(), text.end(), regPattern);
	std::sregex_iterator end;
	for (; it != end; it++)
	{
		ret.push_back(it->str());
	}
	return ret;
}

int main(int argc, char* argv[])
{
	std::string pattern(argv[1]), text(argv[2]);
	std::vector< std::string > result = search(pattern, text);
	for (auto res_i : result)
	{
		std::cout << res_i << std::endl;
	}
	return 0;
}