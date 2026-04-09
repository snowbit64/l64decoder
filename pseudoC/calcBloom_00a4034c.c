// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcBloom
// Entry Point: 00a4034c
// Size: 1308 bytes
// Signature: undefined __thiscall calcBloom(ScreenSpaceProcessor * this, IRenderDevice * param_1, ITextureObject * param_2, ITextureObject * * param_3)


/* ScreenSpaceProcessor::calcBloom(IRenderDevice*, ITextureObject*, ITextureObject*&) */

void __thiscall
ScreenSpaceProcessor::calcBloom
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,ITextureObject *param_2,
          ITextureObject **param_3)

{
  ITextureObject **ppIVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  char **ppcVar6;
  ScreenSpaceProcessor *pSVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ITextureObject *local_170;
  ITextureObject *local_168;
  char *local_160;
  undefined8 local_158;
  undefined4 local_150;
  ITextureObject *local_148;
  ITextureObject *local_140;
  undefined8 uStack_138;
  char *local_130;
  ITextureObject *pIStack_128;
  undefined4 local_120;
  char *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  char *local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  char *local_e8;
  ITextureObject *pIStack_e0;
  undefined4 local_d8;
  char *local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined8 uStack_90;
  char *local_88;
  ITextureObject *pIStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_148 = param_2;
  plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar8 = 0xffffffff;
  local_88 = "sceneTexture";
  uStack_90 = *(undefined8 *)(this + (ulong)*(uint *)(this + 0x18fc) * 8 + 0x1a38);
  local_78 = 0xffffffff;
  local_98 = "eyeAdaptedLuminanceBuffer";
  uStack_a0 = *(undefined8 *)(this + 0x1988);
  local_a8 = "BloomParams";
  pIStack_80 = param_2;
  (**(code **)(*plVar5 + 0x120))(plVar5,1,&local_148,0,0,0,1);
  if (this[0x1b64] == (ScreenSpaceProcessor)0x0) {
    (**(code **)(*plVar5 + 0x120))
              (plVar5,0,0,1,this + (ulong)*(uint *)(this + 0x18fc) * 8 + 0x1a38,0,8);
  }
  postProcess(this,param_1,(ShaderTexture *)&local_88,1,(ShaderStructBuffer *)&local_98,1,
              (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_a8,1,
              (AdhocShader *)(this + 0x758),(ITextureObject **)(this + 0x1a88),1,0,false,0);
  local_158 = *(undefined8 *)(this + 0x1a88);
  local_150 = 0xffffffff;
  local_160 = "sceneTexture";
  if (*(int *)(this + 0x1b3c) != 0) {
    uVar10 = 1;
    do {
      (**(code **)(*plVar5 + 0x120))(plVar5,1,&local_158,0,0,0,1);
      uVar3 = uVar10 - 1;
      postProcess(this,param_1,(ShaderTexture *)&local_160,1,(ShaderStructBuffer *)0x0,0,
                  (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,(AdhocShader *)(this + 0x58),
                  (ITextureObject **)(this + (ulong)uVar3 * 8 + 0x1a98),1,0,false,0);
      uVar10 = uVar10 + 1;
      local_158 = *(undefined8 *)(this + (ulong)uVar3 * 8 + 0x1a98);
    } while (uVar10 <= *(uint *)(this + 0x1b3c));
    uVar8 = (ulong)(*(uint *)(this + 0x1b3c) - 1);
  }
  (**(code **)(*plVar5 + 0x120))(plVar5,1,this + uVar8 * 8 + 0x1a98,0,0,0,1);
  iVar11 = *(int *)(this + 0x1b3c);
  uVar8 = (ulong)(iVar11 - 1U);
  if (-1 < (int)(iVar11 - 1U)) {
    lVar9 = uVar8 * 8 + 0x1ae8;
    iVar2 = iVar11;
    while( true ) {
      uVar8 = uVar8 - 1;
      ppIVar1 = (ITextureObject **)(this + lVar9);
      uStack_b0 = *(undefined8 *)(this + 0x1998);
      local_168 = *ppIVar1;
      local_170 = ppIVar1[-5];
      local_b8 = "BlurParams";
      if (iVar11 == iVar2) {
        pIStack_128 = ppIVar1[-10];
        uStack_110 = *(undefined8 *)(this + 0x1a10);
        local_130 = "sceneTexture";
        local_120 = 0xffffffff;
        local_118 = "gaussWeights";
        local_108 = 0xffffffff;
        postProcess(this,param_1,(ShaderTexture *)&local_130,2,(ShaderStructBuffer *)0x0,0,
                    (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_b8,1,
                    (AdhocShader *)(this + 0x858),&local_168,1,0,false,0);
        local_d8 = 0xffffffff;
        uStack_c8 = *(undefined8 *)(this + 0x1a10);
        local_c0 = 0xffffffff;
        local_e8 = "sceneTexture";
        pIStack_e0 = local_168;
        local_d0 = "gaussWeights";
        (**(code **)(*plVar5 + 0x120))(plVar5,1,&local_168,0,0,0,1);
        ppcVar6 = &local_e8;
        uVar10 = 2;
        pSVar7 = this + 0x958;
      }
      else {
        pIStack_e0 = ppIVar1[-10];
        uStack_c8 = *(undefined8 *)(this + 0x1a10);
        local_e8 = "sceneTexture";
        local_d8 = 0xffffffff;
        local_d0 = "gaussWeights";
        local_c0 = 0xffffffff;
        postProcess(this,param_1,(ShaderTexture *)&local_e8,2,(ShaderStructBuffer *)0x0,0,
                    (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_b8,1,
                    (AdhocShader *)(this + 0x858),&local_168,1,0,false,0);
        uStack_110 = *(undefined8 *)(this + 0x1a10);
        local_120 = 0xffffffff;
        local_118 = "gaussWeights";
        local_130 = "sceneTexture";
        pIStack_128 = local_168;
        local_108 = 0xffffffff;
        uStack_138 = *(undefined8 *)(this + (long)iVar11 * 8 + 0x1ac0);
        local_f0 = 0xffffffff;
        local_100 = "additiveTexture";
        local_140 = local_168;
        uStack_f8 = uStack_138;
        (**(code **)(*plVar5 + 0x120))(plVar5,2,&local_140,0,0,0,1);
        ppcVar6 = &local_130;
        uVar10 = 3;
        pSVar7 = this + 0xb58;
      }
      postProcess(this,param_1,(ShaderTexture *)ppcVar6,uVar10,(ShaderStructBuffer *)0x0,0,
                  (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_b8,1,(AdhocShader *)pSVar7,
                  &local_170,1,0,false,0);
      if ((int)uVar8 < 0) break;
      iVar2 = *(int *)(this + 0x1b3c);
      iVar11 = iVar11 + -1;
      lVar9 = lVar9 + -8;
    }
  }
  *param_3 = *(ITextureObject **)(this + 0x1ac0);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


