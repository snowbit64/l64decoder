// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getActiveAnimationName
// Entry Point: 00705e38
// Size: 96 bytes
// Signature: undefined getActiveAnimationName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalAnimationSystem::getActiveAnimationName() */

undefined * AnimalAnimationSystem::getActiveAnimationName(void)

{
  undefined *puVar1;
  long in_x0;
  long lVar2;
  
  if ((*(CharacterSet **)(in_x0 + 0x298) != (CharacterSet *)0x0) &&
     (*(uint *)(in_x0 + 0x2b4) != 0xffffffff)) {
    lVar2 = CharacterSet::getClip
                      (*(CharacterSet **)(in_x0 + 0x298),
                       *(uint *)(*(long *)(in_x0 + 0x288) + (ulong)*(uint *)(in_x0 + 0x2b4) * 0x70 +
                                0x34c));
    puVar1 = (undefined *)(lVar2 + 9);
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      puVar1 = *(undefined **)(lVar2 + 0x18);
    }
    return puVar1;
  }
  return &DAT_0050a39f;
}


