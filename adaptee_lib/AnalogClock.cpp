#include "AnalogClock.hpp"

#include <stdexcept>

AnalogClock::AnalogClock(float hoursAngle, float minutesAngle,
                         float secondsAngle)
    : time(hoursAngle, minutesAngle, secondsAngle) {}

void AnalogClock::setHoursAngle(float hoursAngle) {
  if (hoursAngle < 0 || hoursAngle > 359) {
    throw std::runtime_error("hours value error");
  }
  this->time.setHoursAngle(hoursAngle);
}

void AnalogClock::setMinutesAngle(float minutesAngle) {
  if (minutesAngle < 0 || minutesAngle > 359) {
    throw std::runtime_error("minutes value error");
  }
  this->time.setMinutesAngle(minutesAngle);
}

void AnalogClock::setSecondsAngle(float secondsAngle) {
  if (secondsAngle < 0 || secondsAngle > 359) {
    throw std::runtime_error("seconds value error");
  }
  this->time.setSecondsAngle(secondsAngle);
}

AnalogTimeParams AnalogClock::getTimeParams() { return this->time; }
