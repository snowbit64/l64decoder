// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_iCCP
// Entry Point: 00dc92c0
// Size: 712 bytes
// Signature: undefined png_write_iCCP(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_write_iCCP(long param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long **pplVar11;
  byte *local_4d0;
  ulong uStack_4c8;
  uint local_4c0;
  undefined auStack_4bc [1032];
  undefined auStack_b4 [84];
  uint local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (param_3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"No profile for iCCP chunk");
  }
  uVar10 = (ulong)*param_3 << 0x18 | (ulong)param_3[1] << 0x10 | (ulong)param_3[2] << 8 |
           (ulong)param_3[3];
  if ((uint)uVar10 < 0x84) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"ICC profile too short");
  }
  if ((3 < param_3[8]) && ((param_3[3] & 3) != 0)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"ICC profile length invalid (not a multiple of 4)");
  }
  iVar7 = png_check_keyword(param_1,param_2,auStack_b4);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"iCCP: invalid keyword");
  }
  iVar1 = iVar7 + 2;
  auStack_b4[iVar7 + 1] = 0;
  local_4c0 = 0;
  local_4d0 = param_3;
  uStack_4c8 = uVar10;
  iVar7 = FUN_00dc9588(param_1,0x69434350,&local_4d0,iVar1);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,*(undefined8 *)(param_1 + 0x1a8));
  }
  if (param_1 == 0) {
    if ((local_4c0 < 0x401) || (_DAT_000001e8 == (long *)0x0)) {
      if (0x400 < local_4c0) goto LAB_00dc9574;
      goto LAB_00dc94fc;
    }
    uVar9 = local_4c0 - 0x400;
    plVar8 = _DAT_000001e8;
    do {
      bVar5 = uVar9 < _DAT_000001f0;
      uVar3 = uVar9 - _DAT_000001f0;
      uVar9 = 0;
      if (!bVar5) {
        uVar9 = uVar3;
      }
      bVar6 = bVar5 || uVar3 == 0;
    } while ((!bVar5 && uVar3 != 0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0));
  }
  else {
    iVar7 = local_4c0 + iVar1;
    *(undefined4 *)(param_1 + 0x4ac) = 0x22;
    local_60 = CONCAT13((char)iVar7,
                        CONCAT12((char)((uint)iVar7 >> 8),
                                 CONCAT11((char)((uint)iVar7 >> 0x10),(char)((uint)iVar7 >> 0x18))))
    ;
    local_5c = 0x50434369;
    png_write_data(param_1,&local_60,8);
    *(undefined4 *)(param_1 + 0x250) = 0x69434350;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_5c,4);
    *(undefined4 *)(param_1 + 0x4ac) = 0x42;
    if (iVar1 != 0) {
      png_write_data(param_1,auStack_b4,iVar1);
      png_calculate_crc(param_1,auStack_b4,iVar1);
    }
    puVar2 = auStack_4bc;
    pplVar11 = *(long ***)(param_1 + 0x1e8);
    uVar3 = local_4c0;
    uVar9 = local_4c0;
    if (0x3ff < local_4c0) {
      uVar3 = 0x400;
    }
    while( true ) {
      if (uVar3 != 0) {
        png_write_data(param_1,puVar2,uVar3);
        png_calculate_crc(param_1,puVar2,uVar3);
      }
      uVar9 = uVar9 - uVar3;
      bVar6 = uVar9 == 0;
      if (bVar6 || pplVar11 == (long **)0x0) break;
      puVar2 = (undefined *)(pplVar11 + 1);
      pplVar11 = (long **)*pplVar11;
      uVar3 = uVar9;
      if (*(uint *)(param_1 + 0x1f0) <= uVar9) {
        uVar3 = *(uint *)(param_1 + 0x1f0);
      }
    }
  }
  if (!bVar6) {
LAB_00dc9574:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"error writing ancillary chunked compressed data");
  }
  if (param_1 != 0) {
    uVar9 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
    local_60 = uVar9 >> 0x10 | uVar9 << 0x10;
    *(undefined4 *)(param_1 + 0x4ac) = 0x82;
    png_write_data(param_1,&local_60,4);
  }
LAB_00dc94fc:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


