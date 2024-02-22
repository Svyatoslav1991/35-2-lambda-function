TASK 35.2 LAMBDA FUNCTION

What should be done
Since std::unordered_set allows us to quickly determine whether a given key is in a container, we can use it to filter for unique numbers.

Create a lambda expression that takes as input a std::vector<int> that shows the numbers that can be repeated.
Inside the lambda, create an unordered_set and use it to determine how many times the current number has appeared before.
As a result, return std::unique_ptr<std::vector<int>>, a number without repetitions.
When iterating over a container, use the new format for and the auto keyword.
