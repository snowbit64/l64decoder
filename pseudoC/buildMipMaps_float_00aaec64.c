// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildMipMaps<float>
// Entry Point: 00aaec64
// Size: 316 bytes
// Signature: void __cdecl buildMipMaps<float>(float * param_1, float * param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8, bool param_9)


/* void MipMapUtil::buildMipMaps<float>(float*, float const*, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, bool) */

void MipMapUtil::buildMipMaps<float>
               (float *param_1,float *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uint param_7,uint param_8,bool param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  
  uVar2 = param_3;
  if (param_3 == 0) {
    uVar2 = 1;
  }
  uVar3 = param_4;
  if (param_4 == 0) {
    uVar3 = 1;
  }
  uVar4 = param_5;
  if (param_5 == 0) {
    uVar4 = 1;
  }
  if (param_7 != 0) {
    uVar9 = 0;
    do {
      if (param_8 != 0) {
        uVar10 = 1;
        pfVar8 = param_2;
        pfVar12 = param_1;
        uVar13 = param_5;
        uVar14 = param_4;
        uVar11 = param_3;
        do {
          uVar5 = uVar11 >> 1;
          uVar6 = uVar14 >> 1;
          uVar7 = uVar13 >> 1;
          buildMipMap<float>(pfVar12,pfVar8,uVar11,uVar14,uVar13,param_6);
          uVar10 = uVar10 + 1;
          uVar1 = uVar5;
          if (uVar11 < 2) {
            uVar5 = 1;
            uVar1 = uVar11;
          }
          uVar11 = uVar6;
          if (uVar14 < 2) {
            uVar6 = 1;
            uVar11 = uVar14;
          }
          uVar14 = uVar7;
          if (uVar13 < 2) {
            uVar14 = uVar13;
          }
          if (uVar13 < 2) {
            uVar7 = 1;
          }
          param_1 = pfVar12 + uVar5 * param_6 * uVar6 * uVar7;
          pfVar8 = pfVar12;
          pfVar12 = param_1;
          uVar13 = uVar14;
          uVar14 = uVar11;
          uVar11 = uVar1;
        } while (uVar10 <= param_8);
      }
      param_2 = param_2 + uVar3 * uVar2 * param_6 * uVar4;
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_7);
  }
  return;
}


