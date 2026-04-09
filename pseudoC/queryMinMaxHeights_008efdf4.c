// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: queryMinMaxHeights
// Entry Point: 008efdf4
// Size: 168 bytes
// Signature: undefined __thiscall queryMinMaxHeights(GeoMipMappingTerrain * this, uint param_1, uint param_2, uint param_3, uint param_4, float * param_5, float * param_6)


/* GeoMipMappingTerrain::queryMinMaxHeights(unsigned int, unsigned int, unsigned int, unsigned int,
   float&, float&) */

void __thiscall
GeoMipMappingTerrain::queryMinMaxHeights
          (GeoMipMappingTerrain *this,uint param_1,uint param_2,uint param_3,uint param_4,
          float *param_5,float *param_6)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  
  uVar2 = *(uint *)(this + 0x198);
  uVar5 = param_2 >> (ulong)(uVar2 & 0x1f);
  uVar3 = param_4 >> (ulong)(uVar2 & 0x1f);
  *param_5 = 1e+35;
  *param_6 = -1e+35;
  if (uVar5 < uVar3) {
    uVar4 = param_1 >> ((ulong)uVar2 & 0x3f);
    uVar2 = param_3 >> ((ulong)uVar2 & 0x3f);
    do {
      if (uVar4 < uVar2) {
        lVar7 = *(long *)(this + 0x188);
        uVar6 = uVar4 + *(int *)(this + 0x19c) * uVar5;
        lVar8 = (ulong)uVar2 - (ulong)uVar4;
        do {
          pfVar1 = (float *)(lVar7 + (ulong)uVar6 * 8);
          uVar6 = uVar6 + 1;
          fVar9 = *pfVar1;
          if (*param_5 <= fVar9) {
            fVar9 = *param_5;
          }
          *param_5 = fVar9;
          fVar9 = pfVar1[1];
          if (fVar9 <= *param_6) {
            fVar9 = *param_6;
          }
          lVar8 = lVar8 + -1;
          *param_6 = fVar9;
        } while (lVar8 != 0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar3);
  }
  return;
}


