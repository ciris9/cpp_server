#pragma once
#include <memory>
#include "common.h"

class EventLoop {
   public:
    DISALLOW_COPY_AND_MOVE(EventLoop);
    EventLoop();
    ~EventLoop();

    void Loop() const;
    void UpdateChannel(Channel* ch) const;
    void DeleteChannel(Channel* ch) const;

   private:
    std::unique_ptr<Poller> poller_;
};
