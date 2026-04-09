// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_initialize_with_callbacks
// Entry Point: 00d27fa4
// Size: 72 bytes
// Signature: undefined enet_initialize_with_callbacks(void)


undefined8 enet_initialize_with_callbacks(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (0x102 < ((uint)((ulong)param_1 >> 8) & 0xffffff)) {
    puVar1 = (undefined *)param_2[1];
    if ((undefined *)*param_2 == (undefined *)0x0) {
      puVar2 = PTR_malloc_010483e8;
      puVar3 = PTR_free_010483f0;
      if (puVar1 == (undefined *)0x0) goto LAB_00d27fd8;
    }
    else {
      puVar2 = (undefined *)*param_2;
      puVar3 = puVar1;
      if (puVar1 != (undefined *)0x0) {
LAB_00d27fd8:
        PTR_free_010483f0 = puVar3;
        PTR_malloc_010483e8 = puVar2;
        if ((undefined *)param_2[2] != (undefined *)0x0) {
          PTR_abort_010483f8 = (undefined *)param_2[2];
        }
        uVar4 = enet_initialize();
        return uVar4;
      }
    }
  }
  return 0xffffffff;
}


