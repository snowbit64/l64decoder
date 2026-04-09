// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_decode_native
// Entry Point: 00e5df48
// Size: 896 bytes
// Signature: undefined opus_decode_native(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)


ulong opus_decode_native(long param_1,byte *param_2,int param_3,long param_4,ulong param_5,
                        uint param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  short *psVar14;
  undefined auStack_d0 [4];
  int local_cc;
  short local_c8 [48];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_6 < 2) {
    iVar11 = (int)param_5;
    if (((param_2 == (byte *)0x0) || (param_3 == 0)) || (param_6 != 0)) {
      iVar8 = *(int *)(param_1 + 0xc) / 400;
      iVar10 = 0;
      if (iVar8 != 0) {
        iVar10 = iVar11 / iVar8;
      }
      if (iVar11 != iVar10 * iVar8) goto LAB_00e5e130;
    }
    if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
      uVar12 = 0;
      do {
        iVar10 = (int)uVar12;
        uVar7 = FUN_00e5e2c8(param_1,0,0,param_4 + (long)(*(int *)(param_1 + 8) * iVar10) * 2,
                             iVar11 - iVar10,0);
        uVar6 = (int)uVar7 + iVar10;
        uVar12 = (ulong)uVar6;
        if ((int)uVar7 < 0) goto LAB_00e5e2b0;
      } while ((int)uVar6 < iVar11);
LAB_00e5e060:
      *(uint *)(param_1 + 0x48) = uVar6;
      goto LAB_00e5e134;
    }
    if (-1 < param_3) {
      bVar2 = *param_2;
      iVar10 = 1000;
      if ((bVar2 & 0x60) == 0x60) {
        iVar10 = 0x3e9;
      }
      if ((bVar2 & 0x80) != 0) {
        iVar10 = 0x3ea;
      }
      if ((char)bVar2 < '\0') {
        iVar8 = 0x44d;
        if ((bVar2 >> 5 & 3) != 0) {
          iVar8 = (bVar2 >> 5 & 3) + 0x44e;
        }
      }
      else if ((bVar2 & 0x60) == 0x60) {
        iVar8 = 0x450;
        if ((bVar2 & 0x10) != 0) {
          iVar8 = 0x451;
        }
      }
      else {
        iVar8 = (bVar2 >> 5 & 3) + 0x44d;
      }
      iVar5 = opus_packet_get_samples_per_frame(param_2,*(undefined4 *)(param_1 + 0xc));
      uVar9 = 1;
      if ((*param_2 & 4) != 0) {
        uVar9 = 2;
      }
      uVar6 = opus_packet_parse_impl
                        (param_2,param_3,param_7,auStack_d0,0,local_c8,&local_cc,param_8);
      uVar12 = (ulong)uVar6;
      if ((int)uVar6 < 0) goto LAB_00e5e134;
      param_2 = param_2 + local_cc;
      if (param_6 == 0) {
        if (iVar11 < (int)(uVar6 * iVar5)) {
          uVar12 = 0xfffffffe;
        }
        else {
          *(int *)(param_1 + 0x40) = iVar5;
          *(int *)(param_1 + 0x34) = iVar8;
          *(int *)(param_1 + 0x38) = iVar10;
          *(undefined4 *)(param_1 + 0x30) = uVar9;
          if (uVar6 != 0) {
            uVar7 = 0;
            uVar13 = uVar12;
            psVar14 = local_c8;
            do {
              iVar10 = (int)uVar7;
              uVar7 = FUN_00e5e2c8(param_1,param_2,(long)*psVar14,
                                   param_4 + (long)(*(int *)(param_1 + 8) * iVar10) * 2,
                                   iVar11 - iVar10,0);
              if ((int)uVar7 < 0) goto LAB_00e5e2b0;
              uVar12 = (ulong)(uint)((int)uVar7 + iVar10);
              uVar13 = uVar13 - 1;
              param_2 = param_2 + *psVar14;
              uVar7 = uVar12;
              psVar14 = psVar14 + 1;
            } while (uVar13 != 0);
          }
          *(int *)(param_1 + 0x48) = (int)uVar12;
        }
        goto LAB_00e5e134;
      }
      if (((iVar5 <= iVar11) && (iVar10 != 0x3ea)) && (*(int *)(param_1 + 0x38) != 0x3ea)) {
        iVar3 = iVar11 - iVar5;
        if (iVar3 != 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x48);
          uVar12 = opus_decode_native(param_1,0,0,param_4,iVar3,0,0,0,param_9);
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 & 0xffffffff;
            *(undefined4 *)(param_1 + 0x48) = uVar1;
            goto LAB_00e5e134;
          }
        }
        *(int *)(param_1 + 0x40) = iVar5;
        *(int *)(param_1 + 0x34) = iVar8;
        *(int *)(param_1 + 0x38) = iVar10;
        *(undefined4 *)(param_1 + 0x30) = uVar9;
        uVar7 = FUN_00e5e2c8(param_1,param_2,(long)local_c8[0],
                             param_4 + (long)(*(int *)(param_1 + 8) * iVar3) * 2,iVar5,1);
        if ((int)uVar7 < 0) {
LAB_00e5e2b0:
          uVar12 = uVar7 & 0xffffffff;
        }
        else {
          *(int *)(param_1 + 0x48) = iVar11;
          uVar12 = param_5 & 0xffffffff;
        }
        goto LAB_00e5e134;
      }
      iVar8 = *(int *)(param_1 + 0xc) / 400;
      iVar10 = 0;
      if (iVar8 != 0) {
        iVar10 = iVar11 / iVar8;
      }
      if (iVar11 == iVar10 * iVar8) {
        uVar12 = 0;
        do {
          iVar10 = (int)uVar12;
          uVar7 = FUN_00e5e2c8(param_1,0,0,param_4 + (long)(*(int *)(param_1 + 8) * iVar10) * 2,
                               iVar11 - iVar10,0);
          uVar6 = (int)uVar7 + iVar10;
          uVar12 = (ulong)uVar6;
          if ((int)uVar7 < 0) goto LAB_00e5e2b0;
        } while ((int)uVar6 < iVar11);
        goto LAB_00e5e060;
      }
    }
  }
LAB_00e5e130:
  uVar12 = 0xffffffff;
LAB_00e5e134:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


