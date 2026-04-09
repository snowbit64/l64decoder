// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pinSharedI3D
// Entry Point: 00906068
// Size: 436 bytes
// Signature: undefined __thiscall pinSharedI3D(I3DManager * this, char * param_1, bool param_2, bool param_3)


/* I3DManager::pinSharedI3D(char const*, bool, bool) */

void __thiscall I3DManager::pinSharedI3D(I3DManager *this,char *param_1,bool param_2,bool param_3)

{
  long lVar1;
  __tree_iterator _Var2;
  pair pVar3;
  int iVar4;
  size_t __n;
  ulong uVar5;
  void *__dest;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = (char *)CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00906104;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_70 = (char *)(uVar5 | 1);
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_00906104:
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 0090610c to 00906117 has its CatchHandler @ 00906234 */
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                      *)(this + 0x48),(basic_string *)&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (this + 0x50 == (I3DManager *)(ulong)_Var2) {
    uVar5 = addSharedI3DLoadTask
                      (this,param_1,false,false,(MeshSplitFileState *)0x0,param_2,
                       (IStreamingCallback *)0x0,param_3);
    local_68 = uVar5 & 0xffffffff;
    local_70 = param_1;
    pVar3 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
            ::__emplace_unique_impl<std::__ndk1::pair<char_const*,unsigned_int>>
                      ((pair *)(this + 0x48));
    uVar5 = (ulong)pVar3;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 009061e0 to 009061eb has its CatchHandler @ 0090621c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar5 = LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: i3d file \'%s\' is already pinned in the cache\n",param_1);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


