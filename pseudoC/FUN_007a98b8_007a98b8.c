// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a98b8
// Entry Point: 007a98b8
// Size: 276 bytes
// Signature: undefined FUN_007a98b8(void)


void FUN_007a98b8(GsShape *param_1,char **param_2)

{
  GsMaterial **ppGVar1;
  long lVar2;
  long lVar3;
  CustomShader *this;
  ulong uVar4;
  long lVar5;
  GsMaterial *this_00;
  long lVar6;
  uint local_6c;
  float local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_68 = *(float *)(param_2 + 2);
  uStack_64 = *(undefined4 *)(param_2 + 4);
  local_60 = *(undefined4 *)(param_2 + 6);
  uStack_5c = *(undefined4 *)(param_2 + 8);
  if ((*(int *)(param_2 + 0xb) == 3) && (*(char *)(param_2 + 10) == '\0')) {
    GsShape::setCustomShaderParameter(param_1,*param_2,&local_68);
  }
  else {
    uVar4 = (ulong)*(ushort *)(param_1 + 0x196);
    if (*(ushort *)(param_1 + 0x196) != 0) {
      lVar5 = uVar4 * 8;
      lVar6 = 0;
      while( true ) {
        ppGVar1 = (GsMaterial **)(param_1 + 0x178);
        if ((int)uVar4 != 1) {
          ppGVar1 = (GsMaterial **)(*(GsMaterial **)(param_1 + 0x178) + lVar6);
        }
        this_00 = *ppGVar1;
        lVar3 = GsMaterial::getCustomShader();
        if (lVar3 != 0) {
          this = (CustomShader *)GsMaterial::getCustomShader();
          uVar4 = CustomShader::getParameterIndex(this,*(uint *)(this_00 + 0x88),*param_2,&local_6c)
          ;
          if ((uVar4 & 1) != 0) {
            GsMaterial::setCustomParameter(this_00,local_6c,&local_68);
          }
        }
        if (lVar5 + -8 == lVar6) break;
        uVar4 = (ulong)*(ushort *)(param_1 + 0x196);
        lVar6 = lVar6 + 8;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


