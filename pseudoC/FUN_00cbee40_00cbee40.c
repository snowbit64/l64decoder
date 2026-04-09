// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00cbee40
// Entry Point: 00cbee40
// Size: 188 bytes
// Signature: undefined FUN_00cbee40(void)


void FUN_00cbee40(long *param_1)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  while (lVar4 != lVar1) {
    *(undefined ***)(lVar4 + -0x40) = &PTR__Integer_0100c890;
    pvVar3 = *(void **)(lVar4 + -0x20);
    uVar2 = *(ulong *)(lVar4 + -0x30);
    if (*(ulong *)(lVar4 + -0x28) <= *(ulong *)(lVar4 + -0x30)) {
      uVar2 = *(ulong *)(lVar4 + -0x28);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)pvVar3 + uVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbeea8 to 00cbeeab has its CatchHandler @ 00cbeefc */
    CryptoPP::UnalignedDeallocate(pvVar3);
    pvVar3 = *(void **)(lVar4 + -0x50);
    *(undefined ***)(lVar4 + -0x70) = &PTR__Integer_0100c890;
    uVar2 = *(ulong *)(lVar4 + -0x60);
    if (*(ulong *)(lVar4 + -0x58) <= *(ulong *)(lVar4 + -0x60)) {
      uVar2 = *(ulong *)(lVar4 + -0x58);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)pvVar3 + uVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbee6c to 00cbee6f has its CatchHandler @ 00cbef00 */
    CryptoPP::UnalignedDeallocate(pvVar3);
    lVar4 = lVar4 + -0x70;
  }
  param_1[1] = lVar1;
  return;
}


