// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateEllipsoid
// Entry Point: 00f9085c
// Size: 696 bytes
// Signature: undefined __cdecl CreateEllipsoid(btSoftBodyWorldInfo * param_1, btVector3 * param_2, btVector3 * param_3, int param_4)


/* btSoftBodyHelpers::CreateEllipsoid(btSoftBodyWorldInfo&, btVector3 const&, btVector3 const&, int)
    */

undefined8
btSoftBodyHelpers::CreateEllipsoid
          (btSoftBodyWorldInfo *param_1,btVector3 *param_2,btVector3 *param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_88;
  float fStack_84;
  
  uVar1 = param_4 + 3;
  if (param_4 + 2 < 0 != SCARRY4(param_4,2)) {
    uVar13 = CreateFromConvexHull(param_1,(btVector3 *)0x0,uVar1,true);
    return uVar13;
  }
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  pfVar5 = (float *)(*(code *)PTR_FUN_01048e38)((ulong)uVar1 << 4,0x10);
  uVar10 = 0;
  pfVar9 = pfVar5;
  do {
    fVar11 = 0.0;
    if (uVar10 != 0) {
      fVar12 = 0.5;
      uVar3 = uVar10;
      fVar11 = 0.0;
      do {
        fVar17 = -0.0;
        if ((uVar3 & 1) != 0) {
          fVar17 = fVar12;
        }
        fVar12 = fVar12 * 0.5;
        bVar4 = 1 < uVar3;
        fVar11 = fVar17 + fVar11;
        uVar3 = uVar3 >> 1;
      } while (bVar4);
    }
    fVar17 = (float)NEON_fmadd(fVar11,0x40000000,0xbf800000);
    fVar11 = (float)NEON_fnmadd(fVar17,fVar17,0x3f800000);
    fVar12 = (float)NEON_fmadd((float)(uVar10 << 1),0x40490fdb,0x40490fdb);
    sincosf(fVar12 / (float)uVar1,&fStack_84,&local_88);
    pfVar9[2] = fVar17;
    pfVar9[3] = 0.0;
    uVar10 = uVar10 + 1;
    *pfVar9 = SQRT(fVar11) * local_88;
    pfVar9[1] = SQRT(fVar11) * fStack_84;
    pfVar9 = pfVar9 + 4;
  } while (uVar10 != uVar1);
  uVar10 = uVar1;
  if ((int)uVar1 < 2) {
    uVar10 = 1;
  }
  uVar6 = (ulong)uVar10;
  if (uVar10 < 5) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if ((param_3 + 0xc <= pfVar5 || pfVar5 + uVar6 * 4 <= param_3) &&
       (param_2 + 0xc <= pfVar5 || pfVar5 + uVar6 * 4 <= param_2)) {
      uVar2 = 4;
      if ((uVar10 & 3) != 0) {
        uVar2 = uVar6 & 3;
      }
      lVar8 = uVar6 - uVar2;
      pfVar9 = pfVar5;
      lVar7 = lVar8;
      do {
        lVar7 = lVar7 + -4;
        fVar11 = (float)*(undefined8 *)param_2;
        fVar18 = (float)*(undefined8 *)param_3;
        fVar12 = (float)*(undefined8 *)(param_2 + 4);
        fVar20 = (float)*(undefined8 *)(param_3 + 4);
        fVar17 = (float)*(undefined8 *)(param_2 + 8);
        fVar19 = (float)*(undefined8 *)(param_3 + 8);
        *pfVar9 = fVar11 + *pfVar9 * fVar18;
        pfVar9[1] = fVar12 + pfVar9[1] * fVar20;
        pfVar9[2] = fVar17 + pfVar9[2] * fVar19;
        pfVar9[3] = 0.0;
        pfVar9[4] = fVar11 + pfVar9[4] * fVar18;
        pfVar9[5] = fVar12 + pfVar9[5] * fVar20;
        pfVar9[6] = fVar17 + pfVar9[6] * fVar19;
        pfVar9[7] = 0.0;
        pfVar9[8] = fVar11 + pfVar9[8] * fVar18;
        pfVar9[9] = fVar12 + pfVar9[9] * fVar20;
        pfVar9[10] = fVar17 + pfVar9[10] * fVar19;
        pfVar9[0xb] = 0.0;
        pfVar9[0xc] = fVar11 + pfVar9[0xc] * fVar18;
        pfVar9[0xd] = fVar12 + pfVar9[0xd] * fVar20;
        pfVar9[0xe] = fVar17 + pfVar9[0xe] * fVar19;
        pfVar9[0xf] = 0.0;
        pfVar9 = pfVar9 + 0x10;
      } while (lVar7 != 0);
    }
  }
  lVar7 = uVar6 - lVar8;
  pfVar9 = pfVar5 + lVar8 * 4 + 2;
  do {
    lVar7 = lVar7 + -1;
    uVar13 = *(undefined8 *)param_3;
    uVar14 = *(undefined4 *)(param_3 + 8);
    uVar15 = *(undefined8 *)param_2;
    uVar16 = *(undefined4 *)(param_2 + 8);
    pfVar9[1] = 0.0;
    fVar11 = (float)NEON_fmadd(uVar14,*pfVar9,uVar16);
    *(ulong *)(pfVar9 + -2) =
         CONCAT44((float)((ulong)uVar15 >> 0x20) +
                  (float)((ulong)*(undefined8 *)(pfVar9 + -2) >> 0x20) *
                  (float)((ulong)uVar13 >> 0x20),
                  (float)uVar15 + (float)*(undefined8 *)(pfVar9 + -2) * (float)uVar13);
    *pfVar9 = fVar11;
    pfVar9 = pfVar9 + 4;
  } while (lVar7 != 0);
  uVar13 = CreateFromConvexHull(param_1,(btVector3 *)pfVar5,uVar1,true);
  gNumAlignedFree = gNumAlignedFree + 1;
  (*(code *)PTR_FUN_01048e40)(pfVar5);
  return uVar13;
}


