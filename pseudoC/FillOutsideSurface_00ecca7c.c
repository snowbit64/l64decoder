// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FillOutsideSurface
// Entry Point: 00ecca7c
// Size: 1032 bytes
// Signature: undefined FillOutsideSurface(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::Volume::FillOutsideSurface() */

void VHACD::Volume::FillOutsideSurface(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *in_x0;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  plVar21 = *(long **)(*in_x0 + 0x30);
  if (plVar21 != (long *)0x0 && DAT_021233a4 == 0) {
    DAT_021233a4 = (**(code **)(*plVar21 + 0x10))(plVar21,"VHACDVolume::FillOutsideSurface");
    plVar21 = *(long **)(*in_x0 + 0x30);
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x18))(plVar21,DAT_021233a4);
  }
  lVar22 = in_x0[8];
  if (((lVar22 < 1) || (lVar23 = in_x0[9], lVar23 < 1)) || (lVar24 = in_x0[10], lVar24 < 1)) {
    plVar6 = *(long **)(*in_x0 + 0x30);
    if ((plVar6 != (long *)0x0) && (DAT_021233a8 == 0)) {
      DAT_021233a8 = (**(code **)(*plVar6 + 0x10))
                               (plVar6,"VHACDVolume::FillOutsideSurface_Iteration");
      plVar6 = *(long **)(*in_x0 + 0x30);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,DAT_021233a8);
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  else {
    do {
      plVar6 = *(long **)(*in_x0 + 0x30);
      if (plVar6 != (long *)0x0 && DAT_021233a8 == 0) {
        DAT_021233a8 = (**(code **)(*plVar6 + 0x10))
                                 (plVar6,"VHACDVolume::FillOutsideSurface_Iteration");
        plVar6 = *(long **)(*in_x0 + 0x30);
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      lVar20 = 0;
      uVar14 = 0xffffffffffffffff;
      lVar15 = 0;
      do {
        uVar4 = uVar14;
        if (0x3e < uVar14) {
          uVar4 = 0x3f;
        }
        uVar17 = 0xffffffffffffffff;
        lVar1 = lVar15 + 1;
        lVar16 = 0;
        do {
          lVar19 = 0;
          uVar5 = uVar17;
          if (0x3e < uVar17) {
            uVar5 = 0x3f;
          }
          uVar18 = 0xffffffffffffffff;
          lVar2 = lVar16 + 1;
          do {
            lVar7 = in_x0[10];
            uVar13 = uVar18;
            if (0x3e < uVar18) {
              uVar13 = 0x3f;
            }
            lVar10 = lVar19 + (lVar16 + in_x0[9] * lVar15) * lVar7;
            lVar8 = in_x0[0xe];
            if (*(char *)(lVar8 + lVar10) == '\x01') {
              lVar9 = lVar16 + lVar15 * in_x0[9];
              *(undefined *)(lVar8 + lVar10) = 2;
              if (lVar19 + 1 < lVar24) {
                lVar10 = lVar8 + lVar19 + lVar7 * lVar9 + 1;
                uVar11 = 0;
                do {
                  if ((*(char *)(lVar10 + uVar11) != '\0') ||
                     (*(undefined *)(lVar10 + uVar11) = 1, 0x3e < uVar11)) break;
                  lVar3 = lVar19 + 2 + uVar11;
                  uVar11 = uVar11 + 1;
                } while (lVar3 < lVar24);
              }
              if (lVar19 != 0) {
                lVar10 = uVar13 + 1;
                pcVar12 = (char *)(lVar8 + lVar19 + lVar7 * lVar9);
                do {
                  pcVar12 = pcVar12 + -1;
                  if (*pcVar12 != '\0') break;
                  lVar10 = lVar10 + -1;
                  *pcVar12 = '\x01';
                } while (lVar10 != 0);
              }
              if (lVar2 < lVar23) {
                pcVar12 = (char *)(lVar8 + lVar24 + lVar19 + lVar7 * lVar9);
                uVar13 = 0;
                do {
                  if ((*pcVar12 != '\0') || (*pcVar12 = '\x01', 0x3e < uVar13)) break;
                  lVar10 = lVar16 + uVar13;
                  pcVar12 = pcVar12 + lVar24;
                  uVar13 = uVar13 + 1;
                } while (lVar10 + 2 < lVar23);
              }
              if (lVar16 != 0) {
                pcVar12 = (char *)(lVar8 + -lVar24 + lVar19 + lVar7 * lVar9);
                lVar10 = uVar5 + 1;
                do {
                  if (*pcVar12 != '\0') break;
                  *pcVar12 = '\x01';
                  lVar10 = lVar10 + -1;
                  pcVar12 = pcVar12 + -lVar24;
                } while (lVar10 != 0);
              }
              if (lVar1 < lVar22) {
                pcVar12 = (char *)(lVar8 + lVar24 * lVar23 + lVar19 + lVar7 * lVar9);
                uVar13 = 0;
                do {
                  if ((*pcVar12 != '\0') || (*pcVar12 = '\x01', 0x3e < uVar13)) break;
                  lVar10 = lVar15 + uVar13;
                  pcVar12 = pcVar12 + lVar24 * lVar23;
                  uVar13 = uVar13 + 1;
                } while (lVar10 + 2 < lVar22);
              }
              lVar20 = lVar20 + 1;
              if (lVar15 != 0) {
                pcVar12 = (char *)(lVar8 + -(lVar24 * lVar23) + lVar19 + lVar7 * lVar9);
                lVar7 = uVar4 + 1;
                do {
                  if (*pcVar12 != '\0') break;
                  *pcVar12 = '\x01';
                  lVar7 = lVar7 + -1;
                  pcVar12 = pcVar12 + -(lVar24 * lVar23);
                } while (lVar7 != 0);
              }
            }
            lVar19 = lVar19 + 1;
            uVar18 = uVar18 + 1;
          } while (lVar19 != lVar24);
          uVar17 = uVar17 + 1;
          lVar16 = lVar2;
        } while (lVar2 != lVar23);
        uVar14 = uVar14 + 1;
        lVar15 = lVar1;
      } while (lVar1 != lVar22);
      in_x0[0xd] = in_x0[0xd] + lVar20;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
    } while (lVar20 != 0);
  }
  if (plVar21 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ecce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar21 + 0x20))();
    return;
  }
  return;
}


