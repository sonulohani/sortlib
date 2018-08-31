///*
//Please read LICENSE file for license infomation.
//*/
//#pragma once
//
//#include "Order.h"
//#include<optional>
//
//namespace sortlib {
//	template<typename Container>
//	class BasicSort {
//	public:
//		using container_type = Container;
//		using iterator = typename Container::iterator;
//		using value_type = typename Container::value_type;
//
//	public:
//		void sort(Container &container, Order order) {
//			std::optional<value_type> value;
//			for (auto it = container.begin(); it != containter.end(); ++it) {
//				if (!value.has_value()) {
//					value = *it;
//					continue;
//				}
//				if (order == Order::Ascending) {
//					if (*it < value) {
//						value_type temp = *it;
//						*it = value;
//						value = temp;
//					}
//				}
//				else {
//					if (*it > value) {
//						value_type temp = *it;
//						*it = value;
//						value = temp;
//					}
//				}
//			}
//		}
//
//	private:
//	};
//}
