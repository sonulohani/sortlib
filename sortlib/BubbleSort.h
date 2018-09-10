/*
Please read LICENSE file for license infomation.
Author :- Sonu Lohani( sonulohani@gmail.com )
*/
#pragma once

namespace sortlib {
	template<typename Container>
	struct BubbleSort {
	public:
		using container_type = Container;
		using value_type = typename Container::value_type;
		using iterator = typename Container::iterator;

	private:
		static void swap(iterator it1, iterator it2) {
			value_type temp = *it1;
			*it1 = *it2;
			*it2 = temp;
		}

	public:
		static void sort(Container &container, Order order) {
			for (auto outerIt = container.begin(); outerIt != container.end(); ++outerIt) {
				for (auto innerIt = container.begin(); innerIt != container.end() - 1; ++innerIt) {
					if (order == Order::Ascending) {
						if (*innerIt > *(innerIt + 1)) {
							swap(innerIt, innerIt + 1);
						}
					}
					else {
						if (*innerIt < *(innerIt + 1)) {
							swap(innerIt, innerIt + 1);
						}
					}
				}
			}
		}
	};
}
