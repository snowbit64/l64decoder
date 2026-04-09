// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clipX
// Entry Point: 00b4fa04
// Size: 280 bytes
// Signature: undefined __cdecl clipX(Vector4 * param_1, uint param_2, Vector4 * param_3, uint * param_4, Vector4 * param_5, uint * param_6, float param_7)


/* ClippingUtil::clipX(Vector4 const*, unsigned int, Vector4*, unsigned int&, Vector4*, unsigned
   int&, float) */

void ClippingUtil::clipX(Vector4 *param_1,uint param_2,Vector4 *param_3,uint *param_4,
                        Vector4 *param_5,uint *param_6,float param_7)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  float *pfVar5;
  bool bVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (param_2 < 3) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = 0;
    uVar4 = 0;
    pfVar7 = (float *)(param_1 + (ulong)(param_2 - 1) * 0x10);
    uVar3 = (ulong)param_2;
    pfVar5 = (float *)(param_1 + 8);
    fVar12 = pfVar7[3];
    fVar13 = pfVar7[2];
    fVar14 = pfVar7[1];
    fVar15 = *pfVar7;
    bVar6 = param_7 <= *pfVar7;
    do {
      fVar8 = pfVar5[-2];
      fVar9 = pfVar5[-1];
      fVar11 = *pfVar5;
      fVar10 = pfVar5[1];
      if (bVar6 != param_7 <= fVar8) {
        pfVar7 = (float *)(param_5 + (ulong)uVar4 * 0x10);
        uVar4 = uVar4 + 1;
        pfVar1 = (float *)(param_3 + (ulong)uVar2 * 0x10);
        uVar2 = uVar2 + 1;
        fVar16 = 1.0 / (fVar8 - fVar15);
        *pfVar7 = param_7;
        fVar15 = (param_7 - fVar15) * fVar16;
        fVar16 = (fVar8 - param_7) * fVar16;
        fVar14 = (float)NEON_fmadd(fVar14,fVar16,fVar9 * fVar15);
        fVar13 = (float)NEON_fmadd(fVar13,fVar16,fVar11 * fVar15);
        fVar12 = (float)NEON_fmadd(fVar12,fVar16,fVar10 * fVar15);
        pfVar7[1] = fVar14;
        pfVar7[2] = fVar13;
        pfVar7[3] = fVar12;
        *pfVar1 = param_7;
        pfVar1[1] = fVar14;
        pfVar1[2] = fVar13;
        pfVar1[3] = fVar12;
      }
      if (fVar8 < param_7) {
        pfVar7 = (float *)(param_3 + (ulong)uVar2 * 0x10);
        uVar2 = uVar2 + 1;
      }
      else {
        pfVar7 = (float *)(param_5 + (ulong)uVar4 * 0x10);
        uVar4 = uVar4 + 1;
      }
      *pfVar7 = fVar8;
      pfVar7[1] = fVar9;
      pfVar5 = pfVar5 + 4;
      pfVar7[2] = fVar11;
      uVar3 = uVar3 - 1;
      pfVar7[3] = fVar10;
      fVar12 = fVar10;
      fVar13 = fVar11;
      fVar14 = fVar9;
      fVar15 = fVar8;
      bVar6 = param_7 <= fVar8;
    } while (uVar3 != 0);
  }
  *param_4 = uVar2;
  *param_6 = uVar4;
  return;
}


