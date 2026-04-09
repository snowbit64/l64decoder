// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCustomShaderParameters
// Entry Point: 00703488
// Size: 104 bytes
// Signature: undefined __thiscall setCustomShaderParameters(Animal * this, char * param_1, float * param_2)


/* Animal::setCustomShaderParameters(char const*, float const*) */

void __thiscall Animal::setCustomShaderParameters(Animal *this,char *param_1,float *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x6b0);
  if (*(long *)(this + 0x6b8) != lVar1) {
    uVar2 = 0;
    do {
      GsShape::setCustomShaderParameter(*(GsShape **)(lVar1 + uVar2 * 8),param_1,param_2);
      uVar2 = uVar2 + 1;
      lVar1 = *(long *)(this + 0x6b0);
    } while (uVar2 < (ulong)(*(long *)(this + 0x6b8) - lVar1 >> 3));
  }
  return;
}


