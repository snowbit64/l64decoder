// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: batchedUnitVectorGetSupportingVertexWithoutMargin
// Entry Point: 00f63854
// Size: 132 bytes
// Signature: undefined __thiscall batchedUnitVectorGetSupportingVertexWithoutMargin(btCylinderShapeZ * this, btVector3 * param_1, btVector3 * param_2, int param_3)


/* btCylinderShapeZ::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*, btVector3*,
   int) const */

void __thiscall
btCylinderShapeZ::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btCylinderShapeZ *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < param_3) {
    uVar1 = (ulong)(uint)param_3;
    pfVar3 = (float *)(param_1 + 8);
    pfVar2 = (float *)(param_2 + 8);
    do {
      fVar6 = pfVar3[-2];
      fVar7 = pfVar3[-1];
      fVar8 = *(float *)(this + 0x34);
      fVar4 = (float)NEON_fmadd(fVar7,fVar7,fVar6 * fVar6);
      fVar5 = *(float *)(this + 0x2c);
      if (SQRT(fVar4) == 0.0) {
        fVar4 = -fVar8;
        if (0.0 <= *pfVar3) {
          fVar4 = fVar8;
        }
        fVar9 = 0.0;
      }
      else {
        fVar9 = fVar5 / SQRT(fVar4);
        fVar5 = fVar9 * fVar6;
        fVar4 = -fVar8;
        if (0.0 <= *pfVar3) {
          fVar4 = fVar8;
        }
        fVar9 = fVar9 * fVar7;
      }
      uVar1 = uVar1 - 1;
      pfVar3 = pfVar3 + 4;
      pfVar2[-2] = fVar5;
      pfVar2[-1] = fVar9;
      *pfVar2 = fVar4;
      pfVar2 = pfVar2 + 4;
    } while (uVar1 != 0);
  }
  return;
}


