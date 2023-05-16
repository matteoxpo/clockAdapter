#ifndef WATCHADAPTER_ADAPTEE_LIB_ANALOGCLOCK_HPP_
#define WATCHADAPTER_ADAPTEE_LIB_ANALOGCLOCK_HPP_
#include "AnalogTimeParams.hpp"

class AnalogClock {
 private:
  AnalogTimeParams time;

 public:
  AnalogClock(float hoursAngle, float minutesAngle, float secondsAngle);
  void setHoursAngle(float hoursAngle);
  void setMinutesAngle(float minutesAngle);
  void setSecondsAngle(float secondsAngle);
  AnalogTimeParams getTimeParams();
};

#endif