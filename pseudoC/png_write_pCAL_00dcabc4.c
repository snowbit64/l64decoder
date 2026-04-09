// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_pCAL
// Entry Point: 00dcabc4
// Size: 748 bytes
// Signature: undefined png_write_pCAL(void)


void png_write_pCAL(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   int param_5,uint param_6,char *param_7,char **param_8)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  size_t *psVar6;
  size_t sVar7;
  char **ppcVar8;
  ulong uVar9;
  size_t *psVar10;
  char *pcVar11;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  uint local_c8;
  undefined auStack_c4 [80];
  undefined local_74;
  undefined local_73;
  undefined local_72;
  undefined local_71;
  undefined4 local_70;
  undefined local_6c;
  undefined local_6b;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (3 < param_5) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Unrecognized equation type for pCAL chunk");
  }
  iVar4 = png_check_keyword(param_1,param_2,auStack_c4);
  if (iVar4 != 0) {
    uVar15 = (ulong)(iVar4 + 1U);
    sVar5 = strlen(param_7);
    if (param_6 != 0) {
      sVar5 = sVar5 + 1;
    }
    lVar14 = uVar15 + sVar5 + 10;
    uVar13 = (undefined4)lVar14;
    psVar6 = (size_t *)
             png_malloc(param_1,-(ulong)(param_6 >> 0x1f) & 0xfffffff800000000 | (ulong)param_6 << 3
                       );
    uVar12 = (ulong)(param_6 - 1);
    if (0 < (int)param_6) {
      uVar9 = (ulong)param_6;
      ppcVar8 = param_8;
      psVar10 = psVar6;
      do {
        sVar7 = strlen(*ppcVar8);
        bVar3 = uVar12 != 0;
        uVar12 = uVar12 - 1;
        if (bVar3) {
          sVar7 = sVar7 + 1;
        }
        uVar9 = uVar9 - 1;
        lVar14 = sVar7 + lVar14;
        uVar13 = (undefined4)lVar14;
        *psVar10 = sVar7;
        ppcVar8 = ppcVar8 + 1;
        psVar10 = psVar10 + 1;
      } while (uVar9 != 0);
    }
    if (param_1 == 0) {
      bVar3 = false;
    }
    else {
      local_74 = (undefined)((uint)uVar13 >> 0x18);
      *(undefined4 *)(param_1 + 0x4ac) = 0x22;
      local_73 = (undefined)((uint)uVar13 >> 0x10);
      local_72 = (undefined)((uint)uVar13 >> 8);
      local_71 = (undefined)uVar13;
      local_70 = 0x4c414370;
      png_write_data(param_1,&local_74,8);
      *(undefined4 *)(param_1 + 0x250) = 0x7043414c;
      png_reset_crc(param_1);
      png_calculate_crc(param_1,&local_70,4);
      *(undefined4 *)(param_1 + 0x4ac) = 0x42;
      if (iVar4 + 1U != 0) {
        png_write_data(param_1,auStack_c4,uVar15);
        png_calculate_crc(param_1,auStack_c4,uVar15);
      }
      bVar3 = true;
    }
    png_save_int_32(&local_74,param_3);
    png_save_int_32(&local_70,param_4);
    local_6c = (undefined)param_5;
    local_6b = (undefined)param_6;
    if (bVar3) {
      png_write_data(param_1,&local_74,10);
      png_calculate_crc(param_1,&local_74,10);
      if ((sVar5 != 0) && (param_7 != (char *)0x0)) {
        png_write_data(param_1,param_7,sVar5);
        png_calculate_crc(param_1,param_7,sVar5);
      }
      if (!(bool)((int)param_6 < 1 | bVar3 ^ 1U)) {
        uVar15 = (ulong)param_6;
        psVar10 = psVar6;
        do {
          pcVar11 = *param_8;
          if ((pcVar11 != (char *)0x0) && (sVar5 = *psVar10, sVar5 != 0)) {
            png_write_data(param_1,pcVar11,sVar5);
            png_calculate_crc(param_1,pcVar11,sVar5);
          }
          psVar10 = psVar10 + 1;
          param_8 = param_8 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
    png_free(param_1,psVar6);
    if (param_1 != 0) {
      uVar1 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
      local_c8 = uVar1 >> 0x10 | uVar1 << 0x10;
      *(undefined4 *)(param_1 + 0x4ac) = 0x82;
      png_write_data(param_1,&local_c8,4);
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"pCAL: invalid keyword");
}


