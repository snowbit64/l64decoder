// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCanSaveBrepToFile
// Entry Point: 00b7609c
// Size: 28 bytes
// Signature: undefined __cdecl getCanSaveBrepToFile(Brep * param_1)


/* BrepUtil::getCanSaveBrepToFile(Brep*) */

uint BrepUtil::getCanSaveBrepToFile(Brep *param_1)

{
  uint uVar1;
  
  uVar1 = Brep::isNonManifold();
  return ~uVar1 & 1;
}


