// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_page_checksum_set
// Entry Point: 00e23c98
// Size: 136 bytes
// Signature: undefined ogg_page_checksum_set(void)


void ogg_page_checksum_set(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    *(undefined *)(*param_1 + 0x16) = 0;
    *(undefined *)(*param_1 + 0x17) = 0;
    *(undefined *)(*param_1 + 0x18) = 0;
    *(undefined *)(*param_1 + 0x19) = 0;
    lVar3 = *param_1;
    uVar2 = FUN_00e23d20(0,lVar3,*(undefined4 *)(param_1 + 1));
    uVar1 = FUN_00e23d20(uVar2,param_1[2],*(undefined4 *)(param_1 + 3));
    *(char *)(lVar3 + 0x16) = (char)uVar1;
    *(char *)(*param_1 + 0x17) = (char)((uint)uVar1 >> 8);
    *(char *)(*param_1 + 0x18) = (char)((uint)uVar1 >> 0x10);
    *(char *)(*param_1 + 0x19) = (char)((uint)uVar1 >> 0x18);
  }
  return;
}


