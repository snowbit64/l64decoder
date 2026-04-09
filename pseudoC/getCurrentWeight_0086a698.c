// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCurrentWeight
// Entry Point: 0086a698
// Size: 32 bytes
// Signature: undefined __thiscall getCurrentWeight(ConditionalAnimationBlending * this, int param_1)


/* ConditionalAnimationBlending::getCurrentWeight(int) const */

undefined4 __thiscall
ConditionalAnimationBlending::getCurrentWeight(ConditionalAnimationBlending *this,int param_1)

{
  if (-1 < param_1) {
    return *(undefined4 *)(*(long *)(this + 0x10) + (ulong)(uint)param_1 * 0x38 + 0x30);
  }
  return 0;
}


