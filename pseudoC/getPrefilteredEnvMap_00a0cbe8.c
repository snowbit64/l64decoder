// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPrefilteredEnvMap
// Entry Point: 00a0cbe8
// Size: 60 bytes
// Signature: undefined getPrefilteredEnvMap(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndirectLightRenderController::getPrefilteredEnvMap() */

long IndirectLightRenderController::getPrefilteredEnvMap(void)

{
  long *plVar1;
  long in_x0;
  
  if (*(long *)(in_x0 + 0x140) != 0) {
    return *(long *)(in_x0 + 0x140);
  }
  plVar1 = (long *)(in_x0 + 0x180);
  if (*(char *)(in_x0 + 0xe) != '\0' || *(char *)(in_x0 + 0xd) == '\0') {
    plVar1 = (long *)(*(long *)(in_x0 + 0x198) + 0x4f8);
  }
  return *plVar1;
}


