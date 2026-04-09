// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_cHRM
// Entry Point: 00dbceec
// Size: 480 bytes
// Signature: undefined png_handle_cHRM(void)


void png_handle_cHRM(long param_1,undefined8 param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  char *pcVar12;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  long local_38;
  
  lVar10 = tpidr_el0;
  local_38 = *(long *)(lVar10 + 0x28);
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) & 6) == 0) {
    if (param_3 == 0x20) {
      png_read_data(param_1,&local_58,0x20);
      png_calculate_crc(param_1,&local_58,0x20);
      iVar11 = png_crc_finish(param_1,0);
      if (iVar11 != 0) goto LAB_00dbd068;
      uVar2 = (local_58 & 0xff00ff00) >> 8 | (local_58 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar3 = (uStack_54 & 0xff00ff00) >> 8 | (uStack_54 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar4 = (local_50 & 0xff00ff00) >> 8 | (local_50 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      local_60 = uVar2;
      if ((int)uVar2 < 0) {
        local_60 = 0xffffffff;
      }
      uVar5 = (uStack_4c & 0xff00ff00) >> 8 | (uStack_4c & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      uStack_5c = uVar3;
      if ((int)uVar3 < 0) {
        uStack_5c = 0xffffffff;
      }
      local_78 = uVar4;
      if ((int)uVar4 < 0) {
        local_78 = 0xffffffff;
      }
      uStack_74 = uVar5;
      if ((int)uVar5 < 0) {
        uStack_74 = 0xffffffff;
      }
      uVar6 = (local_48 & 0xff00ff00) >> 8 | (local_48 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      uVar7 = (uStack_44 & 0xff00ff00) >> 8 | (uStack_44 & 0xff00ff) << 8;
      uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
      local_70 = uVar6;
      if ((int)uVar6 < 0) {
        local_70 = 0xffffffff;
      }
      uStack_6c = uVar7;
      if ((int)uVar7 < 0) {
        uStack_6c = 0xffffffff;
      }
      uVar8 = (local_40 & 0xff00ff00) >> 8 | (local_40 & 0xff00ff) << 8;
      uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
      uVar9 = (uStack_3c & 0xff00ff00) >> 8 | (uStack_3c & 0xff00ff) << 8;
      uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
      local_68 = uVar8;
      if ((int)uVar8 < 0) {
        local_68 = 0xffffffff;
      }
      uStack_64 = uVar9;
      if ((int)uVar9 < 0) {
        uStack_64 = 0xffffffff;
      }
      if ((((((int)uVar2 < 0) || ((int)uVar3 < 0)) || ((int)uVar4 < 0)) ||
          (((int)uVar5 < 0 || ((int)uVar6 < 0)))) ||
         (((int)uVar7 < 0 || (((int)uVar8 < 0 || ((int)uVar9 < 0)))))) {
        pcVar12 = "invalid values";
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0x522);
        if ((short)uVar1 < 0) goto LAB_00dbd068;
        if ((uVar1 >> 4 & 1) == 0) {
          *(ushort *)(param_1 + 0x522) = uVar1 | 0x10;
          png_colorspace_set_chromaticities(param_1,param_1 + 0x4d8,&local_78,1);
          png_colorspace_sync(param_1,param_2);
          goto LAB_00dbd068;
        }
        *(ushort *)(param_1 + 0x522) = uVar1 | 0x8000;
        png_colorspace_sync(param_1,param_2);
        pcVar12 = "duplicate";
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      pcVar12 = "invalid";
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar12 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar12);
LAB_00dbd068:
  if (*(long *)(lVar10 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


