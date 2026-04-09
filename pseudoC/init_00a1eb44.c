// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00a1eb44
// Size: 708 bytes
// Signature: undefined __thiscall init(RenderPathManager * this, IRenderDevice * param_1, SharedRenderArgs * param_2)


/* RenderPathManager::init(IRenderDevice*, SharedRenderArgs const&) */

void __thiscall
RenderPathManager::init(RenderPathManager *this,IRenderDevice *param_1,SharedRenderArgs *param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined local_e0 [4];
  undefined4 local_dc;
  undefined local_d8 [4];
  undefined4 local_d4;
  undefined local_d0 [4];
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint uStack_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  undefined local_88;
  undefined uStack_87;
  undefined uStack_86;
  undefined uStack_85;
  undefined uStack_84;
  undefined2 uStack_83;
  undefined uStack_81;
  undefined uStack_80;
  undefined4 local_7f;
  undefined2 local_7b;
  undefined local_79;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_d4 = 4;
  local_d0[0] = 1;
  local_cc = 6;
  local_d8[0] = 0;
  local_e0[0] = 0;
  local_dc = 6;
  uVar4 = (**(code **)(*(long *)param_1 + 0xe0))(param_1,local_d0);
  *(undefined8 *)(this + 8) = uVar4;
  uVar4 = (**(code **)(*(long *)param_1 + 0xe0))(param_1,local_d0);
  *(undefined8 *)(this + 0x28) = uVar4;
  uVar4 = (**(code **)(*(long *)param_1 + 0xe0))(param_1,local_d0);
  *(undefined8 *)(this + 0x48) = uVar4;
  uVar4 = (**(code **)(*(long *)param_1 + 0xe0))(param_1,local_d8);
  *(undefined8 *)(this + 0x68) = uVar4;
  uVar4 = (**(code **)(*(long *)param_1 + 0xe0))(param_1,local_e0);
  *(undefined8 *)(this + 0x88) = uVar4;
  uVar4 = (**(code **)(*(long *)param_1 + 0xe0))(param_1,local_e0);
  *(undefined8 *)(this + 0xa8) = uVar4;
  uVar4 = (**(code **)(*(long *)param_1 + 0xe0))(param_1,local_d0);
  *(undefined8 *)(this + 200) = uVar4;
  uVar4 = (**(code **)(*(long *)param_1 + 0xe0))(param_1,local_e0);
  *(undefined8 *)(this + 0xe8) = uVar4;
  createRasterizerStates(this,param_1,param_2);
  lVar5 = 0;
  bVar3 = true;
  do {
    bVar2 = bVar3;
    uStack_85 = 1;
    uStack_81 = 1;
    local_ac = 1;
    local_9c = 0;
    local_8c = 1;
    local_79 = 1;
    bVar3 = !bVar2;
    if (bVar3) {
      local_b8 = 0x900000009;
      local_b0 = 9;
    }
    else {
      local_b8 = 0x100000001;
      local_b0 = 1;
    }
    local_94 = (uint)!bVar3;
    uStack_98 = (uint)!bVar3;
    local_a4 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_90 = (uint)!bVar3;
    local_a0 = 0;
    local_c8 = 0;
    local_88 = 0;
    uStack_87 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_83 = 0;
    local_7f = 0x10000;
    local_7b = 0;
    uStack_86 = 0;
    uVar4 = (**(code **)(*(long *)param_1 + 0xf0))(param_1,&local_c8);
    local_88 = 1;
    uStack_84 = 1;
    *(undefined8 *)(this + lVar5 * 0x10 + 0x1f0) = uVar4;
    uStack_80 = 1;
    local_7f = CONCAT13(1,(undefined3)local_7f);
    uStack_87 = 1;
    uStack_86 = 1;
    uStack_83 = 0x101;
    local_7f = CONCAT22(local_7f._2_2_,0x101);
    local_7b = 0x101;
    uVar4 = (**(code **)(*(long *)param_1 + 0xf0))(param_1,&local_c8);
    *(undefined8 *)(this + lVar5 * 0x10 + 0x1f8) = uVar4;
    lVar5 = 1;
    bVar3 = false;
  } while (bVar2);
  lVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
  if (*(char *)(lVar5 + 0x95) == '\0') {
    *(undefined4 *)(this + 0x210) = 0x1d;
  }
  this[0x214] = (RenderPathManager)0x1;
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


