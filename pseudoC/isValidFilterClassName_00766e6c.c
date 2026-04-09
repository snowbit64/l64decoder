// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isValidFilterClassName
// Entry Point: 00766e6c
// Size: 80 bytes
// Signature: undefined __thiscall isValidFilterClassName(DensityMapModifierLua * this, char * param_1)


/* DensityMapModifierLua::isValidFilterClassName(char const*) */

bool __thiscall
DensityMapModifierLua::isValidFilterClassName(DensityMapModifierLua *this,char *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = strcmp(param_1,"DensityMapFilter");
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    iVar2 = strcmp(param_1,"PerlinNoiseFilter");
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


