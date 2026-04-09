// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRenderPatterns
// Entry Point: 00a030d8
// Size: 76 bytes
// Signature: undefined updateRenderPatterns(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PersistentShadowMap::DividedMap::updateRenderPatterns() */

void PersistentShadowMap::DividedMap::updateRenderPatterns(void)

{
  long in_x0;
  ulong uVar1;
  uint *puVar2;
  
  uVar1 = (ulong)*(uint *)(in_x0 + 0xc);
  if (*(uint *)(in_x0 + 0xc) != 0) {
    puVar2 = (uint *)(*(long *)(in_x0 + 0x10) + 0x28);
    do {
      if (((*(long *)(puVar2 + -6) == 0) && (*(long *)(puVar2 + -4) != 0)) &&
         (*(char *)(puVar2 + -1) != '\0')) {
        *puVar2 = *puVar2 >> 1 | *puVar2 << 0x1f;
      }
      puVar2 = puVar2 + 0x22;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


