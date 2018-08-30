#include "qsort.h"
#include "BasicSort.h"
#include <vector>

int main() {
	std::vector<int> v = { 1,2,3,4,5 };
	sortlib::qsort<sortlib::BasicSort<std::vector<int>>>(v);
}