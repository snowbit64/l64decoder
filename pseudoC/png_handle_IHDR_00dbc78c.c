// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_IHDR
// Entry Point: 00dbc78c
// Size: 380 bytes
// Signature: undefined png_handle_IHDR(void)


void png_handle_IHDR(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  uint local_48;
  uint local_44;
  byte local_40;
  byte local_3f;
  undefined local_3e;
  undefined local_3d;
  undefined local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(param_1 + 0x164) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"out of place");
  }
  if (param_3 == 0xd) {
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 1;
    png_read_data(param_1,&local_48,0xd);
    png_calculate_crc(param_1,&local_48,0xd);
    png_crc_finish(param_1,0);
    uVar3 = ((ulong)local_48 << 0x20 & 0xff00ff00ff00ff00) >> 8 |
            ((ulong)local_48 << 0x20 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | uVar3 << 0x10;
    if (-1 < (long)uVar3) {
      uVar1 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      if (-1 < (int)uVar1) {
        *(int *)(param_1 + 0x230) = (int)(uVar3 >> 0x20);
        *(uint *)(param_1 + 0x234) = uVar1;
        *(byte *)(param_1 + 0x2a0) = local_40;
        iVar4 = (int)(0x401020103 >> (((ulong)(local_3f - 2) & 7) << 3));
        if (4 < local_3f - 2) {
          iVar4 = 1;
        }
        *(undefined *)(param_1 + 0x29c) = local_3c;
        *(byte *)(param_1 + 0x29f) = local_3f;
        uVar1 = iVar4 * (uint)local_40;
        *(undefined *)(param_1 + 0x41c) = local_3d;
        *(undefined *)(param_1 + 0x458) = local_3e;
        *(char *)(param_1 + 0x2a3) = (char)iVar4;
        *(char *)(param_1 + 0x2a2) = (char)uVar1;
        if ((uVar1 & 0xff) < 8) {
          uVar3 = ((ulong)uVar1 & 0xff) * (uVar3 >> 0x20) + 7 >> 3;
        }
        else {
          uVar3 = (ulong)(uVar1 >> 3 & 0x1f) * (uVar3 >> 0x20);
        }
        *(ulong *)(param_1 + 0x240) = uVar3;
        png_set_IHDR(param_1,param_2);
        if (*(long *)(lVar2 + 0x28) == local_38) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"PNG unsigned integer out of range");
  }
                    /* WARNING: Subroutine does not return */
  png_chunk_error(param_1,"invalid");
}


