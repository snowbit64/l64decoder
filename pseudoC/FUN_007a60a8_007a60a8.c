// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a60a8
// Entry Point: 007a60a8
// Size: 80 bytes
// Signature: undefined FUN_007a60a8(void)


void FUN_007a60a8(undefined8 param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  
  *(undefined *)(param_2 + 0x100) = 1;
  *(undefined4 *)(param_2 + 0x108) = 3;
  lVar1 = RawTransformGroup::getPhysicsObject();
  if (((*(uint *)(lVar1 + 8) ^ 0xffffffff) & 0x88) == 0) {
    bVar2 = Bt2PhysicsRBObject::getIsSleeping();
    *(undefined4 *)(param_2 + 0x108) = 3;
    *(byte *)(param_2 + 0x100) = bVar2 & 1;
  }
  return;
}


