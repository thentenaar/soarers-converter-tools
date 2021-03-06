#ifndef RAWHID_DEFS_H
#define RAWHID_DEFS_H

enum request_code_t {
	RQ_INFO	        = 1,
	RQ_WRITE        = 2,
	RQ_READ         = 3,
	RQ_BOOT         = 4,
	RQ_CONTINUATION	= 0x80
};

enum response_code_t {
	RC_ERROR        = 1,
	RC_OK           = 2,
	RC_READY        = 3,
	RC_COMPLETED    = 4
};

enum info_code_t {
	IC_END                = 0,
	IC_CODE_VERSION       = 1,
	IC_CONFIG_MAX_VERSION = 2,
	IC_PROTOCOL_VERSION   = 3,
	IC_CONFIG_VERSION     = 4,
	IC_RAM_SIZE           = 5,
	IC_EEPROM_SIZE        = 6,
	IC_RAM_FREE	          = 7,
	IC_EEPROM_FREE        = 8
};

#define PACKET_LEN 64

#define SC_VID 0x16C0
#define SC_PID 0x047D

#endif /* RAWHID_DEFS_H */
