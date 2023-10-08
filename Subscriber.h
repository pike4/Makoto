#pragma once

#include "Event.h"

class Subscriber
{
 public:
    virtual void handle(Event *event) = 0;
};
