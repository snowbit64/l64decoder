// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMass
// Entry Point: 00a5a59c
// Size: 36 bytes
// Signature: undefined __cdecl getMass(TransformGroup * param_1)


/* PhysicsObjectUtil::getMass(TransformGroup*) */

undefined4 PhysicsObjectUtil::getMass(TransformGroup *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = RawTransformGroup::getPhysicsObject();
  uVar2 = 0;
  if ((*(byte *)(lVar1 + 8) >> 3 & 1) != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x78);
  }
  return uVar2;
}


