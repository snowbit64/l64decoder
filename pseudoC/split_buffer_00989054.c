// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00989054
// Size: 72 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<MeshSplitManager::MovingShapeData,std::__ndk1::allocator<MeshSplitManager::MovingShapeData>&> * this)


/* std::__ndk1::__split_buffer<MeshSplitManager::MovingShapeData,
   std::__ndk1::allocator<MeshSplitManager::MovingShapeData>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<MeshSplitManager::MovingShapeData,std::__ndk1::allocator<MeshSplitManager::MovingShapeData>&>
::~__split_buffer(__split_buffer<MeshSplitManager::MovingShapeData,std::__ndk1::allocator<MeshSplitManager::MovingShapeData>&>
                  *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10) - *(long *)(this + 8);
  if (lVar1 != 0) {
    *(ulong *)(this + 0x10) =
         *(long *)(this + 0x10) + ((lVar1 - 0x2cU) / 0x2c ^ 0xffffffffffffffff) * 0x2c;
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


