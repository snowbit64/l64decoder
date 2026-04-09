// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isBusy
// Entry Point: 00966428
// Size: 104 bytes
// Signature: undefined isBusy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::isBusy() const */

bool TextureStreamingManager::isBusy(void)

{
  bool bVar1;
  char *in_x0;
  ulong uVar2;
  
  if (*in_x0 == '\0') {
    bVar1 = false;
  }
  else if (((*(long *)(in_x0 + 0x838) == *(long *)(in_x0 + 0x830)) &&
           (uVar2 = RegistryPipeline::isBusy(), (uVar2 & 1) == 0)) && (*(int *)(in_x0 + 0x608) < 1))
  {
    bVar1 = 0 < *(int *)(in_x0 + 0x82c);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


