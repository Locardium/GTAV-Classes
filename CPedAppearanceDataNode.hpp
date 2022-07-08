#pragma once

#include "CPedComponents.hpp"

#include <cstdint>

#pragma pack(push, 4)
class CPedAppearanceDataNode
{
public:
	char pad_0x0[192]; //0x0000
	uint32_t unk_0xC0[6]; //0x00C0
	uint32_t unk_0xD8[6]; //0x00D8
	class CPedComponents components; //0x00F0
	char pad_0x1B8[8]; //0x01B8
	uint32_t unk_0x1C0; //0x01C0
	uint8_t unk_0x1C4; //0x01C4
	uint8_t unk_0x1C5; //0x01C5
	char pad_0x1C6[2]; //0x01C6
	uint32_t unk_0x1C8; //0x01C8
	uint32_t unk_0x1CC; //0x01CC
	uint32_t unk_0x1D0; //0x01D0
	bool unk_0x1D4; //0x01D4
	bool unk_0x1D5; //0x01D5
	bool unk_0x1D6; //0x01D6
	uint8_t unk_0x1D7; //0x01D7
	uint16_t unk_0x1D8; //0x01D8
	uint16_t unk_0x1DA; //0x01DA
	uint16_t unk_0x1DC; //0x01DC
	bool unk_0x1DE; //0x01DE
	bool unk_0x1DF; //0x01DF
	bool unk_0x1E0; //0x01E0
	uint8_t unk_0x1E1; //0x01E1
}; //Size: 0x01E4
static_assert(sizeof(CPedAppearanceDataNode) == 0x1E4);
#pragma(pop)