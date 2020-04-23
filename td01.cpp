#include <thread>
#include <numeric>
#include <iterator>
#include <optional>
#include <vector>

typedef long double Num;
typedef std::vector<long double>::const_iterator NumIter;

//-----------------------------------------------------------------------------

Num SumParallel(NumIter begin, NumIter end, size_t num_threads) {}

template <typename Func>
Num SumParallel(NumIter begin, NumIter end, Func f, size_t num_threads) {}

//-----------------------------------------------------------------------------

Num MeanParallel(NumIter begin, NumIter end, size_t num_threads) {}

//-----------------------------------------------------------------------------

Num VarianceParallel(NumIter begin, NumIter end, size_t num_threads) {}

//-----------------------------------------------------------------------------

template <typename Iter, typename T>
bool FindParallel(Iter begin, Iter end, T target, size_t num_threads) {}

//-----------------------------------------------------------------------------

template <typename ArgType, typename ReturnType>
std::optional<ReturnType> RunWithTimeout(ReturnType f(ArgType), ArgType arg, size_t timeout) {}

//-----------------------------------------------------------------------------
