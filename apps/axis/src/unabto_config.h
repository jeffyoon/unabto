#ifndef UNABTO_CONFIG_H
#define UNABTO_CONFIG_H

#include <syslog.h>

#include <pthread.h>

#define EXPAND_ARGS(...) __VA_ARGS__
#define NABTO_LOG_BASIC_PRINT(severity, cmsg) syslog(LOG_INFO, EXPAND_ARGS cmsg)

#define NABTO_LOG_ALL 0

#define NABTO_CONNECTIONS_SIZE 5
#define NABTO_ENABLE_DEVICE_BUSY_AS_FATAL 1

#define NABTO_ENABLE_STREAM 1
#define NABTO_STREAM_MAX_STREAMS 30

#define NABTO_STREAM_RECEIVE_WINDOW_SIZE 100
#define NABTO_ENABLE_STATUS_CALLBACKS 0

#define NABTO_SET_TIME_FROM_ALIVE 0

#define NABTO_APPLICATION_EVENT_MODEL_ASYNC 1
#define NABTO_ENABLE_EXTENDED_RENDEZVOUS_MULTIPLE_SOCKETS 1

#define NABTO_APPREQ_QUEUE_SIZE NABTO_CONNECTIONS_SIZE
#define NABTO_ENABLE_DEBUG_PACKETS 1
#define NABTO_ENABLE_DEBUG_SYSLOG_CONFIG 1

#ifdef LOG_ALL
#define NABTO_LOG_ALL 1
#endif

#define NABTO_ENABLE_TCP_FALLBACK 1

#endif
