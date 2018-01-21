#ifndef PYTHONIC_NUMPY_RANDOM_RANDN_HPP
#define PYTHONIC_NUMPY_RANDOM_RANDN_HPP

#include "pythonic/include/numpy/random/randn.hpp"

#include "pythonic/numpy/random/standard_normal.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/types/tuple.hpp"
#include "pythonic/utils/functor.hpp"

PYTHONIC_NS_BEGIN
namespace numpy
{
  namespace random
  {

    template <class... T>
    types::ndarray<double, sizeof...(T)> randn(T... shape)
    {
      return standard_normal(types::array<long, sizeof...(T)>{{shape...}});
    }

    double randn()
    {
      return standard_normal();
    }

    DEFINE_FUNCTOR(pythonic::numpy::random, randn);
  }
}
PYTHONIC_NS_END

#endif
