// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 0097f614
// Size: 380 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MeshSplitManager::reset() */

void MeshSplitManager::reset(void)

{
  void **ppvVar1;
  long lVar2;
  long in_x0;
  void *pvVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  __tree_node **pp_Var7;
  ulong uVar8;
  
  *(undefined8 *)(in_x0 + 0x18) = 0;
  *(undefined4 *)(in_x0 + 0x20) = 0xffffffff;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::LoadedFileId>>>
             *)(in_x0 + 0xd8),*(__tree_node **)(in_x0 + 0xe0));
  *(__tree_node ***)(in_x0 + 0xd8) = (__tree_node **)(in_x0 + 0xe0);
  *(undefined8 *)(in_x0 + 0xe0) = 0;
  *(undefined8 *)(in_x0 + 0xe8) = 0;
  if (*(long *)(in_x0 + 0x110) != 0) {
    ppvVar1 = (void **)*(void **)(in_x0 + 0x108);
    while (ppvVar1 != (void **)0x0) {
      pvVar6 = *ppvVar1;
      operator_delete(ppvVar1);
      ppvVar1 = (void **)pvVar6;
    }
    lVar4 = *(long *)(in_x0 + 0x100);
    *(undefined8 *)(in_x0 + 0x108) = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)(in_x0 + 0xf8) + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    *(undefined8 *)(in_x0 + 0x110) = 0;
  }
  *(undefined4 *)(in_x0 + 0xf0) = 0;
  *(undefined8 *)(in_x0 + 0x78) = 0;
  pp_Var7 = (__tree_node **)(in_x0 + 0xa8);
  *(undefined8 *)(in_x0 + 0x68) = *(undefined8 *)(in_x0 + 0x60);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::FileIdData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::FileIdData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::FileIdData>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::FileIdData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::FileIdData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::FileIdData>>>
             *)(in_x0 + 0xa0),*pp_Var7);
  *(__tree_node ***)(in_x0 + 0xa0) = pp_Var7;
  *(undefined8 *)(in_x0 + 0xb0) = 0;
  *pp_Var7 = (__tree_node *)0x0;
  *(undefined *)(in_x0 + 0x24) = 0;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(in_x0 + 0x120),*(__tree_node **)(in_x0 + 0x128));
  *(undefined8 *)(in_x0 + 0x128) = 0;
  *(undefined8 *)(in_x0 + 0x130) = 0;
  *(long *)(in_x0 + 0x120) = in_x0 + 0x128;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(in_x0 + 0x138),*(__tree_node **)(in_x0 + 0x140));
  *(long *)(in_x0 + 0x138) = in_x0 + 0x140;
  *(undefined8 *)(in_x0 + 0x140) = 0;
  *(undefined8 *)(in_x0 + 0x148) = 0;
  *(undefined4 *)(in_x0 + 0xb8) = 0;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitShape*>>>
             *)(in_x0 + 0xc0),*(__tree_node **)(in_x0 + 200));
  lVar4 = *(long *)(in_x0 + 0x1a0);
  *(__tree_node ***)(in_x0 + 0xc0) = (__tree_node **)(in_x0 + 200);
  *(undefined8 *)(in_x0 + 200) = 0;
  *(undefined8 *)(in_x0 + 0xd0) = 0;
  if (lVar4 != *(long *)(in_x0 + 0x198)) {
    uVar8 = 0;
    lVar2 = *(long *)(in_x0 + 0x198);
    lVar5 = lVar4;
    do {
      lVar4 = lVar2;
      pvVar6 = *(void **)(lVar4 + uVar8 * 0x10 + 8);
      if (pvVar6 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar6 + 8);
        if (pvVar3 != (void *)0x0) {
          *(void **)((long)pvVar6 + 0x10) = pvVar3;
          operator_delete(pvVar3);
        }
        operator_delete(pvVar6);
        lVar4 = *(long *)(in_x0 + 0x198);
        lVar5 = *(long *)(in_x0 + 0x1a0);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
      lVar2 = lVar4;
    } while (uVar8 < (ulong)(lVar5 - lVar4 >> 4));
  }
  *(long *)(in_x0 + 0x1a0) = lVar4;
  *(undefined8 *)(in_x0 + 0x188) = *(undefined8 *)(in_x0 + 0x180);
  *(undefined8 *)(in_x0 + 0x1b8) = *(undefined8 *)(in_x0 + 0x1b0);
  *(undefined8 *)(in_x0 + 0x158) = *(undefined8 *)(in_x0 + 0x150);
  return;
}


