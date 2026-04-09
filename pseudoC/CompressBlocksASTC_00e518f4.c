// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CompressBlocksASTC
// Entry Point: 00e518f4
// Size: 1444 bytes
// Signature: undefined CompressBlocksASTC(void)


void CompressBlocksASTC(long param_1,undefined8 param_2,int *param_3)

{
  ulong *__s;
  long lVar1;
  long *__s_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  size_t __n;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong local_128;
  long local_120;
  void *local_f0;
  void *local_d8;
  void *local_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_9c;
  undefined4 local_98;
  int iStack_94;
  long local_90;
  
  lVar8 = tpidr_el0;
  local_90 = *(long *)(lVar8 + 0x28);
  uVar5 = 0;
  if (*param_3 != 0) {
    uVar5 = *(int *)(param_1 + 8) / *param_3;
  }
  uVar22 = (ulong)uVar5;
  uVar9 = get_programCount();
  iVar10 = *(int *)(param_1 + 0xc);
  iVar3 = param_3[1];
  local_c0 = (void *)0x0;
  iVar6 = 0;
  if (iVar3 != 0) {
    iVar6 = (int)(iVar10 * uVar5) / iVar3;
  }
  if (iVar6 == 0) {
    uVar7 = 0;
    if (iVar3 != 0) {
      uVar7 = iVar10 / iVar3;
    }
  }
  else {
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    local_c0 = operator_new((long)iVar6 * 4);
    memset(local_c0,0,(long)iVar6 * 4);
    uVar7 = 0;
    if (iVar3 != 0) {
      uVar7 = iVar10 / iVar3;
    }
  }
  if ((0 < (int)uVar7) && (0 < (int)uVar5)) {
    lVar18 = 0;
    uVar11 = 0;
    uVar12 = uVar22 & 0xfffffff8;
    lVar16 = 4;
    if (7 < uVar5) goto LAB_00e519e8;
LAB_00e519e0:
    uVar15 = 0;
    do {
      lVar19 = uVar22 - uVar15;
      puVar14 = (undefined4 *)((long)local_c0 + (uVar15 + lVar18) * 4);
      do {
        lVar19 = lVar19 + -1;
        *puVar14 = 0x7f800000;
        puVar14 = puVar14 + 1;
      } while (lVar19 != 0);
      do {
        uVar11 = uVar11 + 1;
        if (uVar11 == uVar7) goto LAB_00e51a48;
        lVar16 = lVar16 + uVar22;
        lVar18 = lVar18 + uVar22;
        if (uVar5 < 8) goto LAB_00e519e0;
LAB_00e519e8:
        puVar13 = (undefined8 *)((long)local_c0 + lVar16 * 4);
        uVar15 = uVar12;
        do {
          puVar13[-1] = 0x7f8000007f800000;
          puVar13[-2] = 0x7f8000007f800000;
          puVar13[1] = 0x7f8000007f800000;
          *puVar13 = 0x7f8000007f800000;
          puVar13 = puVar13 + 4;
          uVar15 = uVar15 - 8;
        } while (uVar15 != 0);
        uVar15 = uVar12;
      } while (uVar12 == uVar22);
    } while( true );
  }
LAB_00e51a48:
  local_d8 = (void *)0x0;
  if (uVar9 != 0) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar22 = (long)(int)(uVar9 * 0xd06) * 8;
    local_d8 = operator_new(uVar22);
    memset(local_d8,0,uVar22);
  }
  local_f0 = (void *)0x0;
  iVar10 = (int)((long)param_3[3] * (long)(int)uVar9);
  if (iVar10 != 0) {
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar22 = (long)param_3[3] * (long)(int)uVar9 * 4;
    local_f0 = operator_new(uVar22);
    memset(local_f0,0,uVar22);
  }
  __n = (ulong)uVar9 * 8;
  if (0 < (int)uVar7) {
    uVar22 = (ulong)uVar9;
    uVar7 = 0;
    if (uVar9 != 0) {
      uVar7 = (int)((uVar9 - 1) + uVar5) / (int)uVar9;
    }
    uVar11 = (ulong)uVar7;
    if (0 < (int)uVar7) {
      if (uVar9 == 0) {
        iVar10 = 0;
        uVar22 = uVar11;
        do {
          do {
            astc_rank_ispc(param_1,0,iVar10,local_f0,param_3);
            uVar5 = (int)uVar22 - 1;
            uVar22 = (ulong)uVar5;
          } while (uVar5 != 0);
          iVar10 = iVar10 + 1;
          iVar3 = 0;
          if (param_3[1] != 0) {
            iVar3 = *(int *)(param_1 + 0xc) / param_3[1];
          }
          uVar22 = uVar11;
        } while (iVar10 < iVar3);
      }
      else {
        lVar16 = 0;
        do {
          uVar12 = 0;
          local_128 = lVar16 << 0x30;
          local_120 = 0;
          do {
            astc_rank_ispc(param_1,(int)uVar12 * uVar9,lVar16,local_f0,param_3);
            if (0 < param_3[3]) {
              lVar19 = 0;
              lVar18 = 0;
              lVar17 = local_120;
              uVar21 = local_128;
              uVar15 = uVar22;
              lVar20 = lVar19;
              do {
                do {
                  if (lVar17 < (int)uVar5) {
                    uVar7 = *(uint *)((long)local_f0 + lVar19);
                    __s = (ulong *)((long)local_d8 + (long)(int)((uVar7 >> 0x14) * uVar9) * 8);
                    if (*__s < (ulong)(long)(int)(uVar9 - 1)) {
                      lVar1 = (*__s << 0x20) + 0x100000000;
                      *__s = lVar1 >> 0x20;
                      *(ulong *)((long)__s + (lVar1 >> 0x1d)) = uVar21 | uVar7;
                    }
                    else {
                      uVar4 = *(uint *)(__s + 1);
                      local_9c = (byte)(uVar4 >> 0x13) & 1;
                      uVar2 = uVar4 >> 5 & 6;
                      *__s = uVar21 | uVar7;
                      uVar23 = NEON_ushl(CONCAT44(uVar4,uVar4),0xfffffff0fffffff3,4);
                      iStack_94 = (uVar2 + 6 >> 2) + 1;
                      local_a0 = 3;
                      if (2 < uVar2) {
                        local_a0 = 4;
                      }
                      local_98 = 1;
                      local_a8 = CONCAT44((int)((uVar23 & 0x700000007) >> 0x20) + 2,
                                          (int)(uVar23 & 0x700000007) + 2);
                      astc_encode_ispc(param_1,local_c0,param_2,__s,&local_a8,param_3);
                      memset(__s,0,__n);
                    }
                  }
                  lVar19 = lVar19 + 4;
                  uVar15 = uVar15 - 1;
                  lVar17 = lVar17 + 1;
                  uVar21 = uVar21 + 0x100000000;
                } while (uVar15 != 0);
                lVar19 = lVar20 + uVar22 * 4;
                lVar18 = lVar18 + 1;
                lVar17 = local_120;
                uVar21 = local_128;
                uVar15 = uVar22;
                lVar20 = lVar19;
              } while (lVar18 < param_3[3]);
            }
            local_128 = local_128 + (uVar22 << 0x20);
            local_120 = local_120 + uVar22;
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar11);
          lVar16 = lVar16 + 1;
          iVar10 = 0;
          if (param_3[1] != 0) {
            iVar10 = *(int *)(param_1 + 0xc) / param_3[1];
          }
        } while (lVar16 < iVar10);
      }
    }
  }
  lVar16 = 0;
  lVar18 = 0xd06;
  do {
    __s_00 = (long *)((long)local_d8 + lVar16);
    if (*__s_00 != 0) {
      uVar9 = *(uint *)(__s_00 + 1);
      *__s_00 = 0;
      uVar5 = uVar9 >> 5 & 6;
      local_9c = (byte)(uVar9 >> 0x13) & 1;
      uVar22 = NEON_ushl(CONCAT44(uVar9,uVar9),0xfffffff0fffffff3,4);
      iStack_94 = (uVar5 + 6 >> 2) + 1;
      local_a0 = 3;
      if (2 < uVar5) {
        local_a0 = 4;
      }
      local_98 = 1;
      local_a8 = CONCAT44((int)((uVar22 & 0x700000007) >> 0x20) + 2,(int)(uVar22 & 0x700000007) + 2)
      ;
      astc_encode_ispc(param_1,local_c0,param_2,__s_00,&local_a8,param_3);
      memset(__s_00,0,__n);
    }
    lVar16 = lVar16 + __n;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  if (local_f0 != (void *)0x0) {
    operator_delete(local_f0);
  }
  if (local_d8 != (void *)0x0) {
    operator_delete(local_d8);
  }
  if (local_c0 != (void *)0x0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar8 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


