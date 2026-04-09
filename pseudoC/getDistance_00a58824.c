// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDistance
// Entry Point: 00a58824
// Size: 24 bytes
// Signature: undefined __thiscall getDistance(LODTransformGroup * this, uint param_1)


/* LODTransformGroup::getDistance(unsigned int) */

undefined4 __thiscall LODTransformGroup::getDistance(LODTransformGroup *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(this + (ulong)param_1 * 4 + 0x154);
  }
  return uVar1;
}


