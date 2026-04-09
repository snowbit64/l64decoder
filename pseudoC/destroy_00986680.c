// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00986680
// Size: 140 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned int, MeshSplitManager::LoadedFileId>,
   std::__ndk1::__map_value_compare<unsigned int, std::__ndk1::__value_type<unsigned int,
   MeshSplitManager::LoadedFileId>, std::__ndk1::less<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<unsigned int, MeshSplitManager::LoadedFileId> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int,
   MeshSplitManager::LoadedFileId>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>>>
::destroy(__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>>>
          *this,__tree_node *param_1)

{
  LoadedSplitShape *pLVar1;
  LoadedSplitShape *this_00;
  LoadedSplitShape *pLVar2;
  
  if (param_1 == (__tree_node *)0x0) {
    return;
  }
  destroy(this,*(__tree_node **)param_1);
  destroy(this,*(__tree_node **)(param_1 + 8));
  pLVar2 = *(LoadedSplitShape **)(param_1 + 0x38);
  if (pLVar2 != (LoadedSplitShape *)0x0) {
    this_00 = *(LoadedSplitShape **)(param_1 + 0x40);
    pLVar1 = pLVar2;
    if (this_00 != pLVar2) {
      do {
        this_00 = this_00 + -0x58;
        MeshSplitManager::LoadedSplitShape::~LoadedSplitShape(this_00);
      } while (this_00 != pLVar2);
      pLVar1 = *(LoadedSplitShape **)(param_1 + 0x38);
    }
    *(LoadedSplitShape **)(param_1 + 0x40) = pLVar2;
    operator_delete(pLVar1);
  }
  BitVector::~BitVector((BitVector *)(param_1 + 0x28));
  operator_delete(param_1);
  return;
}


