// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f19a38
// Entry Point: 00f19a38
// Size: 144 bytes
// Signature: undefined FUN_00f19a38(void)


void FUN_00f19a38(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_2 + 3);
  if ((char)bVar1 < '\0') {
    if (bVar1 == 0x80) {
      pcVar2 = *(code **)(param_2 + *(int *)(param_2 + 4) + 8);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
    }
  }
  else {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x18) + (ulong)bVar1 * 8 + 0xc38);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_1,param_2 + 0x10);
    }
  }
  FUN_00f10568(param_1,param_2,(long)*(int *)(param_2 + 4) + 0x10,*(undefined *)(param_2 + 2),
               param_3);
  return;
}


