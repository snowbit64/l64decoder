// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IncrementCounterBy256
// Entry Point: 00d0af8c
// Size: 52 bytes
// Signature: undefined IncrementCounterBy256(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CTR_ModePolicy::IncrementCounterBy256() */

void CryptoPP::CTR_ModePolicy::IncrementCounterBy256(void)

{
  uint uVar1;
  bool bVar2;
  long in_x0;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = *(int *)(in_x0 + 0x28) - 2;
  if (-1 < (int)uVar3) {
    lVar4 = *(long *)(in_x0 + 0x58);
    do {
      uVar5 = (ulong)uVar3;
      bVar2 = uVar3 == 0;
      uVar3 = uVar3 - 1;
      uVar1 = *(byte *)(lVar4 + uVar5) + 1;
      *(char *)(lVar4 + uVar5) = (char)uVar1;
      if (bVar2) {
        return;
      }
    } while (uVar1 >> 8 != 0);
  }
  return;
}


