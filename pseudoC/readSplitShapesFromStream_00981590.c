// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readSplitShapesFromStream
// Entry Point: 00981590
// Size: 108 bytes
// Signature: undefined __thiscall readSplitShapesFromStream(MeshSplitManager * this, GsBitStream * param_1)


/* MeshSplitManager::readSplitShapesFromStream(GsBitStream*) */

uint __thiscall
MeshSplitManager::readSplitShapesFromStream(MeshSplitManager *this,GsBitStream *param_1)

{
  long lVar1;
  uint uVar2;
  __tree_node **local_40;
  __tree_node *local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = &local_38;
  local_38 = (__tree_node *)0x0;
  uStack_30 = 0;
                    /* try { // try from 009815bc to 009815c3 has its CatchHandler @ 009815fc */
  uVar2 = readSplitShapesFromStream(this,param_1,(map *)&local_40);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>>>
             *)&local_40,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


