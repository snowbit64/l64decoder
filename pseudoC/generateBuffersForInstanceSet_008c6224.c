// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateBuffersForInstanceSet
// Entry Point: 008c6224
// Size: 224 bytes
// Signature: undefined __thiscall generateBuffersForInstanceSet(InstancedGeometryManager * this, IRenderDevice * param_1, InstanceData * param_2)


/* InstancedGeometryManager::generateBuffersForInstanceSet(IRenderDevice*,
   InstancedGeometryManager::InstanceData&) */

void __thiscall
InstancedGeometryManager::generateBuffersForInstanceSet
          (InstancedGeometryManager *this,IRenderDevice *param_1,InstanceData *param_2)

{
  uint uVar1;
  long lVar2;
  ICommandBuffer *pIVar3;
  undefined8 uVar4;
  VertexBufferPool *this_00;
  undefined8 local_60;
  uint local_58;
  int iStack_54;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_2 + 0xc) != 0) {
    iStack_54 = *(int *)(param_2 + 0x14);
    local_60 = 0;
    uVar1 = *(int *)(param_2 + 8) * *(int *)(param_2 + 0xc);
    local_50 = "Instances";
    local_58 = uVar1;
    if (iStack_54 == 4) {
      this_00 = *(VertexBufferPool **)(this + 0x38);
      pIVar3 = (ICommandBuffer *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
      uVar4 = VertexBufferPool::getVertexBuffer(this_00,pIVar3,uVar1,param_1);
    }
    else {
      uVar4 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
      uVar4 = (**(code **)(*(long *)param_1 + 0x108))(param_1,uVar4,&local_60);
    }
    *(undefined8 *)(param_2 + 0x18) = uVar4;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


