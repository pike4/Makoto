#include "EventSystem.h"

status_t EventSystem::addSubscriber(EventType type, Subscriber *sub)
{
    if(!sub)
    {
        return ERROR_NULL_ARGUMENT;
    }
}

status_t EventSystem::handleEvent(Event *event)
{
    if(!event)
    {
        return ERROR_NULL_ARGUMENT;
    }

    if(subscribers.find(event->type) == subscribers.end())
    {
        return ERROR_UNKNOWN_EVENT_TYPE;
    }

    for(Subscriber *sub : subscribers[event->type])
    {
        sub->handle(event);
    }
}
