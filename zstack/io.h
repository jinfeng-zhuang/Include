#ifndef ZSTACK_IO_H
#define ZSTACK_IO_H

#include "types.h"

extern u64 file_size(const char* filename);
extern u32 file_load(const char* filename, u64 offset, u8 *buffer, u32 length);
extern u32 file_save(const char* filename, u8* buffer, u32 length);
extern u32 file_append(const char* filename, u8* buffer, u32 length);
extern u8* file_load_simple(const char* filename, u64 offset, u32* length);

/*
 * Block API
 * if return -1, means device read failed, if less then length, means timeout
 */
extern u32 serial_read(u32 fd, u8* buffer, u32 length);
extern u32 serial_write(u32 fd, u8* buffer, u32 length);

#endif
