// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: envMapBlend
// Entry Point: 00a10c7c
// Size: 1068 bytes
// Signature: undefined envMapBlend(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EnvMapBlender::envMapBlend() */

void EnvMapBlender::envMapBlend(void)

{
  AdhocShader *this;
  long lVar1;
  uint uVar2;
  long lVar3;
  long in_x0;
  long *plVar4;
  float *pfVar5;
  uint uVar6;
  long local_1f0;
  undefined4 local_1e8 [2];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  uint local_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined local_100;
  char *local_f8;
  char *local_f0;
  undefined8 uStack_e8;
  char *local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  char *local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  initBlending();
  plVar4 = (long *)(**(code **)(**(long **)(in_x0 + 0x548) + 0x138))();
  uStack_d8 = *(undefined8 *)(in_x0 + 0x418);
  uStack_78 = *(undefined8 *)(in_x0 + 0x568);
  local_e0 = "envMap0";
  uStack_c0 = *(undefined8 *)(in_x0 + 0x420);
  local_80 = "EnvMapBlendingParams";
  local_c8 = "envMap1";
  uStack_a8 = *(undefined8 *)(in_x0 + 0x428);
  local_d0 = 0xffffffff;
  local_b8 = 0xffffffff;
  local_b0 = "envMap2";
  uStack_90 = *(undefined8 *)(in_x0 + 0x430);
  local_a0 = 0xffffffff;
  local_88 = 0xffffffff;
  local_98 = "envMap3";
  uStack_e8 = *(undefined8 *)(in_x0 + 0x570);
  local_1f0 = 0;
  local_f0 = "envMapSampler";
  do {
    uVar6 = 0;
    lVar1 = in_x0 + local_1f0 * 0x100;
    this = (AdhocShader *)(lVar1 + 0x578);
    do {
      uVar2 = *(uint *)(in_x0 + 0x538) >> (ulong)(uVar6 & 0x1f);
      pfVar5 = (float *)(**(code **)(**(long **)(in_x0 + 0x568) + 0x10))
                                  (*(long **)(in_x0 + 0x568),plVar4);
      pfVar5[1] = *(float *)(in_x0 + 0x408);
      pfVar5[2] = *(float *)(in_x0 + 0x40c);
      pfVar5[3] = *(float *)(in_x0 + 0x410);
      pfVar5[4] = *(float *)(in_x0 + 0x414);
      *pfVar5 = (float)(ulong)uVar6;
      (**(code **)(**(long **)(in_x0 + 0x568) + 0x18))(*(long **)(in_x0 + 0x568),plVar4);
      local_1b4 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1b0 = 0;
      local_1d8 = 0;
      local_198 = 0;
      local_120 = 0;
      uStack_118 = 0;
      uStack_15c = 0x300000003;
      local_164 = 0x100000002;
      uStack_12c = 0x300000003;
      local_134 = 0x100000002;
      uStack_108 = 0x300000003;
      local_110 = 0x100000002;
      local_1e0 = *(undefined8 *)(in_x0 + 0x4f8);
      uStack_18c = 0x300000003;
      local_194 = 0x100000002;
      local_184 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_180 = 0;
      local_1bc = 3;
      uStack_1b8 = 3;
      local_168 = 0;
      local_154 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      local_150 = 0;
      local_124 = 0;
      local_100 = 0;
      local_f8 = "EnvMapBlender::envMapBlend";
      local_1e8[0] = 1;
      local_1c4 = 0;
      uStack_1c0 = 1;
      local_1d0 = (undefined4)local_1f0;
      local_1c8 = uVar6;
      (**(code **)(*plVar4 + 0x38))(plVar4,local_1e8,0,1,0,0,uVar2,uVar2);
      (**(code **)(*plVar4 + 0x48))(plVar4,*(undefined8 *)(lVar1 + 0x580));
      (**(code **)(*plVar4 + 0xb8))(plVar4,*(undefined8 *)(in_x0 + 0x550));
      (**(code **)(*plVar4 + 0xb0))(plVar4,*(undefined8 *)(in_x0 + 0x558));
      (**(code **)(*plVar4 + 0xc0))(plVar4,*(undefined8 *)(in_x0 + 0x560));
      (**(code **)(*plVar4 + 0x50))(plVar4,0,0,0);
      (**(code **)(*plVar4 + 0x58))(plVar4,0);
      AdhocShader::getConstantBufferHandle(this,"EnvMapBlendingParams");
      AdhocShader::getInputTextureHandle(this,local_e0,1);
      AdhocShader::getInputTextureHandle(this,local_c8,1);
      AdhocShader::getInputTextureHandle(this,local_b0,1);
      AdhocShader::getInputTextureHandle(this,local_98,1);
      AdhocShader::bindResourcesPs
                (this,(ICommandBuffer *)plVar4,(ShaderTexture *)&local_e0,4,
                 (ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,
                 (ShaderConstantBuffer *)&local_80,1,(ShaderSampler *)&local_f0,1);
      (**(code **)(*plVar4 + 0xe8))(plVar4,3,0,0,0,0);
      AdhocShader::unbindResourcesPs
                (this,(ICommandBuffer *)plVar4,(ShaderTexture *)&local_e0,4,
                 (ShaderStructBuffer *)0x0,0,(ShaderTexture *)0x0,0,
                 (ShaderConstantBuffer *)&local_80,1,(ShaderSampler *)&local_f0,1);
      (**(code **)(*plVar4 + 0x40))(plVar4);
      uVar6 = uVar6 + 1;
    } while (uVar6 <= *(uint *)(in_x0 + 0x53c));
    local_1f0 = local_1f0 + 1;
  } while (local_1f0 != 6);
  (**(code **)(*plVar4 + 0x120))(plVar4,1,in_x0 + 0x4f8,0,0,0,1);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


