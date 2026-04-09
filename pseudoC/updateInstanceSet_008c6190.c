// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateInstanceSet
// Entry Point: 008c6190
// Size: 148 bytes
// Signature: undefined __thiscall updateInstanceSet(InstancedGeometryManager * this, InstanceData * param_1, uint param_2, bool param_3)


/* InstancedGeometryManager::updateInstanceSet(InstancedGeometryManager::InstanceData*, unsigned
   int, bool) */

void __thiscall
InstancedGeometryManager::updateInstanceSet
          (InstancedGeometryManager *this,InstanceData *param_1,uint param_2,bool param_3)

{
  if (*(uint *)(param_1 + 0xc) < param_2 || param_2 < *(uint *)(param_1 + 0xc) && param_3) {
    *(uint *)(param_1 + 0xc) = param_2;
    if (param_1[0x10] == (InstanceData)0x0) {
      if (*(int *)(param_1 + 0x14) == 4) {
        VertexBufferPool::releaseVertexBuffer
                  (*(VertexBufferPool **)(this + 0x38),*(IVertexBuffer **)(param_1 + 0x18));
      }
      else if (*(long **)(param_1 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x18) + 8))();
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      if (*(long **)(param_1 + 0x28) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 8))();
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


