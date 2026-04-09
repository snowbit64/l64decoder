// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ea4798
// Entry Point: 00ea4798
// Size: 928 bytes
// Signature: undefined FUN_00ea4798(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined4 param_10)


void FUN_00ea4798(code *param_1,undefined8 param_2,int *param_3,int *param_4,uint param_5,
                 int param_6,undefined4 param_7,int param_8,int param_9,int param_10)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined4 *puVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  void *__src;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  int aiStack_70 [2];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_5 != 0) {
    uVar21 = (ulong)param_5;
    if (param_10 == 48000) {
      uVar21 = (ulong)(param_5 << 1);
      param_6 = param_6 << 1;
    }
    else if (param_10 == 16000) {
      uVar21 = (ulong)(uint)((int)(param_5 << 1) / 3);
      param_6 = (param_6 << 1) / 3;
    }
    uVar22 = -(uVar21 >> 0x1f) & 0xfffffffc00000000 | uVar21 << 2;
    lVar12 = -(uVar22 + 0xf & 0xfffffffffffffff0);
    __src = (void *)((long)aiStack_70 + lVar12);
    (*param_1)(param_2,__src,uVar21,param_6,param_7,param_8,param_9);
    uVar20 = (uint)uVar21;
    if (param_8 == -2) {
      iVar7 = 0;
      if (param_9 != 0) {
        iVar7 = 0x1000 / param_9;
      }
    }
    else {
      iVar7 = 0x800;
      if (param_8 < 0) {
        iVar7 = 0x1000;
      }
    }
    if (0 < (int)uVar20) {
      if (uVar20 < 8) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar21 & 0xfffffff8;
        puVar13 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar12);
        uVar14 = uVar11;
        do {
          uVar14 = uVar14 - 8;
          puVar13[-1] = CONCAT44((int)((ulong)puVar13[-1] >> 0x20) * iVar7,(int)puVar13[-1] * iVar7)
          ;
          puVar13[-2] = CONCAT44((int)((ulong)puVar13[-2] >> 0x20) * iVar7,(int)puVar13[-2] * iVar7)
          ;
          puVar13[1] = CONCAT44((int)((ulong)puVar13[1] >> 0x20) * iVar7,(int)puVar13[1] * iVar7);
          *puVar13 = CONCAT44((int)((ulong)*puVar13 >> 0x20) * iVar7,(int)*puVar13 * iVar7);
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        if (uVar11 == uVar21) goto LAB_00ea4908;
      }
      lVar8 = uVar21 - uVar11;
      piVar10 = (int *)((long)__src + uVar11 * 4);
      do {
        lVar8 = lVar8 + -1;
        *piVar10 = *piVar10 * iVar7;
        piVar10 = piVar10 + 1;
      } while (lVar8 != 0);
    }
LAB_00ea4908:
    if (param_10 == 48000) {
      if (1 < (int)uVar20) {
        uVar22 = 0;
        uVar21 = (ulong)(uVar20 >> 1);
        piVar10 = (int *)((long)aiStack_70 + lVar12 + 4);
        do {
          piVar1 = piVar10 + -1;
          iVar3 = *piVar10;
          iVar17 = param_4[1];
          uVar21 = uVar21 - 1;
          piVar10 = piVar10 + 2;
          iVar18 = (int)((ulong)((long)(*piVar1 - *param_4) * 0x4dc0) >> 0xf);
          iVar7 = *param_4 + iVar18;
          iVar6 = (int)((ulong)((long)(iVar3 - iVar17) * 0x1348) >> 0xf);
          iVar19 = (int)((ulong)((long)-(iVar3 + param_4[2]) * 0x1348) >> 0xf);
          iVar2 = iVar7 + param_4[2] + iVar19;
          uVar22 = uVar22 + (long)iVar2 * (long)iVar2;
          *param_4 = *piVar1 + iVar18;
          param_4[1] = iVar3 + iVar6;
          param_4[2] = iVar19 - iVar3;
          *param_3 = iVar7 + iVar17 + iVar6 >> 1;
          param_3 = param_3 + 1;
        } while (uVar21 != 0);
        uVar22 = uVar22 >> 0x20;
        goto LAB_00ea4b04;
      }
    }
    else if (param_10 == 16000) {
      uVar5 = uVar20 * 3;
      puVar9 = (undefined4 *)
               ((long)__src -
               ((-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2) + 0xf &
               0xfffffffffffffff0));
      if (0 < (int)uVar20) {
        if (uVar20 < 8) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar21 & 0xfffffff8;
          puVar13 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar12);
          uVar22 = uVar14;
          puVar15 = puVar9;
          do {
            uVar25 = puVar13[-1];
            uVar24 = puVar13[-2];
            uVar27 = puVar13[1];
            uVar26 = *puVar13;
            puVar13 = puVar13 + 4;
            uVar22 = uVar22 - 8;
            uVar23 = (undefined4)uVar24;
            *puVar15 = uVar23;
            puVar15[1] = uVar23;
            puVar15[2] = uVar23;
            uVar23 = (undefined4)((ulong)uVar24 >> 0x20);
            puVar15[3] = uVar23;
            puVar15[4] = uVar23;
            puVar15[5] = uVar23;
            uVar23 = (undefined4)uVar25;
            puVar15[6] = uVar23;
            puVar15[7] = uVar23;
            puVar15[8] = uVar23;
            uVar23 = (undefined4)((ulong)uVar25 >> 0x20);
            puVar15[9] = uVar23;
            puVar15[10] = uVar23;
            puVar15[0xb] = uVar23;
            uVar23 = (undefined4)uVar26;
            puVar15[0xc] = uVar23;
            puVar15[0xd] = uVar23;
            puVar15[0xe] = uVar23;
            uVar23 = (undefined4)((ulong)uVar26 >> 0x20);
            puVar15[0xf] = uVar23;
            puVar15[0x10] = uVar23;
            puVar15[0x11] = uVar23;
            uVar23 = (undefined4)uVar27;
            puVar15[0x12] = uVar23;
            puVar15[0x13] = uVar23;
            puVar15[0x14] = uVar23;
            uVar23 = (undefined4)((ulong)uVar27 >> 0x20);
            puVar15[0x15] = uVar23;
            puVar15[0x16] = uVar23;
            puVar15[0x17] = uVar23;
            puVar15 = puVar15 + 0x18;
          } while (uVar22 != 0);
          if (uVar14 == uVar21) goto LAB_00ea4a80;
        }
        lVar12 = uVar21 - uVar14;
        puVar15 = puVar9 + uVar14 * 3 + 2;
        puVar16 = (undefined4 *)((long)__src + uVar14 * 4);
        do {
          uVar23 = *puVar16;
          lVar12 = lVar12 + -1;
          puVar15[-2] = uVar23;
          puVar15[-1] = uVar23;
          *puVar15 = uVar23;
          puVar15 = puVar15 + 3;
          puVar16 = puVar16 + 1;
        } while (lVar12 != 0);
      }
LAB_00ea4a80:
      if (1 < (int)uVar5) {
        uVar21 = (ulong)(uVar5 >> 1);
        piVar10 = puVar9 + 1;
        do {
          piVar1 = piVar10 + -1;
          iVar2 = *piVar10;
          iVar7 = *param_4;
          iVar3 = param_4[1];
          uVar21 = uVar21 - 1;
          piVar10 = piVar10 + 2;
          iVar6 = (int)((ulong)((long)(*piVar1 - iVar7) * 0x4dc0) >> 0xf);
          iVar17 = (int)((ulong)((long)(iVar2 - iVar3) * 0x1348) >> 0xf);
          *param_4 = *piVar1 + iVar6;
          param_4[1] = iVar2 + iVar17;
          param_4[2] = (int)((ulong)((long)-(iVar2 + param_4[2]) * 0x1348) >> 0xf) - iVar2;
          *param_3 = iVar3 + iVar7 + iVar6 + iVar17 >> 1;
          param_3 = param_3 + 1;
        } while (uVar21 != 0);
      }
    }
    else if (param_10 == 24000) {
      memcpy(param_3,__src,uVar22);
    }
  }
  uVar22 = 0;
LAB_00ea4b04:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar22);
  }
  return;
}


