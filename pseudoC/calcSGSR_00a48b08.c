// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcSGSR
// Entry Point: 00a48b08
// Size: 748 bytes
// Signature: undefined __cdecl calcSGSR(ICommandBuffer * param_1, ITextureObject * param_2, float param_3, ITextureObject * * param_4)


/* Upscaler::calcSGSR(ICommandBuffer*, ITextureObject*, float, ITextureObject*&) */

undefined8
Upscaler::calcSGSR(ICommandBuffer *param_1,ITextureObject *param_2,float param_3,
                  ITextureObject **param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long **in_x3;
  undefined4 in_register_00005004;
  undefined8 uVar5;
  undefined8 uVar6;
  ITextureObject **local_180;
  undefined4 local_178 [2];
  long *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined local_90;
  char *local_88;
  char *local_80;
  ITextureObject **ppIStack_78;
  undefined4 local_70;
  char *local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_180 = param_4;
  puVar4 = (undefined8 *)
           (**(code **)(**(long **)(param_1 + 0x50) + 0x10))(CONCAT44(in_register_00005004,param_3))
  ;
  uVar6 = NEON_fmov(0x3f800000,4);
  uVar5 = NEON_ucvtf(*(undefined8 *)(param_1 + 0x44),4);
  puVar4[1] = uVar5;
  *puVar4 = CONCAT44((float)((ulong)uVar6 >> 0x20) / (float)((ulong)uVar5 >> 0x20),
                     (float)uVar6 / (float)uVar5);
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),param_2);
  uStack_60 = *(undefined8 *)(param_1 + 0x50);
  local_68 = "SGSRparams";
  local_80 = "sceneTexture";
  uStack_ec = 0x300000003;
  local_f4 = 0x100000002;
  local_88 = "Upscaler::calcSGSR";
  local_170 = *in_x3;
  uStack_bc = 0x300000003;
  local_c4 = 0x100000002;
  uStack_98 = 0x300000003;
  local_a0 = 0x100000002;
  uStack_168 = 0;
  local_70 = 0;
  local_160 = 0;
  local_148 = 3;
  local_144 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_140 = 0;
  local_128 = 0;
  uStack_11c = 0x300000003;
  local_124 = 0x100000002;
  local_114 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b4 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_90 = 0;
  local_178[0] = 1;
  local_158 = 0;
  local_150 = 1;
  uStack_14c = 0;
  ppIStack_78 = param_4;
  (**(code **)(*(long *)param_2 + 0x120))(param_2,1,&local_180,0,0,0,1);
  uVar2 = (**(code **)(**in_x3 + 0x20))();
  uVar3 = (**(code **)(**in_x3 + 0x28))();
  (**(code **)(*(long *)param_2 + 0x38))(param_2,local_178,0,1,0,0,uVar2,uVar3);
  (**(code **)(*(long *)param_2 + 0x48))(param_2,*(undefined8 *)(param_1 + 0x78));
  AdhocShader::bindResourcesPs
            ((AdhocShader *)(param_1 + 0x70),(ICommandBuffer *)param_2,(ShaderTexture *)&local_80,1,
             (ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,(ShaderConstantBuffer *)&local_68,1,
             (ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
  (**(code **)(*(long *)param_2 + 0xc0))(param_2,*(undefined8 *)(param_1 + 0x58));
  (**(code **)(*(long *)param_2 + 0x58))(param_2,0);
  (**(code **)(*(long *)param_2 + 0x50))(param_2,0,0,0);
  (**(code **)(*(long *)param_2 + 0xb8))(param_2,*(undefined8 *)(param_1 + 0x60));
  (**(code **)(*(long *)param_2 + 0xb0))(param_2,*(undefined8 *)(param_1 + 0x68));
  (**(code **)(*(long *)param_2 + 0xe8))(param_2,3,0,0,0,0);
  (**(code **)(*(long *)param_2 + 0x40))(param_2);
  (**(code **)(*(long *)param_2 + 0x120))(param_2,1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


