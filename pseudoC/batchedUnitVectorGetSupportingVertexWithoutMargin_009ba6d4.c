// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: batchedUnitVectorGetSupportingVertexWithoutMargin
// Entry Point: 009ba6d4
// Size: 136 bytes
// Signature: undefined __thiscall batchedUnitVectorGetSupportingVertexWithoutMargin(btTriangleShape * this, btVector3 * param_1, btVector3 * param_2, int param_3)


/* btTriangleShape::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*, btVector3*,
   int) const */

void __thiscall
btTriangleShape::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btTriangleShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (0 < param_3) {
    uVar2 = (ulong)(uint)param_3;
    pfVar3 = (float *)(param_1 + 4);
    do {
      fVar12 = pfVar3[-1];
      fVar10 = *pfVar3;
      fVar11 = pfVar3[1];
      pfVar3 = pfVar3 + 4;
      puVar4 = (undefined4 *)(this + 0x50);
      uVar5 = NEON_fmadd(fVar12,*puVar4,fVar10 * *(float *)(this + 0x54));
      uVar8 = NEON_fmadd(fVar12,*(undefined4 *)(this + 0x60),fVar10 * *(float *)(this + 100));
      fVar6 = (float)NEON_fmadd(fVar11,*(undefined4 *)(this + 0x58),uVar5);
      fVar9 = (float)NEON_fmadd(fVar11,*(undefined4 *)(this + 0x68),uVar8);
      uVar5 = NEON_fmadd(fVar12,*(undefined4 *)(this + 0x70),fVar10 * *(float *)(this + 0x74));
      fVar10 = fVar9;
      if (fVar6 >= fVar9) {
        fVar10 = fVar6;
      }
      fVar11 = (float)NEON_fmadd(fVar11,*(undefined4 *)(this + 0x78),uVar5);
      uVar1 = 2;
      if (fVar11 <= fVar10) {
        uVar1 = (ulong)(fVar6 < fVar9);
      }
      uVar2 = uVar2 - 1;
      uVar7 = *(undefined8 *)(puVar4 + uVar1 * 4);
      *(undefined8 *)((long)param_2 + 8) = *(undefined8 *)((long)(puVar4 + uVar1 * 4) + 8);
      *(undefined8 *)param_2 = uVar7;
      param_2 = (btVector3 *)((long)param_2 + 0x10);
    } while (uVar2 != 0);
  }
  return;
}


