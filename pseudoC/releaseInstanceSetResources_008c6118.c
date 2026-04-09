// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseInstanceSetResources
// Entry Point: 008c6118
// Size: 120 bytes
// Signature: undefined __thiscall releaseInstanceSetResources(InstancedGeometryManager * this, InstanceData * param_1)


/* InstancedGeometryManager::releaseInstanceSetResources(InstancedGeometryManager::InstanceData&) */

void __thiscall
InstancedGeometryManager::releaseInstanceSetResources
          (InstancedGeometryManager *this,InstanceData *param_1)

{
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
  return;
}


