// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unquant_coarse_energy
// Entry Point: 00e6f360
// Size: 572 bytes
// Signature: undefined unquant_coarse_energy(void)


void unquant_coarse_energy
               (long param_1,uint param_2,uint param_3,long param_4,int param_5,long param_6,
               uint param_7,int param_8)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  int local_7c;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_70 = 0;
  if (param_5 == 0) {
    lVar10 = (long)param_8 * 2;
    iVar13 = (int)*(short *)(&DAT_004c6060 + lVar10);
    local_7c = (int)*(short *)(&DAT_004c6b68 + lVar10);
  }
  else {
    local_7c = 0;
    iVar13 = 0x1333;
  }
  if ((int)param_2 < (int)param_3) {
    iVar1 = *(int *)(param_6 + 8);
    lVar10 = (long)param_5 * 0x2a + (long)param_8 * 0x54;
    if ((int)param_7 < 2) {
      param_7 = 1;
    }
    do {
      uVar7 = param_2;
      if (0x13 < (int)param_2) {
        uVar7 = 0x14;
      }
      uVar12 = 0;
      do {
        iVar6 = (iVar1 * 8 + 0x20) -
                (*(int *)(param_6 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20)));
        if (iVar6 < 0xf) {
          if (iVar6 < 2) {
            if (iVar6 == 1) {
              iVar6 = ec_dec_bit_logp(param_6,1);
              uVar5 = -iVar6;
            }
            else {
              uVar5 = 0xffffffff;
            }
          }
          else {
            uVar5 = ec_dec_icdf(param_6,&DAT_00567903,2);
            uVar5 = -(uVar5 & 1) ^ (int)uVar5 >> 1;
          }
        }
        else {
          uVar5 = ec_laplace_decode(param_6,(ulong)(byte)(&UNK_005677b3)
                                                         [(-(ulong)(uVar7 >> 0x1f) &
                                                           0xfffffffe00000000 | (ulong)uVar7 << 1) +
                                                          lVar10] << 7,
                                    (ulong)(byte)(&UNK_005677b3)
                                                 [(int)((ulong)uVar7 << 1) + lVar10 + 1] << 6);
        }
        lVar11 = uVar12 * 4;
        uVar3 = param_2 + *(int *)(param_1 + 8) * (int)uVar12;
        uVar12 = uVar12 + 1;
        uVar8 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
        iVar6 = *(int *)((long)&local_70 + lVar11) + uVar5 * 0x20000;
        sVar2 = *(short *)(param_4 + uVar8);
        iVar9 = (int)sVar2;
        if (sVar2 < -0x23ff) {
          iVar9 = -0x2400;
        }
        iVar9 = iVar6 + (local_7c * iVar9 + 0x80 >> 8);
        if (iVar9 < -0x37ffff) {
          iVar9 = -0x380000;
        }
        *(int *)((long)&local_70 + lVar11) = iVar6 - iVar13 * (short)(uVar5 << 2);
        *(short *)(param_4 + uVar8) = (short)(iVar9 + 0x40U >> 7);
      } while (param_7 != uVar12);
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


