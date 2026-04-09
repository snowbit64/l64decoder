// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00cbfaec
// Entry Point: 00cbfaec
// Size: 188 bytes
// Signature: undefined FUN_00cbfaec(void)


void FUN_00cbfaec(long param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  
  while (lVar3 = *(long *)(param_1 + 0x10), lVar3 != param_2) {
    pvVar2 = *(void **)(lVar3 + -0x10);
    *(undefined ***)(lVar3 + -0x30) = &PTR__Integer_0100c890;
    *(long *)(param_1 + 0x10) = lVar3 + -0x60;
    uVar1 = *(ulong *)(lVar3 + -0x20);
    if (*(ulong *)(lVar3 + -0x18) <= *(ulong *)(lVar3 + -0x20)) {
      uVar1 = *(ulong *)(lVar3 + -0x18);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbfb5c to 00cbfb5f has its CatchHandler @ 00cbfba8 */
    CryptoPP::UnalignedDeallocate(pvVar2);
    pvVar2 = *(void **)(lVar3 + -0x40);
    *(undefined ***)(lVar3 + -0x60) = &PTR__Integer_0100c890;
    uVar1 = *(ulong *)(lVar3 + -0x50);
    if (*(ulong *)(lVar3 + -0x48) <= *(ulong *)(lVar3 + -0x50)) {
      uVar1 = *(ulong *)(lVar3 + -0x48);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbfb18 to 00cbfb1b has its CatchHandler @ 00cbfbac */
    CryptoPP::UnalignedDeallocate(pvVar2);
  }
  return;
}


