#pragma once
#ifndef SCHEDULER_H
#define SCHEDULER_H

#define ERROR_CODE (int)(-1) // todo check

typedef struct _SchedulerProperties {
	int SystemTime;
}SchedulerProperties;

SchedulerProperties Scheduler;

#endif