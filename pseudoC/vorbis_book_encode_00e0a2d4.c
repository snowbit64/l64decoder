// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_book_encode
// Entry Point: 00e0a2d4
// Size: 108 bytes
// Signature: undefined vorbis_book_encode(void)


undefined vorbis_book_encode(long param_1,uint param_2,undefined8 param_3)

{
  ulong uVar1;
  
  if (-1 < (int)param_2) {
    uVar1 = (ulong)param_2;
    if ((long)uVar1 < *(long *)(*(long *)(param_1 + 0x18) + 8)) {
      oggpack_write(param_3,*(undefined4 *)(*(long *)(param_1 + 0x28) + uVar1 * 4),
                    *(undefined *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar1));
      return *(undefined *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar1);
    }
  }
  return 0;
}


