// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0c9ec
// Entry Point: 00f0c9ec
// Size: 52 bytes
// Signature: undefined FUN_00f0c9ec(void)


void FUN_00f0c9ec(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x21) == '\x02') {
    FUN_00f0c8bc(lVar1,param_3);
    return;
  }
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xfb;
  uVar2 = *(undefined8 *)(lVar1 + 0x30);
  *(long *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  return;
}


