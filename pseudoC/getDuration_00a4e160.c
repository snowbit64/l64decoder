// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDuration
// Entry Point: 00a4e160
// Size: 72 bytes
// Signature: undefined getDuration(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::getDuration() const */

undefined  [16] AudioSourceSample::getDuration(void)

{
  uint *puVar1;
  long in_x0;
  undefined auVar2 [16];
  
  puVar1 = (uint *)(in_x0 + 0xb0) + (ulong)*(uint *)(in_x0 + 0xac) * 0xe + 1;
  if (1 < *(uint *)(in_x0 + 0xb0)) {
    puVar1 = (uint *)(*(long *)(in_x0 + 0xf0) + (ulong)*(uint *)(in_x0 + 0xac) * 0x38);
  }
  if (*(long *)(puVar1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a4e19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(**(long **)(*(long *)(puVar1 + 8) + 0x48) + 0x30))();
    return auVar2;
  }
  return ZEXT816(0);
}


