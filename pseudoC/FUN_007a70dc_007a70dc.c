// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a70dc
// Entry Point: 007a70dc
// Size: 64 bytes
// Signature: undefined FUN_007a70dc(void)


void FUN_007a70dc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 0x100) = 0;
  *(undefined4 *)(param_2 + 0x108) = 4;
  lVar1 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar1 + 8) >> 3 & 1) != 0) {
    uVar2 = Bt2PhysicsRBObject::getVolume();
    *(undefined4 *)(param_2 + 0x108) = 4;
    *(undefined4 *)(param_2 + 0x100) = uVar2;
  }
  return;
}


