// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setParameter
// Entry Point: 00a76fb4
// Size: 16 bytes
// Signature: undefined __thiscall setParameter(TerrainShaderPassHandler * this, uint param_1, float * param_2)


/* TerrainTransformGroup::TerrainShaderPassHandler::setParameter(unsigned int, float const*) */

void __thiscall
TerrainTransformGroup::TerrainShaderPassHandler::setParameter
          (TerrainShaderPassHandler *this,uint param_1,float *param_2)

{
  undefined8 uVar1;
  
  *(uint *)(this + 8) = param_1;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(this + 0xc) = uVar1;
  return;
}


