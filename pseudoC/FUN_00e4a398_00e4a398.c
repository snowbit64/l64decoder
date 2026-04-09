// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4a398
// Entry Point: 00e4a398
// Size: 156 bytes
// Signature: undefined FUN_00e4a398(void)


undefined4 FUN_00e4a398(long param_1,void *param_2,ulong param_3)

{
  size_t sVar1;
  void *__src;
  undefined4 uVar2;
  
  __src = *(void **)(param_1 + 0x40);
  if (__src == (void *)0x0) {
    uVar2 = 1;
    sVar1 = fread(param_2,param_3 & 0xffffffff,1,*(FILE **)(param_1 + 0x30));
    if (sVar1 != 1) {
      *(undefined4 *)(param_1 + 0x98) = 1;
      uVar2 = 0;
    }
  }
  else {
    param_3 = param_3 & 0xffffffff;
    if (*(ulong *)(param_1 + 0x50) < (long)__src + param_3) {
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x98) = 1;
    }
    else {
      memcpy(param_2,__src,param_3);
      uVar2 = 1;
      *(ulong *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + param_3;
    }
  }
  return uVar2;
}


