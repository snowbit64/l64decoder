// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFromCache
// Entry Point: 00b2fc68
// Size: 500 bytes
// Signature: undefined __thiscall removeFromCache(ArchiveFileLoader * this, char * param_1, bool param_2)


/* ArchiveFileLoader::removeFromCache(char const*, bool) */

void __thiscall
ArchiveFileLoader::removeFromCache(ArchiveFileLoader *this,char *param_1,bool param_2)

{
  __tree_node_base **this_00;
  long lVar1;
  __tree_iterator _Var2;
  size_t sVar3;
  basic_string_conflict *pbVar5;
  __tree_node_base **pp_Var6;
  __tree_node_base **pp_Var7;
  __tree_node_base *p_Var8;
  basic_string_conflict *__n;
  void *__dest;
  ulong local_88;
  basic_string_conflict *pbStack_80;
  void *local_78;
  undefined8 local_70;
  basic_string_conflict *pbStack_68;
  void *local_60;
  long local_58;
  __tree_node_base *p_Var4;
  
  pbVar5 = (basic_string_conflict *)(ulong)param_2;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  sVar3 = strlen(param_1);
  if ((uint)sVar3 < 5) goto LAB_00b2fe2c;
  __n = (basic_string_conflict *)(sVar3 + 0xfffffffc & 0xffffffff);
  if (param_1[(long)__n] != '.') goto LAB_00b2fe2c;
  if (__n < (basic_string_conflict *)0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)(sVar3 + 0xfffffffc) << 1));
    if (__n != (basic_string_conflict *)0x0) goto LAB_00b2fd04;
  }
  else {
    __dest = operator_new((ulong)(__n + 0x10) & 0x1fffffff0);
    local_70 = (ulong)(__n + 0x10) & 0x1fffffff0 | 1;
    pbStack_68 = __n;
    local_60 = __dest;
LAB_00b2fd04:
    pbVar5 = __n;
    memcpy(__dest,param_1,(size_t)__n);
  }
  *(basic_string_conflict *)((long)__dest + (long)__n) = (basic_string_conflict)0x0;
                    /* try { // try from 00b2fd18 to 00b2fd1f has its CatchHandler @ 00b2fe64 */
  PathUtil::makeUnifiedPathInPlace((basic_string *)&local_70);
  if (!param_2) {
                    /* try { // try from 00b2fd28 to 00b2fd33 has its CatchHandler @ 00b2fe5c */
    std::__ndk1::operator+((__ndk1 *)(this + 0x10),(basic_string_conflict *)&local_70,pbVar5);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    pbStack_68 = pbStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
                    /* try { // try from 00b2fd58 to 00b2fd5f has its CatchHandler @ 00b2fe64 */
  Mutex::enterCriticalSection();
  this_00 = (__tree_node_base **)(this + 0x40);
                    /* try { // try from 00b2fd64 to 00b2fd6f has its CatchHandler @ 00b2fe60 */
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>>>
                      *)this_00,(basic_string *)&local_70);
  p_Var4 = (__tree_node_base *)(ulong)_Var2;
  if (this + 0x48 != (ArchiveFileLoader *)p_Var4) {
    if (*(long **)(p_Var4 + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(p_Var4 + 0x40) + 8))();
    }
    pp_Var7 = *(__tree_node_base ***)(p_Var4 + 8);
    if (*(__tree_node_base ***)(p_Var4 + 8) == (__tree_node_base **)0x0) {
      pp_Var7 = (__tree_node_base **)(p_Var4 + 0x10);
      pp_Var6 = (__tree_node_base **)*pp_Var7;
      if (*pp_Var6 != p_Var4) {
        do {
          p_Var8 = *pp_Var7;
          pp_Var7 = (__tree_node_base **)(p_Var8 + 0x10);
          pp_Var6 = (__tree_node_base **)*pp_Var7;
        } while (*pp_Var6 != p_Var8);
      }
    }
    else {
      do {
        pp_Var6 = pp_Var7;
        pp_Var7 = (__tree_node_base **)*pp_Var6;
      } while ((__tree_node_base **)*pp_Var6 != (__tree_node_base **)0x0);
    }
    if (*this_00 == p_Var4) {
      *this_00 = (__tree_node_base *)pp_Var6;
    }
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + -1;
    std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x48),p_Var4);
    if (((byte)p_Var4[0x20] & 1) != 0) {
      operator_delete(*(void **)(p_Var4 + 0x30));
    }
    operator_delete(p_Var4);
  }
                    /* try { // try from 00b2fe14 to 00b2fe1b has its CatchHandler @ 00b2fe60 */
  Mutex::leaveCriticalSection();
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00b2fe2c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


