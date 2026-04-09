// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CleanupMemory
// Entry Point: 00fa79e0
// Size: 84 bytes
// Signature: undefined CleanupMemory(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CProfileNode::CleanupMemory() */

void CProfileNode::CleanupMemory(void)

{
  long in_x0;
  void *pvVar1;
  
  pvVar1 = *(void **)(in_x0 + 0x28);
  if (pvVar1 != (void *)0x0) {
    CleanupMemory();
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(in_x0 + 0x30);
  *(undefined8 *)(in_x0 + 0x28) = 0;
  if (pvVar1 != (void *)0x0) {
    CleanupMemory();
    operator_delete(pvVar1);
  }
  *(undefined8 *)(in_x0 + 0x30) = 0;
  return;
}


