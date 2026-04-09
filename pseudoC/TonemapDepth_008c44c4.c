// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TonemapDepth
// Entry Point: 008c44c4
// Size: 236 bytes
// Signature: undefined __thiscall TonemapDepth(GsMaskedOcclusionCulling * this, float * param_1, uchar * param_2, uint param_3, int param_4, int param_5)


/* GsMaskedOcclusionCulling::TonemapDepth(float*, unsigned char*, unsigned int, int, int) */

void __thiscall
GsMaskedOcclusionCulling::TonemapDepth
          (GsMaskedOcclusionCulling *this,float *param_1,uchar *param_2,uint param_3,int param_4,
          int param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  uchar uVar5;
  uchar *puVar6;
  uchar uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = param_5 * param_4;
  uVar2 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    fVar10 = 0.0;
    uVar3 = uVar2;
    pfVar4 = param_1;
    fVar8 = 3.402823e+38;
    do {
      fVar11 = *pfVar4;
      fVar9 = fVar11;
      if (fVar11 <= 0.0 || fVar8 <= fVar11) {
        fVar9 = fVar8;
      }
      if (fVar11 <= 0.0 || fVar11 <= fVar10) {
        fVar11 = fVar10;
      }
      fVar10 = fVar11;
      uVar3 = uVar3 - 1;
      pfVar4 = pfVar4 + 1;
      fVar8 = fVar9;
    } while (uVar3 != 0);
    if (0 < (int)uVar1) {
      do {
        if (*param_1 <= 0.0) {
          uVar5 = '\0';
        }
        else {
          uVar5 = (uchar)(int)(((*param_1 - fVar9) * 223.0) / (fVar10 - fVar9) + 32.0);
        }
        puVar6 = param_2 + 3;
        *param_2 = uVar5;
        uVar7 = uVar5;
        if (param_3 != 3) {
          puVar6 = param_2 + 4;
          param_2[3] = 0x80;
          uVar7 = '\0';
        }
        param_2[1] = uVar5;
        param_1 = param_1 + 1;
        param_2[2] = uVar7;
        uVar2 = uVar2 - 1;
        param_2 = puVar6;
      } while (uVar2 != 0);
    }
  }
  return;
}


