// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: threadFunction
// Entry Point: 00b0194c
// Size: 76 bytes
// Signature: undefined threadFunction(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SaveHelper::threadFunction() */

void SaveHelper::threadFunction(void)

{
  long lVar1;
  byte bVar2;
  undefined4 in_w0;
  undefined4 in_register_00004004;
  
  lVar1 = CONCAT44(in_register_00004004,in_w0) + 9;
  if ((*(byte *)(CONCAT44(in_register_00004004,in_w0) + 8) & 1) != 0) {
    lVar1 = *(long *)(CONCAT44(in_register_00004004,in_w0) + 0x18);
  }
  bVar2 = (**(code **)(*(long *)CONCAT44(in_register_00004004,in_w0) + 0x10))(in_w0,lVar1);
  *(byte *)(CONCAT44(in_register_00004004,in_w0) + 0x50) = bVar2 & 1;
  *(undefined *)(CONCAT44(in_register_00004004,in_w0) + 0x51) = 1;
  return;
}


