#ifndef WATCHADAPTER_ADAPTER_LIB_DIGITALCLOCK_HPP_
#define WATCHADAPTER_ADAPTER_LIB_DIGITALCLOCK_HPP_
#include <memory>

#include "AClock.hpp"
#include "AnalogClock.hpp"

class DigitalClockAdapter : public AClock {
 private:
  std::shared_ptr<class AnalogClock> analogClock;
  float getHourFromAngle(float angle);
  float getMintesFromAngle(float angle);
  float getSecondsFromAngle(float angle);

 public:
  DigitalClockAdapter(const std::shared_ptr<class AnalogClock>& clock);
  Time getTime() override;
};

#endif