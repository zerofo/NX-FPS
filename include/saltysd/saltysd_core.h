#ifndef SALTYSD_CORE_H
#define SALTYSD_CORE_H

#include <switch_min.h>

#include "useful/useful.h"

extern "C" {
	u64 SaltySDCore_getCodeStart() LINKABLE;
	u64 SaltySDCore_getCodeSize() LINKABLE;
	u64 SaltySDCore_findCode(u8* code, size_t size) LINKABLE;
	FILE* SaltySDCore_fopen(const char* filename, const char* mode) LINKABLE;
	size_t SaltySDCore_fread(void* ptr, size_t size, size_t count, FILE* stream) LINKABLE;
	int SaltySDCore_fclose(FILE* stream) LINKABLE;
	int SaltySDCore_mkdir(const char* dirname, mode_t mode) LINKABLE;
	size_t SaltySDCore_fwrite(const void *ptr, size_t size, size_t count, FILE *stream) LINKABLE;
	extern int SaltySDCore_remove(const char* filename) LINKABLE;
	Result SaltySDCore_printf(const char* format, ...) LINKABLE;
	int SaltySDCore_fseek(FILE* stream, int64_t offset, int origin) LINKABLE;
	int64_t SaltySDCore_ftell(FILE* stream) LINKABLE;
}

#endif // SALTYSD_CORE_H
