// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00856c0c
// Size: 904 bytes
// Signature: undefined __thiscall update(DensityMapUpdater * this, float param_1)


/* DensityMapUpdater::update(float) */

void __thiscall DensityMapUpdater::update(DensityMapUpdater *this,float param_1)

{
  DensityMapModifier *pDVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  DensityMapModifier aDStack_c8 [48];
  DensityMapModifier aDStack_98 [48];
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if (this[0x108c] == (DensityMapUpdater)0x0) goto LAB_00856f5c;
  iVar3 = *(int *)(this + 0x38) * *(int *)(this + 0x38);
  uVar9 = DensityMap::getSquareSize();
  uVar6 = 0;
  if (*(uint *)(this + 0x38) != 0) {
    uVar6 = uVar9 / *(uint *)(this + 0x38);
  }
  if (-1 < *(int *)(this + 0x1078)) {
    if ((*(uint *)(this + 0x50) < 2) && (*(int *)(this + 0x354) == 0)) {
      *(int *)(this + 0x1078) = iVar3;
    }
    else {
      lVar10 = Watch::getCurrentTicks();
      DensityMapModifier::DensityMapModifier(aDStack_98,*(DensityMap **)(this + 0x30));
                    /* try { // try from 00856ca4 to 00856cab has its CatchHandler @ 00856fa0 */
      DensityMapModifier::DensityMapModifier(aDStack_c8);
      if (*(DensityMap **)(this + 0x1068) == (DensityMap *)0x0) {
        fVar19 = 0.0;
        fVar16 = 0.0;
      }
      else {
                    /* try { // try from 00856cb4 to 00856cdf has its CatchHandler @ 00856fa8 */
        DensityMapModifier::init(aDStack_c8,*(DensityMap **)(this + 0x1068));
        uVar13 = (**(code **)(**(long **)(this + 0x1068) + 0x48))();
        uVar14 = (**(code **)(**(long **)(this + 0x1068) + 0x50))();
        fVar19 = (float)(ulong)uVar9;
        fVar16 = (float)(uVar13 & 0xffffffff) / fVar19;
        fVar19 = (float)(uVar14 & 0xffffffff) / fVar19;
      }
      do {
        uVar2 = *(uint *)(this + 0x1078);
        if (iVar3 <= (int)uVar2) break;
        uVar7 = *(uint *)(this + 0x38);
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar2 / uVar7;
        }
        uVar4 = uVar5 * uVar6;
        uVar2 = (uVar2 - uVar5 * uVar7) * uVar6;
        pDVar1 = (DensityMapModifier *)0x0;
        if (*(long *)(this + 0x1068) != 0) {
          pDVar1 = aDStack_c8;
        }
        if (*(uint *)(this + 0x50) < 2) {
                    /* try { // try from 00856d44 to 00856d87 has its CatchHandler @ 00856fb0 */
          updateValuesMinMaxConfig
                    (this,uVar2,uVar4,uVar2 + uVar6,uVar4 + uVar6,aDStack_98,pDVar1,fVar16,fVar19);
        }
        else {
          updateValuesNextConfig
                    (this,uVar2,uVar4,uVar2 + uVar6,uVar4 + uVar6,aDStack_98,pDVar1,fVar16,fVar19);
        }
        *(int *)(this + 0x1078) = *(int *)(this + 0x1078) + 1;
        lVar11 = Watch::getCurrentTicks();
        dVar18 = (double)Watch::convertTicksToMs(lVar11 - lVar10);
      } while (dVar18 <= (double)*(float *)(this + 0x1088));
      DensityMapModifier::~DensityMapModifier(aDStack_c8);
      DensityMapModifier::~DensityMapModifier(aDStack_98);
      if (*(int *)(this + 0x1078) != iVar3) goto LAB_00856dd8;
    }
    plVar12 = *(long **)(this + 0x1080);
    *(undefined4 *)(this + 0x1078) = 0xffffffff;
    if (plVar12 != (long *)0x0) {
      *(undefined8 *)(this + 0x1080) = 0;
      (**(code **)(*plVar12 + 0x10))(plVar12,1);
    }
  }
LAB_00856dd8:
  if (0.0 < *(float *)(this + 0x1058)) {
    fVar19 = *(float *)(this + 0x1054);
    *(float *)(this + 0x1054) = fVar19 - param_1;
    if ((fVar19 - param_1 <= 0.0) || (-1 < *(int *)(this + 0x105c))) {
      if (*(int *)(this + 0x105c) < 0) {
        *(float *)(this + 0x1054) = *(float *)(this + 0x1058);
        *(undefined8 *)(this + 0x105c) = 0;
      }
      if ((*(uint *)(this + 0x50) < 2) && (*(int *)(this + 0x354) == 0)) {
        *(undefined4 *)(this + 0x105c) = 0xffffffff;
      }
      else {
        fVar16 = (float)NEON_fmadd(*(undefined4 *)(this + 0x1064),param_1,
                                   *(undefined4 *)(this + 0x1060));
        fVar17 = 0.0;
        fVar19 = fVar16;
        if (fVar16 <= 0.0) {
          fVar19 = 0.0;
        }
        fVar20 = (float)NEON_ucvtf((int)fVar19);
        *(float *)(this + 0x1060) = fVar16 - fVar20;
        DensityMapModifier::DensityMapModifier(aDStack_98,*(DensityMap **)(this + 0x30));
                    /* try { // try from 00856e60 to 00856e67 has its CatchHandler @ 00856f94 */
        DensityMapModifier::DensityMapModifier(aDStack_c8);
        fVar16 = 0.0;
        if (*(DensityMap **)(this + 0x1068) != (DensityMap *)0x0) {
                    /* try { // try from 00856e74 to 00856e9f has its CatchHandler @ 00856f9c */
          DensityMapModifier::init(aDStack_c8,*(DensityMap **)(this + 0x1068));
          uVar13 = (**(code **)(**(long **)(this + 0x1068) + 0x48))();
          uVar14 = (**(code **)(**(long **)(this + 0x1068) + 0x50))();
          fVar17 = (float)(ulong)uVar9;
          fVar16 = (float)(uVar13 & 0xffffffff) / fVar17;
          fVar17 = (float)(uVar14 & 0xffffffff) / fVar17;
        }
        iVar15 = (int)fVar19;
        if (iVar15 != 0) {
          uVar9 = *(uint *)(this + 0x105c);
          do {
            uVar2 = *(uint *)(this + 0x38);
            uVar7 = 0;
            if (uVar2 != 0) {
              uVar7 = uVar9 / uVar2;
            }
            uVar5 = uVar7 * uVar6;
            uVar9 = (uVar9 - uVar7 * uVar2) * uVar6;
            pDVar1 = (DensityMapModifier *)0x0;
            if (*(long *)(this + 0x1068) != 0) {
              pDVar1 = aDStack_c8;
            }
            if (*(uint *)(this + 0x50) < 2) {
                    /* try { // try from 00856ef8 to 00856f23 has its CatchHandler @ 00856fac */
              updateValuesMinMaxConfig
                        (this,uVar9,uVar5,uVar9 + uVar6,uVar5 + uVar6,aDStack_98,pDVar1,fVar16,
                         fVar17);
            }
            else {
              updateValuesNextConfig
                        (this,uVar9,uVar5,uVar9 + uVar6,uVar5 + uVar6,aDStack_98,pDVar1,fVar16,
                         fVar17);
            }
            uVar9 = *(int *)(this + 0x105c) + 1;
            *(uint *)(this + 0x105c) = uVar9;
            if (iVar3 <= (int)uVar9) {
              *(undefined4 *)(this + 0x105c) = 0xffffffff;
              break;
            }
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        DensityMapModifier::~DensityMapModifier(aDStack_c8);
        DensityMapModifier::~DensityMapModifier(aDStack_98);
      }
    }
  }
LAB_00856f5c:
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


