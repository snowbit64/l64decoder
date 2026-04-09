// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateTextures
// Entry Point: 006f8484
// Size: 740 bytes
// Signature: undefined __thiscall allocateTextures(RenderOverlay * this, IRenderDevice * param_1)


/* RenderOverlay::allocateTextures(IRenderDevice*) */

void __thiscall RenderOverlay::allocateTextures(RenderOverlay *this,IRenderDevice *param_1)

{
  RenderOverlay RVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  AtmosphereRenderController *this_00;
  long lVar5;
  ScreenSpaceProcessor *this_01;
  AtmosphereRenderControllerShared *pAVar6;
  undefined4 in_stack_fffffffffffffea0;
  undefined4 in_stack_ffffffffffffff00;
  uint in_stack_ffffffffffffff38;
  uint in_stack_ffffffffffffff44;
  undefined8 local_b0;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x90) == 0) {
    uStack_98 = uStack_98 & 0xffffff00;
    uStack_a0 = 2;
    uStack_9c = 0;
    uStack_90 = 0;
    local_8c = 0;
    uStack_a8 = 2;
    uStack_a6 = 0;
    uStack_a4 = 2;
    local_b0 = 0x200000001;
    uVar3 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_b0);
    *(undefined8 *)(this + 0x90) = uVar3;
    RVar1 = this[0xe8];
  }
  else {
    RVar1 = this[0xe8];
  }
  if ((RVar1 == (RenderOverlay)0x0) || (*(long *)(this + 0xe0) != 0)) {
    if (*(long *)(this + 0x88) == 0) {
      uStack_a8 = 0;
      local_8c = 0;
      local_94 = 1;
      uStack_90 = 1;
      local_7c = 0x100000010;
      uStack_a4 = 0;
      uStack_a0 = 0xffffffff;
      uStack_9c = (undefined4)*(undefined8 *)(this + 0x80);
      uStack_98 = (uint)((ulong)*(undefined8 *)(this + 0x80) >> 0x20);
      local_80 = 1;
      local_64 = 0;
      local_88 = 0x500000000;
      uStack_6c = *(undefined8 *)(this + 0xc4);
      local_74 = *(undefined8 *)(this + 0xbc);
      local_60 = "RenderOverlay";
      local_b0 = 0;
      uVar3 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
      uVar3 = (**(code **)(*(long *)param_1 + 0x100))(param_1,uVar3,&local_b0);
      *(undefined8 *)(this + 0x88) = uVar3;
      local_80 = 0;
      local_7c = CONCAT44(local_7c._4_4_,0x30);
      local_88 = CONCAT44(0x1e,(undefined4)local_88);
      local_60 = "RenderOverlayDepthBuffer";
      uVar3 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
      uVar3 = (**(code **)(*(long *)param_1 + 0x100))(param_1,uVar3,&local_b0);
      *(undefined8 *)(this + 0x98) = uVar3;
    }
  }
  else {
    lVar4 = EngineManager::getInstance();
    pAVar6 = *(AtmosphereRenderControllerShared **)(*(long *)(lVar4 + 0xb8) + 0x2030);
    EngineManager::getInstance();
    lVar4 = Renderer::getSharedRenderArgs();
    uStack_a8 = 0;
    uStack_a6 = 0x3f80;
    uStack_a4 = 0x3f800000;
    local_b0 = 0;
    this_00 = (AtmosphereRenderController *)operator_new(0x9a0);
                    /* try { // try from 006f8624 to 006f8637 has its CatchHandler @ 006f876c */
    AtmosphereRenderController::AtmosphereRenderController
              (this_00,param_1,pAVar6,"AtmosphereRenderController used for Renderer Overlays");
    *(AtmosphereRenderController **)(this + 0xe0) = this_00;
    lVar5 = EngineManager::getInstance();
    AtmosphereRenderController::init
              (this_00,param_1,*(uint *)(lVar5 + 0x24c),*(uint *)(this + 0x80),
               *(uint *)(this + 0x84),true);
    this_01 = (ScreenSpaceProcessor *)operator_new(0x1b98);
                    /* try { // try from 006f866c to 006f867f has its CatchHandler @ 006f8768 */
    ScreenSpaceProcessor::ScreenSpaceProcessor
              (this_01,*(AtmosphereRenderController **)(this + 0xe0),(IDisplay *)0x0,0,param_1,
               (float *)&local_b0);
    *(ScreenSpaceProcessor **)(this + 0xd8) = this_01;
    ScreenSpaceProcessor::init
              ((IRenderDevice *)this_01,(uint)param_1,*(uint *)(this + 0x80),*(uint *)(this + 0x84),
               *(uint *)(this + 0x80),(float *)(ulong)*(uint *)(this + 0x84),(int)this + 0xbc,
               SUB41(*(undefined4 *)(lVar4 + 0x44),0),
               CONCAT31((int3)((uint)in_stack_fffffffffffffea0 >> 8),*(undefined *)(lVar4 + 0x48)),
               *(uint *)(lVar4 + 0x4c),0,0,5,0,4,0,0,*(uint *)(this + 0xcc),5,
               SUB41(*(undefined4 *)(this + 0xd0),0),
               CONCAT31((int3)((uint)in_stack_ffffffffffffff00 >> 8),this[0xea]),
               SUB41(*(undefined4 *)(this + 0xd4),0),true,false,true,0.0,false,false,
               in_stack_ffffffffffffff38 & 0xffffff00,
               (char *)((ulong)in_stack_ffffffffffffff44 << 0x20));
    *(undefined8 *)(this + 0x88) = *(undefined8 *)(*(long *)(this + 0xd8) + 0x1890);
    *(undefined8 *)(this + 0x98) = *(undefined8 *)(*(long *)(this + 0xd8) + 0x18d8);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


