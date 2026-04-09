// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMatchingStandardTexture
// Entry Point: 0094a9f0
// Size: 152 bytes
// Signature: undefined __cdecl getMatchingStandardTexture(char * param_1, STANDARD_TEXTURE * param_2)


/* CustomShader::getMatchingStandardTexture(char const*, CustomShader::STANDARD_TEXTURE&) */

undefined8 CustomShader::getMatchingStandardTexture(char *param_1,STANDARD_TEXTURE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcasecmp(param_1,"baseMap");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strcasecmp(param_1,"normalMap");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcasecmp(param_1,"glossMap");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcasecmp(param_1,"emissiveMap");
        if (iVar1 != 0) {
          return 0;
        }
        uVar2 = 3;
      }
    }
  }
  *(undefined4 *)param_2 = uVar2;
  return 1;
}


