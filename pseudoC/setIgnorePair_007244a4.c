// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setIgnorePair
// Entry Point: 007244a4
// Size: 72 bytes
// Signature: undefined __thiscall setIgnorePair(DynamicAvoidance * this, uint param_1, uint param_2, bool param_3)


/* DynamicAvoidance::setIgnorePair(unsigned int, unsigned int, bool) */

void __thiscall
DynamicAvoidance::setIgnorePair(DynamicAvoidance *this,uint param_1,uint param_2,bool param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  if (param_2 <= param_1) {
    uVar1 = param_2;
    param_2 = param_1;
  }
  uVar1 = uVar1 + (param_2 + param_2 * param_2 >> 1);
  lVar2 = *(long *)(this + 0x60);
  uVar3 = (ulong)(uVar1 >> 6);
  uVar4 = 1L << ((ulong)uVar1 & 0x3f);
  if (!param_3) {
    *(ulong *)(lVar2 + uVar3 * 8) = *(ulong *)(lVar2 + uVar3 * 8) & (uVar4 ^ 0xffffffffffffffff);
    return;
  }
  *(ulong *)(lVar2 + uVar3 * 8) = *(ulong *)(lVar2 + uVar3 * 8) | uVar4;
  return;
}


