#pragma once

namespace sortlib {
template <class iterator> void swapIteratorValues(iterator it1, iterator it2) {
  typename iterator::value_type temp = *it1;
  *it1 = *it2;
  *it2 = temp;
}
} // namespace sortlib
