// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateGridGPUResources
// Entry Point: 00a29870
// Size: 1164 bytes
// Signature: undefined __thiscall updateGridGPUResources(LightListRasterizer * this, ICommandBuffer * param_1, IRenderDevice * param_2, Vector3 * param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9)


/* LightListRasterizer::updateGridGPUResources(ICommandBuffer*, IRenderDevice*, Vector3 const&,
   float, float, float, float, float, float) */

void __thiscall
LightListRasterizer::updateGridGPUResources
          (LightListRasterizer *this,ICommandBuffer *param_1,IRenderDevice *param_2,Vector3 *param_3
          ,float param_4,float param_5,float param_6,float param_7,float param_8,float param_9)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *__src;
  ulong uVar10;
  uint uVar11;
  void *local_f8;
  uint local_f0;
  ulong local_ec;
  uint local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_ac;
  char *local_a8;
  long local_a0;
  
  lVar3 = tpidr_el0;
  local_a0 = *(long *)(lVar3 + 0x28);
  (**(code **)(*(long *)param_2 + 0x28))(param_2);
  uVar1 = *(int *)(this + 0x24) * *(int *)(this + 8);
  if (*(long **)(this + 0x60) == (long *)0x0) {
LAB_00a299d0:
    local_f8 = *(void **)(this + 0x28);
    local_e0 = *(undefined8 *)(this + 0xc);
    uStack_b4 = 0x3f80000000000000;
    local_bc = 0;
    local_c4 = 0x100000004;
    local_ec = 0xffffffff00000000;
    uStack_d8 = 1;
    local_a8 = "LightList grid texture";
    local_f0 = local_f0 & 0xffff0000;
    local_c8 = 0;
    local_ac = 0;
    local_d0 = 0x2900000000;
    local_e4 = uVar1;
    uVar8 = (**(code **)(*(long *)param_2 + 0x100))(param_2,param_1,&local_f8);
    *(undefined8 *)(this + 0x60) = uVar8;
    plVar7 = *(long **)(this + 0x68);
  }
  else {
    uVar5 = (**(code **)(**(long **)(this + 0x60) + 0x20))();
    if ((uVar5 != uVar1) ||
       (iVar6 = (**(code **)(**(long **)(this + 0x60) + 0x28))(), iVar6 != *(int *)(this + 0xc))) {
      if (*(long **)(this + 0x60) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x60) + 8))();
      }
      *(undefined8 *)(this + 0x60) = 0;
      goto LAB_00a299d0;
    }
    plVar7 = *(long **)(this + 0x60);
    if (plVar7 == (long *)0x0) goto LAB_00a299d0;
    (**(code **)(*plVar7 + 0x68))
              (plVar7,param_1,0,0,0,0,uVar1,iVar6,0,*(undefined4 *)(this + 0x10),1,&local_f8);
    __src = *(void **)(this + 0x28);
    if ((ulong)uVar1 * 4 - (ulong)local_f0 == 0) {
      if ((ulong)local_f0 * (ulong)*(uint *)(this + 0xc) - (local_ec & 0xffffffff) == 0) {
        memcpy(local_f8,__src,(local_ec & 0xffffffff) * (ulong)*(uint *)(this + 0x10));
      }
      else if ((*(int *)(this + 0x10) != 0) &&
              (memcpy(local_f8,__src,(ulong)(*(uint *)(this + 0xc) * uVar1) << 2),
              1 < *(uint *)(this + 0x10))) {
        uVar5 = 1;
        do {
          memcpy((void *)((long)local_f8 + (ulong)((int)local_ec * uVar5)),
                 (void *)((long)__src + (ulong)(*(int *)(this + 0xc) * uVar1 * uVar5) * 4),
                 (ulong)(*(int *)(this + 0xc) * uVar1) << 2);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(this + 0x10));
      }
    }
    else {
      uVar5 = *(uint *)(this + 0x10);
      if (uVar5 != 0) {
        uVar11 = 0;
        uVar9 = (ulong)*(uint *)(this + 0xc);
        do {
          pvVar4 = local_f8;
          iVar6 = (int)uVar9;
          if (iVar6 != 0) {
            uVar5 = 0;
            uVar10 = 0;
            uVar2 = (int)local_ec * uVar11;
            do {
              memcpy((void *)((long)pvVar4 + (ulong)(local_f0 * (int)uVar10) + (ulong)uVar2),
                     (void *)((long)__src + (ulong)uVar5 * 4 + (ulong)(uVar11 * uVar1 * iVar6) * 4),
                     (ulong)uVar1 * 4);
              uVar9 = (ulong)*(uint *)(this + 0xc);
              uVar10 = uVar10 + 1;
              uVar5 = uVar5 + uVar1;
            } while (uVar10 < uVar9);
            uVar5 = *(uint *)(this + 0x10);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar5);
      }
    }
    (**(code **)(**(long **)(this + 0x60) + 0x70))(*(long **)(this + 0x60),param_1,&local_f8);
    plVar7 = *(long **)(this + 0x68);
  }
  if (plVar7 != (long *)0x0) {
    iVar6 = (**(code **)(*plVar7 + 0x20))();
    plVar7 = *(long **)(this + 0x68);
    if (iVar6 == *(int *)(this + 0x14)) {
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x68))(plVar7,param_1,0,0,0,0,iVar6,1,0,1,1,&local_f8);
        memcpy(local_f8,*(void **)(this + 0x88),(ulong)*(uint *)(this + 0x14) << 2);
        (**(code **)(**(long **)(this + 0x68) + 0x70))(*(long **)(this + 0x68),param_1,&local_f8);
        goto LAB_00a29b68;
      }
    }
    else {
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      *(undefined8 *)(this + 0x68) = 0;
    }
  }
  local_e4 = *(uint *)(this + 0x14);
  local_f8 = *(void **)(this + 0x88);
  uStack_b4 = 0x3f80000000000000;
  local_bc = 0;
  local_f0 = local_f0 & 0xffff0000;
  local_e0 = 0x100000001;
  uStack_d8 = 1;
  local_c4 = 0x100000004;
  local_c8 = 0;
  local_ac = 0;
  local_ec = 0xffffffff00000000;
  local_d0 = 0x2500000004;
  local_a8 = "LightList depth texture";
  uVar8 = (**(code **)(*(long *)param_2 + 0x100))(param_2,param_1,&local_f8);
  *(undefined8 *)(this + 0x68) = uVar8;
LAB_00a29b68:
  updateLightsTexture(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      (IStructBuffer **)(this + 0x58));
  (**(code **)(*(long *)param_2 + 0x28))(param_2);
  if (*(long *)(lVar3 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


