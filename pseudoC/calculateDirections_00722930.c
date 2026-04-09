// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateDirections
// Entry Point: 00722930
// Size: 444 bytes
// Signature: undefined __cdecl calculateDirections(uint param_1, float * param_2, Vector3 param_3, float * * param_4, bool * param_5)


/* VehicleCollisionDistanceUtil::calculateDirections(unsigned int, float*, Vector3, float*&, bool&)
    */

void VehicleCollisionDistanceUtil::calculateDirections
               (float param_1_00,float param_2_00,float param_3,uint param_1,undefined8 *param_2,
               float **param_6,undefined *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pfVar3 = (float *)operator_new__((ulong)(param_1 * 3) << 2);
  uVar9 = *param_2;
  uVar6 = *(undefined8 *)((long)param_2 + 0xc);
  fVar12 = *(float *)(param_2 + 1);
  *param_6 = pfVar3;
  *pfVar3 = param_1_00;
  pfVar3[1] = param_2_00;
  fVar5 = (float)uVar6;
  fVar10 = fVar5 - (float)uVar9;
  fVar7 = (float)((ulong)uVar6 >> 0x20);
  fVar11 = fVar7 - (float)((ulong)uVar9 >> 0x20);
  pfVar3[2] = param_3;
  fVar8 = *(float *)((long)param_2 + 0x14);
  fVar12 = fVar8 - fVar12;
  fVar13 = (float)NEON_fmadd(fVar12,fVar12,fVar11 * fVar11 + fVar10 * fVar10);
  fVar14 = 1.0;
  if (1e-06 < fVar13) {
    fVar14 = 1.0 / SQRT(fVar13);
  }
  *param_7 = 1;
  if (1 < param_1) {
    pfVar3 = *param_6;
    fVar12 = fVar12 * fVar14;
    uVar6 = CONCAT44(fVar11 * fVar14,fVar10 * fVar14);
    lVar4 = 0;
    puVar1 = (undefined8 *)(pfVar3 + (param_1 - 1) * 3);
    do {
      if ((ulong)(param_1 - 1) * 3 + -3 == lVar4) {
        *puVar1 = uVar6;
        *(float *)(puVar1 + 1) = fVar12;
      }
      else {
        puVar2 = (undefined8 *)((long)param_2 + (ulong)((int)lVar4 + 6) * 4);
        uVar9 = *puVar2;
        fVar11 = (float)uVar9 - fVar5;
        fVar13 = (float)((ulong)uVar9 >> 0x20) - fVar7;
        fVar10 = *(float *)(puVar2 + 1) - fVar8;
        fVar15 = (float)NEON_fmadd(fVar10,fVar10,fVar13 * fVar13 + fVar11 * fVar11);
        fVar14 = 1.0;
        if (1e-06 < fVar15) {
          fVar14 = 1.0 / SQRT(fVar15);
        }
        uVar9 = CONCAT44(fVar13 * fVar14,fVar11 * fVar14);
        puVar2 = (undefined8 *)(pfVar3 + (lVar4 + 3U & 0xffffffff));
        fVar10 = fVar10 * fVar14;
        fVar11 = ((float)uVar6 + fVar11 * fVar14) * 0.5;
        fVar13 = ((float)((ulong)uVar6 >> 0x20) + fVar13 * fVar14) * 0.5;
        fVar12 = (fVar12 + fVar10) * 0.5;
        *puVar2 = CONCAT44(fVar13,fVar11);
        *(float *)(puVar2 + 1) = fVar12;
        fVar11 = (float)NEON_fmadd(param_3,fVar12,param_2_00 * fVar13 + param_1_00 * fVar11);
        fVar12 = fVar10;
        uVar6 = uVar9;
        if (fVar11 < 0.99875) {
          *param_7 = 0;
        }
      }
      lVar4 = lVar4 + 3;
    } while ((ulong)param_1 + (ulong)param_1 * 2 + -3 != lVar4);
  }
  return;
}


