#ifndef WATCHADAPTER_ADAPTEE_LIB_ANALOGTIMEPARAMS_HPP_
#define WATCHADAPTER_ADAPTEE_LIB_ANALOGTIMEPARAMS_HPP_

class AnalogTimeParams {
 private:
  float hoursAngle;
  float minutesAngle;
  float secondsAngle;

 public:
  AnalogTimeParams(float hoursAngle, float minutesAngle, float secondsAngle);
  void setHoursAngle(float hoursAngle);
  void setMinutesAngle(float minutesAngle);
  void setSecondsAngle(float secondsAngle);
  inline float getHoursAngle() { return this->hoursAngle; }
  inline float getMinutesAngle() { return this->minutesAngle; }
  inline float getSecondsAngle() { return this->secondsAngle; }
};

#endif