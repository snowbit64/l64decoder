// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ignorePair
// Entry Point: 007244ec
// Size: 48 bytes
// Signature: undefined __thiscall ignorePair(DynamicAvoidance * this, uint param_1, uint param_2)


/* DynamicAvoidance::ignorePair(unsigned int, unsigned int) const */

uint __thiscall DynamicAvoidance::ignorePair(DynamicAvoidance *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (param_2 <= param_1) {
    uVar1 = param_2;
    param_2 = param_1;
  }
  uVar1 = uVar1 + (param_2 + param_2 * param_2 >> 1);
  return (uint)(*(ulong *)(*(long *)(this + 0x60) + ((ulong)(uVar1 >> 3) & 0x1ffffff8)) >>
               ((ulong)uVar1 & 0x3f)) & 1;
}


