#ifndef ZSTACK_LOG_H
#define ZSTACK_LOG_H

#ifndef info
#define info(argv, ...) _log(__FUNCTION__, 0, argv, ##__VA_ARGS__)
#endif

/*
 * error, warning, important progress note
 */
#ifndef warn
#define warn(argv, ...) _log(__FUNCTION__, 1, argv, ##__VA_ARGS__)
#endif

#define TRACE warn("%s %d\n", __FUNCTION__, __LINE__)

// End with NULL, it makes log syntax simple
// Reference: GStreamer API
extern void log_init(const char *config, ...);

// Can be designed as an API
extern int _log(const char *module, int level, const char *fmt, ...);

#endif
