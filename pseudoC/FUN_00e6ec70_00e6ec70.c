// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e6ec70
// Entry Point: 00e6ec70
// Size: 968 bytes
// Signature: undefined FUN_00e6ec70(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined8 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined2 param_14, undefined4 param_15)


void FUN_00e6ec70(long param_1,uint param_2,uint param_3,long param_4,long param_5,int param_6,
                 int param_7,long param_8,long param_9,long param_10,uint param_11,uint param_12,
                 int param_13,short param_14,int param_15)

{
  int iVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  int local_90;
  int local_8c;
  uint local_74;
  undefined8 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  local_70 = 0;
  if (param_7 + 3 <= param_6) {
    ec_enc_bit_logp(param_10,param_13,3);
  }
  if (param_13 == 0) {
    uVar14 = -(ulong)(param_12 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_12 << 1;
    local_90 = (int)*(short *)(&DAT_004c6060 + uVar14);
    local_8c = (int)*(short *)(&DAT_004c6b68 + uVar14);
  }
  else {
    local_90 = 0x1333;
    local_8c = 0;
  }
  if ((int)param_2 < (int)param_3) {
    iVar13 = 0;
    iVar8 = param_11 * 3;
    if ((int)param_11 < 2) {
      param_11 = 1;
    }
    iVar11 = *(int *)(param_1 + 8);
    uVar15 = param_2;
    do {
      uVar14 = 0;
      uVar12 = uVar15;
      if (0x13 < (int)uVar15) {
        uVar12 = 0x14;
      }
      do {
        uVar4 = uVar15 + iVar11 * (int)uVar14;
        uVar10 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
        iVar2 = *(int *)((long)&local_70 + uVar14 * 4);
        sVar3 = *(short *)(param_5 + uVar10);
        iVar11 = (int)sVar3;
        if (sVar3 < -0x23ff) {
          iVar11 = -0x2400;
        }
        iVar9 = (int)*(short *)(param_4 + uVar10);
        iVar1 = iVar2 + (local_8c * iVar11 + 0x80 >> 8);
        iVar5 = iVar9 * 0x80 - iVar1;
        local_74 = iVar5 + 0x10000 >> 0x11;
        if (iVar5 < -0x10000) {
          iVar11 = (int)sVar3 - (int)param_14;
          if (iVar11 == -0x7000 || iVar11 + 0x7000 < 0 != SCARRY4(iVar11,0x7000)) {
            iVar11 = -0x7000;
          }
          iVar6 = (short)iVar11 - iVar9;
          if (iVar6 != 0 && iVar9 <= (short)iVar11) {
            local_74 = local_74 + (iVar6 >> 10);
            local_74 = local_74 & (int)local_74 >> 0x1f;
          }
        }
        uVar4 = local_74;
        iVar11 = (param_6 + 0x20) -
                 (*(int *)(param_10 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_10 + 0x20)));
        if (((uVar15 != param_2) && (iVar9 = iVar11 + iVar8 * (uVar15 - param_3), iVar9 < 0x1e)) &&
           (iVar9 < 0x18)) {
          if (0 < (int)local_74) {
            local_74 = 1;
          }
          if ((iVar9 < 0x10) && ((int)local_74 < 0)) {
            local_74 = 0xffffffff;
          }
        }
        if (param_15 != 0 && 1 < (int)uVar15) {
          local_74 = local_74 & (int)local_74 >> 0x1f;
        }
        if (iVar11 < 0xf) {
          if (iVar11 < 2) {
            if (iVar11 == 1) {
              local_74 = local_74 & (int)local_74 >> 0x1f;
              ec_enc_bit_logp(param_10,-local_74,1);
            }
            else {
              local_74 = 0xffffffff;
            }
          }
          else {
            if (0 < (int)local_74) {
              local_74 = 1;
            }
            if ((int)local_74 < 0) {
              local_74 = 0xffffffff;
            }
            ec_enc_icdf(param_10,local_74 << 1 ^ (int)local_74 >> 0x1f,&DAT_00567903,2);
          }
        }
        else {
          ec_laplace_encode(param_10,&local_74,
                            (ulong)*(byte *)(param_8 +
                                            (-(ulong)(uVar12 >> 0x1f) & 0xfffffffe00000000 |
                                            (ulong)uVar12 << 1)) << 7,
                            (ulong)*(byte *)(param_8 + ((long)(int)uVar12 << 1 | 1U)) << 6);
        }
        iVar11 = uVar4 - local_74;
        iVar1 = local_74 * 0x20000 + iVar1;
        iVar9 = -iVar11;
        if (-1 < iVar11) {
          iVar9 = iVar11;
        }
        iVar11 = *(int *)(param_1 + 8);
        if (iVar1 < -0x37ffff) {
          iVar1 = -0x380000;
        }
        uVar4 = uVar15 + iVar11 * (int)uVar14;
        iVar13 = iVar9 + iVar13;
        uVar10 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
        *(uint *)((long)&local_70 + uVar14 * 4) =
             (local_74 * 0x20000 + iVar2) - local_90 * (short)(local_74 << 2);
        uVar14 = uVar14 + 1;
        *(short *)(param_9 + uVar10) = (short)(iVar5 + 0x40U >> 7) + (short)local_74 * -0x400;
        *(short *)(param_5 + uVar10) = (short)(iVar1 + 0x40U >> 7);
      } while (param_11 != uVar14);
      uVar15 = uVar15 + 1;
    } while (uVar15 != param_3);
  }
  else {
    iVar13 = 0;
  }
  if (param_15 != 0) {
    iVar13 = 0;
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar13);
}


