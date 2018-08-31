/*
Please read LICENSE file for license infomation.
*/
#pragma once

namespace sortlib {
	template<typename Container>
	class BubbleSort {
	public:
		using container_type = Container;
		using value_type = typename Container::value_type;

	public:
		static void sort(Container &container, Order order) {
			for (auto outerIt = container.begin(); outerIt != container.end(); ++outerIt) {
				for (auto innerIt = container.begin(); innerIt != container.end() - 1; ++innerIt) {
					if (order == Order::Ascending) {
						if (*innerIt > *(innerIt + 1)) {
							value_type temp = *innerIt;
							*innerIt = *(innerIt + 1);
							*(innerIt + 1) = temp;
						}
					}
					else {
						if (*innerIt < *(innerIt + 1)) {
							value_type temp = *innerIt;
							*innerIt = *(innerIt + 1);
							*(innerIt + 1) = temp;
						}
					}
				}
			}
		}
	};
}
