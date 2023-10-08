#pragma once

#include <vector>
#include <map>

#include "EventType.h"
#include "Subscriber.h"
#include "Status.h"

class EventSystem
{
 public:
    status_t addSubscriber(EventType type, Subscriber *sub);

    status_t handleEvent(Event *event);
 private:
    std::map<EventType, std::vector<Subscriber*>> subscribers;
};
