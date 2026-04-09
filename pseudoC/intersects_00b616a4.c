// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersects
// Entry Point: 00b616a4
// Size: 152 bytes
// Signature: undefined __thiscall intersects(BoundingSphere * this, BoundingVolume * param_1)


/* BoundingSphere::intersects(BoundingVolume const*) const */

ulong __thiscall BoundingSphere::intersects(BoundingSphere *this,BoundingVolume *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  
  iVar1 = BoundingVolume::getType();
  if (iVar1 == 0) {
    uVar3 = NEON_fmadd(*(float *)(this + 0xc) - *(float *)(param_1 + 0xc),
                       *(float *)(this + 0xc) - *(float *)(param_1 + 0xc),
                       (*(float *)(this + 0x10) - *(float *)(param_1 + 0x10)) *
                       (*(float *)(this + 0x10) - *(float *)(param_1 + 0x10)));
    fVar4 = (float)NEON_fmadd(*(float *)(this + 0x14) - *(float *)(param_1 + 0x14),
                              *(float *)(this + 0x14) - *(float *)(param_1 + 0x14),uVar3);
    uVar2 = (ulong)(fVar4 <= (*(float *)(this + 0x18) + *(float *)(param_1 + 0x18)) *
                             (*(float *)(this + 0x18) + *(float *)(param_1 + 0x18)));
  }
  else {
    iVar1 = BoundingVolume::getType();
    if (iVar1 == 1) {
      uVar2 = MathUtil::sphereAABBIntersect
                        ((float *)(this + 0xc),*(float *)(this + 0x18),(float *)(param_1 + 0x1c),
                         (float *)(param_1 + 0x28));
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}


