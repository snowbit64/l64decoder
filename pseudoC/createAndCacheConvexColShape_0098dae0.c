// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAndCacheConvexColShape
// Entry Point: 0098dae0
// Size: 348 bytes
// Signature: undefined __thiscall createAndCacheConvexColShape(Bt2PhysicsColShapeCache * this, ulonglong param_1, uint param_2, float * param_3, float param_4, VolumeInfo * param_5)


/* Bt2PhysicsColShapeCache::createAndCacheConvexColShape(unsigned long long, unsigned int, float
   const*, float, Bt2PhysicsColShapeCache::VolumeInfo const&) */

void __thiscall
Bt2PhysicsColShapeCache::createAndCacheConvexColShape
          (Bt2PhysicsColShapeCache *this,ulonglong param_1,uint param_2,float *param_3,float param_4
          ,VolumeInfo *param_5)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  bool bVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar12 = (ulong)param_2;
  pfVar5 = (float *)btAlignedAllocInternal(uVar12 << 4,0x10);
  if (param_2 == 0) goto LAB_0098db74;
  if (param_2 < 4) {
LAB_0098db30:
    uVar6 = 0;
  }
  else {
    uVar10 = uVar12 - 1;
    uVar6 = 0;
    uVar8 = (uVar10 & 0xffffffff) + (uVar10 & 0xffffffff) * 2;
    bVar4 = (uVar8 & 0xffffffff00000000) == 0;
    uVar11 = (uint)uVar8;
    if ((((uVar11 != 0xffffffff) && (bVar4)) && (uVar10 >> 0x20 == 0)) &&
       ((uVar11 < 0xfffffffe && (bVar4)))) {
      if ((pfVar5 < param_3 + uVar12 * 3) && (param_3 < pfVar5 + uVar12 * 4)) goto LAB_0098db30;
      uVar8 = 0;
      uVar6 = uVar12 & 0xfffffffc;
      pfVar9 = pfVar5;
      do {
        uVar10 = uVar8 & 0xfffffffc;
        uVar8 = uVar8 + 0xc;
        pfVar3 = param_3 + uVar10;
        fVar16 = pfVar3[1];
        fVar20 = pfVar3[2];
        fVar13 = pfVar3[3];
        fVar17 = pfVar3[4];
        fVar21 = pfVar3[5];
        fVar14 = pfVar3[6];
        fVar18 = pfVar3[7];
        fVar22 = pfVar3[8];
        fVar15 = pfVar3[9];
        fVar19 = pfVar3[10];
        fVar23 = pfVar3[0xb];
        *pfVar9 = *pfVar3;
        pfVar9[1] = fVar16;
        pfVar9[2] = fVar20;
        pfVar9[3] = 0.0;
        pfVar9[4] = fVar13;
        pfVar9[5] = fVar17;
        pfVar9[6] = fVar21;
        pfVar9[7] = 0.0;
        pfVar9[8] = fVar14;
        pfVar9[9] = fVar18;
        pfVar9[10] = fVar22;
        pfVar9[0xb] = 0.0;
        pfVar9[0xc] = fVar15;
        pfVar9[0xd] = fVar19;
        pfVar9[0xe] = fVar23;
        pfVar9[0xf] = 0.0;
        pfVar9 = pfVar9 + 0x10;
      } while ((ulong)(param_2 >> 2) * 0xc - uVar8 != 0);
      if (uVar6 == uVar12) goto LAB_0098db74;
    }
  }
  uVar11 = (int)uVar6 * 3;
  lVar7 = uVar12 - uVar6;
  pfVar9 = pfVar5 + uVar6 * 4 + 2;
  do {
    uVar1 = uVar11 + 1;
    lVar7 = lVar7 + -1;
    pfVar9[-2] = param_3[uVar11];
    uVar2 = uVar11 + 2;
    uVar11 = uVar11 + 3;
    pfVar9[-1] = param_3[uVar1];
    fVar13 = param_3[uVar2];
    pfVar9[1] = 0.0;
    *pfVar9 = fVar13;
    pfVar9 = pfVar9 + 4;
  } while (lVar7 != 0);
LAB_0098db74:
  createAndCacheConvexColShape(this,param_1,param_2,(btVector3 *)pfVar5,param_4,param_5);
  return;
}


