// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ResourceManager
// Entry Point: 00b2b3e0
// Size: 340 bytes
// Signature: undefined __thiscall ~ResourceManager(ResourceManager * this)


/* ResourceManager::~ResourceManager() */

void __thiscall ResourceManager::~ResourceManager(ResourceManager *this)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  ResourceManager **ppRVar4;
  long lVar5;
  ResourceManager *pRVar6;
  undefined8 *this_00;
  ResourceManager **ppRVar7;
  long *plVar8;
  ulong uVar9;
  
  this_00 = (undefined8 *)(this + 0x48);
  ppRVar7 = (ResourceManager **)*this_00;
  while (ppRVar7 != (ResourceManager **)(this + 0x50)) {
    if ((long *)ppRVar7[5] != (long *)0x0) {
      (**(code **)(*(long *)ppRVar7[5] + 8))();
    }
    ppRVar4 = (ResourceManager **)ppRVar7[1];
    if ((ResourceManager **)ppRVar7[1] == (ResourceManager **)0x0) {
      ppRVar4 = ppRVar7 + 2;
      bVar1 = *(ResourceManager ***)*ppRVar4 != ppRVar7;
      ppRVar7 = (ResourceManager **)*ppRVar4;
      if (bVar1) {
        do {
          pRVar6 = *ppRVar4;
          ppRVar4 = (ResourceManager **)(pRVar6 + 0x10);
          ppRVar7 = (ResourceManager **)*ppRVar4;
        } while (*ppRVar7 != pRVar6);
      }
    }
    else {
      do {
        ppRVar7 = ppRVar4;
        ppRVar4 = (ResourceManager **)*ppRVar7;
      } while ((ResourceManager **)*ppRVar7 != (ResourceManager **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,ResourceLoader*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ResourceLoader*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ResourceLoader*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,ResourceLoader*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ResourceLoader*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ResourceLoader*>>>
             *)this_00,*(__tree_node **)(this + 0x50));
  *(undefined8 *)(this + 0x50) = 0;
  lVar5 = *(long *)(this + 0x38);
  *(ResourceManager **)(this + 0x48) = this + 0x50;
  *(undefined8 *)(this + 0x58) = 0;
  if (lVar5 != *(long *)(this + 0x30)) {
    uVar9 = 0;
    lVar5 = *(long *)(this + 0x30);
    do {
      plVar8 = *(long **)(lVar5 + uVar9 * 8);
      iVar2 = FUN_00f27700(0xffffffff,plVar8 + 1);
      if (iVar2 < 2) {
                    /* try { // try from 00b2b4d8 to 00b2b4df has its CatchHandler @ 00b2b534 */
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      lVar5 = *(long *)(this + 0x30);
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 < (ulong)(*(long *)(this + 0x38) - lVar5 >> 3));
  }
  *(long *)(this + 0x38) = lVar5;
  Mutex::~Mutex((Mutex *)(this + 0x60));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,ResourceLoader*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ResourceLoader*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ResourceLoader*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,ResourceLoader*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ResourceLoader*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ResourceLoader*>>>
             *)this_00,*(__tree_node **)(this + 0x50));
  pvVar3 = *(void **)(this + 0x30);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar3;
    operator_delete(pvVar3);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<Resource*,std::__ndk1::vector<std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,void*>*,long>>,std::__ndk1::allocator<std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,void*>*,long>>>>>,std::__ndk1::__map_value_compare<Resource*,std::__ndk1::__value_type<Resource*,std::__ndk1::vector<std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,void*>*,long>>,std::__ndk1::allocator<std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,void*>*,long>>>>>,std::__ndk1::less<Resource*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Resource*,std::__ndk1::vector<std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,void*>*,long>>,std::__ndk1::allocator<std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,void*>*,long>>>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<Resource*,std::__ndk1::vector<std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,void*>*,long>>,std::__ndk1::allocator<std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,void*>*,long>>>>>,std::__ndk1::__map_value_compare<Resource*,std::__ndk1::__value_type<Resource*,std::__ndk1::vector<std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,void*>*,long>>,std::__ndk1::allocator<std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,void*>*,long>>>>>,std::__ndk1::less<Resource*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Resource*,std::__ndk1::vector<std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,void*>*,long>>,std::__ndk1::allocator<std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,void*>*,long>>>>>>>
             *)(this + 0x18),*(__tree_node **)(this + 0x20));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
  ::destroy((__tree<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::__map_value_compare<ResourceManager::InternalResourceDesc,std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>,std::__ndk1::less<ResourceManager::InternalResourceDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<ResourceManager::InternalResourceDesc,Resource*>>>
             *)this,*(__tree_node **)(this + 8));
  return;
}


