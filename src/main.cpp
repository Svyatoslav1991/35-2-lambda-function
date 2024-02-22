#include <iostream>
#include <vector>
#include <unordered_set>
#include <memory>

#include "functions.h"

int main() {
	std::cout << "\tTASK 35.2 LAMBDA FUNCTION\n\n";

	auto filter = [](const std::vector<int>& vec) -> std::unique_ptr<std::vector<int>> {
		std::unordered_set<int> us;

		std::unique_ptr<std::vector<int>> pResultVec = std::make_unique<std::vector<int>>();

		for (const auto& val : vec)
		{
			if (us.insert(val).second)
			{
				pResultVec->push_back(val);
			}
		}

		return pResultVec;
	};

	std::vector<int> vec{ 2, 4, 5, 5, 8, 2, 1, 6, 7, 7, 2, 9, 3, 5, 9, 7, 4, 6, 3, 7, 9 };

	auto resultVec = filter(vec);

	printContainer(*resultVec);

	return 0;
}