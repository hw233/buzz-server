//
// Summary: buzz source code.
//
// Author: Tony.
// Email: tonyjobmails@gmail.com.
// Last modify: 2013-01-04 14:42:47.
// File name: timer.h
//
// Description:
// Define class Timer.
//

#ifndef __CORE__TIMER__H
#define __CORE__TIMER__H

#include <list>
#include <string>

#include "core/timer_handler.h"

namespace core {

#define TIMING_BASE_BIT 8
#define TIMING_BASE_SIZE 256
#define TIMING_GROUP_BIT 6
#define TIMING_GROUP_SIZE 64

class Timer {
 public:
  Timer(uint32 id, uint32 tick_count, uint32 call_times, TimerHandler *handler,
      const std::string &debug)
    : id_(id), tick_count_(tick_count), call_timers_(call_times),
    handler_(handler), left_base_tick_count_(0), timing_group_id_(0),
    timing_bucket_id_(0), debug_(debug) , releasing_(false) {}

  typedef std::list<Timer *> TimerList;

  inline uint32 OnSchedule() {
    this->handler_->OnTimer(this->id_);
    if(this->call_timers_ < 0) return 1;
    return --this->call_timers_;
  }

  uint32 id_;
  uint32 tick_count_;
  int call_timers_;
  TimerHandler *handler_;

  uint32 left_base_tick_count_;

  // -1: base, 0~3: group.
  int timing_group_id_;
  size_t timing_bucket_id_;
  TimerList::iterator iterator_;

  std::string debug_;

  // Check the timer is in the releasing state.
  bool releasing_;
};

}  // namespace core

#endif  // __CORE__TIMER__H

