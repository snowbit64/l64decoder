// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstLength
// Entry Point: 00c3cbd8
// Size: 20 bytes
// Signature: undefined __cdecl getInstLength(uint * param_1)


/* IR_InstructionSequence::getInstLength(unsigned int const*) */

int IR_InstructionSequence::getInstLength(uint *param_1)

{
  return (param_1[1] >> 0x10) + (param_1[1] & 0xffff) + 2;
}


