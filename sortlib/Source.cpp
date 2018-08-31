#include "qsort.h"
#include "BubbleSort.h"
#include <vector>

int main() {
	std::vector<int> v = { -2,34,6,-2,8,6,4,7 };
	sortlib::qsort<sortlib::BubbleSort<std::vector<int>>>(v, sortlib::Order::Descending);
	return 0;
}