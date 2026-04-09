// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: batchedUnitVectorGetSupportingVertexWithoutMargin
// Entry Point: 00f632ac
// Size: 132 bytes
// Signature: undefined __thiscall batchedUnitVectorGetSupportingVertexWithoutMargin(btCylinderShape * this, btVector3 * param_1, btVector3 * param_2, int param_3)


/* btCylinderShape::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*, btVector3*,
   int) const */

void __thiscall
btCylinderShape::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btCylinderShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

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
    pfVar3 = (float *)(param_1 + 4);
    pfVar2 = (float *)(param_2 + 8);
    do {
      fVar6 = pfVar3[-1];
      fVar8 = pfVar3[1];
      fVar4 = (float)NEON_fmadd(fVar8,fVar8,fVar6 * fVar6);
      fVar5 = *(float *)(this + 0x2c);
      fVar7 = *(float *)(this + 0x30);
      if (SQRT(fVar4) == 0.0) {
        fVar9 = 0.0;
        fVar4 = -fVar7;
        if (0.0 <= *pfVar3) {
          fVar4 = fVar7;
        }
      }
      else {
        fVar9 = fVar5 / SQRT(fVar4);
        fVar4 = -fVar7;
        if (0.0 <= *pfVar3) {
          fVar4 = fVar7;
        }
        fVar5 = fVar9 * fVar6;
        fVar9 = fVar9 * fVar8;
      }
      uVar1 = uVar1 - 1;
      pfVar3 = pfVar3 + 4;
      pfVar2[-2] = fVar5;
      pfVar2[-1] = fVar4;
      *pfVar2 = fVar9;
      pfVar2 = pfVar2 + 4;
    } while (uVar1 != 0);
  }
  return;
}


