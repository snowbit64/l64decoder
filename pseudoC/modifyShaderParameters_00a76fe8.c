// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: modifyShaderParameters
// Entry Point: 00a76fe8
// Size: 84 bytes
// Signature: undefined __thiscall modifyShaderParameters(TerrainShaderPassHandler * this, float * param_1, MaterialShader * param_2, RenderArgs * param_3)


/* TerrainTransformGroup::TerrainShaderPassHandler::modifyShaderParameters(float*, MaterialShader
   const*, RenderArgs const*) const */

void __thiscall
TerrainTransformGroup::TerrainShaderPassHandler::modifyShaderParameters
          (TerrainShaderPassHandler *this,float *param_1,MaterialShader *param_2,RenderArgs *param_3
          )

{
  uint uVar1;
  ulong uVar2;
  
  if (((byte)param_3[0x3a8] >> 4 & 1) != 0) {
    uVar1 = *(uint *)(this + 8);
    if (((uVar1 != 0xffffffff) && (uVar1 < *(ushort *)(param_2 + 0x80))) &&
       (uVar2 = (ulong)*(ushort *)(*(long *)(param_2 + 0x70) + (ulong)uVar1 * 2), uVar2 != 0xffff))
    {
      memcpy(param_1 + uVar2,this + 0xc,
             (ulong)*(byte *)(*(long *)(param_2 + 0x78) + (ulong)uVar1) << 2);
      return;
    }
  }
  return;
}


