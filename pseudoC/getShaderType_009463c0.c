// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShaderType
// Entry Point: 009463c0
// Size: 36 bytes
// Signature: undefined getShaderType(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsMaterial::getShaderType() const */

int GsMaterial::getShaderType(void)

{
  int iVar1;
  long in_x0;
  
  if ((*(long *)(in_x0 + 0x80) != 0) &&
     (iVar1 = *(int *)(*(long *)(in_x0 + 0x80) + 0x168), iVar1 != 0)) {
    return iVar1;
  }
  return *(int *)(in_x0 + 0x2c);
}


