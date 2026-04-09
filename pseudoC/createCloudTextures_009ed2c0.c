// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createCloudTextures
// Entry Point: 009ed2c0
// Size: 572 bytes
// Signature: undefined __thiscall createCloudTextures(AtmosphereRenderController * this, IRenderDevice * param_1, uint param_2, uint param_3, bool param_4)


/* AtmosphereRenderController::createCloudTextures(IRenderDevice*, unsigned int, unsigned int, bool)
    */

void __thiscall
AtmosphereRenderController::createCloudTextures
          (AtmosphereRenderController *this,IRenderDevice *param_1,uint param_2,uint param_3,
          bool param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_118;
  undefined2 local_110;
  undefined8 local_10c;
  uint local_104;
  uint uStack_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined4 local_ec;
  undefined local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined4 local_cc;
  char *local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  uint local_ac;
  uint uStack_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(uint *)(this + 0x954) = param_2;
  *(uint *)(this + 0x958) = param_3;
  plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar1 = param_2 + 1 >> 1;
  uVar2 = param_3 + 1 >> 1;
  *(uint *)(this + 0x95c) = uVar1;
  *(uint *)(this + 0x960) = uVar2;
  if (*(long **)(this + 0x938) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x938) + 8))();
  }
  local_ac = uVar1 + 1 >> 1;
  uStack_a8 = uVar2 + 1 >> 1;
  local_c0 = 0;
  local_b4 = 0xffffffff00000000;
  local_b8 = 0;
  uStack_9c = 0;
  local_a4 = 0x100000001;
  local_8c = 0x100002001;
  uStack_7c = 0x3f80000000000000;
  local_84 = 0;
  local_94 = 0x15;
  local_90 = 0;
  local_74 = 0;
  local_70 = "Cloud Subframe Texture";
  uVar5 = (**(code **)(*(long *)param_1 + 0x100))(param_1,plVar4,&local_c0);
  *(undefined8 *)(this + 0x938) = uVar5;
  if (*(long **)(this + 0x940) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x940) + 8))();
  }
  if (*(long **)(this + 0x948) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x948) + 8))();
  }
  *(undefined8 *)(this + 0x940) = 0;
  *(undefined8 *)(this + 0x948) = 0;
  this[0x950] = (AtmosphereRenderController)0x1;
  if (param_4) {
    local_10c = 0xffffffff00000000;
    local_e4 = 0x100002001;
    uStack_f4 = 0;
    local_fc = 0x100000001;
    local_ec = 0x15;
    local_118 = 0;
    local_110 = 0;
    local_e8 = 0;
    uStack_d4 = 0x3f80000000000000;
    local_dc = 0;
    local_cc = 0;
    local_c8 = "Prev Frame Clouds Texture";
    local_104 = uVar1;
    uStack_100 = uVar2;
    uVar5 = (**(code **)(*(long *)param_1 + 0x100))(param_1,plVar4,&local_118);
    *(undefined8 *)(this + 0x940) = uVar5;
    uVar5 = (**(code **)(*(long *)param_1 + 0x100))(param_1,plVar4,&local_118);
    *(undefined8 *)(this + 0x948) = uVar5;
    (**(code **)(*plVar4 + 0x120))(plVar4,2,this + 0x940,0,0,0,0xc);
    this[0x995] = (AtmosphereRenderController)0x1;
  }
  this[0x994] = (AtmosphereRenderController)param_4;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


