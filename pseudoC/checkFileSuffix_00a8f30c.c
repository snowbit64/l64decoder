// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkFileSuffix
// Entry Point: 00a8f30c
// Size: 104 bytes
// Signature: undefined __cdecl checkFileSuffix(char * param_1)


/* GS2DUtil::checkFileSuffix(char const*) */

undefined8 GS2DUtil::checkFileSuffix(char *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = StringUtil::iEndsWith(param_1,s_fileSuffixes);
  if ((((uVar1 & 1) == 0) &&
      (uVar1 = StringUtil::iEndsWith(param_1,PTR_DAT_0103f1d8), (uVar1 & 1) == 0)) &&
     (uVar1 = StringUtil::iEndsWith(param_1,PTR_DAT_0103f1e0), (uVar1 & 1) == 0)) {
    uVar2 = StringUtil::iEndsWith(param_1,PTR_DAT_0103f1e8);
    return uVar2;
  }
  return 1;
}


