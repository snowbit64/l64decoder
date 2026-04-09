// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_colorspace_sync_info
// Entry Point: 00da9b3c
// Size: 176 bytes
// Signature: undefined png_colorspace_sync_info(void)


void png_colorspace_sync_info(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar3 = *(ushort *)(param_2 + 0x7e);
  uVar2 = *(uint *)(param_2 + 8);
  if (-1 < (short)uVar3) {
    uVar1 = (uVar3 >> 1 & 1) << 2;
    uVar4 = uVar2 & 0xfffff000 | uVar2 & 0x7f8 | (uVar3 >> 7 & 1) << 0xb;
    if ((uVar3 & 1) == 0) {
      uVar4 = uVar4 | uVar2 & 2 | uVar1;
    }
    else {
      uVar4 = uVar4 | uVar2 & 3 | uVar1 | 1;
    }
    *(uint *)(param_2 + 8) = uVar4;
    return;
  }
  *(uint *)(param_2 + 8) = uVar2 & 0xffffe7fa;
  if (param_1 != 0) {
    uVar4 = *(uint *)(param_2 + 300);
    if ((uVar4 >> 4 & 1) != 0) {
      png_free(param_1,*(undefined8 *)(param_2 + 0x80));
      png_free(param_1,*(undefined8 *)(param_2 + 0x88));
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(uint *)(param_2 + 8) = uVar2 & 0xffffe7fa;
    }
    *(uint *)(param_2 + 300) = uVar4 & 0xffffffef;
  }
  return;
}


