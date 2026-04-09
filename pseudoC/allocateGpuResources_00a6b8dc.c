// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateGpuResources
// Entry Point: 00a6b8dc
// Size: 544 bytes
// Signature: undefined __thiscall allocateGpuResources(DensityAnimationMap * this, IRenderDevice * param_1)


/* DensityAnimationMap::allocateGpuResources(IRenderDevice*) */

uint __thiscall
DensityAnimationMap::allocateGpuResources(DensityAnimationMap *this,IRenderDevice *param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_bc;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 *local_a0;
  undefined2 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = compileShaders(this,param_1);
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
    local_74 = 5;
    local_8c = CONCAT44(*(undefined4 *)(this + 0x6c),*(undefined4 *)(this + 0x6c));
    local_94 = 0xffffffff00000000;
    uStack_7c = 0;
    local_84 = 0x100000001;
    local_a0 = (undefined4 *)0x0;
    local_50 = "Density Animation Texture #1";
    local_6c = 0x100000210;
    local_98 = 0;
    uStack_5c = 0x3f80000000000000;
    local_64 = 0;
    local_54 = 0;
    local_70 = 0;
    uVar4 = (**(code **)(*(long *)param_1 + 0x100))(param_1,plVar3,&local_a0);
    *(undefined8 *)(this + 0x80) = uVar4;
    local_50 = "Density Animation Texture #2";
    uVar4 = (**(code **)(*(long *)param_1 + 0x100))(param_1,plVar3,&local_a0);
    *(undefined8 *)(this + 0x88) = uVar4;
    local_bc = 0x80808080;
    local_a0 = &local_bc;
    local_6c._0_4_ = 1;
    local_8c = 0x100000001;
    local_50 = "Density Animation Clear Tile";
    uVar4 = (**(code **)(*(long *)param_1 + 0x100))(param_1,plVar3,&local_a0);
    *(undefined8 *)(this + 0x98) = uVar4;
    local_8c = CONCAT44(*(undefined4 *)(this + 0x6c),*(undefined4 *)(this + 0x6c));
    local_74 = 0x24;
    local_6c = CONCAT44(local_6c._4_4_,0x1004);
    local_a0 = (undefined4 *)0x0;
    local_50 = "Density Animation Info Texture";
    uVar4 = (**(code **)(*(long *)param_1 + 0x100))(param_1,plVar3,&local_a0);
    *(undefined8 *)(this + 0x90) = uVar4;
    local_b0 = 0;
    local_a8 = 8;
    local_b8[0] = 0x90;
    uVar4 = (**(code **)(*(long *)param_1 + 0x118))(param_1,plVar3,local_b8);
    *(undefined8 *)(this + 0xa0) = uVar4;
    shiftGridCells(this,0,0,true);
    FullScreenRenderController::init((FullScreenRenderController *)(this + 0x2c0),param_1);
    (**(code **)(*plVar3 + 0x120))(plVar3,1,this + 0x80,0,0,0,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


