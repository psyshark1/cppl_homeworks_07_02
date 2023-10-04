#include <iostream>
#include <set>
#include <algorithm>

std::ostream& operator << (std::ostream& l, std::set<int, std::greater<int>>& r)
{
	for (const auto& it : r)
	{
		l << it << std::endl;
	}
	return l;
}

int main()
{
	std::cout << "[IN]: " << std::endl;
	std::set<int, std::greater<int>> s;
	int v{ 0 };
	for (int i = 0; i < 10; ++i)
	{
		std::cin >> v;
		s.insert(v);
	}

	std::cout << "[OUT]: " << std::endl;
	std::cout << s;

	return 0;
}
