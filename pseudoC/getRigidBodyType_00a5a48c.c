// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRigidBodyType
// Entry Point: 00a5a48c
// Size: 92 bytes
// Signature: undefined __cdecl getRigidBodyType(TransformGroup * param_1)


/* PhysicsObjectUtil::getRigidBodyType(TransformGroup*) */

uint PhysicsObjectUtil::getRigidBodyType(TransformGroup *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar2 + 8) >> 3 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = RawTransformGroup::getPhysicsObject();
    uVar1 = *(uint *)(lVar2 + 8);
    if ((uVar1 >> 6 & 1) == 0) {
      if ((uVar1 >> 7 & 1) == 0) {
        uVar1 = -(uVar1 >> 8 & 1) & 3;
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


