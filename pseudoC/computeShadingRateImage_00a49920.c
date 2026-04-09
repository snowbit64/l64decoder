// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeShadingRateImage
// Entry Point: 00a49920
// Size: 780 bytes
// Signature: undefined __thiscall computeShadingRateImage(ValarShadingRateController * this, ICommandBuffer * param_1, ITextureObject * param_2, ITextureObject * param_3, ITextureObject * param_4, IStructBuffer * param_5, ValarParameters * param_6)


/* ValarShadingRateController::computeShadingRateImage(ICommandBuffer*, ITextureObject*,
   ITextureObject*, ITextureObject*, IStructBuffer*, ValarParameters const&) */

void __thiscall
ValarShadingRateController::computeShadingRateImage
          (ValarShadingRateController *this,ICommandBuffer *param_1,ITextureObject *param_2,
          ITextureObject *param_3,ITextureObject *param_4,IStructBuffer *param_5,
          ValarParameters *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  int local_100;
  int local_fc;
  IStructBuffer *local_f8;
  ITextureObject *local_f0;
  ITextureObject *local_e8;
  ITextureObject *pIStack_e0;
  char *local_d8;
  undefined8 uStack_d0;
  char *local_c8;
  ITextureObject *pIStack_c0;
  undefined4 local_b8;
  char *local_b0;
  IStructBuffer *pIStack_a8;
  char *local_a0;
  ITextureObject *pIStack_98;
  undefined4 local_90;
  char *local_88;
  ITextureObject *pIStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_f8 = param_5;
  local_f0 = param_2;
  lVar8 = (**(code **)(**(long **)this + 0x28))();
  if ((param_3 == (ITextureObject *)0x0) || (*(char *)(lVar8 + 0xd1) == '\0')) goto LAB_00a49bf8;
  EngineManager::getInstance();
  lVar8 = (**(code **)(**(long **)this + 0x28))(*(long **)this);
  uVar5 = HardwareScalability::getMSAA();
  if (uVar5 < 5) {
    local_100 = 1;
    local_fc = 1;
    if (*(char *)(lVar8 + 0xdd) == '\0') {
LAB_00a49a08:
      iVar6 = 1;
      iVar14 = 3;
    }
    else {
      if (uVar5 < 2) {
        piVar9 = &local_fc;
        local_100 = 2;
      }
      else {
        if (uVar5 != 2) goto LAB_00a49a08;
        piVar9 = &local_100;
      }
      *piVar9 = 2;
      iVar14 = local_100 * 3;
      iVar6 = local_fc;
    }
  }
  else {
    iVar14 = 0;
    iVar6 = 0;
  }
  lVar8 = (**(code **)(**(long **)this + 0x28))();
  uVar1 = *(uint *)(lVar8 + 0xd8);
  uVar5 = iVar14 + iVar6 + 9;
  if (uVar1 < 0x10) {
    uVar5 = iVar14 + iVar6;
  }
  piVar9 = (int *)(**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),param_1);
  iVar6 = (**(code **)(*(long *)param_3 + 0x20))(param_3);
  iVar7 = (**(code **)(*(long *)param_3 + 0x28))(param_3);
  *piVar9 = iVar6;
  piVar9[1] = iVar7;
  uVar13 = *(undefined8 *)param_6;
  *(undefined8 *)(piVar9 + 4) = *(undefined8 *)(param_6 + 8);
  *(undefined8 *)(piVar9 + 2) = uVar13;
  iVar12 = 0;
  iVar14 = iVar12;
  if (param_6[0x10] != (ValarParameters)0x0) {
    iVar14 = 0x3f800000;
  }
  if (param_4 != (ITextureObject *)0x0) {
    iVar12 = 0x3f800000;
  }
  uVar11 = 1;
  if (param_4 != (ITextureObject *)0x0) {
    uVar11 = 2;
  }
  piVar9[6] = iVar14;
  piVar9[7] = iVar12;
  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),param_1);
  plVar10 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
  local_90 = 0xffffffff;
  local_a0 = "FrameColor";
  local_78 = 0xffffffff;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (iVar6 + (uVar1 - 1)) / uVar1;
  }
  local_b0 = "eyeAdaptedLuminanceBuffer";
  pIStack_a8 = local_f8;
  local_88 = "VelocityBuffer";
  local_c8 = "outShadingRateMask";
  pIStack_c0 = local_f0;
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = (iVar7 + (uVar1 - 1)) / uVar1;
  }
  uStack_d0 = *(undefined8 *)(this + 8);
  local_b8 = 0;
  local_d8 = "ValarData";
  local_e8 = param_3;
  pIStack_e0 = param_4;
  pIStack_98 = param_3;
  pIStack_80 = param_4;
  (**(code **)(*(long *)param_1 + 0x120))(param_1,uVar11,&local_e8,1,&local_f8,0,4);
  (**(code **)(*(long *)param_1 + 0x120))(param_1,1,&local_f0,0,0,1,0xc);
  AdhocShader::bindResourcesCs
            ((AdhocShader *)(this + (ulong)uVar5 * 0x100 + 0x10),param_1,(ShaderTexture *)&local_a0,
             uVar11,(ShaderStructBuffer *)&local_b0,1,(ShaderTexture *)&local_c8,1,
             (ShaderStructBuffer *)0x0,0,(ShaderConstantBuffer *)&local_d8,1,(ShaderSampler *)0x0,0)
  ;
  (**(code **)(*plVar10 + 0x60))(plVar10,uVar2,uVar3,1);
LAB_00a49bf8:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


