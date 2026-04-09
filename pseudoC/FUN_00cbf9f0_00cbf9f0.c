// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00cbf9f0
// Entry Point: 00cbf9f0
// Size: 188 bytes
// Signature: undefined FUN_00cbf9f0(void)


void FUN_00cbf9f0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  while (lVar4 != lVar1) {
    *(undefined ***)(lVar4 + -0x30) = &PTR__Integer_0100c890;
    pvVar3 = *(void **)(lVar4 + -0x10);
    uVar2 = *(ulong *)(lVar4 + -0x20);
    if (*(ulong *)(lVar4 + -0x18) <= *(ulong *)(lVar4 + -0x20)) {
      uVar2 = *(ulong *)(lVar4 + -0x18);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)pvVar3 + uVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbfa58 to 00cbfa5b has its CatchHandler @ 00cbfaac */
    CryptoPP::UnalignedDeallocate(pvVar3);
    pvVar3 = *(void **)(lVar4 + -0x40);
    *(undefined ***)(lVar4 + -0x60) = &PTR__Integer_0100c890;
    uVar2 = *(ulong *)(lVar4 + -0x50);
    if (*(ulong *)(lVar4 + -0x48) <= *(ulong *)(lVar4 + -0x50)) {
      uVar2 = *(ulong *)(lVar4 + -0x48);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)pvVar3 + uVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbfa1c to 00cbfa1f has its CatchHandler @ 00cbfab0 */
    CryptoPP::UnalignedDeallocate(pvVar3);
    lVar4 = lVar4 + -0x60;
  }
  param_1[1] = lVar1;
  return;
}


