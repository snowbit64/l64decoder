// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 008c6b04
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<InstancedGeometryManager::MeshData*,
   std::__ndk1::less<InstancedGeometryManager::MeshData*>,
   std::__ndk1::allocator<InstancedGeometryManager::MeshData*>
   >::destroy(std::__ndk1::__tree_node<InstancedGeometryManager::MeshData*, void*>*) */

void __thiscall
std::__ndk1::
__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
::destroy(__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}


