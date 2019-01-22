#include "DecodeCode.h"


mipsinstruction decode(int value)
{
	mipsinstruction instr;

	// TODO: fill in the fields
	instr.funct = value & 63;

	instr.immediate = value & 65535;
	instr.immediate = instr.immediate <<16;
	instr.immediate = instr.immediate >>16;

	instr.rd = value & 63488;
	instr.rd = instr.rd >> 11;

	instr.rt = value & 2031616;
	instr.rt = instr.rt >> 16;

	instr.rs = value & 65011712;
	instr.rs = instr.rs >>21;

	instr.opcode = value & 4227858432;
	instr.opcode = instr.opcode >>26;

	return instr;
}


