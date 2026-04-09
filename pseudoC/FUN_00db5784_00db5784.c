// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00db5784
// Entry Point: 00db5784
// Size: 308 bytes
// Signature: undefined FUN_00db5784(void)


int FUN_00db5784(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar2 = iVar5 * 0x33;
    iVar3 = 0;
    do {
      FUN_00db4e5c(param_1,iVar4,iVar2,iVar3,0,0xff,1);
      FUN_00db4e5c(param_1,iVar4 + 1,iVar2,iVar3,0x33,0xff,1);
      FUN_00db4e5c(param_1,iVar4 + 2,iVar2,iVar3,0x66,0xff,1);
      FUN_00db4e5c(param_1,iVar4 + 3,iVar2,iVar3,0x99,0xff,1);
      FUN_00db4e5c(param_1,iVar4 + 4,iVar2,iVar3,0xcc,0xff,1);
      iVar1 = iVar4 + 5;
      iVar4 = iVar4 + 6;
      FUN_00db4e5c(param_1,iVar1,iVar2,iVar3,0xff,0xff,1);
      iVar3 = iVar3 + 0x33;
    } while (iVar3 != 0x132);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 6);
  return iVar4;
}


