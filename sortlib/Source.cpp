#include "BubbleSort.h"
#include "SelectionSort.h"
#include "sort.h"
#include <vector>

int main() {
  std::vector<int> v = {-2, 34, 6, -2, 8, 6, 4, 7};
  sortlib::sort<sortlib::SelectionSort<std::vector<int>>>(
	  v, sortlib::Order::Descending);
  return 0;
}
