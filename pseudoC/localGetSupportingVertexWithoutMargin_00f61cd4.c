// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportingVertexWithoutMargin
// Entry Point: 00f61cd4
// Size: 208 bytes
// Signature: undefined __thiscall localGetSupportingVertexWithoutMargin(btConvexPointCloudShape * this, btVector3 * param_1)


/* btConvexPointCloudShape::localGetSupportingVertexWithoutMargin(btVector3 const&) const */

undefined  [16] __thiscall
btConvexPointCloudShape::localGetSupportingVertexWithoutMargin
          (btConvexPointCloudShape *this,btVector3 *param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  undefined auVar7 [16];
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar11 = *(float *)param_1;
  fVar12 = *(float *)(param_1 + 4);
  fVar13 = *(float *)(param_1 + 8);
  fVar10 = 0.0;
  fVar8 = 1.0;
  uVar5 = NEON_fmadd(fVar12,fVar12,fVar11 * fVar11);
  fVar14 = (float)NEON_fmadd(fVar13,fVar13,uVar5);
  fVar6 = 0.0;
  if (0.0001 <= fVar14) {
    fVar10 = 1.0 / SQRT(fVar14);
    fVar8 = fVar10 * fVar11;
    fVar6 = fVar10 * fVar12;
    fVar10 = fVar10 * fVar13;
  }
  if ((int)*(uint *)(this + 0x80) < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    puVar4 = (undefined4 *)(*(long *)(this + 0x78) + 8);
    fVar11 = -3.402823e+38;
    iVar3 = -1;
    do {
      uVar5 = NEON_fmadd(puVar4[-1],fVar6,(float)puVar4[-2] * fVar8);
      fVar12 = (float)NEON_fmadd(*puVar4,fVar10,uVar5);
      iVar1 = (int)uVar2;
      if (fVar12 <= fVar11) {
        iVar1 = iVar3;
      }
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 4;
      fVar11 = fVar12;
      iVar3 = iVar1;
    } while (*(uint *)(this + 0x80) != uVar2);
    uVar9 = *(undefined8 *)(*(long *)(this + 0x78) + (long)iVar1 * 0x10);
    uVar2 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x1c) >> 0x20) *
                     (float)((ulong)uVar9 >> 0x20),
                     (float)*(undefined8 *)(this + 0x1c) * (float)uVar9);
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  return auVar7;
}


