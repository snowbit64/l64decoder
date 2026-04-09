// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clear
// Entry Point: 00d51e54
// Size: 132 bytes
// Signature: undefined Clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::ICHull::Clear() */

void HACD::ICHull::Clear(void)

{
  long in_x0;
  void *pvVar1;
  
  TMMesh::Clear();
  pvVar1 = *(void **)(in_x0 + 0x98);
  if (pvVar1 != (void *)0x0) {
    *(void **)(in_x0 + 0xa0) = pvVar1;
    operator_delete(pvVar1);
  }
  *(void **)(in_x0 + 0x98) = (void *)0x0;
  *(undefined8 *)(in_x0 + 0xa0) = 0;
  *(undefined8 *)(in_x0 + 0xa8) = 0;
  pvVar1 = *(void **)(in_x0 + 0xb0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(in_x0 + 0xb8) = pvVar1;
    operator_delete(pvVar1);
  }
  *(void **)(in_x0 + 0xb0) = (void *)0x0;
  *(undefined8 *)(in_x0 + 0xb8) = 0;
  *(undefined8 *)(in_x0 + 0xc0) = 0;
  pvVar1 = *(void **)(in_x0 + 200);
  if (pvVar1 != (void *)0x0) {
    *(void **)(in_x0 + 0xd0) = pvVar1;
    operator_delete(pvVar1);
  }
  *(undefined *)(in_x0 + 0x100) = 0;
  *(undefined8 *)(in_x0 + 0xd0) = 0;
  *(undefined8 *)(in_x0 + 0xd8) = 0;
  *(void **)(in_x0 + 200) = (void *)0x0;
  return;
}


