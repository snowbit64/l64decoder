// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: postProcess
// Entry Point: 00a3ea78
// Size: 1008 bytes
// Signature: undefined __thiscall postProcess(ScreenSpaceProcessor * this, IRenderDevice * param_1, ShaderTexture * param_2, uint param_3, ShaderStructBuffer * param_4, uint param_5, ShaderTexture * param_6, uint param_7, ShaderConstantBuffer * param_8, uint param_9, AdhocShader * param_10, ITextureObject * * param_11, uint param_12, ACCESS_MODE param_13, bool param_14, uint param_15)


/* ScreenSpaceProcessor::postProcess(IRenderDevice*, AdhocShader::ShaderTexture*, unsigned int,
   AdhocShader::ShaderStructBuffer*, unsigned int, AdhocShader::ShaderTexture*, unsigned int,
   AdhocShader::ShaderConstantBuffer*, unsigned int, AdhocShader const&, ITextureObject**, unsigned
   int, RenderTargetDesc::ACCESS_MODE, bool, unsigned int) */

void __thiscall
ScreenSpaceProcessor::postProcess
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,ShaderTexture *param_2,uint param_3,
          ShaderStructBuffer *param_4,uint param_5,ShaderTexture *param_6,uint param_7,
          ShaderConstantBuffer *param_8,uint param_9,AdhocShader *param_10,ITextureObject **param_11
          ,uint param_12,ACCESS_MODE param_13,bool param_14,uint param_15)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long **pplVar10;
  uint uVar11;
  ulong uVar12;
  uint local_168 [2];
  long *local_160 [2];
  uint local_150 [2];
  uint auStack_14c [2];
  undefined8 local_144 [2];
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
  long *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined local_80;
  char *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar12 = (ulong)param_12;
  plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
  if (param_12 == 0) {
    (**(code **)(**(long **)(this + 0x1858) + 0xa8))
              (*(long **)(this + 0x1858),param_1,*(undefined4 *)(this + 0x1860),0);
    bVar3 = true;
  }
  else {
    uVar4 = (**(code **)(*(long *)*param_11 + 0x20))();
    uVar5 = (**(code **)(*(long *)*param_11 + 0x28))();
    bVar3 = false;
    local_160[0] = (long *)0x0;
    local_160[1] = (long *)0x0;
    auStack_14c[1] = 0;
    local_150 = (uint  [2])0x0;
    local_134 = 0;
    uVar11 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_144[1] = 0x300000003;
    local_144[0] = 0x100000002;
    local_130 = 0;
    local_118 = 0;
    uStack_10c = 0x300000003;
    local_114 = 0x100000002;
    local_104 = 0;
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
    uStack_88 = 0x300000003;
    local_90 = 0x100000002;
    local_a0 = (long *)0x0;
    uStack_98 = 0;
    local_78 = "ScreenSpaceProcessor::postProcess";
    local_80 = 0;
    local_168[0] = 0;
    pplVar10 = (long **)param_11;
    do {
      plVar9 = *pplVar10;
      uVar8 = (**(code **)(*plVar9 + 0x18))(plVar9);
      if (((byte)PixelFormatUtil::s_pixelFormats[(uVar8 & 0xffffffff) * 0x18 + 0xc] >> 5 & 1) == 0)
      {
        uVar8 = (ulong)uVar11;
        local_160[uVar8 * 6] = plVar9;
        *(undefined4 *)(local_144 + uVar8 * 6) = 0;
        *(ACCESS_MODE *)(local_144 + uVar8 * 6 + 1) = param_13;
        iVar6 = (**(code **)(*plVar9 + 0x10))(plVar9);
        if (iVar6 == 1) {
          *(uint *)((long)&stack0xfffffffffffffeb0 + (ulong)uVar11 * 0x30 + 4) = param_15;
        }
        uVar11 = uVar11 + 1;
        bVar3 = true;
        local_168[0] = uVar11;
      }
      else {
        local_90 = local_90 & 0xffffffff00000000;
        uStack_88 = CONCAT44(uStack_88._4_4_,param_13);
        local_a0 = plVar9;
      }
      pplVar10 = pplVar10 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    (**(code **)(*plVar7 + 0x38))(plVar7,local_168,0,1,0,0,uVar4,uVar5);
  }
  (**(code **)(*plVar7 + 0x48))(plVar7,*(undefined8 *)(param_10 + 8));
  lVar1 = 0x28;
  if (!bVar3) {
    lVar1 = 0x30;
  }
  (**(code **)(*plVar7 + 0xc0))(plVar7,*(undefined8 *)(this + lVar1));
  (**(code **)(*plVar7 + 0x58))(plVar7,0);
  (**(code **)(*plVar7 + 0x50))(plVar7,0,0,0);
  (**(code **)(*plVar7 + 0xb8))(plVar7,*(undefined8 *)(this + 8));
  lVar1 = 0x20;
  if (!param_14) {
    lVar1 = 0x10;
  }
  (**(code **)(*plVar7 + 0xb0))(plVar7,*(undefined8 *)(this + lVar1));
  AdhocShader::bindResourcesPs
            (param_10,(ICommandBuffer *)plVar7,param_2,param_3,param_4,param_5,param_6,param_7,
             param_8,param_9,(ShaderSampler *)&AdhocShader::s_pStandardSamplers,3);
  (**(code **)(*plVar7 + 0xe8))(plVar7,3,0,0,0,0);
  if (param_12 != 0) {
    (**(code **)(*plVar7 + 0x40))(plVar7);
    iVar6 = (**(code **)(*(long *)*param_11 + 0x48))();
    if (iVar6 != 0) {
      (**(code **)(*(long *)param_1 + 0x30))(param_1,*param_11);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


