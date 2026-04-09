// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_NLSF_del_dec_quant
// Entry Point: 00e94b78
// Size: 1596 bytes
// Signature: undefined silk_NLSF_del_dec_quant(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined2 param_10)


void silk_NLSF_del_dec_quant
               (char *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
               short param_7,short param_8,uint param_9,short param_10)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  ushort uVar19;
  undefined *puVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  int iVar29;
  ulong uVar30;
  int *piVar31;
  uint uVar32;
  uint uVar33;
  ushort uVar35;
  uint unaff_w19;
  uint uVar36;
  uint uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  int local_1b0 [20];
  int local_160 [20];
  uint local_110 [4];
  uint local_100 [4];
  uint local_f0 [4];
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  short local_d0 [4];
  short local_c8;
  undefined2 local_c6;
  undefined2 local_c4;
  undefined2 local_c2;
  undefined8 auStack_c0 [2];
  char acStack_b0 [16];
  char acStack_a0 [16];
  char acStack_90 [16];
  uint local_80 [4];
  long local_70;
  int *piVar34;
  
  lVar15 = tpidr_el0;
  uVar36 = (uint)param_7;
  uVar37 = 0x39a;
  piVar31 = local_160;
  piVar34 = local_1b0;
  local_70 = *(long *)(lVar15 + 0x28);
  lVar28 = 0;
  do {
    uVar10 = (short)(lVar28 + -10) * 0x400;
    if (lVar28 + -10 < 1) {
      if ((int)lVar28 == 9) {
        uVar35 = uVar10 + 0x400;
        uVar19 = uVar10 | 0x66;
      }
      else {
        uVar35 = uVar10 + 0x400 | 0x66;
        uVar19 = uVar10 | 0x66;
        if ((int)lVar28 == 10) {
          uVar35 = uVar10 | 0x39a;
          uVar19 = uVar10;
        }
      }
    }
    else {
      uVar35 = uVar10 | 0x39a;
      uVar19 = uVar10 - 0x66;
    }
    lVar2 = lVar28 + 1;
    piVar31[lVar28] = (int)(uVar36 * (int)(short)uVar19) >> 0x10;
    piVar34[lVar28] = (int)(uVar36 * (int)(short)uVar35) >> 0x10;
    lVar28 = lVar2;
  } while (lVar2 != 0x14);
  uVar13 = (uint)param_10;
  local_f0[0] = 0;
  uVar27 = uVar13 - 1;
  local_d0[0] = 0;
  if (0 < (int)uVar13) {
    uVar30 = 1;
    uVar23 = (ulong)uVar13;
    do {
      puVar20 = (undefined *)((long)auStack_c0 + (ulong)uVar27);
      iVar29 = (int)uVar30;
      if (iVar29 < 1) {
LAB_00e94eb0:
        uVar36 = iVar29 * 2;
        uVar30 = (ulong)uVar36;
        if ((int)uVar36 < 4) {
          iVar29 = iVar29 * -2 + 4;
          do {
            iVar29 = iVar29 + -1;
            puVar20[-(ulong)(uVar36 >> 0x1f) & 0xfffffff000000000 | uVar30 << 4] = *puVar20;
            puVar20 = puVar20 + 0x10;
          } while (iVar29 != 0);
        }
      }
      else {
        uVar25 = uVar23 - 1 & 0xffffffff;
        bVar7 = *(byte *)(param_4 + uVar25);
        sVar9 = *(short *)(param_3 + uVar25 * 2);
        sVar8 = *(short *)(param_2 + uVar25 * 2);
        lVar28 = param_6 + *(short *)(param_5 + uVar25 * 2);
        uVar22 = uVar30;
        uVar26 = 0;
        puVar38 = puVar20;
        do {
          sVar12 = (short)((int)local_d0[uVar26] * (uint)bVar7 >> 8);
          iVar4 = (int)(short)(sVar8 - sVar12) * (int)param_8 >> 0x10;
          if (iVar4 == -10 || iVar4 + 10 < 0 != SCARRY4(iVar4,10)) {
            iVar4 = -10;
          }
          if (8 < iVar4) {
            iVar4 = 9;
          }
          *puVar38 = (char)iVar4;
          sVar11 = sVar12 + (short)local_160[iVar4 + 10U];
          sVar12 = (short)local_1b0[iVar4 + 10U] + sVar12;
          local_d0[uVar26] = sVar11;
          local_d0[uVar22] = sVar12;
          if (iVar4 < 3) {
            if (iVar4 != -4 && iVar4 + 4 < 0 == SCARRY4(iVar4,4)) {
              uVar36 = (uint)*(byte *)(lVar28 + (ulong)(iVar4 + 4));
              uVar37 = (uint)*(byte *)(lVar28 + (ulong)(iVar4 + 5));
            }
            else if (iVar4 != -4) {
              uVar36 = iVar4 * -0x2b + 0x6c;
              uVar37 = iVar4 * -0x2b + 0x41;
            }
            else {
              uVar37 = (uint)*(byte *)(lVar28 + 1);
              uVar36 = 0x118;
            }
          }
          else if (iVar4 == 3) {
            uVar36 = (uint)*(byte *)(lVar28 + 7);
            uVar37 = 0x118;
          }
          else {
            uVar36 = iVar4 * 0x2b + 0x6c;
            uVar37 = iVar4 * 0x2b + 0x97;
          }
          iVar4 = (int)(short)(sVar8 - sVar11);
          iVar14 = (int)(short)(sVar8 - sVar12);
          uVar3 = uVar26 + 1;
          uVar6 = local_f0[uVar26];
          puVar38 = puVar38 + 0x10;
          iVar24 = (int)sVar9;
          local_f0[uVar26] = uVar6 + uVar36 * (int)(short)param_9 + iVar4 * iVar4 * iVar24;
          local_f0[uVar22] = uVar6 + uVar37 * (int)(short)param_9 + iVar14 * iVar14 * iVar24;
          uVar18 = local_d0[3];
          uVar17 = local_d0[2];
          uVar16 = local_d0[1];
          sVar12 = local_d0[0];
          uVar32 = local_d4;
          uVar6 = local_d8;
          uVar37 = local_dc;
          uVar36 = local_e0;
          uVar22 = uVar22 + 1;
          uVar26 = uVar3;
        } while (uVar30 != uVar3);
        if (iVar29 < 3) {
          if ((0 < iVar29) &&
             (*(char *)((long)auStack_c0 + uVar25 + uVar30 * 0x10) =
                   *(char *)((long)auStack_c0 + uVar25) + '\x01', iVar29 != 1)) {
            *(char *)((long)auStack_c0 + uVar25 + (ulong)(iVar29 + 1) * 0x10) =
                 acStack_b0[uVar25] + '\x01';
          }
          goto LAB_00e94eb0;
        }
        if ((int)local_e0 < (int)local_f0[0]) {
          local_e0 = local_f0[0];
          local_80[0] = 4;
          local_f0[0] = uVar36;
          local_d0[0] = local_c8;
          local_c8 = sVar12;
        }
        else {
          local_80[0] = 0;
        }
        local_110[0] = local_e0;
        local_100[0] = local_f0[0];
        if ((int)local_dc < (int)local_f0[1]) {
          local_dc = local_f0[1];
          local_80[1] = 5;
          local_f0[1] = uVar37;
          local_d0[1] = local_c6;
          local_c6 = uVar16;
        }
        else {
          local_80[1] = 1;
        }
        local_110[1] = local_dc;
        local_100[1] = local_f0[1];
        if ((int)local_d8 < (int)local_f0[2]) {
          local_d8 = local_f0[2];
          local_80[2] = 6;
          local_f0[2] = uVar6;
          local_d0[2] = local_c4;
          local_c4 = uVar17;
        }
        else {
          local_80[2] = 2;
        }
        local_110[2] = local_d8;
        local_100[2] = local_f0[2];
        if ((int)local_d4 < (int)local_f0[3]) {
          local_d4 = local_f0[3];
          local_80[3] = 7;
          local_f0[3] = uVar32;
          local_d0[3] = local_c2;
          local_c2 = uVar18;
        }
        else {
          local_80[3] = 3;
        }
        local_110[3] = local_d4;
        local_100[3] = local_f0[3];
        while( true ) {
          uVar6 = local_80[3];
          uVar36 = local_100[0] & ((int)local_100[0] >> 0x1f ^ 0xffffffffU);
          uVar37 = local_110[1];
          if ((int)local_110[0] <= (int)local_110[1]) {
            uVar37 = local_110[0];
          }
          uVar32 = local_100[1];
          if ((int)local_100[1] <= (int)uVar36) {
            uVar32 = uVar36;
          }
          uVar21 = 2;
          uVar5 = local_110[2];
          if ((int)uVar37 <= (int)local_110[2]) {
            uVar21 = (uint)((int)local_110[1] < (int)local_110[0]);
            uVar5 = uVar37;
          }
          uVar37 = local_100[2];
          if ((int)local_100[2] <= (int)uVar32) {
            uVar37 = uVar32;
          }
          uVar33 = 3;
          if ((int)uVar5 <= (int)local_110[3]) {
            uVar33 = uVar21;
          }
          uVar21 = local_110[3];
          if ((int)uVar5 <= (int)local_110[3]) {
            uVar21 = uVar5;
          }
          uVar5 = local_100[3];
          if ((int)local_100[3] <= (int)uVar37) {
            uVar5 = uVar37;
          }
          if ((int)uVar5 <= (int)uVar21) break;
          uVar22 = 2;
          if ((int)local_100[2] <= (int)uVar32) {
            uVar22 = (ulong)((int)uVar36 < (int)local_100[1]);
          }
          uVar36 = local_80[uVar33];
          uVar26 = 3;
          if ((int)local_100[3] <= (int)uVar37) {
            uVar26 = uVar22;
          }
          local_110[uVar33] = 0x7fffffff;
          uVar40 = *(undefined8 *)(acStack_b0 + (ulong)uVar33 * 0x10 + -8);
          uVar39 = auStack_c0[(ulong)uVar33 * 2];
          local_100[uVar26] = 0;
          uVar37 = local_f0[uVar33 | 4];
          *(undefined8 *)(acStack_b0 + uVar26 * 0x10 + -8) = uVar40;
          auStack_c0[uVar26 * 2] = uVar39;
          sVar8 = local_d0[uVar33 | 4];
          local_80[uVar26] = uVar36 ^ 4;
          local_f0[uVar26] = uVar37;
          local_d0[uVar26] = sVar8;
        }
        uVar36 = local_80[2] >> 2;
        uVar37 = local_80[0] >> 2;
        acStack_b0[uVar25] = acStack_b0[uVar25] + (char)(local_80[1] >> 2);
        acStack_a0[uVar25] = acStack_a0[uVar25] + (char)uVar36;
        *(char *)((long)auStack_c0 + uVar25) = *(char *)((long)auStack_c0 + uVar25) + (char)uVar37;
        acStack_90[uVar25] = acStack_90[uVar25] + (char)(uVar6 >> 2);
      }
      uVar27 = uVar27 - 1;
      bVar1 = 1 < (long)uVar23;
      uVar23 = uVar23 - 1;
    } while (bVar1);
    piVar34 = (int *)(ulong)local_f0[1];
    piVar31 = (int *)(ulong)local_f0[2];
    uVar36 = local_e0;
    param_9 = local_d8;
    uVar27 = local_dc;
    uVar37 = local_f0[3];
    unaff_w19 = local_d4;
  }
  uVar32 = (uint)piVar34;
  uVar6 = uVar32;
  if ((int)local_f0[0] <= (int)uVar32) {
    uVar6 = local_f0[0];
  }
  uVar21 = (uint)piVar31;
  uVar5 = uVar21;
  if ((int)uVar6 <= (int)uVar21) {
    uVar5 = uVar6;
  }
  uVar33 = 2;
  if ((int)uVar6 <= (int)uVar21) {
    uVar33 = (uint)((int)uVar32 < (int)local_f0[0]);
  }
  uVar6 = uVar37;
  if ((int)uVar5 <= (int)uVar37) {
    uVar6 = uVar5;
  }
  uVar32 = 3;
  if ((int)uVar5 <= (int)uVar37) {
    uVar32 = uVar33;
  }
  uVar37 = uVar36;
  if ((int)uVar6 <= (int)uVar36) {
    uVar37 = uVar6;
  }
  uVar5 = 4;
  if ((int)uVar6 <= (int)uVar36) {
    uVar5 = uVar32;
  }
  uVar36 = uVar27;
  if ((int)uVar37 <= (int)uVar27) {
    uVar36 = uVar37;
  }
  uVar6 = 5;
  if ((int)uVar37 <= (int)uVar27) {
    uVar6 = uVar5;
  }
  uVar37 = param_9;
  if ((int)uVar36 <= (int)param_9) {
    uVar37 = uVar36;
  }
  uVar27 = 6;
  if ((int)uVar36 <= (int)param_9) {
    uVar27 = uVar6;
  }
  uVar36 = 7;
  if ((int)uVar37 <= (int)unaff_w19) {
    uVar36 = uVar27;
  }
  if (0 < (int)uVar13) {
    memcpy(param_1,auStack_c0 + (ulong)(uVar36 & 3) * 2,(ulong)uVar13);
  }
  if ((int)uVar37 <= (int)unaff_w19) {
    unaff_w19 = uVar37;
  }
  *param_1 = *param_1 + (char)(uVar36 >> 2);
  if (*(long *)(lVar15 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(unaff_w19);
}


