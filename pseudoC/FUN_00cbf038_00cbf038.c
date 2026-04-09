// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00cbf038
// Entry Point: 00cbf038
// Size: 188 bytes
// Signature: undefined FUN_00cbf038(void)


void FUN_00cbf038(long param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  
  while (lVar3 = *(long *)(param_1 + 0x10), lVar3 != param_2) {
    pvVar2 = *(void **)(lVar3 + -0x20);
    *(undefined ***)(lVar3 + -0x40) = &PTR__Integer_0100c890;
    *(long *)(param_1 + 0x10) = lVar3 + -0x70;
    uVar1 = *(ulong *)(lVar3 + -0x30);
    if (*(ulong *)(lVar3 + -0x28) <= *(ulong *)(lVar3 + -0x30)) {
      uVar1 = *(ulong *)(lVar3 + -0x28);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbf0a8 to 00cbf0ab has its CatchHandler @ 00cbf0f4 */
    CryptoPP::UnalignedDeallocate(pvVar2);
    pvVar2 = *(void **)(lVar3 + -0x50);
    *(undefined ***)(lVar3 + -0x70) = &PTR__Integer_0100c890;
    uVar1 = *(ulong *)(lVar3 + -0x60);
    if (*(ulong *)(lVar3 + -0x58) <= *(ulong *)(lVar3 + -0x60)) {
      uVar1 = *(ulong *)(lVar3 + -0x58);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbf064 to 00cbf067 has its CatchHandler @ 00cbf0f8 */
    CryptoPP::UnalignedDeallocate(pvVar2);
  }
  return;
}


