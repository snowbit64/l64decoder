// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFullDesc
// Entry Point: 009540a8
// Size: 272 bytes
// Signature: undefined __thiscall getFullDesc(MaterialShaderHash * this, MaterialShaderHash * param_1, char * param_2, char * param_3)


/* MaterialShaderHash::getFullDesc(MaterialShaderHash const&, char const*, char*) const */

char * __thiscall
MaterialShaderHash::getFullDesc
          (MaterialShaderHash *this,MaterialShaderHash *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  
  MaterialAttributes::getFullDesc(*(ulonglong *)this,*(ulonglong *)param_1,param_2,param_3);
  sVar3 = strlen(param_3);
  iVar2 = FUN_00956d84(param_3 + sVar3,0xffffffffffffffff,"%sLightEnvShape attributes %8.8X-%8.8X\n"
                       ,param_2,*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 8));
  pcVar1 = param_3 + sVar3 + iVar2;
  GsShape::getFlagsDesc(*(uint *)(this + 8) & 0x7f,*(uint *)(param_1 + 8) & 0x7f,param_2,pcVar1);
  sVar3 = strlen(pcVar1);
  pcVar1 = pcVar1 + sVar3;
  LightList::getFullDesc
            (*(uint *)(this + 8) >> 7 & 0x7ff,*(uint *)(param_1 + 8) >> 7 & 0x7ff,param_2,pcVar1);
  sVar3 = strlen(pcVar1);
  pcVar1 = pcVar1 + sVar3;
  LightingEnv::getFullDesc
            ((uint)(*(ulong *)(this + 8) >> 0x12) & 0xffff,
             (uint)(*(ulong *)(param_1 + 8) >> 0x12) & 0xffff,param_2,pcVar1);
  uVar4 = *(ulong *)(this + 8);
  if ((uVar4 & 0xfffffffc00000000) != 0) {
    sVar3 = strlen(pcVar1);
    FUN_00956d84(pcVar1 + sVar3,0xffffffffffffffff,"- illegal bits %8.8X:%8.8X\n",
                 (uVar4 & 0xfffffffc00000000) >> 0x20,0);
  }
  return param_3;
}


