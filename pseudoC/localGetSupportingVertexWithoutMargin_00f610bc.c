// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportingVertexWithoutMargin
// Entry Point: 00f610bc
// Size: 156 bytes
// Signature: undefined __thiscall localGetSupportingVertexWithoutMargin(btConvexHullShape * this, btVector3 * param_1)


/* btConvexHullShape::localGetSupportingVertexWithoutMargin(btVector3 const&) const */

float __thiscall
btConvexHullShape::localGetSupportingVertexWithoutMargin(btConvexHullShape *this,btVector3 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  if ((int)*(uint *)(this + 0x7c) < 1) {
    fVar6 = 0.0;
  }
  else {
    uVar3 = 0;
    puVar5 = (undefined8 *)(*(long *)(this + 0x88) + 4);
    fVar6 = -3.402823e+38;
    iVar4 = -1;
    do {
      uVar7 = *puVar5;
      puVar1 = (undefined4 *)((long)puVar5 + -4);
      puVar5 = puVar5 + 2;
      fVar8 = (float)NEON_fmadd(*(float *)(this + 0x1c) * *(float *)param_1,*puVar1,
                                (float)*(undefined8 *)(this + 0x20) *
                                (float)*(undefined8 *)(param_1 + 4) * (float)uVar7);
      fVar8 = fVar8 + (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) *
                      (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) *
                      (float)((ulong)uVar7 >> 0x20);
      iVar2 = (int)uVar3;
      if (fVar8 <= fVar6) {
        iVar2 = iVar4;
      }
      uVar3 = uVar3 + 1;
      fVar6 = fVar8;
      iVar4 = iVar2;
    } while (*(uint *)(this + 0x7c) != uVar3);
    fVar6 = *(float *)(*(long *)(this + 0x88) + (long)iVar2 * 0x10) * *(float *)(this + 0x1c);
  }
  return fVar6;
}


