// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRasterizerStates
// Entry Point: 00a1ee08
// Size: 468 bytes
// Signature: undefined __thiscall createRasterizerStates(RenderPathManager * this, IRenderDevice * param_1, SharedRenderArgs * param_2)


/* RenderPathManager::createRasterizerStates(IRenderDevice*, SharedRenderArgs const&) */

void __thiscall
RenderPathManager::createRasterizerStates
          (RenderPathManager *this,IRenderDevice *param_1,SharedRenderArgs *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long **pplVar6;
  uint local_90;
  undefined4 uStack_8c;
  double local_88;
  long local_80;
  undefined4 local_78;
  undefined local_74;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  uVar5 = 0;
  local_68 = *(long *)(lVar2 + 0x28);
  pplVar6 = (long **)(this + 0x140);
  do {
    uVar4 = uVar5 >> 1 & 3;
    local_70 = *(undefined4 *)(param_2 + 0x4c);
    local_74 = 0;
    local_78 = 0x1000101;
    uVar1 = ~(uint)uVar5 & 1;
    uStack_8c = 0;
    local_88 = (double)(float)(&g_depthBiasSettings)[uVar4] * -1.192092895507812e-07;
    local_80 = (ulong)(uint)-(float)(&g_slopeScaledDepthBiasSettings)[uVar4] << 0x20;
    local_90 = uVar1;
    if (pplVar6[-2] != (long *)0x0) {
      (**(code **)(*pplVar6[-2] + 8))();
    }
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0xe8))(param_1,&local_90);
    pplVar6[-2] = plVar3;
    local_70 = *(undefined4 *)(param_2 + 0x4c);
    local_88 = (double)(float)(&g_depthBiasSettings)[uVar4] * -1.192092895507812e-07;
    uStack_8c = 1;
    local_80 = CONCAT44(-(float)(&g_slopeScaledDepthBiasSettings)[uVar4],(undefined4)local_80);
    local_90 = uVar1;
    if (pplVar6[-1] != (long *)0x0) {
      (**(code **)(*pplVar6[-1] + 8))();
    }
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0xe8))(param_1,&local_90);
    pplVar6[-1] = plVar3;
    uStack_8c = 2;
    local_70 = *(undefined4 *)(param_2 + 0x4c);
    local_88 = (double)(float)(&g_depthBiasSettings)[uVar4] * -1.192092895507812e-07;
    local_80 = CONCAT44(-(float)(&g_slopeScaledDepthBiasSettings)[uVar4],(undefined4)local_80);
    local_90 = uVar1;
    if (*pplVar6 != (long *)0x0) {
      (**(code **)(**pplVar6 + 8))();
    }
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0xe8))(param_1,&local_90);
    uVar5 = uVar5 + 1;
    *pplVar6 = plVar3;
    pplVar6 = pplVar6 + 3;
  } while (uVar5 != 8);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


