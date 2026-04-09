// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00888f8c
// Size: 68 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTAnimationIsPlaying::update() */

undefined4 BTAnimationIsPlaying::update(void)

{
  bool bVar1;
  long in_x0;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = AnimalAnimationSystem::isAnimationActive
                    (*(AnimalAnimationSystem **)(in_x0 + 0x30),*(uint *)(in_x0 + 0x38));
  bVar1 = *(char *)(in_x0 + 0x3c) != '\0';
  uVar3 = 1;
  if (bVar1) {
    uVar3 = 2;
  }
  uVar4 = 1;
  if (!bVar1) {
    uVar4 = 2;
  }
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar4;
  }
  return uVar3;
}


