// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_iTXt
// Entry Point: 00dca730
// Size: 996 bytes
// Signature: undefined png_write_iTXt(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_write_iTXt(long param_1,int param_2,undefined8 param_3,char *param_4,char *param_5,
                   char *param_6)

{
  int iVar1;
  char *__s;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  char *__s_00;
  char *__s_01;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  long *plVar13;
  uint uVar14;
  long **pplVar15;
  char *local_4e8;
  size_t sStack_4e0;
  uint local_4d8;
  undefined auStack_4d4 [1032];
  undefined auStack_cc [84];
  uint local_78;
  undefined4 local_74;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  iVar10 = png_check_keyword(param_1,param_3,auStack_cc);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"iTXt: invalid keyword");
  }
  uVar14 = param_2 + 1;
  if (3 < uVar14) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"iTXt: invalid compression");
  }
  __s = "";
  __s_00 = __s;
  if (param_4 != (char *)0x0) {
    __s_00 = param_4;
  }
  iVar1 = iVar10 + 3;
  auStack_cc[iVar10 + 1] = (char)(0x1000100 >> (ulong)(uVar14 * 8 & 0x1f));
  auStack_cc[iVar10 + 2] = 0;
  sVar12 = strlen(__s_00);
  uVar2 = sVar12 + 1;
  __s_01 = __s;
  if (param_5 != (char *)0x0) {
    __s_01 = param_5;
  }
  sVar12 = strlen(__s_01);
  if (param_6 != (char *)0x0) {
    __s = param_6;
  }
  uVar3 = sVar12 + 1;
  iVar11 = 0x7fffffff;
  if (uVar2 <= 0x7ffffffc - iVar10) {
    iVar11 = iVar1 + (int)uVar2;
  }
  iVar10 = 0x7fffffff;
  if (uVar3 <= 0x7fffffff - iVar11) {
    iVar10 = iVar11 + (int)uVar3;
  }
  sVar12 = strlen(__s);
  local_4d8 = 0;
  local_4e8 = __s;
  sStack_4e0 = sVar12;
  if ((uVar14 & 1) == 0) {
    if (0x7fffffff - iVar10 < sVar12) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"iTXt: uncompressed text too long");
    }
    local_4d8 = (uint)sVar12;
    if (param_1 == 0) goto LAB_00dcaa8c;
LAB_00dca878:
    iVar10 = (int)sVar12 + iVar10;
    *(undefined4 *)(param_1 + 0x4ac) = 0x22;
    local_78 = CONCAT13((char)iVar10,
                        CONCAT12((char)((uint)iVar10 >> 8),
                                 CONCAT11((char)((uint)iVar10 >> 0x10),(char)((uint)iVar10 >> 0x18))
                                ));
    local_74 = 0x74585469;
    png_write_data(param_1,&local_78,8);
    *(undefined4 *)(param_1 + 0x250) = 0x69545874;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_74,4);
    *(undefined4 *)(param_1 + 0x4ac) = 0x42;
    if (iVar1 != 0) {
      png_write_data(param_1,auStack_cc,iVar1);
      png_calculate_crc(param_1,auStack_cc,iVar1);
    }
    if ((uVar2 != 0) && (__s_00 != (char *)0x0)) {
      png_write_data(param_1,__s_00,uVar2);
      png_calculate_crc(param_1,__s_00,uVar2);
    }
    if ((uVar3 != 0) && (__s_01 != (char *)0x0)) {
      png_write_data(param_1,__s_01,uVar3);
      png_calculate_crc(param_1,__s_01,uVar3);
    }
    uVar5 = local_4d8;
    if ((uVar14 & 1) != 0) {
      puVar4 = auStack_4d4;
      pplVar15 = *(long ***)(param_1 + 0x1e8);
      uVar14 = local_4d8;
      if (0x3ff < local_4d8) {
        uVar5 = 0x400;
      }
      while( true ) {
        if (uVar5 != 0) {
          png_write_data(param_1,puVar4,uVar5);
          png_calculate_crc(param_1,puVar4,uVar5);
        }
        uVar14 = uVar14 - uVar5;
        bVar9 = uVar14 == 0;
        if (bVar9 || pplVar15 == (long **)0x0) break;
        puVar4 = (undefined *)(pplVar15 + 1);
        pplVar15 = (long **)*pplVar15;
        uVar5 = uVar14;
        if (*(uint *)(param_1 + 0x1f0) <= uVar14) {
          uVar5 = *(uint *)(param_1 + 0x1f0);
        }
      }
      bVar7 = false;
      goto joined_r0x00dcaac0;
    }
    if ((__s != (char *)0x0) && (local_4d8 != 0)) {
      png_write_data(param_1,__s,local_4d8);
      png_calculate_crc(param_1,__s,uVar5);
    }
  }
  else {
    iVar11 = FUN_00dc9588(param_1,0x69545874,&local_4e8,iVar10);
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,*(undefined8 *)(param_1 + 0x1a8));
    }
    if (param_1 != 0) {
      sVar12 = (size_t)local_4d8;
      goto LAB_00dca878;
    }
    bVar9 = local_4d8 < 0x401;
    bVar7 = true;
    if ((!bVar9) && (_DAT_000001e8 != (long *)0x0)) {
      uVar14 = local_4d8 - 0x400;
      plVar13 = _DAT_000001e8;
      do {
        bVar8 = uVar14 < _DAT_000001f0;
        uVar5 = uVar14 - _DAT_000001f0;
        uVar14 = 0;
        if (!bVar8) {
          uVar14 = uVar5;
        }
        bVar9 = bVar8 || uVar5 == 0;
        bVar7 = param_1 == 0;
      } while ((!bVar8 && uVar5 != 0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0));
    }
joined_r0x00dcaac0:
    if (!bVar9) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"error writing ancillary chunked compressed data");
    }
    if (bVar7) goto LAB_00dcaa8c;
  }
  uVar14 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
           (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
  local_78 = uVar14 >> 0x10 | uVar14 << 0x10;
  *(undefined4 *)(param_1 + 0x4ac) = 0x82;
  png_write_data(param_1,&local_78,4);
LAB_00dcaa8c:
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


