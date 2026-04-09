// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsValid
// Entry Point: 00872a38
// Size: 36 bytes
// Signature: undefined getIsValid(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NavigationPath::getIsValid() const */

ulong NavigationPath::getIsValid(void)

{
  int iVar1;
  long in_x0;
  ulong uVar2;
  
  uVar2 = *(ulong *)(in_x0 + 0x20);
  if (uVar2 != 0) {
    iVar1 = Spline::getNumOfCV();
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


