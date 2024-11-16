#ifndef TUPLE_HPP
#define TUPLE_HPP

#include <utility>
#include <type_traits>

template <std::size_t Index, typename T>
struct TupleElement {
    T value;
    constexpr TupleElement() = default;
    constexpr TupleElement(const T& val) : value(val){}
    constexpr TupleElement(T&& val) : value(std::move(val)){}

    constexpr T& get() { return value; }
    constexpr const T& get() const { return value; }
};

template <std::size_t Index, typename... Types>
struct TupleImpl;

template <std::size_t Index>
struct TupleImpl<Index>{};

template <std::size_t Index, typename Head, typename... Tail>
struct TupleImpl<Index, Head, Tail...> : public TupleElement<Index, Head>, public TupleImpl<Index + 1, Tail...> {
    using TupleElement<Index, Head>::get;
    constexpr TupleImpl() = default;

    template <typename H, typename... Ts>
    constexpr TupleImpl(H&& head, Ts&&... tail)
        : TupleElement<Index, Head>(std::forward<H>(head)),
          TupleImpl<Index + 1, Tail...>(std::forward<Ts>(tail)...) {}
};

template <typename... Types>
struct Tuple : public TupleImpl<0, Types...> {
    using TupleImpl<0, Types...>::TupleImpl;
};

template <typename... Types>
constexpr auto makeTuple(Types&&... args) {
    return Tuple<std::decay_t<Types>...>(std::forward<Types>(args)...);
}

#endif