// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCustomShaderParameter
// Entry Point: 00a52ed0
// Size: 176 bytes
// Signature: undefined __thiscall setCustomShaderParameter(GsShape * this, char * param_1, float * param_2)


/* GsShape::setCustomShaderParameter(char const*, float const*) */

void __thiscall GsShape::setCustomShaderParameter(GsShape *this,char *param_1,float *param_2)

{
  long lVar1;
  CustomShader *this_00;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(short *)(this + 0x196) != 0) {
    if (*(short *)(this + 0x196) == 1) {
      plVar3 = (long *)(this + 0x178);
    }
    else {
      plVar3 = *(long **)(this + 0x178);
    }
    lVar4 = *plVar3;
    this_00 = (CustomShader *)GsMaterial::getCustomShader();
    if (this_00 != (CustomShader *)0x0) {
      local_4c = 0;
      uVar2 = CustomShader::getParameterIndex(this_00,*(uint *)(lVar4 + 0x88),param_1,&local_4c);
      if ((uVar2 & 1) != 0) {
        setCustomShaderParameter(this,local_4c,param_2);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


