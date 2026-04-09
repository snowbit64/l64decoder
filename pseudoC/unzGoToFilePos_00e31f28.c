// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzGoToFilePos
// Entry Point: 00e31f28
// Size: 112 bytes
// Signature: undefined unzGoToFilePos(void)


undefined8 unzGoToFilePos(long param_1,undefined (*param_2) [16])

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  uVar1 = 0xffffff9a;
  if ((param_1 != 0) && (param_2 != (undefined (*) [16])0x0)) {
    auVar2 = NEON_ext(*param_2,*param_2,8,1);
    *(long *)(param_1 + 0x88) = auVar2._8_8_;
    *(long *)(param_1 + 0x80) = auVar2._0_8_;
    uVar1 = FUN_00e30e5c(param_1,param_1 + 0xb0,param_1 + 0x138,0,0,0,0,0,0);
    *(ulong *)(param_1 + 0x90) = (ulong)((int)uVar1 == 0);
  }
  return uVar1;
}


