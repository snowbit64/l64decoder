// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isStereo
// Entry Point: 00a4d568
// Size: 80 bytes
// Signature: undefined isStereo(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::Element::isStereo() const */

bool AudioSourceSample::Element::isStereo(void)

{
  int iVar1;
  long in_x0;
  
  if ((*(long *)(in_x0 + 0x28) == 0) && (*(long *)(in_x0 + 0x20) != 0)) {
    iVar1 = (**(code **)(**(long **)(*(long *)(in_x0 + 0x20) + 0x48) + 0x10))();
    if (iVar1 - 1U < 5) {
      return (iVar1 - 1U & 1) == 0;
    }
  }
  return false;
}


