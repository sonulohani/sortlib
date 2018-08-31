/*
Please read LICENSE file for license infomation.
*/
#pragma once

#include "BasicSort.h" // To be replaced by merge sort
#include "Order.h"

namespace sortlib {
	template<typename SortType>
		void qsort(typename SortType::container_type &value, Order order = Order::Ascending) {
			SortType::sort(value, order);
		}
}