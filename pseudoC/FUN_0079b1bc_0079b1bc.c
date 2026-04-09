// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079b1bc
// Entry Point: 0079b1bc
// Size: 100 bytes
// Signature: undefined FUN_0079b1bc(void)


void FUN_0079b1bc(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  Mutex::enterCriticalSection();
  uVar1 = DAT_02110210;
  uVar2 = DAT_02110200 - DAT_021101f8;
  Mutex::leaveCriticalSection();
  *(int *)(param_1 + 0x100) = (int)(uVar2 >> 3);
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x118) = 1;
  return;
}


