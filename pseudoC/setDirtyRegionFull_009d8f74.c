// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDirtyRegionFull
// Entry Point: 009d8f74
// Size: 68 bytes
// Signature: undefined setDirtyRegionFull(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementMask::setDirtyRegionFull() */

void ProceduralPlacementMask::setDirtyRegionFull(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *in_x0;
  
  uVar1 = (**(code **)(*in_x0 + 0x40))();
  uVar2 = (**(code **)(*in_x0 + 0x48))();
  *(undefined4 *)(in_x0 + 0x14) = 0;
  *(undefined4 *)((long)in_x0 + 0xa4) = uVar1;
  *(undefined4 *)(in_x0 + 0x15) = 0;
  *(undefined4 *)((long)in_x0 + 0xac) = uVar2;
  return;
}


