/*
Please read LICENSE file for license infomation.
Author :- Sonu Lohani( sonulohani@gmail.com )
*/
#pragma once

#include "Order.h"

namespace sortlib {
template <class SortType>
void sort(typename SortType::container_type &value,
          Order order = Order::Ascending) {
  SortType::sort(value, order);
}
} // namespace sortlib
