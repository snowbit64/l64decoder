// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clipY
// Entry Point: 00b4fb1c
// Size: 280 bytes
// Signature: undefined __cdecl clipY(Vector4 * param_1, uint param_2, Vector4 * param_3, uint * param_4, Vector4 * param_5, uint * param_6, float param_7)


/* ClippingUtil::clipY(Vector4 const*, unsigned int, Vector4*, unsigned int&, Vector4*, unsigned
   int&, float) */

void ClippingUtil::clipY(Vector4 *param_1,uint param_2,Vector4 *param_3,uint *param_4,
                        Vector4 *param_5,uint *param_6,float param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
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
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar3 = 0;
    uVar5 = 0;
    pfVar8 = (float *)(param_1 + (ulong)(param_2 - 1) * 0x10);
    uVar4 = (ulong)param_2;
    pfVar6 = (float *)(param_1 + 8);
    fVar13 = pfVar8[3];
    fVar15 = pfVar8[2];
    fVar17 = *pfVar8;
    fVar19 = pfVar8[1];
    bVar7 = param_7 <= pfVar8[1];
    do {
      fVar9 = pfVar6[-2];
      fVar10 = pfVar6[-1];
      fVar12 = *pfVar6;
      fVar11 = pfVar6[1];
      if (bVar7 != param_7 <= fVar10) {
        puVar1 = (undefined4 *)(param_5 + (ulong)uVar5 * 0x10);
        uVar5 = uVar5 + 1;
        puVar2 = (undefined4 *)(param_3 + (ulong)uVar3 * 0x10);
        uVar3 = uVar3 + 1;
        fVar20 = 1.0 / (fVar10 - fVar19);
        puVar1[1] = param_7;
        fVar19 = (param_7 - fVar19) * fVar20;
        fVar20 = (fVar10 - param_7) * fVar20;
        uVar18 = NEON_fmadd(fVar17,fVar20,fVar9 * fVar19);
        uVar16 = NEON_fmadd(fVar15,fVar20,fVar12 * fVar19);
        uVar14 = NEON_fmadd(fVar13,fVar20,fVar11 * fVar19);
        *puVar1 = uVar18;
        puVar1[2] = uVar16;
        puVar1[3] = uVar14;
        *puVar2 = uVar18;
        puVar2[1] = param_7;
        puVar2[2] = uVar16;
        puVar2[3] = uVar14;
      }
      if (fVar10 < param_7) {
        pfVar8 = (float *)(param_3 + (ulong)uVar3 * 0x10);
        uVar3 = uVar3 + 1;
      }
      else {
        pfVar8 = (float *)(param_5 + (ulong)uVar5 * 0x10);
        uVar5 = uVar5 + 1;
      }
      *pfVar8 = fVar9;
      pfVar8[1] = fVar10;
      pfVar6 = pfVar6 + 4;
      pfVar8[2] = fVar12;
      uVar4 = uVar4 - 1;
      pfVar8[3] = fVar11;
      fVar13 = fVar11;
      fVar15 = fVar12;
      fVar17 = fVar9;
      fVar19 = fVar10;
      bVar7 = param_7 <= fVar10;
    } while (uVar4 != 0);
  }
  *param_4 = uVar3;
  *param_6 = uVar5;
  return;
}


