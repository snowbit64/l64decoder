// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCollisionMask
// Entry Point: 00a5a528
// Size: 44 bytes
// Signature: undefined __cdecl getCollisionMask(TransformGroup * param_1)


/* PhysicsObjectUtil::getCollisionMask(TransformGroup*) */

undefined4 PhysicsObjectUtil::getCollisionMask(TransformGroup *param_1)

{
  long lVar1;
  
  lVar1 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar1 + 8) >> 3 & 1) == 0) {
    return 0;
  }
  return *(undefined4 *)(lVar1 + 0x58);
}


