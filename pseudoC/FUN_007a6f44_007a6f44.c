// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6f44
// Entry Point: 007a6f44
// Size: 112 bytes
// Signature: undefined FUN_007a6f44(void)


void FUN_007a6f44(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 0x100) = 0;
  *(undefined4 *)(param_2 + 0x110) = 0;
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x120) = 0;
  *(undefined4 *)(param_2 + 0x128) = 4;
  lVar1 = RawTransformGroup::getPhysicsObject();
  if (((*(uint *)(lVar1 + 8) ^ 0xffffffff) & 0x88) == 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x7c);
    *(undefined4 *)(param_2 + 0x108) = 4;
    *(undefined4 *)(param_2 + 0x118) = 4;
    *(undefined4 *)(param_2 + 0x128) = 4;
    *(undefined4 *)(param_2 + 0x100) = uVar2;
    *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(lVar1 + 0x80);
    *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(lVar1 + 0x84);
  }
  return;
}


