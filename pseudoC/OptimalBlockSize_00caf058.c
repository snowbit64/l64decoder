// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OptimalBlockSize
// Entry Point: 00caf058
// Size: 52 bytes
// Signature: undefined OptimalBlockSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ECB_OneWay::OptimalBlockSize() const */

int CryptoPP::ECB_OneWay::OptimalBlockSize(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  long *plVar3;
  
  iVar1 = *(int *)(in_x0 + 0x28);
  plVar3 = (long *)(*(long *)(in_x0 + 0x10) + 8);
  iVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
  return iVar2 * iVar1;
}


