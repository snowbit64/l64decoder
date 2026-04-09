// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelGetAuthorization
// Entry Point: 00b3a7a4
// Size: 48 bytes
// Signature: undefined cancelGetAuthorization(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::cancelGetAuthorization() */

void MasterServerManager::cancelGetAuthorization(void)

{
  long in_x0;
  
  if (*(void **)(in_x0 + 0x4b8) != (void *)0x0) {
    operator_delete(*(void **)(in_x0 + 0x4b8));
  }
  *(undefined8 *)(in_x0 + 0x4b8) = 0;
  *(undefined *)(in_x0 + 0x4c0) = 0;
  return;
}


