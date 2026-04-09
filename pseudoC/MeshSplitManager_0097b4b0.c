// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MeshSplitManager
// Entry Point: 0097b4b0
// Size: 352 bytes
// Signature: undefined __thiscall ~MeshSplitManager(MeshSplitManager * this)


/* MeshSplitManager::~MeshSplitManager() */

void __thiscall MeshSplitManager::~MeshSplitManager(MeshSplitManager *this)

{
  void **ppvVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (*(long **)(this + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x80) + 8))();
  }
  pvVar2 = *(void **)(this + 0x1c8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1d0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x1b0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1b8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x198);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1a0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x180);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x188) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x168);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x170) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x150);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x158) = pvVar2;
    operator_delete(pvVar2);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(this + 0x138),*(__tree_node **)(this + 0x140));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(this + 0x120),*(__tree_node **)(this + 0x128));
  ppvVar1 = (void **)*(void **)(this + 0x108);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *(void **)(this + 0xf8);
  *(undefined8 *)(this + 0xf8) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>>>
             *)(this + 0xd8),*(__tree_node **)(this + 0xe0));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>>>
             *)(this + 0xc0),*(__tree_node **)(this + 200));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::FileIdData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::FileIdData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::FileIdData>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::FileIdData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::FileIdData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::FileIdData>>>
             *)(this + 0xa0),*(__tree_node **)(this + 0xa8));
  pbVar4 = *(byte **)(this + 0x88);
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 0x90);
    pbVar5 = pbVar4;
    if (pbVar3 != pbVar4) {
      do {
        pbVar5 = pbVar3 + -0x30;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -0x20));
        }
        pbVar3 = pbVar5;
      } while (pbVar5 != pbVar4);
      pbVar5 = *(byte **)(this + 0x88);
    }
    *(byte **)(this + 0x90) = pbVar4;
    operator_delete(pbVar5);
  }
  pvVar2 = *(void **)(this + 0x60);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar2;
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)(this + 0x38));
  return;
}


