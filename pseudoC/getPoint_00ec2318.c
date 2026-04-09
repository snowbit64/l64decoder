// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPoint
// Entry Point: 00ec2318
// Size: 16 bytes
// Signature: undefined __thiscall getPoint(CTriangulator * this, uint param_1)


/* FLOAT_MATH::CTriangulator::getPoint(unsigned int) */

long __thiscall FLOAT_MATH::CTriangulator::getPoint(CTriangulator *this,uint param_1)

{
  return *(long *)(this + 0x40) + (ulong)param_1 * 0x18;
}


