// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: batchedUnitVectorGetSupportingVertexWithoutMargin
// Entry Point: 00f63550
// Size: 124 bytes
// Signature: undefined __thiscall batchedUnitVectorGetSupportingVertexWithoutMargin(btCylinderShapeX * this, btVector3 * param_1, btVector3 * param_2, int param_3)


/* btCylinderShapeX::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*, btVector3*,
   int) const */

void __thiscall
btCylinderShapeX::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btCylinderShapeX *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < param_3) {
    uVar1 = (ulong)(uint)param_3;
    pfVar2 = (float *)(param_2 + 8);
    do {
      fVar5 = *(float *)((long)param_1 + 4);
      fVar7 = *(float *)((long)param_1 + 8);
      fVar3 = (float)NEON_fmadd(fVar7,fVar7,fVar5 * fVar5);
      fVar6 = *(float *)(this + 0x2c);
      fVar4 = *(float *)(this + 0x30);
      if (SQRT(fVar3) == 0.0) {
        fVar8 = 0.0;
        fVar3 = -fVar6;
        if (0.0 <= *(float *)param_1) {
          fVar3 = fVar6;
        }
      }
      else {
        fVar8 = fVar4 / SQRT(fVar3);
        fVar3 = -fVar6;
        if (0.0 <= *(float *)param_1) {
          fVar3 = fVar6;
        }
        fVar4 = fVar8 * fVar5;
        fVar8 = fVar8 * fVar7;
      }
      uVar1 = uVar1 - 1;
      param_1 = (btVector3 *)((long)param_1 + 0x10);
      pfVar2[-2] = fVar3;
      pfVar2[-1] = fVar4;
      *pfVar2 = fVar8;
      pfVar2 = pfVar2 + 4;
    } while (uVar1 != 0);
  }
  return;
}


