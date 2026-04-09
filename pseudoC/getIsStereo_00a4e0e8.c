// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsStereo
// Entry Point: 00a4e0e8
// Size: 120 bytes
// Signature: undefined getIsStereo(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::getIsStereo() const */

bool AudioSourceSample::getIsStereo(void)

{
  uint *puVar1;
  int iVar2;
  long in_x0;
  
  puVar1 = (uint *)(in_x0 + 0xb0) + (ulong)*(uint *)(in_x0 + 0xac) * 0xe + 1;
  if (1 < *(uint *)(in_x0 + 0xb0)) {
    puVar1 = (uint *)(*(long *)(in_x0 + 0xf0) + (ulong)*(uint *)(in_x0 + 0xac) * 0x38);
  }
  if ((*(long *)(puVar1 + 10) == 0) && (*(long *)(puVar1 + 8) != 0)) {
    iVar2 = (**(code **)(**(long **)(*(long *)(puVar1 + 8) + 0x48) + 0x10))();
    if (iVar2 - 1U < 5) {
      return (iVar2 - 1U & 1) == 0;
    }
  }
  return false;
}


