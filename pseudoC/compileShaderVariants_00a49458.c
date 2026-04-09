// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileShaderVariants
// Entry Point: 00a49458
// Size: 656 bytes
// Signature: undefined compileShaderVariants(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ValarShadingRateController::compileShaderVariants() */

undefined4 ValarShadingRateController::compileShaderVariants(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  IRenderDevice **in_x0;
  ulong uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ShaderStructLayout local_4a8 [16];
  void *local_498;
  byte *local_488;
  byte *local_480;
  char acStack_468 [1024];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ShaderStructLayout::ShaderStructLayout(local_4a8,"ValarData",0);
                    /* try { // try from 00a4949c to 00a4959f has its CatchHandler @ 00a496e8 */
  ShaderStructLayout::addField(local_4a8,"uTextureSize",2,0,2,false,0);
  ShaderStructLayout::addField(local_4a8,"SensitivityThreshold",2,0,0,false,0);
  ShaderStructLayout::addField(local_4a8,"EnvLumaFactor",2,0,0,false,0);
  ShaderStructLayout::addField(local_4a8,"K",2,0,0,false,0);
  ShaderStructLayout::addField(local_4a8,"WeberFechnerConstant",2,0,0,false,0);
  ShaderStructLayout::addField(local_4a8,"UseWeberFechner",2,0,0,false,0);
  ShaderStructLayout::addField(local_4a8,"UseMotionVectors",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  uVar9 = 8;
  do {
    uVar10 = 0;
    do {
      uVar11 = 0;
      uVar1 = uVar10;
      do {
        if ((uVar10 | uVar11) != 0) {
          uVar2 = uVar1 + 9;
          if (uVar9 < 0x10) {
            uVar2 = uVar1;
          }
                    /* try { // try from 00a495f0 to 00a4962b has its CatchHandler @ 00a496ec */
          FUN_00a49700(acStack_468);
          uVar7 = AdhocShader::load((AdhocShader *)(in_x0 + (ulong)uVar2 * 0x20 + 2),*in_x0,
                                    "shadingRateImage_cs.cg",acStack_468,uVar2,local_4a8,1);
          if ((uVar7 & 1) == 0) {
            uVar8 = 0;
            goto LAB_00a49650;
          }
        }
        uVar11 = uVar11 + 1;
        uVar1 = uVar1 + 3;
      } while (uVar11 != 3);
      uVar10 = uVar10 + 1;
    } while (uVar10 != 3);
    bVar6 = 8 < uVar9;
    uVar9 = uVar9 + 8;
    if (bVar6) {
      uVar8 = 1;
LAB_00a49650:
      pbVar5 = local_488;
      if (local_488 != (byte *)0x0) {
        while (pbVar4 = local_480, pbVar4 != pbVar5) {
          local_480 = pbVar4 + -0x20;
          if ((*local_480 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -0x10));
          }
        }
        local_480 = pbVar5;
        operator_delete(local_488);
      }
      if (((byte)local_4a8[0] & 1) != 0) {
        operator_delete(local_498);
      }
      if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar8;
    }
  } while( true );
}


