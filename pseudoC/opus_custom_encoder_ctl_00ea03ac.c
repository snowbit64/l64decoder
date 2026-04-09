// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_custom_encoder_ctl
// Entry Point: 00ea03ac
// Size: 2068 bytes
// Signature: undefined opus_custom_encoder_ctl(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


/* WARNING: Removing unreachable block (ram,0x00ea0b58) */
/* WARNING: Removing unreachable block (ram,0x00ea0b3c) */
/* WARNING: Removing unreachable block (ram,0x00ea0ae4) */
/* WARNING: Removing unreachable block (ram,0x00ea0a40) */
/* WARNING: Removing unreachable block (ram,0x00ea09e8) */
/* WARNING: Removing unreachable block (ram,0x00ea09b4) */
/* WARNING: Removing unreachable block (ram,0x00ea0a84) */
/* WARNING: Removing unreachable block (ram,0x00ea0a5c) */
/* WARNING: Removing unreachable block (ram,0x00ea0a0c) */
/* WARNING: Removing unreachable block (ram,0x00ea0874) */
/* WARNING: Removing unreachable block (ram,0x00ea0890) */
/* WARNING: Removing unreachable block (ram,0x00ea08ec) */
/* WARNING: Removing unreachable block (ram,0x00ea084c) */
/* WARNING: Removing unreachable block (ram,0x00ea08d0) */
/* WARNING: Removing unreachable block (ram,0x00ea08b4) */
/* WARNING: Removing unreachable block (ram,0x00ea0990) */
/* WARNING: Removing unreachable block (ram,0x00ea096c) */
/* WARNING: Removing unreachable block (ram,0x00ea0950) */
/* WARNING: Removing unreachable block (ram,0x00ea090c) */
/* WARNING: Removing unreachable block (ram,0x00ea0b18) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff58 : 0x00ea0858 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void opus_custom_encoder_ctl(long *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined2 *puVar10;
  long lVar11;
  undefined2 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *local_a8;
  
  uVar6 = 0xfffffffb;
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  switch(param_2) {
  case 0xfa2:
    if ((500 < (int)(uint)local_a8) || ((uint)local_a8 == 0xffffffff)) {
      uVar6 = 0;
      if (*(int *)(param_1 + 1) * 260000 <= (int)(uint)local_a8) {
        local_a8._0_4_ = *(int *)(param_1 + 1) * 260000;
      }
      *(uint *)((long)param_1 + 0x2c) = (uint)local_a8;
      goto switchD_00ea0440_caseD_fa3;
    }
    break;
  case 0xfa3:
  case 0xfa4:
  case 0xfa5:
  case 0xfa7:
  case 0xfa8:
  case 0xfa9:
  case 0xfab:
  case 0xfac:
  case 0xfad:
  case 0xfaf:
  case 0xfb0:
  case 0xfb1:
  case 0xfb2:
  case 0xfb3:
  case 0xfb5:
  case 0xfb6:
  case 0xfb7:
  case 0xfb8:
  case 0xfb9:
  case 0xfba:
  case 0xfbb:
  case 0xfbd:
  case 0xfbe:
  case 0xfc0:
  case 0xfc1:
  case 0xfc2:
  case 0xfc3:
  case 0xfc6:
  case 0xfc7:
  case 0xfc8:
  case 0xfc9:
  case 0xfca:
  case 0xfcb:
  case 0xfcc:
  case 0xfcd:
    goto switchD_00ea0440_caseD_fa3;
  case 0xfa6:
    uVar6 = 0;
    *(uint *)(param_1 + 6) = (uint)local_a8;
    goto switchD_00ea0440_caseD_fa3;
  case 0xfaa:
    if ((uint)local_a8 < 0xb) {
      uVar6 = 0;
      *(uint *)((long)param_1 + 0x1c) = (uint)local_a8;
      goto switchD_00ea0440_caseD_fa3;
    }
    break;
  case 0xfae:
    if ((uint)local_a8 < 0x65) {
      uVar6 = 0;
      *(uint *)((long)param_1 + 0x3c) = (uint)local_a8;
      goto switchD_00ea0440_caseD_fa3;
    }
    break;
  case 0xfb4:
    uVar6 = 0;
    *(uint *)(param_1 + 7) = (uint)local_a8;
    goto switchD_00ea0440_caseD_fa3;
  case 0xfbc:
    lVar19 = *param_1;
    iVar3 = *(int *)(param_1 + 1);
    iVar1 = *(int *)(lVar19 + 4);
    iVar2 = *(int *)(lVar19 + 8);
    memset(param_1 + 10,0,(long)((iVar1 * 4 + iVar2 * 8 + 0x1000) * iVar3 + 0xfc) - 0x50);
    uVar4 = *(int *)(lVar19 + 8) * iVar3;
    uVar8 = (ulong)uVar4;
    if (0 < (int)uVar4) {
      lVar14 = (long)((iVar1 + 0x400) * iVar3);
      lVar19 = (long)(iVar2 * iVar3);
      lVar11 = lVar14 * 4;
      if (uVar4 < 0x10) {
LAB_00ea0638:
        uVar13 = 0;
      }
      else {
        lVar20 = lVar11 + lVar19 * 2;
        lVar18 = (lVar19 + lVar14) * 4;
        if (((ulong)((long)param_1 + lVar18 + 0xfc) < (long)param_1 + lVar20 + uVar8 * 2 + 0xfc) &&
           ((ulong)((long)param_1 + lVar20 + 0xfc) < (long)param_1 + lVar18 + uVar8 * 2 + 0xfc))
        goto LAB_00ea0638;
        uVar13 = uVar8 & 0xfffffff0;
        puVar16 = (undefined8 *)((long)param_1 + (lVar19 + lVar14) * 4 + 0x10c);
        puVar15 = (undefined8 *)((long)param_1 + lVar19 * 2 + lVar14 * 4 + 0x10c);
        uVar17 = uVar13;
        do {
          puVar16[-1] = 0x9000900090009000;
          puVar16[-2] = 0x9000900090009000;
          puVar16[1] = 0x9000900090009000;
          *puVar16 = 0x9000900090009000;
          uVar17 = uVar17 - 0x10;
          puVar16 = puVar16 + 4;
          puVar15[-1] = 0x9000900090009000;
          puVar15[-2] = 0x9000900090009000;
          puVar15[1] = 0x9000900090009000;
          *puVar15 = 0x9000900090009000;
          puVar15 = puVar15 + 4;
        } while (uVar17 != 0);
        if (uVar13 == uVar8) goto LAB_00ea0678;
      }
      lVar14 = uVar8 - uVar13;
      puVar10 = (undefined2 *)((long)param_1 + lVar11 + lVar19 * 4 + uVar13 * 2 + 0xfc);
      puVar12 = (undefined2 *)((long)param_1 + lVar11 + uVar13 * 2 + lVar19 * 2 + 0xfc);
      do {
        lVar14 = lVar14 + -1;
        *puVar10 = 0x9000;
        *puVar12 = 0x9000;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      } while (lVar14 != 0);
    }
LAB_00ea0678:
    uVar6 = 0;
    *(undefined4 *)((long)param_1 + 0xdc) = 0;
    *(undefined4 *)((long)param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0x100;
    *(undefined8 *)((long)param_1 + 0x54) = 0x100000002;
    goto switchD_00ea0440_caseD_fa3;
  case 0xfbf:
    if (local_a8 != (long *)0x0) {
      uVar9 = *(undefined4 *)(param_1 + 10);
      goto LAB_00ea0900;
    }
    break;
  case 0xfc4:
    if (0xffffffee < (uint)local_a8 - 0x19) {
      uVar6 = 0;
      *(uint *)(param_1 + 8) = (uint)local_a8;
      goto switchD_00ea0440_caseD_fa3;
    }
    break;
  case 0xfc5:
    uVar9 = *(undefined4 *)(param_1 + 8);
LAB_00ea0900:
    uVar6 = 0;
    *(undefined4 *)local_a8 = uVar9;
    goto switchD_00ea0440_caseD_fa3;
  case 0xfce:
    if ((uint)local_a8 < 2) {
      uVar6 = 0;
      *(uint *)(param_1 + 9) = (uint)local_a8;
      goto switchD_00ea0440_caseD_fa3;
    }
    break;
  case 0xfcf:
    if (local_a8 != (long *)0x0) {
      uVar9 = *(undefined4 *)(param_1 + 9);
      goto LAB_00ea0900;
    }
    break;
  default:
    switch(param_2) {
    case 0x2712:
      if ((uint)local_a8 < 3) {
        uVar6 = 0;
        *(uint *)(param_1 + 3) = (uint)((uint)local_a8 != 2);
        *(uint *)(param_1 + 2) = (uint)((uint)local_a8 == 0);
        goto switchD_00ea0440_caseD_fa3;
      }
      break;
    default:
      goto switchD_00ea0440_caseD_fa3;
    case 0x2718:
      if (0xfffffffd < (uint)local_a8 - 3) {
        uVar6 = 0;
        *(uint *)((long)param_1 + 0xc) = (uint)local_a8;
        goto switchD_00ea0440_caseD_fa3;
      }
      break;
    case 0x271a:
      if ((-1 < (int)(uint)local_a8) && ((int)(uint)local_a8 < *(int *)(*param_1 + 8))) {
        uVar6 = 0;
        *(uint *)((long)param_1 + 0x24) = (uint)local_a8;
        goto switchD_00ea0440_caseD_fa3;
      }
      break;
    case 0x271c:
      if ((0 < (int)(uint)local_a8) && ((int)(uint)local_a8 <= *(int *)(*param_1 + 8))) {
        uVar6 = 0;
        *(uint *)(param_1 + 5) = (uint)local_a8;
        goto switchD_00ea0440_caseD_fa3;
      }
      break;
    case 0x271f:
      if (local_a8 != (long *)0x0) {
        uVar6 = 0;
        *local_a8 = *param_1;
        goto switchD_00ea0440_caseD_fa3;
      }
      break;
    case 0x2720:
      uVar6 = 0;
      *(uint *)((long)param_1 + 0x34) = (uint)local_a8;
      goto switchD_00ea0440_caseD_fa3;
    case 0x2726:
      if (local_a8 != (long *)0x0) {
        lVar14 = local_a8[5];
        lVar11 = local_a8[4];
        lVar19 = local_a8[6];
        uVar6 = 0;
        lVar22 = local_a8[1];
        lVar21 = *local_a8;
        lVar18 = local_a8[3];
        lVar20 = local_a8[2];
        *(long *)((long)param_1 + 0xb4) = local_a8[7];
        *(long *)((long)param_1 + 0xac) = lVar19;
        *(long *)((long)param_1 + 0xa4) = lVar14;
        *(long *)((long)param_1 + 0x9c) = lVar11;
        *(long *)((long)param_1 + 0x84) = lVar22;
        *(long *)((long)param_1 + 0x7c) = lVar21;
        *(long *)((long)param_1 + 0x94) = lVar18;
        *(long *)((long)param_1 + 0x8c) = lVar20;
        goto switchD_00ea0440_caseD_fa3;
      }
      goto LAB_00ea0b74;
    case 0x2728:
      uVar6 = 0;
      *(uint *)((long)param_1 + 0x44) = (uint)local_a8;
      goto switchD_00ea0440_caseD_fa3;
    case 0x272a:
      uVar6 = 0;
      param_1[0x1e] = (long)local_a8;
      goto switchD_00ea0440_caseD_fa3;
    case 0x272c:
      if (local_a8 != (long *)0x0) {
        uVar6 = 0;
        *(long *)((long)param_1 + 0xbc) = *local_a8;
        goto switchD_00ea0440_caseD_fa3;
      }
LAB_00ea0b74:
      uVar6 = 0;
      goto switchD_00ea0440_caseD_fa3;
    }
  }
  uVar6 = 0xffffffff;
switchD_00ea0440_caseD_fa3:
  if (*(long *)(lVar5 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


