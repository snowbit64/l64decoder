// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTexCoord
// Entry Point: 00b82440
// Size: 28 bytes
// Signature: undefined __thiscall setTexCoord(TriangleSet * this, float * param_1, uint param_2, uint param_3)


/* TriangleSet::setTexCoord(float const*, unsigned int, unsigned int) */

void __thiscall TriangleSet::setTexCoord(TriangleSet *this,float *param_1,uint param_2,uint param_3)

{
  *(undefined8 *)(*(long *)(this + (ulong)param_2 * 8 + 0x18) + (ulong)(param_3 << 1) * 4) =
       *(undefined8 *)param_1;
  return;
}


