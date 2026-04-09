// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e16044
// Entry Point: 00e16044
// Size: 1100 bytes
// Signature: undefined FUN_00e16044(void)


undefined8 FUN_00e16044(long *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  size_t __n;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  void *__s;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  float *pfVar16;
  float *pfVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  long alStack_b0 [4];
  ulong local_90;
  long local_88;
  int *local_80;
  int *local_78;
  long local_70;
  long local_68;
  
  alStack_b0[1] = tpidr_el0;
  local_68 = *(long *)(alStack_b0[1] + 0x28);
  lVar21 = *(long *)(param_1[0xd] + 8);
  local_88 = *(long *)(param_1[0xd] + 0x88);
  lVar11 = *(long *)(lVar21 + 0x30);
  iVar7 = *(int *)(lVar21 + 4);
  uVar8 = (ulong)iVar7;
  alStack_b0[3] = *(ulong *)(lVar11 + param_1[7] * 8);
  local_70 = lVar11;
  uVar12 = uVar8 * 8 + 0xf & 0xfffffffffffffff0;
  *(int *)(param_1 + 9) = (int)alStack_b0[3];
  lVar13 = (long)alStack_b0 - uVar12;
  uVar14 = uVar8 * 4 + 0xf & 0xfffffffffffffff0;
  lVar19 = lVar13 - uVar14;
  lVar18 = lVar19 - uVar14;
  lVar10 = lVar18 - uVar12;
  alStack_b0[2] = lVar10;
  local_80 = param_2;
  local_78 = param_2 + 0x101;
  lVar4 = local_88;
  if (0 < iVar7) {
    lVar22 = 0;
    local_90 = (-((ulong)alStack_b0[3] >> 0x1f & 1) & 0xfffffffc00000000 |
               (alStack_b0[3] & 0xffffffffU) << 2) >> 1;
    do {
      lVar4 = (**(code **)(*(long *)(_floor_P +
                                    (long)*(int *)(lVar11 + (long)local_78[param_2[lVar22 + 1]] * 4
                                                  + 0x528) * 8) + 0x28))
                        (param_1,*(undefined8 *)
                                  (*(long *)(local_88 + 0x58) +
                                  (long)local_78[param_2[lVar22 + 1]] * 8));
      __n = local_90;
      __s = *(void **)(*param_1 + lVar22 * 8);
      *(long *)(lVar10 + lVar22 * 8) = lVar4;
      *(uint *)(lVar18 + lVar22 * 4) = (uint)(lVar4 != 0);
      memset(__s,0,__n);
      uVar8 = (ulong)*(int *)(lVar21 + 4);
      lVar22 = lVar22 + 1;
      lVar4 = local_88;
    } while (lVar22 < (long)uVar8);
  }
  piVar20 = local_78;
  piVar5 = local_80;
  uVar9 = local_80[0x121];
  uVar12 = (ulong)uVar9;
  piVar2 = local_80 + 0x122;
  piVar15 = piVar2;
  if (0 < (int)uVar9) {
    do {
      iVar7 = piVar15[0x100];
      if ((*(int *)(lVar18 + (long)*piVar15 * 4) != 0) || (*(int *)(lVar18 + (long)iVar7 * 4) != 0))
      {
        *(undefined4 *)(lVar18 + (long)*piVar15 * 4) = 1;
        *(undefined4 *)(lVar18 + (long)iVar7 * 4) = 1;
      }
      uVar12 = uVar12 - 1;
      piVar15 = piVar15 + 1;
    } while (uVar12 != 0);
  }
  local_88 = (long)(int)alStack_b0[3];
  if (0 < *piVar5) {
    uVar12 = 0;
    if ((int)uVar8 < 1) goto LAB_00e16270;
    do {
      lVar10 = 0;
      iVar7 = 0;
      do {
        if (uVar12 == (uint)param_2[lVar10 + 1]) {
          iVar3 = *(int *)(lVar18 + lVar10 * 4);
          *(undefined8 *)(lVar13 + (long)iVar7 * 8) = *(undefined8 *)(*param_1 + lVar10 * 8);
          *(uint *)(lVar19 + (long)iVar7 * 4) = (uint)(iVar3 != 0);
          uVar8 = (ulong)*(uint *)(lVar21 + 4);
          iVar7 = iVar7 + 1;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uVar8);
      while( true ) {
        (**(code **)(*(long *)(_residue_P +
                              (long)*(int *)(local_70 + (long)piVar5[uVar12 + 0x111] * 4 + 0x828) *
                              8) + 0x38))
                  (param_1,*(undefined8 *)
                            (*(long *)(lVar4 + 0x60) + (long)piVar5[uVar12 + 0x111] * 8),lVar13,
                   lVar19,iVar7);
        uVar12 = uVar12 + 1;
        if ((long)*local_80 <= (long)uVar12) {
          uVar9 = local_80[0x121];
          piVar5 = local_80;
          piVar20 = local_78;
          goto LAB_00e162e0;
        }
        uVar8 = (ulong)*(uint *)(lVar21 + 4);
        if (0 < (int)*(uint *)(lVar21 + 4)) break;
LAB_00e16270:
        iVar7 = 0;
      }
    } while( true );
  }
LAB_00e162e0:
  lVar18 = local_70;
  lVar11 = alStack_b0[2];
  lVar10 = local_88;
  if (local_88 < 0) {
    lVar10 = local_88 + 1;
  }
  uVar8 = (ulong)(uVar9 - 1);
  if ((0 < (int)uVar9) && (0x100000000 < alStack_b0[3] << 0x20)) {
    lVar10 = lVar10 >> 1;
    lVar13 = *param_1;
    if (lVar10 < 2) {
      lVar10 = 1;
    }
    do {
      pfVar16 = *(float **)(lVar13 + (long)piVar2[uVar8] * 8);
      pfVar17 = *(float **)(lVar13 + (long)piVar5[uVar8 + 0x222] * 8);
      lVar19 = lVar10;
      do {
        while( true ) {
          fVar23 = *pfVar16;
          fVar24 = *pfVar17;
          if (fVar23 <= 0.0) break;
          if (0.0 < fVar24) {
            *pfVar17 = fVar23 - fVar24;
          }
          else {
            fVar24 = fVar23 + fVar24;
LAB_00e163ac:
            *pfVar17 = fVar23;
            *pfVar16 = fVar24;
          }
          lVar19 = lVar19 + -1;
          pfVar16 = pfVar16 + 1;
          pfVar17 = pfVar17 + 1;
          if (lVar19 == 0) goto LAB_00e16328;
        }
        if (fVar24 <= 0.0) {
          fVar24 = fVar23 - fVar24;
          goto LAB_00e163ac;
        }
        *pfVar17 = fVar23 + fVar24;
        pfVar16 = pfVar16 + 1;
        lVar19 = lVar19 + -1;
        pfVar17 = pfVar17 + 1;
      } while (lVar19 != 0);
LAB_00e16328:
      bVar1 = 0 < (long)uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar1);
  }
  if (0 < *(int *)(lVar21 + 4)) {
    lVar10 = 0;
    do {
      (**(code **)(*(long *)(_floor_P +
                            (long)*(int *)(lVar18 + (long)piVar20[param_2[lVar10 + 1]] * 4 + 0x528)
                            * 8) + 0x30))
                (param_1,*(undefined8 *)
                          (*(long *)(lVar4 + 0x58) + (long)piVar20[param_2[lVar10 + 1]] * 8),
                 *(undefined8 *)(lVar11 + lVar10 * 8),*(undefined8 *)(*param_1 + lVar10 * 8));
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(lVar21 + 4));
    if (0 < *(int *)(lVar21 + 4)) {
      lVar10 = 0;
      do {
        uVar6 = *(undefined8 *)(*param_1 + lVar10 * 8);
        mdct_backward(**(undefined8 **)(lVar4 + param_1[7] * 8 + 0x10),uVar6,uVar6);
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(lVar21 + 4));
    }
  }
  if (*(long *)(alStack_b0[1] + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


