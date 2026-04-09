// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doUpdateDirtyRegion
// Entry Point: 009e94a8
// Size: 688 bytes
// Signature: undefined __thiscall doUpdateDirtyRegion(ProceduralPlacementSignedDistanceMask * this, DirtyRegion * param_1)


/* ProceduralPlacementSignedDistanceMask::doUpdateDirtyRegion(ProceduralPlacementMask::DirtyRegion
   const&) */

void __thiscall
ProceduralPlacementSignedDistanceMask::doUpdateDirtyRegion
          (ProceduralPlacementSignedDistanceMask *this,DirtyRegion *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  
  iVar18 = *(int *)param_1;
  iVar17 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(this + 200);
  iVar13 = *(int *)(param_1 + 8);
  iVar14 = *(int *)(param_1 + 0xc);
  if (0 < iVar3) {
    iVar18 = iVar18 - iVar3;
    iVar17 = iVar3 + iVar17;
    iVar13 = iVar13 - iVar3;
    iVar14 = iVar3 + iVar14;
  }
  plVar16 = **(long ***)(this + 0x88);
  uVar7 = (**(code **)(*(long *)this + 0x40))(this);
  fVar21 = (float)(uVar7 & 0xffffffff);
  if ((float)iVar18 <= (float)(uVar7 & 0xffffffff)) {
    fVar21 = (float)iVar18;
  }
  iVar3 = 0;
  if (-1 < iVar18) {
    iVar3 = (int)fVar21;
  }
  uVar7 = (**(code **)(*(long *)this + 0x40))(this);
  fVar21 = (float)(uVar7 & 0xffffffff);
  if ((float)iVar17 <= (float)(uVar7 & 0xffffffff)) {
    fVar21 = (float)iVar17;
  }
  iVar18 = 0;
  if (-1 < iVar17) {
    iVar18 = (int)fVar21;
  }
  uVar7 = (**(code **)(*(long *)this + 0x48))(this);
  fVar21 = (float)(uVar7 & 0xffffffff);
  if ((float)iVar13 <= (float)(uVar7 & 0xffffffff)) {
    fVar21 = (float)iVar13;
  }
  iVar17 = 0;
  if (-1 < iVar13) {
    iVar17 = (int)fVar21;
  }
  uVar7 = (**(code **)(*(long *)this + 0x48))(this);
  uVar5 = iVar18 - iVar3;
  uVar19 = (ulong)uVar5;
  fVar21 = (float)(uVar7 & 0xffffffff);
  if ((float)iVar14 <= (float)(uVar7 & 0xffffffff)) {
    fVar21 = (float)iVar14;
  }
  iVar18 = 0;
  if (-1 < iVar14) {
    iVar18 = (int)fVar21;
  }
  if ((uVar5 != 0) && (uVar6 = iVar18 - iVar17, uVar6 != 0)) {
    uVar8 = (ulong)(uVar6 * uVar5) << 2;
    pfVar9 = (float *)operator_new__(uVar8);
    uVar15 = 0;
    uVar20 = 0;
    uVar7 = uVar19;
    iVar18 = iVar3;
    iVar14 = iVar17;
    uVar12 = uVar15;
    do {
      do {
        lVar10 = (**(code **)(*plVar16 + 0x50))(plVar16);
        uVar7 = uVar7 - 1;
        pfVar9[uVar15] =
             *(float *)(lVar10 + (ulong)(uint)(iVar18 + iVar14 * *(int *)(this + 0x50)) * 4);
        uVar15 = uVar15 + 1;
        iVar18 = iVar18 + 1;
      } while (uVar7 != 0);
      uVar20 = uVar20 + 1;
      uVar15 = uVar12 + uVar5;
      iVar14 = iVar14 + 1;
      uVar7 = uVar19;
      iVar18 = iVar3;
      uVar12 = uVar15;
    } while (uVar20 != uVar6);
    pfVar11 = (float *)operator_new__(uVar8);
    ImageUtil::computeDistanceField(pfVar9,uVar5,uVar6,pfVar11,0);
    iVar14 = *(int *)(this + 200);
    uVar20 = 0;
    uVar4 = *(uint *)(this + 0x50);
    uVar12 = iVar3 + iVar17 * uVar4;
    uVar15 = 0;
    fVar21 = (float)iVar14 / (float)(ulong)uVar4;
    if (iVar14 < 0) {
      fVar21 = -fVar21;
    }
    do {
      lVar10 = *(long *)(this + 0x58);
      uVar7 = uVar19;
      uVar2 = uVar12;
      uVar1 = uVar20;
      do {
        fVar22 = pfVar11[uVar1] / (float)(ulong)uVar4;
        if (iVar14 < 0) {
          fVar22 = -fVar22;
        }
        uVar24 = 0;
        if (fVar22 < 0.0) {
LAB_009e96d0:
          *(undefined4 *)(lVar10 + (ulong)uVar2 * 4) = uVar24;
        }
        else {
          if (fVar22 <= fVar21) {
            fVar23 = *(float *)(this + 0xcc);
            fVar25 = *(float *)(this + 0xd0);
            if (fVar25 <= fVar23) {
              uVar24 = NEON_fmsub(fVar22,(fVar23 - fVar25) / fVar21,fVar23);
            }
            else {
              uVar24 = NEON_fmadd(fVar22,(fVar25 - fVar23) / fVar21,fVar23);
            }
            goto LAB_009e96d0;
          }
          if (0.0 < fVar22) goto LAB_009e96d0;
        }
        uVar1 = uVar1 + 1;
        uVar2 = uVar2 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      uVar15 = uVar15 + 1;
      uVar20 = uVar20 + uVar5;
      uVar12 = uVar12 + uVar4;
    } while (uVar15 != uVar6);
  }
  return;
}


