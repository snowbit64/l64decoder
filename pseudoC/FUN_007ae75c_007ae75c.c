// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae75c
// Entry Point: 007ae75c
// Size: 32 bytes
// Signature: undefined FUN_007ae75c(void)


void FUN_007ae75c(long param_1,long param_2)

{
  char cVar1;
  
  *(undefined4 *)(param_2 + 0x100) = 0;
  cVar1 = *(char *)(param_1 + 0x174);
  *(undefined4 *)(param_2 + 0x108) = 1;
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(param_1 + 0x170);
  }
  return;
}


