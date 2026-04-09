// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyTile
// Entry Point: 00a6e054
// Size: 656 bytes
// Signature: undefined __thiscall copyTile(FullScreenRenderController * this, IRenderDevice * param_1, ITextureObject * param_2, ACCESS_MODE param_3, uint param_4, uint param_5, uint param_6, ITextureObject * param_7)


/* FullScreenRenderController::copyTile(IRenderDevice*, ITextureObject*,
   RenderTargetDesc::ACCESS_MODE, unsigned int, unsigned int, unsigned int, ITextureObject*) */

void __thiscall
FullScreenRenderController::copyTile
          (FullScreenRenderController *this,IRenderDevice *param_1,ITextureObject *param_2,
          ACCESS_MODE param_3,uint param_4,uint param_5,uint param_6,ITextureObject *param_7)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  char *local_180;
  ITextureObject *pIStack_178;
  undefined4 local_170;
  undefined4 local_168 [2];
  ITextureObject *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  ACCESS_MODE local_13c;
  undefined4 uStack_138;
  undefined local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined local_80;
  char *local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
  iVar2 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
  local_150 = 0;
  local_148 = 0;
  local_134 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_130 = 0;
  local_144 = 0x100000002;
  local_118 = 0;
  local_104 = 0;
  uStack_10c = 0x300000003;
  local_114 = 0x100000002;
  local_f8 = 0;
  uStack_f0 = 0;
  local_78 = "FullScreenRenderController::copyTile";
  local_100 = 0;
  local_e8 = 0;
  local_168[0] = 1;
  uStack_dc = 0x300000003;
  local_e4 = 0x100000002;
  local_d4 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  uStack_ac = 0x300000003;
  local_b4 = 0x100000002;
  local_a4 = 0;
  uStack_88 = 0x300000003;
  local_90 = 0x100000002;
  local_a0 = 0;
  uStack_98 = 0;
  local_80 = 0;
  uStack_158 = 0;
  uStack_138 = 3;
  local_160 = param_2;
  local_13c = param_3;
  (**(code **)(*plVar3 + 0x38))
            (plVar3,local_168,0,1,param_6 * param_4,iVar2 - (param_6 + param_6 * param_5),param_6,
             param_6);
  (**(code **)(*plVar3 + 0x48))(plVar3,*(undefined8 *)(this + 0x50));
  local_180 = "stagingTexture";
  local_170 = 0;
  pIStack_178 = param_7;
  AdhocShader::bindResourcesPs
            ((AdhocShader *)(this + 0x48),(ICommandBuffer *)plVar3,(ShaderTexture *)&local_180,1,
             (ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,
             (ShaderSampler *)0x0,0);
  (**(code **)(*plVar3 + 0xb8))(plVar3,*(undefined8 *)(this + 0x20));
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x30));
  (**(code **)(*plVar3 + 0xc0))(plVar3,*(undefined8 *)(this + 0x38));
  (**(code **)(*plVar3 + 0x50))(plVar3,this,1,*(undefined8 *)(this + 0x10));
  (**(code **)(*plVar3 + 0x58))(plVar3,0);
  (**(code **)(*plVar3 + 0xe8))(plVar3,3,0,0,0,0);
  AdhocShader::unbindResourcesPs
            ((AdhocShader *)(this + 0x48),(ICommandBuffer *)plVar3,(ShaderTexture *)&local_180,1,
             (ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,
             (ShaderSampler *)0x0,0);
  (**(code **)(*plVar3 + 0x40))(plVar3);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


