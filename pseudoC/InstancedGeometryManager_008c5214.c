// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~InstancedGeometryManager
// Entry Point: 008c5214
// Size: 88 bytes
// Signature: undefined __thiscall ~InstancedGeometryManager(InstancedGeometryManager * this)


/* InstancedGeometryManager::~InstancedGeometryManager() */

void __thiscall InstancedGeometryManager::~InstancedGeometryManager(InstancedGeometryManager *this)

{
  VertexBufferPool *this_00;
  
                    /* try { // try from 008c5224 to 008c5227 has its CatchHandler @ 008c526c */
  destroy();
  this_00 = *(VertexBufferPool **)(this + 0x38);
  if (this_00 != (VertexBufferPool *)0x0) {
    VertexBufferPool::~VertexBufferPool(this_00);
    operator_delete(this_00);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<TransformGroup*,InstancedGeometryManager::SoftInstanceData>,std::__ndk1::__map_value_compare<TransformGroup*,std::__ndk1::__value_type<TransformGroup*,InstancedGeometryManager::SoftInstanceData>,std::__ndk1::less<TransformGroup*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<TransformGroup*,InstancedGeometryManager::SoftInstanceData>>>
  ::destroy((__tree<std::__ndk1::__value_type<TransformGroup*,InstancedGeometryManager::SoftInstanceData>,std::__ndk1::__map_value_compare<TransformGroup*,std::__ndk1::__value_type<TransformGroup*,InstancedGeometryManager::SoftInstanceData>,std::__ndk1::less<TransformGroup*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<TransformGroup*,InstancedGeometryManager::SoftInstanceData>>>
             *)(this + 0x40),*(__tree_node **)(this + 0x48));
  std::__ndk1::
  __tree<InstancedGeometryManager::InstanceData*,std::__ndk1::less<InstancedGeometryManager::InstanceData*>,std::__ndk1::allocator<InstancedGeometryManager::InstanceData*>>
  ::destroy((__tree<InstancedGeometryManager::InstanceData*,std::__ndk1::less<InstancedGeometryManager::InstanceData*>,std::__ndk1::allocator<InstancedGeometryManager::InstanceData*>>
             *)(this + 0x20),*(__tree_node **)(this + 0x28));
  std::__ndk1::
  __tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
  ::destroy((__tree<InstancedGeometryManager::MeshData*,std::__ndk1::less<InstancedGeometryManager::MeshData*>,std::__ndk1::allocator<InstancedGeometryManager::MeshData*>>
             *)this,*(__tree_node **)(this + 8));
  return;
}


