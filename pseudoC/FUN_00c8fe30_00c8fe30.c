// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c8fe30
// Entry Point: 00c8fe30
// Size: 140 bytes
// Signature: undefined FUN_00c8fe30(void)


void FUN_00c8fe30(void **param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar4 = *param_1;
  if (pvVar4 != (void *)0x0) {
    pvVar3 = param_1[1];
    while (pvVar3 != pvVar4) {
      pvVar2 = *(void **)((long)pvVar3 + -8);
      uVar1 = *(ulong *)((long)pvVar3 + -0x18);
      if (*(ulong *)((long)pvVar3 + -0x10) <= *(ulong *)((long)pvVar3 + -0x18)) {
        uVar1 = *(ulong *)((long)pvVar3 + -0x10);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
      }
                    /* try { // try from 00c8fe54 to 00c8fe57 has its CatchHandler @ 00c8febc */
      CryptoPP::UnalignedDeallocate(pvVar2);
      pvVar3 = (void *)((long)pvVar3 + -0x20);
    }
    param_1[1] = pvVar4;
    operator_delete(*param_1);
    return;
  }
  return;
}


