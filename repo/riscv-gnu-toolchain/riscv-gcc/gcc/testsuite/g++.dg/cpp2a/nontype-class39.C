// PR c++/89565
// { dg-do compile { target c++20 } }
// { dg-additional-options "-fchecking" }
// { dg-ice "resolve_args" }

template <auto>
struct N{};

template <N>
struct S {};

template <typename T>
using NS = S<T::value>;
