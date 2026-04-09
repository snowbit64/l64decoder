// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processFx
// Entry Point: 009f0104
// Size: 632 bytes
// Signature: undefined __thiscall processFx(AtmosphereRenderControllerShared * this, ICommandBuffer * param_1, AdhocShader * param_2, ShaderTexture * param_3, int param_4, ITextureObject * param_5, ShaderConstantBuffer * param_6, int param_7)


/* AtmosphereRenderControllerShared::processFx(ICommandBuffer*, AdhocShader const&,
   AdhocShader::ShaderTexture const*, int, ITextureObject*, AdhocShader::ShaderConstantBuffer*, int)
    */

void __thiscall
AtmosphereRenderControllerShared::processFx
          (AtmosphereRenderControllerShared *this,ICommandBuffer *param_1,AdhocShader *param_2,
          ShaderTexture *param_3,int param_4,ITextureObject *param_5,ShaderConstantBuffer *param_6,
          int param_7)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_168 [2];
  ITextureObject *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
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
  uVar2 = (**(code **)(*(long *)param_5 + 0x20))(param_5);
  uVar3 = (**(code **)(*(long *)param_5 + 0x28))(param_5);
  local_128 = 0;
  uStack_120 = 0;
  local_130 = 0;
  local_118 = 0;
  local_104 = 0;
  uStack_10c = 0x300000003;
  local_114 = 0x100000002;
  local_78 = "AtmosphereRenderController::processFx";
  local_f8 = 0;
  uStack_f0 = 0;
  local_100 = 0;
  local_e8 = 0;
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
  local_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0x300000003;
  local_90 = 0x100000002;
  local_80 = 0;
  local_138 = 3;
  local_150 = 0;
  local_134 = 0;
  local_168[0] = 1;
  local_148 = 0;
  uStack_158 = 0;
  local_140 = 1;
  uStack_13c = 0;
  local_160 = param_5;
  (**(code **)(*(long *)param_1 + 0x38))(param_1,local_168,0,1,0,0,uVar2,uVar3);
  (**(code **)(*(long *)param_1 + 0x48))(param_1,*(undefined8 *)(param_2 + 8));
  (**(code **)(*(long *)param_1 + 0xb8))(param_1,*(undefined8 *)(this + 0x58));
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,*(undefined8 *)(this + 0x60));
  (**(code **)(*(long *)param_1 + 0xc0))(param_1,*(undefined8 *)(this + 0x68));
  (**(code **)(*(long *)param_1 + 0x50))(param_1,0,0,0);
  (**(code **)(*(long *)param_1 + 0x58))(param_1,0);
  AdhocShader::bindResourcesPs
            (param_2,param_1,param_3,param_4,(ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,
             param_6,param_7,(ShaderSampler *)0x0,0);
  (**(code **)(*(long *)param_1 + 0xe8))(param_1,3,0,0,0,0);
  AdhocShader::unbindResourcesPs
            (param_2,param_1,param_3,param_4,(ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,
             param_6,param_7,(ShaderSampler *)0x0,0);
  (**(code **)(*(long *)param_1 + 0x40))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


