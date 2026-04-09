// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_custom_decoder_ctl
// Entry Point: 00e6e0d4
// Size: 1388 bytes
// Signature: undefined opus_custom_decoder_ctl(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


/* WARNING: Removing unreachable block (ram,0x00e6e42c) */
/* WARNING: Removing unreachable block (ram,0x00e6e488) */
/* WARNING: Removing unreachable block (ram,0x00e6e450) */
/* WARNING: Removing unreachable block (ram,0x00e6e52c) */
/* WARNING: Removing unreachable block (ram,0x00e6e5a0) */
/* WARNING: Removing unreachable block (ram,0x00e6e4f8) */
/* WARNING: Removing unreachable block (ram,0x00e6e570) */
/* WARNING: Removing unreachable block (ram,0x00e6e548) */
/* WARNING: Removing unreachable block (ram,0x00e6e4d0) */
/* WARNING: Removing unreachable block (ram,0x00e6e4ac) */
/* WARNING: Removing unreachable block (ram,0x00e6e46c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff58 : 0x00e6e4b8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void opus_custom_decoder_ctl(long *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *local_a8;
  
  uVar5 = 0xfffffffb;
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  switch(param_2) {
  case 0xfbb:
    if (local_a8 != (long *)0x0) {
      iVar9 = 0;
      if (*(int *)((long)param_1 + 0x14) != 0) {
        iVar9 = *(int *)(param_1 + 1) / *(int *)((long)param_1 + 0x14);
      }
LAB_00e6e4a0:
      uVar5 = 0;
      *(int *)local_a8 = iVar9;
      goto switchD_00e6e168_caseD_fbd;
    }
    break;
  case 0xfbc:
    lVar18 = *param_1;
    iVar9 = *(int *)(param_1 + 1);
    lVar8 = (long)*(int *)(param_1 + 2);
    lVar17 = (long)*(int *)(lVar18 + 8);
    memset((void *)((long)param_1 + 0x2c),0,
           (long)((*(int *)(lVar18 + 4) * 4 + 0x2030) * *(int *)(param_1 + 2) +
                  *(int *)(lVar18 + 8) * 0x10 + 0x5c) - 0x2c);
    if (0 < *(int *)(lVar18 + 8)) {
      uVar3 = *(int *)(lVar18 + 8) * 2;
      lVar18 = ((long)iVar9 + 0x800) * lVar8;
      if ((int)uVar3 < 2) {
        uVar3 = 1;
      }
      uVar7 = (ulong)uVar3;
      lVar12 = lVar18 * 4;
      if (uVar3 < 0x10) {
LAB_00e6e2dc:
        uVar13 = 0;
      }
      else {
        lVar1 = lVar12 + lVar8 * 0x30;
        lVar2 = lVar1 + lVar17 * 4;
        lVar1 = lVar1 + lVar17 * 8;
        if (((ulong)((long)param_1 + lVar1 + 0x5c) < (long)param_1 + lVar2 + uVar7 * 2 + 0x5c) &&
           ((ulong)((long)param_1 + lVar2 + 0x5c) < (long)param_1 + lVar1 + uVar7 * 2 + 0x5c))
        goto LAB_00e6e2dc;
        lVar18 = lVar18 + lVar8 * 0xc;
        uVar13 = uVar7 & 0x7ffffff0;
        puVar14 = (undefined8 *)((long)param_1 + (lVar18 + lVar17 * 2) * 4 + 0x6c);
        puVar15 = (undefined8 *)((long)param_1 + lVar17 * 4 + lVar18 * 4 + 0x6c);
        uVar16 = uVar13;
        do {
          puVar14[-1] = 0x9000900090009000;
          puVar14[-2] = 0x9000900090009000;
          puVar14[1] = 0x9000900090009000;
          *puVar14 = 0x9000900090009000;
          uVar16 = uVar16 - 0x10;
          puVar14 = puVar14 + 4;
          puVar15[-1] = 0x9000900090009000;
          puVar15[-2] = 0x9000900090009000;
          puVar15[1] = 0x9000900090009000;
          *puVar15 = 0x9000900090009000;
          puVar15 = puVar15 + 4;
        } while (uVar16 != 0);
        if (uVar13 == uVar7) goto LAB_00e6e320;
      }
      lVar12 = lVar12 + lVar8 * 0x30;
      lVar8 = uVar7 - uVar13;
      puVar10 = (undefined2 *)((long)param_1 + lVar12 + uVar13 * 2 + lVar17 * 4 + 0x5c);
      puVar11 = (undefined2 *)((long)param_1 + lVar12 + lVar17 * 8 + uVar13 * 2 + 0x5c);
      do {
        lVar8 = lVar8 + -1;
        *puVar11 = 0x9000;
        *puVar10 = 0x9000;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (lVar8 != 0);
    }
LAB_00e6e320:
    uVar5 = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 1;
  case 0xfbd:
  case 0xfbe:
  case 0xfc0:
  case 0xfc2:
  case 0xfc3:
  case 0xfc4:
  case 0xfc5:
  case 0xfc6:
  case 0xfc7:
  case 0xfc8:
  case 0xfc9:
  case 0xfca:
  case 0xfcb:
  case 0xfcc:
  case 0xfcd:
    goto switchD_00e6e168_caseD_fbd;
  case 0xfbf:
    if (local_a8 != (long *)0x0) {
      iVar9 = *(int *)((long)param_1 + 0x2c);
      goto LAB_00e6e4a0;
    }
    break;
  case 0xfc1:
    if (local_a8 != (long *)0x0) {
      iVar9 = *(int *)(param_1 + 8);
      goto LAB_00e6e4a0;
    }
    break;
  case 0xfce:
    if ((uint)local_a8 < 2) {
      uVar5 = 0;
      *(uint *)((long)param_1 + 0x24) = (uint)local_a8;
      goto switchD_00e6e168_caseD_fbd;
    }
    break;
  case 0xfcf:
    if (local_a8 != (long *)0x0) {
      iVar9 = *(int *)((long)param_1 + 0x24);
      goto LAB_00e6e4a0;
    }
    break;
  default:
    switch(param_2) {
    case 0x2717:
      if (local_a8 != (long *)0x0) {
        uVar5 = 0;
        *(int *)local_a8 = *(int *)(param_1 + 6);
        *(undefined4 *)(param_1 + 6) = 0;
        goto switchD_00e6e168_caseD_fbd;
      }
      break;
    case 0x2718:
      if (0xfffffffd < (uint)local_a8 - 3) {
        uVar5 = 0;
        *(uint *)(param_1 + 2) = (uint)local_a8;
        goto switchD_00e6e168_caseD_fbd;
      }
      break;
    default:
      goto switchD_00e6e168_caseD_fbd;
    case 0x271a:
      if ((-1 < (int)(uint)local_a8) && ((int)(uint)local_a8 < *(int *)(*param_1 + 8))) {
        uVar5 = 0;
        *(uint *)(param_1 + 3) = (uint)local_a8;
        goto switchD_00e6e168_caseD_fbd;
      }
      break;
    case 0x271c:
      if ((0 < (int)(uint)local_a8) && ((int)(uint)local_a8 <= *(int *)(*param_1 + 8))) {
        uVar5 = 0;
        *(uint *)((long)param_1 + 0x1c) = (uint)local_a8;
        goto switchD_00e6e168_caseD_fbd;
      }
      break;
    case 0x271f:
      if (local_a8 != (long *)0x0) {
        uVar5 = 0;
        *local_a8 = *param_1;
        goto switchD_00e6e168_caseD_fbd;
      }
      break;
    case 0x2720:
      uVar5 = 0;
      *(uint *)(param_1 + 4) = (uint)local_a8;
      goto switchD_00e6e168_caseD_fbd;
    }
  }
  uVar5 = 0xffffffff;
switchD_00e6e168_caseD_fbd:
  if (*(long *)(lVar4 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


