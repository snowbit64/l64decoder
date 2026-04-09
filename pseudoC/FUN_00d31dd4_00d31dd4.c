// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d31dd4
// Entry Point: 00d31dd4
// Size: 1412 bytes
// Signature: undefined FUN_00d31dd4(void)


void FUN_00d31dd4(long param_1,long *param_2,char *param_3,size_t param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  char **__s;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  char **ppcVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  char *pcVar18;
  char cVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined auStack_80 [8];
  undefined *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar10 = param_1;
  if (param_2[2] == 0) {
    if (param_4 == 0) goto LAB_00d32224;
    *(undefined *)(param_2 + 1) = 6;
    param_2[2] = 0x40;
    puVar5 = (undefined8 *)(**(code **)param_2[4])(0x200);
    *param_2 = (long)puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      param_2[2] = 0;
      __s = (char **)0x0;
      goto LAB_00d3231c;
    }
    puVar5[0x3d] = 0;
    puVar5[0x3c] = 0;
    puVar5[0x3f] = 0;
    puVar5[0x3e] = 0;
    puVar5[0x39] = 0;
    puVar5[0x38] = 0;
    puVar5[0x3b] = 0;
    puVar5[0x3a] = 0;
    puVar5[0x35] = 0;
    puVar5[0x34] = 0;
    puVar5[0x37] = 0;
    puVar5[0x36] = 0;
    puVar5[0x31] = 0;
    puVar5[0x30] = 0;
    puVar5[0x33] = 0;
    puVar5[0x32] = 0;
    puVar5[0x2d] = 0;
    puVar5[0x2c] = 0;
    puVar5[0x2f] = 0;
    puVar5[0x2e] = 0;
    puVar5[0x29] = 0;
    puVar5[0x28] = 0;
    puVar5[0x2b] = 0;
    puVar5[0x2a] = 0;
    puVar5[0x25] = 0;
    puVar5[0x24] = 0;
    puVar5[0x27] = 0;
    puVar5[0x26] = 0;
    puVar5[0x21] = 0;
    puVar5[0x20] = 0;
    puVar5[0x23] = 0;
    puVar5[0x22] = 0;
    puVar5[0x1d] = 0;
    puVar5[0x1c] = 0;
    puVar5[0x1f] = 0;
    puVar5[0x1e] = 0;
    puVar5[0x19] = 0;
    puVar5[0x18] = 0;
    puVar5[0x1b] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x15] = 0;
    puVar5[0x14] = 0;
    puVar5[0x17] = 0;
    puVar5[0x16] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0x13] = 0;
    puVar5[0x12] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    do {
      lVar10 = param_1;
      param_1 = *(long *)(lVar10 + 0x380);
    } while (param_1 != 0);
    uStack_88 = *(ulong *)(lVar10 + 0x398);
    uStack_98 = uStack_88 ^ 0x646f72616e646f6d;
    uStack_88 = uStack_88 ^ 0x7465646279746573;
    local_a0 = 0x736f6d6570736575;
    local_78 = auStack_80;
    local_90 = 0x6c7967656e657261;
    uStack_70 = 0;
    if (*param_3 == '\0') {
      lVar10 = 0;
    }
    else {
      lVar11 = 0;
      do {
        lVar10 = lVar11 + 1;
        lVar13 = lVar11 + 1;
        lVar11 = lVar10;
      } while (param_3[lVar13] != '\0');
    }
    FUN_00d33b4c(&local_a0,param_3,lVar10);
    uVar21 = FUN_00d33c64(&local_a0);
    uVar21 = param_2[2] - 1U & uVar21;
  }
  else {
    do {
      lVar11 = lVar10;
      lVar10 = *(long *)(lVar11 + 0x380);
    } while (lVar10 != 0);
    uStack_88 = *(ulong *)(lVar11 + 0x398);
    uStack_98 = uStack_88 ^ 0x646f72616e646f6d;
    uStack_88 = uStack_88 ^ 0x7465646279746573;
    local_a0 = 0x736f6d6570736575;
    local_78 = auStack_80;
    local_90 = 0x6c7967656e657261;
    uStack_70 = 0;
    if (*param_3 == '\0') {
      lVar10 = 0;
    }
    else {
      lVar11 = 0;
      do {
        lVar10 = lVar11 + 1;
        lVar13 = lVar11 + 1;
        lVar11 = lVar10;
      } while (param_3[lVar13] != '\0');
    }
    FUN_00d33b4c(&local_a0,param_3,lVar10);
    uVar6 = FUN_00d33c64(&local_a0);
    lVar10 = param_2[2];
    lVar11 = *param_2;
    uVar21 = lVar10 - 1U & uVar6;
    __s = *(char ***)(lVar11 + uVar21 * 8);
    if (__s != (char **)0x0) {
      uVar17 = 0;
      do {
        while( true ) {
          pcVar18 = *__s;
          pcVar9 = param_3 + 1;
          cVar19 = *param_3;
          if (*param_3 == *pcVar18) {
            do {
              pcVar18 = pcVar18 + 1;
              if (cVar19 == '\0') goto LAB_00d3231c;
              cVar19 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar19 == *pcVar18);
          }
          if ((int)uVar17 == 0) break;
          lVar13 = lVar10;
          if (uVar17 <= uVar21) {
            lVar13 = 0;
          }
          uVar21 = (uVar21 - uVar17) + lVar13;
          __s = *(char ***)(lVar11 + uVar21 * 8);
          if (__s == (char **)0x0) goto LAB_00d3207c;
        }
        uVar17 = (ulong)((uint)((uVar6 & -lVar10) >> ((ulong)(*(byte *)(param_2 + 1) - 1) & 0x3f)) &
                         (uint)(lVar10 - 1U >> 2) & 0xff | 1);
        lVar13 = lVar10;
        if (uVar17 <= uVar21) {
          lVar13 = 0;
        }
        uVar21 = (uVar21 - uVar17) + lVar13;
        __s = *(char ***)(lVar11 + uVar21 * 8);
      } while (__s != (char **)0x0);
    }
LAB_00d3207c:
    if (param_4 == 0) {
LAB_00d32224:
      __s = (char **)0x0;
      goto LAB_00d3231c;
    }
    if ((ulong)param_2[3] >> ((ulong)(*(byte *)(param_2 + 1) - 1) & 0x3f) != 0) {
      uVar1 = *(byte *)(param_2 + 1) + 1;
      lVar10 = 1L << ((ulong)uVar1 & 0x3f);
      __s = (char **)(**(code **)param_2[4])(lVar10 << 3);
      if (__s == (char **)0x0) goto LAB_00d3231c;
      uVar21 = lVar10 - 1;
      memset(__s,0,lVar10 << 3);
      uVar15 = (ulong)((uVar1 & 0xff) - 1);
      uVar17 = param_2[2];
      uVar16 = (uint)(uVar21 >> 2);
      if (uVar17 != 0) {
        uVar20 = 0;
        do {
          ppcVar12 = *(char ***)(*param_2 + uVar20 * 8);
          if (ppcVar12 != (char **)0x0) {
            pcVar9 = *ppcVar12;
            lVar11 = param_1;
            do {
              lVar13 = lVar11;
              lVar11 = *(long *)(lVar13 + 0x380);
            } while (lVar11 != 0);
            uStack_88 = *(ulong *)(lVar13 + 0x398);
            uStack_98 = uStack_88 ^ 0x646f72616e646f6d;
            uStack_88 = uStack_88 ^ 0x7465646279746573;
            uStack_70 = 0;
            local_a0 = 0x736f6d6570736575;
            local_90 = 0x6c7967656e657261;
            if (*pcVar9 == '\0') {
              lVar11 = 0;
            }
            else {
              lVar13 = 0;
              do {
                lVar11 = lVar13 + 1;
                lVar4 = lVar13 + 1;
                lVar13 = lVar11;
              } while (pcVar9[lVar4] != '\0');
            }
            local_78 = auStack_80;
            FUN_00d33b4c(&local_a0,pcVar9,lVar11);
            uVar7 = FUN_00d33c64(&local_a0);
            uVar17 = uVar7 & uVar21;
            if (__s[uVar17] != (char *)0x0) {
              uVar14 = 0;
              do {
                uVar2 = (uint)((uVar7 & -lVar10) >> (uVar15 & 0x3f)) & uVar16 & 0xff | 1;
                if ((uint)uVar14 != 0) {
                  uVar2 = (uint)uVar14;
                }
                uVar14 = (ulong)uVar2;
                lVar11 = lVar10;
                if (uVar14 <= uVar17) {
                  lVar11 = 0;
                }
                uVar17 = (uVar17 - uVar14) + lVar11;
              } while (__s[uVar17] != (char *)0x0);
            }
            __s[uVar17] = *(char **)(*param_2 + uVar20 * 8);
            uVar17 = param_2[2];
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar17);
      }
      (**(code **)(param_2[4] + 0x10))(*param_2);
      uVar21 = uVar21 & uVar6;
      *param_2 = (long)__s;
      param_2[2] = lVar10;
      *(char *)(param_2 + 1) = (char)uVar1;
      if (__s[uVar21] != (char *)0x0) {
        uVar17 = 0;
        do {
          uVar1 = (uint)((uVar6 & -lVar10) >> (uVar15 & 0x3f)) & uVar16 & 0xff | 1;
          if ((uint)uVar17 != 0) {
            uVar1 = (uint)uVar17;
          }
          uVar17 = (ulong)uVar1;
          lVar11 = lVar10;
          if (uVar17 <= uVar21) {
            lVar11 = 0;
          }
          uVar21 = (uVar21 - uVar17) + lVar11;
        } while (__s[uVar21] != (char *)0x0);
      }
    }
  }
  uVar8 = (**(code **)param_2[4])(param_4);
  lVar10 = uVar21 * 8;
  *(undefined8 *)(*param_2 + lVar10) = uVar8;
  __s = *(char ***)(*param_2 + lVar10);
  if (__s != (char **)0x0) {
    memset(__s,0,param_4);
    lVar11 = *param_2;
    **(char ***)(lVar11 + lVar10) = param_3;
    param_2[3] = param_2[3] + 1;
    __s = *(char ***)(lVar11 + lVar10);
  }
LAB_00d3231c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
  }
  return;
}


