// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getScaledHeightAtPoint
// Entry Point: 008e6f24
// Size: 32 bytes
// Signature: undefined __thiscall getScaledHeightAtPoint(BaseTerrain * this, uint param_1, uint param_2)


/* BaseTerrain::getScaledHeightAtPoint(unsigned int, unsigned int) const */

float __thiscall BaseTerrain::getScaledHeightAtPoint(BaseTerrain *this,uint param_1,uint param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_ucvtf((uint)*(ushort *)
                                   (*(long *)(this + 0x80) +
                                   (ulong)(param_1 + *(int *)(this + 0x90) * param_2) * 2));
  return *(float *)(this + 0xa4) * fVar1;
}


