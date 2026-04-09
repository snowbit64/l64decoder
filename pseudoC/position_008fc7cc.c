// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: position
// Entry Point: 008fc7cc
// Size: 52 bytes
// Signature: undefined __thiscall position(HeightMap * this, int param_1, int param_2)


/* HeightMap::position(int, int) const */

float __thiscall HeightMap::position(HeightMap *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = NEON_ucvtf((uint)*(ushort *)
                            (*(long *)this + (long)(param_1 + *(int *)(this + 8) * param_2) * 2));
  NEON_fmadd(uVar1,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x18));
  return *(float *)(this + 0x10) * (float)param_1;
}


