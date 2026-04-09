// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaxFreeSize
// Entry Point: 00af16dc
// Size: 72 bytes
// Signature: undefined getMaxFreeSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SubAllocator::getMaxFreeSize() */

uint SubAllocator::getMaxFreeSize(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  long in_x0;
  
  if (*(char *)(in_x0 + 0x28) == '\0') {
    return *(uint *)(in_x0 + 0x24);
  }
  *(undefined4 *)(in_x0 + 0x24) = 0;
  puVar2 = *(uint **)(in_x0 + 8);
  uVar3 = 0;
  while (puVar2 != *(uint **)(in_x0 + 0x10)) {
    uVar1 = *puVar2;
    if (*puVar2 <= uVar3) {
      uVar1 = uVar3;
    }
    *(uint *)(in_x0 + 0x24) = uVar1;
    puVar2 = puVar2 + 2;
    uVar3 = uVar1;
  }
  *(undefined *)(in_x0 + 0x28) = 0;
  return uVar3;
}


