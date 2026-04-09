// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCustomShaderParameters
// Entry Point: 007034f0
// Size: 28 bytes
// Signature: undefined __thiscall getCustomShaderParameters(Animal * this, char * param_1, float * param_2)


/* Animal::getCustomShaderParameters(char const*, float*) const */

void __thiscall Animal::getCustomShaderParameters(Animal *this,char *param_1,float *param_2)

{
  if (*(GsShape ***)(this + 0x6b8) != *(GsShape ***)(this + 0x6b0)) {
    GsShape::getCustomShaderParameter(**(GsShape ***)(this + 0x6b0),param_1,param_2);
    return;
  }
  return;
}


