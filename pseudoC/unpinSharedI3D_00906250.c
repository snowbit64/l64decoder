// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unpinSharedI3D
// Entry Point: 00906250
// Size: 516 bytes
// Signature: undefined __thiscall unpinSharedI3D(I3DManager * this, char * param_1)


/* I3DManager::unpinSharedI3D(char const*) */

void __thiscall I3DManager::unpinSharedI3D(I3DManager *this,char *param_1)

{
  __tree_node_base **this_00;
  long lVar1;
  __tree_iterator _Var2;
  int iVar3;
  size_t __n;
  __tree_node_base **pp_Var5;
  __tree_node_base **pp_Var6;
  __tree_node_base *p_Var7;
  void *__dest;
  ulong uVar8;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  __tree_node_base *p_Var4;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  this_00 = (__tree_node_base **)(this + 0x48);
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_009062e8;
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar8);
    local_70 = uVar8 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_009062e8:
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 009062ec to 009062f7 has its CatchHandler @ 0090646c */
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                      *)this_00,(basic_string *)&local_70);
  p_Var4 = (__tree_node_base *)(ulong)_Var2;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (this + 0x50 == (I3DManager *)p_Var4) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00906418 to 00906423 has its CatchHandler @ 00906454 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: i3d file \'%s\' is not pinned in the cache\n",param_1);
  }
  else {
    releaseSharedI3D(this,*(uint *)(p_Var4 + 0x38),true);
    pp_Var6 = *(__tree_node_base ***)(p_Var4 + 8);
    if (*(__tree_node_base ***)(p_Var4 + 8) == (__tree_node_base **)0x0) {
      pp_Var6 = (__tree_node_base **)(p_Var4 + 0x10);
      pp_Var5 = (__tree_node_base **)*pp_Var6;
      if (*pp_Var5 != p_Var4) {
        do {
          p_Var7 = *pp_Var6;
          pp_Var6 = (__tree_node_base **)(p_Var7 + 0x10);
          pp_Var5 = (__tree_node_base **)*pp_Var6;
        } while (*pp_Var5 != p_Var7);
      }
    }
    else {
      do {
        pp_Var5 = pp_Var6;
        pp_Var6 = (__tree_node_base **)*pp_Var5;
      } while ((__tree_node_base **)*pp_Var5 != (__tree_node_base **)0x0);
    }
    if (*this_00 == p_Var4) {
      *this_00 = (__tree_node_base *)pp_Var5;
    }
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + -1;
    std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x50),p_Var4);
    if (((byte)p_Var4[0x20] & 1) != 0) {
      operator_delete(*(void **)(p_Var4 + 0x30));
    }
    operator_delete(p_Var4);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


