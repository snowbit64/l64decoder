// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadSplitShapesFromFile
// Entry Point: 009800a0
// Size: 192 bytes
// Signature: undefined __thiscall loadSplitShapesFromFile(MeshSplitManager * this, char * param_1)


/* MeshSplitManager::loadSplitShapesFromFile(char const*) */

undefined4 __thiscall
MeshSplitManager::loadSplitShapesFromFile(MeshSplitManager *this,char *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  Mutex::enterCriticalSection();
  plVar1 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  if (plVar1 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = loadSplitShapesFromFile(this,(File *)plVar1);
      if ((uVar2 & 1) == 0) {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>>>
        ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>>>
                   *)(this + 0xd8),*(__tree_node **)(this + 0xe0));
        uVar3 = 0;
        *(MeshSplitManager **)(this + 0xd8) = this + 0xe0;
        *(undefined8 *)(this + 0xe0) = 0;
        *(undefined8 *)(this + 0xe8) = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  Mutex::leaveCriticalSection();
  return uVar3;
}


