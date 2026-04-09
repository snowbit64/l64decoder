// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCustomShaderParameter
// Entry Point: 00a53178
// Size: 84 bytes
// Signature: undefined __thiscall getCustomShaderParameter(GsShape * this, uint param_1, GsMaterial * param_2)


/* GsShape::getCustomShaderParameter(unsigned int, GsMaterial const*) const */

char * __thiscall GsShape::getCustomShaderParameter(GsShape *this,uint param_1,GsMaterial *param_2)

{
  char *pcVar1;
  GsMaterial **ppGVar2;
  GsMaterial *pGVar3;
  char *pcVar4;
  
  if (*(short *)(this + 0x196) == 0) {
    pGVar3 = (GsMaterial *)0x0;
  }
  else {
    if (*(short *)(this + 0x196) == 1) {
      ppGVar2 = (GsMaterial **)(this + 0x178);
    }
    else {
      ppGVar2 = *(GsMaterial ***)(this + 0x178);
    }
    pGVar3 = *ppGVar2;
  }
  pcVar1 = (char *)0x0;
  if ((*(long *)(this + 0x180) != 0) && (pGVar3 == param_2)) {
    pcVar4 = (char *)(*(long *)(this + 0x180) + (ulong)param_1 * 0x14);
    pcVar1 = (char *)0x0;
    if (*pcVar4 != '\0') {
      pcVar1 = pcVar4 + 4;
    }
  }
  return pcVar1;
}


