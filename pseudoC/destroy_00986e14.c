// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00986e14
// Size: 92 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned int, MeshSplitManager::SaveTempFileId>,
   std::__ndk1::__map_value_compare<unsigned int, std::__ndk1::__value_type<unsigned int,
   MeshSplitManager::SaveTempFileId>, std::__ndk1::less<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<unsigned int, MeshSplitManager::SaveTempFileId>
   > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int,
   MeshSplitManager::SaveTempFileId>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>>>
::destroy(__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>>>
          *this,__tree_node *param_1)

{
  void *pvVar1;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 0x40));
    }
    pvVar1 = *(void **)(param_1 + 0x28);
    if (pvVar1 != (void *)0x0) {
      *(void **)(param_1 + 0x30) = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(param_1);
    return;
  }
  return;
}


