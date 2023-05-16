#include "AnalogTimeParams.hpp"

#include <stdexcept>
AnalogTimeParams::AnalogTimeParams(float hoursAngle, float minutesAngle,
                                   float secondsAngle) {
  this->setHoursAngle(hoursAngle);
  this->setMinutesAngle(minutesAngle);
  this->setSecondsAngle(secondsAngle);
}

void AnalogTimeParams::setHoursAngle(float hoursAngle) {
  if (hoursAngle < 0 || hoursAngle > 359) {
    throw std::runtime_error("bad hours value");
  }
  this->hoursAngle = hoursAngle;
}

void AnalogTimeParams::setMinutesAngle(float minutesAngle) {
  if (minutesAngle < 0 || minutesAngle > 359) {
    throw std::runtime_error("bad minutes value");
  }
  this->minutesAngle = minutesAngle;
}

void AnalogTimeParams::setSecondsAngle(float secondsAngle) {
  if (secondsAngle < 0 || secondsAngle > 359) {
    throw std::runtime_error("bad seconds value");
  }
  this->secondsAngle = secondsAngle;
}
