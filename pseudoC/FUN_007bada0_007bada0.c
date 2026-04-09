// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bada0
// Entry Point: 007bada0
// Size: 44 bytes
// Signature: undefined FUN_007bada0(void)


void FUN_007bada0(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(param_1 + 0x50);
  cVar2 = *(char *)(param_1 + 0x51);
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(bool *)(param_2 + 0x100) = cVar1 != '\0' && cVar2 != '\0';
  return;
}


