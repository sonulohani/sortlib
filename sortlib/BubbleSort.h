/*
Please read LICENSE file for license infomation.
Author :- Sonu Lohani( sonulohani@gmail.com )
*/
#pragma once

#include "Common.h"
#include "Order.h"

namespace sortlib {
template <class Container> struct BubbleSort {
  using container_type = Container;
  using value_type = typename Container::value_type;
  using iterator = typename Container::iterator;

  static void sort(Container &container, Order order) {
    for (auto outerIt = container.begin(); outerIt != container.end();
         ++outerIt) {
      for (auto innerIt = container.begin(); innerIt != container.end() - 1;
           ++innerIt) {
        if (order == Order::Ascending) {
          if (*innerIt > *(innerIt + 1)) {
            swapIteratorValues(innerIt, innerIt + 1);
          }
        } else {
          if (*innerIt < *(innerIt + 1)) {
            swapIteratorValues(innerIt, innerIt + 1);
          }
        }
      }
    }
  }
};
} // namespace sortlib
