// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_sig
// Entry Point: 00dbc0dc
// Size: 196 bytes
// Signature: undefined png_read_sig(void)


void png_read_sig(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x2a5);
  uVar3 = (ulong)bVar1;
  if (bVar1 < 8) {
    param_2 = param_2 + 0x2c;
    *(undefined4 *)(param_1 + 0x4ac) = 0x11;
    png_read_data(param_1,param_2 + uVar3,8 - uVar3);
    *(undefined *)(param_1 + 0x2a5) = 8;
    iVar2 = png_sig_cmp(param_2,uVar3,8 - uVar3);
    if (iVar2 != 0) {
      if ((bVar1 < 4) && (iVar2 = png_sig_cmp(param_2,uVar3,4 - uVar3), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Not a PNG file");
      }
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"PNG file corrupted by ASCII conversion");
    }
    if (bVar1 < 3) {
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x1000;
    }
  }
  return;
}


