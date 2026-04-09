// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShaderParameterForLayer
// Entry Point: 00a61b74
// Size: 232 bytes
// Signature: undefined __thiscall setShaderParameterForLayer(FoliageLayerGraphics * this, uint param_1, char * param_2, float param_3, float param_4, float param_5, float param_6)


/* FoliageLayerGraphics::setShaderParameterForLayer(unsigned int, char const*, float, float, float,
   float) */

void __thiscall
FoliageLayerGraphics::setShaderParameterForLayer
          (FoliageLayerGraphics *this,uint param_1,char *param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  CustomShader *this_00;
  ulong uVar5;
  uint local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar2 = *(long *)(this + 0x58);
  for (lVar1 = *(long *)(this + 0x50); lVar1 != lVar2; lVar1 = lVar1 + 0x98) {
    if ((*(uint *)(lVar1 + 0x44) == param_1) && (lVar4 = GsMaterial::getCustomShader(), lVar4 != 0))
    {
      this_00 = (CustomShader *)GsMaterial::getCustomShader();
      uVar5 = CustomShader::getParameterIndex
                        (this_00,*(uint *)(*(long *)(lVar1 + 8) + 0x88),param_2,&local_7c);
      if ((uVar5 & 1) != 0) {
        local_78 = param_3;
        fStack_74 = param_4;
        local_70 = param_5;
        fStack_6c = param_6;
        GsMaterial::setCustomParameter(*(GsMaterial **)(lVar1 + 8),local_7c,&local_78);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


