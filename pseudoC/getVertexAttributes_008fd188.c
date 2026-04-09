// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexAttributes
// Entry Point: 008fd188
// Size: 360 bytes
// Signature: undefined __cdecl getVertexAttributes(char * * param_1)


/* I3DLoadUtil::getVertexAttributes(char const**) */

uint I3DLoadUtil::getVertexAttributes(char **param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = ExpatUtil::getBoolAttrRet("normal",false,param_1);
  uVar3 = ExpatUtil::getBoolAttrRet("uv0",false,param_1);
  uVar1 = uVar2 & 1 | 2;
  if ((uVar3 & 1) == 0) {
    uVar1 = uVar2 & 1;
  }
  uVar3 = ExpatUtil::getBoolAttrRet("uv1",false,param_1);
  uVar2 = uVar1 | 4;
  if ((uVar3 & 1) == 0) {
    uVar2 = uVar1;
  }
  uVar3 = ExpatUtil::getBoolAttrRet("uv2",false,param_1);
  uVar1 = uVar2 | 8;
  if ((uVar3 & 1) == 0) {
    uVar1 = uVar2;
  }
  uVar3 = ExpatUtil::getBoolAttrRet("uv3",false,param_1);
  uVar2 = uVar1 | 0x10;
  if ((uVar3 & 1) == 0) {
    uVar2 = uVar1;
  }
  uVar3 = ExpatUtil::getBoolAttrRet("color",false,param_1);
  uVar1 = uVar2 | 0x20;
  if ((uVar3 & 1) == 0) {
    uVar1 = uVar2;
  }
  uVar3 = ExpatUtil::getBoolAttrRet("singleblendweights",false,param_1);
  if ((uVar3 & 1) == 0) {
    uVar3 = ExpatUtil::getBoolAttrRet("blendweights",false,param_1);
    uVar2 = uVar1 | 0x40;
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar1;
    }
  }
  else {
    uVar2 = uVar1 | 0x140;
  }
  uVar3 = ExpatUtil::getBoolAttrRet("tangent",false,param_1);
  uVar1 = uVar2 | 0x80;
  if ((uVar3 & 1) == 0) {
    uVar1 = uVar2;
  }
  uVar3 = ExpatUtil::getBoolAttrRet("generic",false,param_1);
  uVar2 = uVar1 | 0x200;
  if ((uVar3 & 1) == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}


