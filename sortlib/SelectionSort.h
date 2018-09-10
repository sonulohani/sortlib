/*
Please read LICENSE file for license infomation.
Author :- Sonu Lohani( sonulohani@gmail.com )
*/
#pragma once

#include "Common.h"
#include "Order.h"

namespace sortlib {
template <class Container> struct SelectionSort {
  using container_type = Container;
  using value_type = typename Container::value_type;
  using iterator = typename Container::iterator;

  static void sort(Container &container, Order order) {
    iterator itToCompare;
    for (iterator outerIt = container.begin(); outerIt != container.end() - 1;
         ++outerIt) {
      itToCompare = outerIt;
      for (iterator innerIt = outerIt + 1; innerIt != container.end();
           ++innerIt) {
        if (order == Order::Ascending) {
          if (*innerIt < *itToCompare) {
            itToCompare = innerIt;
          }
        } else {
          if (*innerIt > *itToCompare) {
            itToCompare = innerIt;
          }
        }
      }
      swapIteratorValues(itToCompare, outerIt);
    }
  }
};
} // namespace sortlib
