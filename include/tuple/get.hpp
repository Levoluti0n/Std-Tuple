#ifndef GET_HPP
#define GET_HPP

#include "tuple.hpp"

template <std::size_t N, typename... Types>
constexpr auto& get(Tuple<Types...>& tuple) {
    return static_cast<TupleElement<N, typename std::tuple_element<N, std::tuple<Types...>>::type>&>(tuple).get();
}

template <std::size_t N, typename... Types>
constexpr const auto& get(const Tuple<Types...>& tuple) {
    return static_cast<const TupleElement<N, typename std::tuple_element<N, std::tuple<Types...>>::type>&>(tuple).get();
}

#endif