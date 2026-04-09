// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SeekToIteration
// Entry Point: 00d0af4c
// Size: 64 bytes
// Signature: undefined __thiscall SeekToIteration(CTR_ModePolicy * this, ulong param_1)


/* non-virtual thunk to CryptoPP::CTR_ModePolicy::SeekToIteration(unsigned long) */

void __thiscall CryptoPP::CTR_ModePolicy::SeekToIteration(CTR_ModePolicy *this,ulong param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = (ulong)(*(int *)(this + -0x10) - 1U);
  if (-1 < (int)(*(int *)(this + -0x10) - 1U)) {
    uVar4 = 0;
    do {
      bVar1 = (byte)param_1;
      param_1 = param_1 >> 8;
      uVar2 = uVar4 + bVar1 + (uint)*(byte *)(*(long *)(this + -8) + uVar3);
      uVar4 = uVar2 >> 8;
      *(char *)(*(long *)(this + 0x20) + uVar3) = (char)uVar2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0xffffffffffffffff);
  }
  return;
}


