#ifndef PYTHONIC_BUILTIN_KEYBOARDINTERRUPT_HPP
#define PYTHONIC_BUILTIN_KEYBOARDINTERRUPT_HPP

#include "pythonic/include/__builtin__/KeyboardInterrupt.hpp"

#include "pythonic/types/exceptions.hpp"

PYTHONIC_NS_BEGIN

namespace __builtin__
{

  PYTHONIC_EXCEPTION_IMPL(KeyboardInterrupt)
}
PYTHONIC_NS_END

#endif
