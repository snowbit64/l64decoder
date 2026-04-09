// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: release
// Entry Point: 00baac04
// Size: 68 bytes
// Signature: undefined release(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsContextManager::release() */

void Bt2PhysicsContextManager::release(void)

{
  void **in_x0;
  
  if (*in_x0 != (void *)0x0) {
    operator_delete(*in_x0);
  }
  *in_x0 = (void *)0x0;
  if ((long *)in_x0[0xc] != (long *)0x0) {
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*in_x0[0xc] + 8))();
  }
  in_x0[0xc] = (void *)0x0;
  return;
}


