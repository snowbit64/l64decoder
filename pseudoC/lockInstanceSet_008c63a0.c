// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lockInstanceSet
// Entry Point: 008c63a0
// Size: 632 bytes
// Signature: undefined __thiscall lockInstanceSet(InstancedGeometryManager * this, InstanceData * param_1, uint param_2, IRenderDevice * param_3, LockData * param_4, bool param_5)


/* InstancedGeometryManager::lockInstanceSet(InstancedGeometryManager::InstanceData*, unsigned int,
   IRenderDevice*, InstancedGeometryManager::LockData&, bool) */

void __thiscall
InstancedGeometryManager::lockInstanceSet
          (InstancedGeometryManager *this,InstanceData *param_1,uint param_2,IRenderDevice *param_3,
          LockData *param_4,bool param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ICommandBuffer *pIVar5;
  uint uVar6;
  code *pcVar7;
  VertexBufferPool *this_00;
  undefined8 local_78;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  param_1[0x24] = (InstanceData)0x1;
  *(InstanceData **)param_4 = param_1;
  if (param_2 == 0) {
    *(undefined8 *)(param_4 + 8) = 0;
    *(undefined8 *)(param_4 + 0x10) = 0;
    goto LAB_008c65e4;
  }
  uVar6 = *(uint *)(param_1 + 0xc);
  if (param_1[0x10] == (InstanceData)0x0) {
    if (param_2 <= uVar6 && (uVar6 <= param_2 || !param_5)) {
      plVar4 = *(long **)(param_1 + 0x18);
      if (plVar4 == (long *)0x0) {
        iVar1 = *(int *)(param_1 + 0xc);
        goto joined_r0x008c64f0;
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = param_2;
      if (*(int *)(param_1 + 0x14) == 4) {
        VertexBufferPool::releaseVertexBuffer
                  (*(VertexBufferPool **)(this + 0x38),*(IVertexBuffer **)(param_1 + 0x18));
      }
      else if (*(long **)(param_1 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x18) + 8))();
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      iVar1 = *(int *)(param_1 + 0xc);
joined_r0x008c64f0:
      if (iVar1 == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        local_78 = 0;
        local_6c = *(uint *)(param_1 + 0x14);
        uVar6 = *(int *)(param_1 + 8) * iVar1;
        local_68 = "Instances";
        local_70 = uVar6;
        if (local_6c == 4) {
          this_00 = *(VertexBufferPool **)(this + 0x38);
          pIVar5 = (ICommandBuffer *)(**(code **)(*(long *)param_3 + 0x138))(param_3);
          plVar4 = (long *)VertexBufferPool::getVertexBuffer(this_00,pIVar5,uVar6,param_3);
        }
        else {
          uVar3 = (**(code **)(*(long *)param_3 + 0x138))(param_3);
          plVar4 = (long *)(**(code **)(*(long *)param_3 + 0x108))(param_3,uVar3,&local_78);
        }
        *(long **)(param_1 + 0x18) = plVar4;
      }
    }
    uVar3 = (**(code **)(*(long *)param_3 + 0x138))(param_3);
    uVar6 = *(int *)(param_1 + 8) * param_2;
    pcVar7 = *(code **)(*plVar4 + 0x10);
  }
  else {
    if (param_2 <= uVar6 && (uVar6 <= param_2 || !param_5)) {
      plVar4 = *(long **)(param_1 + 0x28);
      if (plVar4 == (long *)0x0) goto LAB_008c6468;
    }
    else {
      *(uint *)(param_1 + 0xc) = param_2;
      if (*(long **)(param_1 + 0x28) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 8))();
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
LAB_008c6468:
      local_70 = *(uint *)(param_1 + 8);
      local_68 = (char *)CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x14));
      local_60 = "Software Instance Data";
      local_78 = 0;
      local_6c = param_2;
      uVar3 = (**(code **)(*(long *)param_3 + 0x138))(param_3);
      plVar4 = (long *)(**(code **)(*(long *)param_3 + 0x120))(param_3,uVar3,&local_78);
      *(long **)(param_1 + 0x28) = plVar4;
    }
    uVar3 = (**(code **)(*(long *)param_3 + 0x138))(param_3);
    pcVar7 = *(code **)(*plVar4 + 0x10);
    uVar6 = param_2;
  }
  uVar3 = (*pcVar7)(plVar4,uVar3,0,uVar6,1);
  *(undefined8 *)(param_4 + 8) = uVar3;
  *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(uint *)(param_4 + 0x14) = param_2;
LAB_008c65e4:
  *(uint *)(param_1 + 0x20) = param_2;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


