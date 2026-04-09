// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6100
// Entry Point: 006e6100
// Size: 24 bytes
// Signature: undefined FUN_006e6100(void)


void FUN_006e6100(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (3 < (int)uVar1) {
    uVar1 = 4;
  }
  EnvUtil::setCurrentProcessPriority(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  return;
}


