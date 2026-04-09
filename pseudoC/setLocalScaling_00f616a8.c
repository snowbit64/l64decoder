// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLocalScaling
// Entry Point: 00f616a8
// Size: 32 bytes
// Signature: undefined __thiscall setLocalScaling(btConvexInternalShape * this, btVector3 * param_1)


/* btConvexInternalShape::setLocalScaling(btVector3 const&) */

void __thiscall
btConvexInternalShape::setLocalScaling(btConvexInternalShape *this,btVector3 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = *(undefined8 *)param_1;
  fVar2 = *(float *)(param_1 + 8);
  *(undefined4 *)(this + 0x28) = 0;
  *(ulong *)(this + 0x1c) = CONCAT44(ABS((float)((ulong)uVar1 >> 0x20)),ABS((float)uVar1));
  *(float *)(this + 0x24) = ABS(fVar2);
  return;
}


