// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteAll
// Entry Point: 00a03650
// Size: 68 bytes
// Signature: undefined deleteAll(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PersistentShadowMap::deleteAll() */

void PersistentShadowMap::deleteAll(void)

{
  undefined8 *in_x0;
  void *pvVar1;
  
  pvVar1 = (void *)in_x0[2];
  *(undefined4 *)(in_x0 + 1) = 0;
  *in_x0 = 0;
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 0x10));
    }
    operator_delete(pvVar1);
  }
  in_x0[2] = 0;
  return;
}


