// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsStereo
// Entry Point: 008b3934
// Size: 88 bytes
// Signature: undefined getIsStereo(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StaticSample::getIsStereo() const */

bool StaticSample::getIsStereo(void)

{
  bool bVar1;
  int iVar2;
  long in_x0;
  
  if (((*(long *)(in_x0 + 0x70) == 0) ||
      (iVar2 = (**(code **)(**(long **)(*(long *)(in_x0 + 0x70) + 0x48) + 0x10))(),
      *(char *)(in_x0 + 0x31) == '\0')) || (4 < iVar2 - 1U)) {
    bVar1 = false;
  }
  else {
    bVar1 = (iVar2 - 1U & 1) == 0;
  }
  return bVar1;
}


