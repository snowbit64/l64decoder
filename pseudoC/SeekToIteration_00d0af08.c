// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SeekToIteration
// Entry Point: 00d0af08
// Size: 68 bytes
// Signature: undefined __thiscall SeekToIteration(CTR_ModePolicy * this, ulong param_1)


/* CryptoPP::CTR_ModePolicy::SeekToIteration(unsigned long) */

void __thiscall CryptoPP::CTR_ModePolicy::SeekToIteration(CTR_ModePolicy *this,ulong param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  iVar3 = *(int *)(this + 0x28);
  uVar4 = (ulong)(iVar3 - 1U);
  if (-1 < (int)(iVar3 - 1U)) {
    uVar5 = 0;
    do {
      bVar1 = (byte)param_1;
      param_1 = param_1 >> 8;
      iVar3 = iVar3 + -1;
      uVar2 = uVar5 + bVar1 + (uint)*(byte *)(*(long *)(this + 0x30) + uVar4);
      uVar5 = uVar2 >> 8;
      *(char *)(*(long *)(this + 0x58) + uVar4) = (char)uVar2;
      uVar4 = uVar4 - 1;
    } while (0 < iVar3);
  }
  return;
}


