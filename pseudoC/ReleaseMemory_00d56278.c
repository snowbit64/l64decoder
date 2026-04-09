// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ReleaseMemory
// Entry Point: 00d56278
// Size: 220 bytes
// Signature: undefined ReleaseMemory(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::MeshDecimator::ReleaseMemory() */

void HACD::MeshDecimator::ReleaseMemory(void)

{
  void *pvVar1;
  undefined8 *in_x0;
  void *pvVar2;
  void **ppvVar3;
  void *pvVar4;
  void *pvVar5;
  
  if ((void *)in_x0[0x13] != (void *)0x0) {
    operator_delete__((void *)in_x0[0x13]);
  }
  pvVar2 = (void *)in_x0[0xe];
  pvVar1 = (void *)in_x0[8];
  pvVar4 = (void *)in_x0[9];
  in_x0[8] = 0;
  in_x0[9] = 0;
  pvVar5 = (void *)in_x0[0xb];
  in_x0[10] = 0;
  in_x0[0xb] = 0;
  in_x0[0xc] = 0;
  in_x0[0xd] = 0;
  if (pvVar2 != (void *)0x0) {
    in_x0[0xf] = pvVar2;
    operator_delete(pvVar2);
  }
  in_x0[0x13] = 0;
  in_x0[6] = 0;
  in_x0[0xf] = 0;
  in_x0[0x10] = 0;
  in_x0[0xe] = (void *)0x0;
  in_x0[1] = 0;
  *in_x0 = 0;
  in_x0[3] = 0;
  in_x0[2] = 0;
  in_x0[5] = 0;
  in_x0[4] = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  if (pvVar1 != (void *)0x0) {
    while (pvVar4 != pvVar1) {
      if (*(void **)((long)pvVar4 + -0x70) != (void *)0x0) {
        operator_delete__(*(void **)((long)pvVar4 + -0x70));
      }
      ppvVar3 = (void **)((long)pvVar4 + -0x108);
      pvVar4 = (void *)((long)pvVar4 + -0x188);
      if (*ppvVar3 != (void *)0x0) {
        operator_delete__(*ppvVar3);
      }
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


