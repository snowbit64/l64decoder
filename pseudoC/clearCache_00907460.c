// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearCache
// Entry Point: 00907460
// Size: 508 bytes
// Signature: undefined __thiscall clearCache(I3DManager * this, bool param_1)


/* I3DManager::clearCache(bool) */

void __thiscall I3DManager::clearCache(I3DManager *this,bool param_1)

{
  void **ppvVar1;
  long lVar2;
  bool bVar3;
  I3DStreamingManager *this_00;
  I3DManager **ppIVar4;
  I3DManager *pIVar5;
  void *pvVar6;
  void **ppvVar7;
  __tree_node **pp_Var8;
  long **pplVar9;
  I3DManager **ppIVar10;
  byte local_68;
  void *local_58;
  long **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  ppvVar7 = *(void ***)this;
  ppvVar1 = *(void ***)(this + 8);
  bVar3 = ppvVar7 != ppvVar1;
  if (param_1) {
    if (bVar3) {
      do {
        pvVar6 = *ppvVar7;
        if (*(long **)((long)pvVar6 + 0x28) != (long *)0x0) {
          (**(code **)(**(long **)((long)pvVar6 + 0x28) + 8))();
        }
        if (*(long **)((long)pvVar6 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)((long)pvVar6 + 0x20) + 8))();
        }
        operator_delete(pvVar6);
        ppvVar7 = ppvVar7 + 1;
      } while (ppvVar7 != ppvVar1);
      ppvVar7 = *(void ***)this;
    }
    *(void ***)(this + 8) = ppvVar7;
  }
  else {
    while (bVar3) {
      pvVar6 = *ppvVar7;
      bVar3 = ppvVar7 + 1 != ppvVar1;
      *(undefined8 *)((long)pvVar6 + 8) = 0;
      *(undefined *)((long)pvVar6 + 0x30) = 1;
      *(undefined4 *)((long)pvVar6 + 0x34) = 0;
      *(undefined4 *)((long)pvVar6 + 0x3c) = 1;
      ppvVar7 = ppvVar7 + 1;
    }
  }
  pp_Var8 = (__tree_node **)(this + 0x20);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,I3DManager::SharedI3D*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,I3DManager::SharedI3D*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,I3DManager::SharedI3D*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,I3DManager::SharedI3D*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,I3DManager::SharedI3D*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,I3DManager::SharedI3D*>>>
             *)(this + 0x18),*pp_Var8);
  *(__tree_node ***)(this + 0x18) = pp_Var8;
  *pp_Var8 = (__tree_node *)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  ppIVar10 = *(I3DManager ***)(this + 0x30);
  while (ppIVar10 != (I3DManager **)(this + 0x38)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_68);
    pplVar9 = (long **)ppIVar10[7];
    local_50 = pplVar9;
    if (*(I3DManager *)(pplVar9 + 1) == (I3DManager)0x0) {
                    /* try { // try from 009075d8 to 009075e7 has its CatchHandler @ 0090765c */
      this_00 = (I3DStreamingManager *)I3DStreamingManager::getInstance();
      I3DStreamingManager::cancelI3DLoadTask(this_00,*(uint *)((long)pplVar9 + 0x14),true);
    }
    else if (*pplVar9 != (long *)0x0) {
      (**(code **)(**pplVar9 + 8))();
    }
    if (((byte)*(I3DManager *)(pplVar9 + 3) & 1) != 0) {
      operator_delete(pplVar9[5]);
    }
    operator_delete(pplVar9);
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    ppIVar4 = (I3DManager **)ppIVar10[1];
    if ((I3DManager **)ppIVar10[1] == (I3DManager **)0x0) {
      ppIVar4 = ppIVar10 + 2;
      bVar3 = (I3DManager **)*(I3DManager **)*ppIVar4 != ppIVar10;
      ppIVar10 = (I3DManager **)*ppIVar4;
      if (bVar3) {
        do {
          pIVar5 = *ppIVar4;
          ppIVar4 = (I3DManager **)(pIVar5 + 0x10);
          ppIVar10 = (I3DManager **)*ppIVar4;
        } while (*ppIVar10 != pIVar5);
      }
    }
    else {
      do {
        ppIVar10 = ppIVar4;
        ppIVar4 = (I3DManager **)*ppIVar10;
      } while ((I3DManager **)*ppIVar10 != (I3DManager **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>>>
             *)(this + 0x30),*(__tree_node **)(this + 0x38));
  *(undefined8 *)(this + 0x38) = 0;
  *(I3DManager **)(this + 0x30) = this + 0x38;
  *(undefined8 *)(this + 0x40) = 0;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
             *)(this + 0x48),*(__tree_node **)(this + 0x50));
  *(I3DManager **)(this + 0x48) = this + 0x50;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


