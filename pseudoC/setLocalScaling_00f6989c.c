// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLocalScaling
// Entry Point: 00f6989c
// Size: 12 bytes
// Signature: undefined __thiscall setLocalScaling(btScaledBvhTriangleMeshShape * this, btVector3 * param_1)


/* btScaledBvhTriangleMeshShape::setLocalScaling(btVector3 const&) */

void __thiscall
btScaledBvhTriangleMeshShape::setLocalScaling(btScaledBvhTriangleMeshShape *this,btVector3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}


