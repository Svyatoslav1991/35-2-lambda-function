#pragma once
#include <iostream>

template <typename T>
void printContainer(const T& container)
{
	if (container.empty())
	{
		std::cout << "Container is empty";
	}
	else
	{
		for (const auto& el : container)
		{
			std::cout << el << " ";
		}
	}

	std::cout << "\n";
}