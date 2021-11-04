#ifndef ZSTACK_ADTS_H
#define ZSTACK_ADTS_H

#include "types.h"

// 7Bytes
struct adts_header {
	// Fixed 28bits
	u32 syncword : 12;
	u32 id : 1;
	u32 layer : 2;
	u32 protection_absent : 1;
	u32 profile : 2;
	u32 sample_freq_index : 4;
	u32 private_bit : 1;
	u32 channel_config : 3;
	u32 origin_copy : 1;
	u32 home : 1;

	// Var
	u32 copyright_id_bit : 1;
	u32 copyright_id_start : 1;
	u32 aac_frame_len : 13;
	u32 adts_buffer_fullness : 11;
	u32 number_of_raw_data : 2;

	// rsvd
	u32 rsvd : 8;
};

struct adts_header_protect {
	u32 syncword : 12;
};

#endif