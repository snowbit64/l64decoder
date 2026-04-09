// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 008c6b44
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<InstancedGeometryManager::InstanceData*,std::__ndk1::less<InstancedGeometryManager::InstanceData*>,std::__ndk1::allocator<InstancedGeometryManager::InstanceData*>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<InstancedGeometryManager::InstanceData*,
   std::__ndk1::less<InstancedGeometryManager::InstanceData*>,
   std::__ndk1::allocator<InstancedGeometryManager::InstanceData*>
   >::destroy(std::__ndk1::__tree_node<InstancedGeometryManager::InstanceData*, void*>*) */

void __thiscall
std::__ndk1::
__tree<InstancedGeometryManager::InstanceData*,std::__ndk1::less<InstancedGeometryManager::InstanceData*>,std::__ndk1::allocator<InstancedGeometryManager::InstanceData*>>
::destroy(__tree<InstancedGeometryManager::InstanceData*,std::__ndk1::less<InstancedGeometryManager::InstanceData*>,std::__ndk1::allocator<InstancedGeometryManager::InstanceData*>>
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


