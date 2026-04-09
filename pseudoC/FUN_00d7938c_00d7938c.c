// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7938c
// Entry Point: 00d7938c
// Size: 1352 bytes
// Signature: undefined FUN_00d7938c(void)


void FUN_00d7938c(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  int *piVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  uint local_1b4;
  undefined8 local_198;
  undefined8 local_190;
  ulong local_188;
  uint local_180;
  long *local_178;
  int aiStack_170 [64];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  lVar26 = param_1[0x4a];
  if ((*(int *)((long)param_1 + 0x15c) != 0) && (*(int *)(lVar26 + 0x40) == 0)) {
    iVar28 = *(int *)(lVar26 + 0x20);
    lVar17 = param_1[0x49];
    iVar21 = iVar28 + 7;
    if (-1 < iVar28) {
      iVar21 = iVar28;
    }
    *(int *)(lVar17 + 0x20) = *(int *)(lVar17 + 0x20) + (iVar21 >> 3);
    *(undefined4 *)(lVar26 + 0x20) = 0;
    cVar9 = (**(code **)(lVar17 + 0x10))(param_1);
    if (cVar9 == '\0') {
      uVar12 = 0;
      goto LAB_00d79580;
    }
    if (0 < *(int *)(param_1 + 0x34)) {
      lVar17 = 0;
      do {
        *(undefined4 *)(lVar26 + 0x2c + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)(param_1 + 0x34));
    }
    *(undefined4 *)(lVar26 + 0x28) = 0;
    *(undefined4 *)(lVar26 + 0x40) = *(undefined4 *)((long)param_1 + 0x15c);
    if (*(int *)((long)param_1 + 0x21c) == 0) {
      *(undefined *)(lVar26 + 0x3c) = 0;
    }
  }
  if (*(char *)(lVar26 + 0x3c) == '\0') {
    lVar17 = param_1[0x42];
    iVar2 = *(int *)(param_1 + 0x40);
    uVar20 = *(ulong *)(lVar26 + 0x18);
    local_198 = *(undefined8 *)param_1[5];
    local_190 = ((undefined8 *)param_1[5])[1];
    uVar5 = 1 << (ulong)(*(uint *)(param_1 + 0x41) & 0x1f);
    uVar13 = (ulong)*(uint *)(lVar26 + 0x20);
    uVar6 = -1 << (ulong)(*(uint *)(param_1 + 0x41) & 0x1f);
    iVar28 = *(int *)(lVar26 + 0x28);
    lVar27 = *param_2;
    iVar21 = *(int *)((long)param_1 + 0x1fc);
    local_178 = param_1;
    if (iVar28 == 0) {
      lVar24 = *(long *)(lVar26 + 0x68);
      iVar8 = 0;
      do {
        if ((int)uVar13 < 8) {
          cVar9 = FUN_00d7b638(&local_198,uVar20,uVar13,0);
          if (cVar9 == '\0') goto LAB_00d79850;
          uVar13 = (ulong)local_180;
          uVar20 = local_188;
          if (7 < (int)local_180) goto LAB_00d79618;
          uVar12 = 1;
LAB_00d79668:
          uVar11 = FUN_00d7b7dc(&local_198,uVar20,uVar13,lVar24,uVar12);
          if ((int)uVar11 < 0) goto LAB_00d79850;
          uVar13 = (ulong)local_180;
          uVar14 = (ulong)(uVar11 >> 4);
          uVar20 = local_188;
          uVar10 = uVar11;
          if ((uVar11 & 0xf) == 0) goto LAB_00d79648;
LAB_00d79684:
          if ((uVar10 & 0xf) != 1) {
            lVar15 = *param_1;
            *(undefined4 *)(lVar15 + 0x28) = 0x79;
            (**(code **)(lVar15 + 8))(param_1,0xffffffff);
          }
          uVar10 = (uint)uVar13;
          if (((int)(uint)uVar13 < 1) &&
             (cVar9 = FUN_00d7b638(&local_198,uVar20,uVar13,1), uVar20 = local_188,
             uVar10 = local_180, cVar9 == '\0')) goto LAB_00d79850;
          uVar13 = (ulong)(uVar10 - 1);
          local_1b4 = uVar6;
          if ((uVar20 >> (uVar13 & 0x3f) & 1) != 0) {
            local_1b4 = uVar5;
          }
        }
        else {
LAB_00d79618:
          uVar14 = (long)uVar20 >> ((ulong)((int)uVar13 - 8) & 0x3f);
          iVar28 = *(int *)(lVar24 + (uVar14 & 0xff) * 4 + 0x120);
          if (iVar28 == 0) {
            uVar12 = 9;
            goto LAB_00d79668;
          }
          uVar13 = (ulong)(uint)((int)uVar13 - iVar28);
          bVar3 = *(byte *)(lVar24 + (uVar14 & 0xff) + 0x520);
          uVar11 = (uint)bVar3;
          uVar14 = (ulong)(bVar3 >> 4);
          uVar10 = (uint)bVar3;
          if ((bVar3 & 0xf) != 0) goto LAB_00d79684;
LAB_00d79648:
          uVar10 = (uint)uVar14;
          if (uVar10 != 0xf) {
            iVar28 = 1 << (ulong)(uVar10 & 0x1f);
            if (uVar11 < 0x10) goto LAB_00d79430;
            uVar11 = (uint)uVar13;
            if (((int)(uint)uVar13 < (int)uVar10) &&
               (cVar9 = FUN_00d7b638(&local_198,uVar20,uVar13,uVar14), uVar20 = local_188,
               uVar11 = local_180, cVar9 == '\0')) goto LAB_00d79850;
            uVar11 = uVar11 - uVar10;
            uVar13 = (ulong)uVar11;
            iVar28 = (*(uint *)(&DAT_00548b04 + uVar14 * 4) &
                     (uint)((long)uVar20 >> (uVar13 & 0x3f))) + iVar28;
            if (iVar28 != 0) goto LAB_00d79430;
            break;
          }
          local_1b4 = 0;
        }
        iVar28 = iVar21;
        if (iVar21 <= iVar2) {
          iVar28 = iVar2;
        }
        lVar15 = ((long)iVar28 - (long)iVar21) + 1;
        piVar19 = (int *)(lVar17 + (long)iVar21 * 4);
        do {
          lVar25 = (long)*piVar19;
          if (*(short *)(lVar27 + lVar25 * 2) == 0) {
            iVar23 = (int)uVar14;
            uVar14 = (ulong)(iVar23 - 1);
            iVar22 = iVar21;
            if (iVar23 < 1) break;
          }
          else {
            if ((int)uVar13 < 1) {
              cVar9 = FUN_00d7b638(&local_198,uVar20,uVar13,1);
              if (cVar9 == '\0') goto LAB_00d79850;
              uVar13 = (ulong)(local_180 - 1);
              uVar16 = local_188 >> (uVar13 & 0x3f);
              uVar20 = local_188;
            }
            else {
              uVar13 = (ulong)((int)uVar13 - 1);
              uVar16 = uVar20 >> (uVar13 & 0x3f);
            }
            if (((uVar16 & 1) != 0) &&
               (sVar4 = *(short *)(lVar27 + lVar25 * 2), (uVar5 & (int)sVar4) == 0)) {
              uVar10 = uVar5;
              if (sVar4 < 0) {
                uVar10 = uVar6;
              }
              *(short *)(lVar27 + lVar25 * 2) = sVar4 + (short)uVar10;
            }
          }
          iVar21 = iVar21 + 1;
          lVar15 = lVar15 + -1;
          piVar19 = piVar19 + 1;
          iVar22 = iVar28 + 1;
        } while (lVar15 != 0);
        uVar11 = (uint)uVar13;
        iVar28 = iVar8;
        if (local_1b4 != 0) {
          iVar21 = *(int *)(lVar17 + (long)iVar22 * 4);
          iVar28 = iVar8 + 1;
          aiStack_170[iVar8] = iVar21;
          *(short *)(lVar27 + (long)iVar21 * 2) = (short)local_1b4;
        }
        iVar21 = iVar22 + 1;
        iVar8 = iVar28;
      } while (iVar22 < iVar2);
      iVar28 = 0;
    }
    else {
      iVar8 = 0;
LAB_00d79430:
      iVar22 = iVar21;
      if (iVar21 <= iVar2) {
        iVar22 = iVar2;
      }
      piVar19 = (int *)(lVar17 + (long)iVar21 * 4);
      iVar21 = (iVar22 - iVar21) + 1;
      do {
        lVar17 = (long)*piVar19;
        if (*(short *)(lVar27 + lVar17 * 2) != 0) {
          if ((int)uVar13 < 1) {
            cVar9 = FUN_00d7b638(&local_198,uVar20,uVar13,1);
            if (cVar9 == '\0') goto LAB_00d79850;
            uVar13 = (ulong)(local_180 - 1);
            uVar14 = local_188 >> (uVar13 & 0x3f);
            uVar20 = local_188;
          }
          else {
            uVar13 = (ulong)((int)uVar13 - 1);
            uVar14 = uVar20 >> (uVar13 & 0x3f);
          }
          if (((uVar14 & 1) != 0) &&
             (sVar4 = *(short *)(lVar27 + lVar17 * 2), (uVar5 & (int)sVar4) == 0)) {
            uVar10 = uVar5;
            if (sVar4 < 0) {
              uVar10 = uVar6;
            }
            *(short *)(lVar27 + lVar17 * 2) = sVar4 + (short)uVar10;
          }
        }
        uVar11 = (uint)uVar13;
        piVar19 = piVar19 + 1;
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
      iVar28 = iVar28 + -1;
    }
    puVar18 = (undefined8 *)param_1[5];
    *puVar18 = local_198;
    puVar18[1] = local_190;
    *(ulong *)(lVar26 + 0x18) = uVar20;
    *(uint *)(lVar26 + 0x20) = uVar11;
    *(int *)(lVar26 + 0x28) = iVar28;
  }
  uVar12 = 1;
  *(int *)(lVar26 + 0x40) = *(int *)(lVar26 + 0x40) + -1;
  goto LAB_00d79580;
LAB_00d79850:
  if (iVar8 != 0) {
    lVar26 = (long)iVar8;
    if (iVar8 - 1U != 0) {
      uVar13 = (ulong)(iVar8 - 1U) + 1;
      uVar14 = uVar13 & 0x1fffffffe;
      piVar19 = aiStack_170 + lVar26 + -1;
      uVar20 = uVar14;
      do {
        iVar21 = piVar19[-1];
        piVar1 = piVar19 + 1;
        uVar20 = uVar20 - 2;
        piVar19 = piVar19 + -2;
        *(undefined2 *)(lVar27 + (long)*piVar1 * 2) = 0;
        *(undefined2 *)(lVar27 + (long)iVar21 * 2) = 0;
      } while (uVar20 != 0);
      lVar26 = lVar26 - uVar14;
      if (uVar13 == uVar14) goto LAB_00d798c4;
    }
    do {
      lVar17 = lVar26 + -1;
      *(undefined2 *)(lVar27 + (long)aiStack_170[lVar26 + -1] * 2) = 0;
      lVar26 = lVar17;
    } while ((int)lVar17 != 0);
  }
LAB_00d798c4:
  uVar12 = 0;
LAB_00d79580:
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}


