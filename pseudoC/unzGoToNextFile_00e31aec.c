// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzGoToNextFile
// Entry Point: 00e31aec
// Size: 204 bytes
// Signature: undefined unzGoToNextFile(void)


undefined8 unzGoToNextFile(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    lVar1 = *(long *)(param_1 + 0x80) + 1;
    if ((*(long *)(param_1 + 0x68) == 0xffff) || (lVar1 != *(long *)(param_1 + 0x68))) {
      *(long *)(param_1 + 0x80) = lVar1;
      *(long *)(param_1 + 0x88) =
           *(long *)(param_1 + 0xf0) + *(long *)(param_1 + 0xf8) + *(long *)(param_1 + 0x100) +
           *(long *)(param_1 + 0x88) + 0x2e;
      uVar2 = FUN_00e30e5c(param_1,param_1 + 0xb0,param_1 + 0x138,0,0,0,0,0,0);
      *(ulong *)(param_1 + 0x90) = (ulong)((int)uVar2 == 0);
      return uVar2;
    }
  }
  return 0xffffff9c;
}


