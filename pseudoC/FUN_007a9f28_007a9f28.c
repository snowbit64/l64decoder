// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9f28
// Entry Point: 007a9f28
// Size: 108 bytes
// Signature: undefined FUN_007a9f28(void)


void FUN_007a9f28(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = Geometry::getBoundingVolume();
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(lVar1 + 0xc);
  uVar2 = *(undefined4 *)(lVar1 + 0x10);
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x128) = 4;
  *(undefined4 *)(param_2 + 0x110) = uVar2;
  *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(lVar1 + 0x14);
  lVar1 = Geometry::getBoundingVolume();
  uVar2 = *(undefined4 *)(lVar1 + 0x18);
  *(undefined4 *)(param_2 + 0x138) = 4;
  *(undefined4 *)(param_2 + 0x130) = uVar2;
  return;
}


