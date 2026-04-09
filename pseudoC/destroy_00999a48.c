// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00999a48
// Size: 32 bytes
// Signature: undefined destroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsUtil::TerrainUserData::destroy() */

void Bt2PhysicsUtil::TerrainUserData::destroy(void)

{
  long in_x0;
  
  if (*(char *)(in_x0 + 0x1c) == '\0') {
    *(undefined8 *)(*(long *)(in_x0 + 0x10) + 0x1f8) = 0;
  }
  else if (*(void **)(in_x0 + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x20));
    return;
  }
  return;
}


