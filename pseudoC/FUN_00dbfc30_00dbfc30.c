// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dbfc30
// Entry Point: 00dbfc30
// Size: 300 bytes
// Signature: undefined FUN_00dbfc30(void)


undefined8 FUN_00dbfc30(long param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x478) != 0) {
    png_free(param_1,*(long *)(param_1 + 0x478));
    *(undefined8 *)(param_1 + 0x478) = 0;
  }
  if ((*(ulong *)(param_1 + 0x468) + 1 < 2) || ((ulong)param_2 <= *(ulong *)(param_1 + 0x468))) {
    uVar1 = *(undefined4 *)(param_1 + 0x250);
    *(undefined *)(param_1 + 0x474) = 0;
    *(ulong *)(param_1 + 0x480) = (ulong)param_2;
    *(char *)(param_1 + 0x473) = (char)uVar1;
    *(char *)(param_1 + 0x470) = (char)((uint)uVar1 >> 0x18);
    *(char *)(param_1 + 0x471) = (char)((uint)uVar1 >> 0x10);
    *(char *)(param_1 + 0x472) = (char)((uint)uVar1 >> 8);
    *(char *)(param_1 + 0x488) = (char)*(undefined4 *)(param_1 + 0x164);
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x478) = 0;
      goto LAB_00dbfd3c;
    }
    lVar2 = png_malloc_warn(param_1,(ulong)param_2);
    *(long *)(param_1 + 0x478) = lVar2;
  }
  else {
    lVar2 = 0;
  }
  if ((param_2 != 0) && (lVar2 == 0)) {
    png_crc_finish(param_1,param_2);
    png_chunk_benign_error(param_1,"unknown chunk exceeds memory limits");
    return 0;
  }
  if (param_2 != 0) {
    png_read_data(param_1,lVar2,param_2);
    png_calculate_crc(param_1,lVar2,param_2);
  }
LAB_00dbfd3c:
  png_crc_finish(param_1,0);
  return 1;
}


