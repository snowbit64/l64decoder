// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e16be0
// Entry Point: 00e16be0
// Size: 936 bytes
// Signature: undefined FUN_00e16be0(void)


void FUN_00e16be0(long param_1,long **param_2,long *param_3,uint param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long alStack_c0 [3];
  long *local_a8;
  long *local_a0;
  long local_98;
  long local_90;
  long local_88;
  code *local_80;
  long local_78;
  long local_70;
  long local_68;
  
  local_90 = tpidr_el0;
  local_68 = *(long *)(local_90 + 0x28);
  plVar14 = *param_2;
  iVar12 = *(int *)(param_1 + 0x48) >> 1;
  iVar1 = (int)plVar14[1];
  if ((long)iVar12 <= plVar14[1]) {
    iVar1 = iVar12;
  }
  local_a8 = param_3;
  local_80 = param_5;
  if (0 < iVar1 - *(int *)plVar14) {
    iVar12 = *(int *)(plVar14 + 2);
    local_88 = (long)iVar12;
    lVar8 = (long)(int)param_4;
    iVar2 = 0;
    if (iVar12 != 0) {
      iVar2 = (iVar1 - *(int *)plVar14) / iVar12;
    }
    lVar13 = *param_2[3];
    local_a0 = (long *)((long)alStack_c0 -
                       ((-(ulong)(param_4 >> 0x1f) & 0xfffffff800000000 | (ulong)param_4 << 3) + 0xf
                       & 0xfffffffffffffff0));
    iVar12 = (int)lVar13;
    local_98 = lVar8;
    if (0 < (int)param_4) {
      uVar3 = 0;
      if (iVar12 != 0) {
        uVar3 = (iVar12 + iVar2 + -1) / iVar12;
      }
      plVar10 = local_a0;
      do {
        lVar4 = _vorbis_block_alloc(param_1,-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar3 << 3);
        lVar8 = lVar8 + -1;
        *plVar10 = lVar4;
        plVar10 = plVar10 + 1;
      } while (lVar8 != 0);
    }
    if ((0 < *(int *)((long)param_2 + 0xc)) && (0 < iVar2)) {
      local_70 = param_1 + 8;
      if (lVar13 << 0x20 < 1) {
        if ((int)param_4 < 1) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        lVar8 = 0;
        plVar10 = local_a0;
        lVar13 = local_98;
        while( true ) {
          uVar5 = vorbis_book_decode(param_2[3],local_70);
          if ((((int)uVar5 == -1) || (*(int *)(plVar14 + 3) <= (int)uVar5)) ||
             (lVar4 = *(long *)((long)param_2[6] +
                               (-(uVar5 >> 0x1f & 1) & 0xfffffff800000000 |
                               (uVar5 & 0xffffffff) << 3)), *(long *)(*plVar10 + lVar8 * 8) = lVar4,
             lVar4 == 0)) break;
          lVar13 = lVar13 + -1;
          plVar10 = plVar10 + 1;
          if (lVar13 == 0) {
            lVar8 = lVar8 + 1;
            plVar10 = local_a0;
            lVar13 = local_98;
          }
        }
      }
      else if (0 < (int)param_4) {
        alStack_c0[2] = (long)iVar2;
        alStack_c0[1] = (long)iVar12;
        local_78 = 0;
        do {
          uVar3 = 1 << (ulong)((uint)local_78 & 0x1f);
          if (local_78 == 0) {
            lVar8 = 0;
            lVar13 = 0;
            plVar10 = local_a0;
            lVar4 = local_98;
            do {
              do {
                uVar5 = vorbis_book_decode(param_2[3],local_70);
                if ((((int)uVar5 == -1) || (*(int *)(plVar14 + 3) <= (int)uVar5)) ||
                   (lVar7 = *(long *)((long)param_2[6] +
                                     (-(uVar5 >> 0x1f & 1) & 0xfffffff800000000 |
                                     (uVar5 & 0xffffffff) << 3)),
                   *(long *)(*plVar10 + lVar13 * 8) = lVar7, lVar7 == 0)) goto LAB_00e16ef0;
                lVar4 = lVar4 + -1;
                plVar10 = plVar10 + 1;
              } while (lVar4 != 0);
              if (lVar8 < alStack_c0[2]) {
                lVar4 = 0;
                do {
                  lVar9 = lVar8 * local_88;
                  plVar10 = local_a8;
                  lVar7 = local_98;
                  plVar11 = local_a0;
                  do {
                    lVar6 = (long)*(int *)(*(long *)(*plVar11 + lVar13 * 8) + lVar4 * 4);
                    if ((((*(uint *)((long)plVar14 + lVar6 * 4 + 0x20) & uVar3) != 0) &&
                        (*(long *)param_2[4][lVar6] != 0)) &&
                       (lVar6 = (*local_80)(*(long *)param_2[4][lVar6],
                                            *plVar10 + (*plVar14 + lVar9) * 4,local_70,local_88),
                       lVar6 == -1)) goto LAB_00e16ef0;
                    lVar7 = lVar7 + -1;
                    plVar10 = plVar10 + 1;
                    plVar11 = plVar11 + 1;
                  } while (lVar7 != 0);
                  lVar4 = lVar4 + 1;
                  lVar8 = lVar8 + 1;
                } while ((lVar4 < alStack_c0[1]) && (lVar8 < alStack_c0[2]));
              }
              lVar13 = lVar13 + 1;
              plVar10 = local_a0;
              lVar4 = local_98;
            } while (lVar8 < alStack_c0[2]);
          }
          else {
            lVar13 = 0;
            lVar8 = 0;
            do {
              if (lVar13 < alStack_c0[2]) {
                lVar4 = 0;
                do {
                  lVar9 = lVar13 * local_88;
                  plVar11 = local_a0;
                  plVar10 = local_a8;
                  lVar7 = local_98;
                  do {
                    lVar6 = (long)*(int *)(*(long *)(*plVar11 + lVar8 * 8) + lVar4 * 4);
                    if ((((*(uint *)((long)plVar14 + lVar6 * 4 + 0x20) & uVar3) != 0) &&
                        (lVar6 = *(long *)(param_2[4][lVar6] + local_78 * 8), lVar6 != 0)) &&
                       (lVar6 = (*local_80)(lVar6,*plVar10 + (*plVar14 + lVar9) * 4,local_70,
                                            local_88), lVar6 == -1)) goto LAB_00e16ef0;
                    lVar7 = lVar7 + -1;
                    plVar10 = plVar10 + 1;
                    plVar11 = plVar11 + 1;
                  } while (lVar7 != 0);
                  lVar4 = lVar4 + 1;
                  lVar13 = lVar13 + 1;
                } while ((lVar4 < alStack_c0[1]) && (lVar13 < alStack_c0[2]));
              }
              lVar8 = lVar8 + 1;
            } while (lVar13 < alStack_c0[2]);
          }
          local_78 = local_78 + 1;
        } while (local_78 < *(int *)((long)param_2 + 0xc));
      }
    }
  }
LAB_00e16ef0:
  if (*(long *)(local_90 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


