// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: firstOuterCone
// Entry Point: 00b64c24
// Size: 100 bytes
// Signature: undefined firstOuterCone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Brep::firstOuterCone() const */

ulong Brep::firstOuterCone(void)

{
  uint uVar1;
  uint uVar2;
  long in_x0;
  ulong uVar3;
  
  uVar2 = ((uint)(*(int *)(in_x0 + 0x2f58) - (int)*(long *)(in_x0 + 0x2f50)) >> 2) * 0xaaab & 0xffff
  ;
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(*(long *)(in_x0 + 0x2f68) +
                   (ulong)*(uint *)(*(long *)(in_x0 + 0x2f50) + (uVar3 & 0xffff) * 0xc + 4) * 8 + 4)
          == -1) {
        return uVar3;
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != uVar2);
  }
  return 0xffff;
}


