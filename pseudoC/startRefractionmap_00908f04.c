// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startRefractionmap
// Entry Point: 00908f04
// Size: 96 bytes
// Signature: undefined __cdecl startRefractionmap(void * param_1, char * param_2, char * * param_3)


/* I3DMaterialPoolFactory::startRefractionmap(void*, char const*, char const**) */

void I3DMaterialPoolFactory::startRefractionmap(void *param_1,char *param_2,char **param_3)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)((long)param_1 + 0x268);
  *(undefined *)(lVar2 + 0xac) = 1;
  pcVar1 = (char *)ExpatUtil::getAttr("coeff",param_3);
  if (pcVar1 != (char *)0x0) {
    StringUtil::atof(pcVar1,(float *)(lVar2 + 0xb0));
  }
  pcVar1 = (char *)ExpatUtil::getAttr("bumpScale",param_3);
  if (pcVar1 != (char *)0x0) {
    StringUtil::atof(pcVar1,(float *)(lVar2 + 0xb4));
  }
  return;
}


