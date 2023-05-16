#ifndef WATCHADAPTER_ADAPTER_LIB_ACLOCK_HPP
#define WATCHADAPTER_ADAPTER_LIB_ACLOCK_HPP

#include "Time.hpp"
class AClock {
 public:
  virtual Time getTime() = 0;
};

#endif