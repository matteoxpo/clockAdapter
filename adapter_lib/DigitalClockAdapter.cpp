#include "DigitalClockAdapter.hpp"

#include "AnalogTimeParams.hpp"
DigitalClockAdapter::DigitalClockAdapter(
    const std::shared_ptr<AnalogClock>& clock)
    : analogClock(clock) {}

Time DigitalClockAdapter::getTime() {
  AnalogTimeParams analogTime = this->analogClock->getTimeParams();

  return Time(this->getHourFromAngle(analogTime.getHoursAngle()),
              this->getMintesFromAngle(analogTime.getMinutesAngle()),
              this->getSecondsFromAngle(analogTime.getSecondsAngle()));
}

float DigitalClockAdapter::getHourFromAngle(float angle) { return angle / 30; }

float DigitalClockAdapter::getMintesFromAngle(float angle) { return angle / 6; }

float DigitalClockAdapter::getSecondsFromAngle(float angle) {
  return angle / 6;
}
