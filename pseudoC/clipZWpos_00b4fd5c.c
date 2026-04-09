// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clipZWpos
// Entry Point: 00b4fd5c
// Size: 268 bytes
// Signature: undefined __cdecl clipZWpos(Vector4 * param_1, uint param_2, Vector4 * param_3, uint * param_4, Vector4 * param_5, uint * param_6)


/* ClippingUtil::clipZWpos(Vector4 const*, unsigned int, Vector4*, unsigned int&, Vector4*, unsigned
   int&) */

void ClippingUtil::clipZWpos
               (Vector4 *param_1,uint param_2,Vector4 *param_3,uint *param_4,Vector4 *param_5,
               uint *param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  bool bVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  
  if (param_2 < 3) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    pfVar8 = (float *)(param_1 + (ulong)(param_2 - 1) * 0x10);
    uVar5 = (ulong)param_2;
    pfVar6 = (float *)(param_1 + 8);
    fVar13 = pfVar8[2];
    fVar15 = pfVar8[1];
    fVar17 = *pfVar8;
    fVar19 = pfVar8[3];
    bVar7 = pfVar8[2] <= pfVar8[3];
    do {
      fVar10 = *pfVar6;
      fVar9 = pfVar6[1];
      fVar11 = pfVar6[-2];
      fVar12 = pfVar6[-1];
      if (bVar7 != fVar10 <= fVar9) {
        puVar1 = (undefined4 *)(param_3 + (ulong)uVar4 * 0x10);
        puVar2 = (undefined4 *)(param_5 + (ulong)uVar3 * 0x10);
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + 1;
        fVar20 = 1.0 / ((fVar13 - fVar19) - (fVar10 - fVar9));
        fVar19 = (fVar13 - fVar19) * fVar20;
        fVar20 = fVar20 * -(fVar10 - fVar9);
        uVar18 = NEON_fmadd(fVar17,fVar20,fVar11 * fVar19);
        uVar16 = NEON_fmadd(fVar15,fVar20,fVar12 * fVar19);
        uVar14 = NEON_fmadd(fVar13,fVar20,fVar10 * fVar19);
        *puVar1 = uVar18;
        puVar1[1] = uVar16;
        puVar1[2] = uVar14;
        puVar1[3] = uVar14;
        *puVar2 = uVar18;
        puVar2[1] = uVar16;
        puVar2[2] = uVar14;
        puVar2[3] = uVar14;
      }
      if (fVar9 < fVar10) {
        pfVar8 = (float *)(param_5 + (ulong)uVar3 * 0x10);
        uVar3 = uVar3 + 1;
      }
      else {
        pfVar8 = (float *)(param_3 + (ulong)uVar4 * 0x10);
        uVar4 = uVar4 + 1;
      }
      *pfVar8 = fVar11;
      pfVar8[1] = fVar12;
      pfVar6 = pfVar6 + 4;
      pfVar8[2] = fVar10;
      uVar5 = uVar5 - 1;
      pfVar8[3] = fVar9;
      fVar13 = fVar10;
      fVar15 = fVar12;
      fVar17 = fVar11;
      fVar19 = fVar9;
      bVar7 = fVar10 <= fVar9;
    } while (uVar5 != 0);
  }
  *param_4 = uVar4;
  *param_6 = uVar3;
  return;
}


