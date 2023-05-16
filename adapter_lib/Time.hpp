#ifndef WATCHADAPTER_ADAPTER_LIB_TIME_H_
#define WATCHADAPTER_ADAPTER_LIB_TIME_H_

struct Time {
 private:
  float hours;
  float minutes;
  float seconds;

 public:
  Time(float hours, float minutes, float seconds);
  inline float getHours() { return this->hours; }
  inline float getMinutes() { return this->minutes; }
  inline float getSeconds() { return this->seconds; }
};

#endif