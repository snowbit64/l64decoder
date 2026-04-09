// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_oFFs
// Entry Point: 00dbe660
// Size: 448 bytes
// Signature: undefined png_handle_oFFs(void)


void png_handle_oFFs(long param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  undefined local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) >> 2 & 1) == 0) {
    if ((param_2 != 0) && ((*(byte *)(param_2 + 9) & 1) != 0)) {
      png_crc_finish(param_1,param_3);
      pcVar4 = "duplicate";
      goto LAB_00dbe774;
    }
    if (param_3 != 9) {
      png_crc_finish(param_1,param_3);
      pcVar4 = "invalid";
      goto LAB_00dbe774;
    }
    png_read_data(param_1,&local_44,9);
    png_calculate_crc(param_1,&local_44,9);
    iVar3 = png_crc_finish(param_1,0);
    if (iVar3 == 0) {
      if ((char)local_44 < '\0') {
        uVar5 = -(-((uint)local_43 << 0x10 | (uint)local_44 << 0x18 | (uint)local_42 << 8 |
                   (uint)local_41) & 0x7fffffff);
        if ((char)local_40 < '\0') goto LAB_00dbe704;
LAB_00dbe7d0:
        uVar1 = (uint)local_40 << 0x18 | (uint)local_3f << 0x10 | (uint)local_3e << 8 |
                (uint)local_3d;
      }
      else {
        uVar5 = (uint)local_44 << 0x18 | (uint)local_43 << 0x10 | (uint)local_42 << 8 |
                (uint)local_41;
        if (-1 < (char)local_40) goto LAB_00dbe7d0;
LAB_00dbe704:
        uVar1 = -(-((uint)local_3f << 0x10 | (uint)local_40 << 0x18 | (uint)local_3e << 8 |
                   (uint)local_3d) & 0x7fffffff);
      }
      png_set_oFFs(param_1,param_2,uVar5,uVar1,local_3c);
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return;
      }
      goto LAB_00dbe80c;
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar4 = "out of place";
LAB_00dbe774:
    png_chunk_benign_error(param_1,pcVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_00dbe80c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


