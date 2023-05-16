#include "Time.hpp"

#include <stdexcept>

Time::Time(float hours, float minutes, float seconds) {
  if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59 || seconds < 0 ||
      seconds > 59) {
    throw std::runtime_error("bad time value");
  }
  this->hours = hours;
  this->minutes = minutes;
  this->seconds = seconds;
}