// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArchiveFromCache
// Entry Point: 00b3052c
// Size: 280 bytes
// Signature: undefined __thiscall getArchiveFromCache(ArchiveFileLoader * this, char * param_1)


/* ArchiveFileLoader::getArchiveFromCache(char const*) */

ArchiveFileLoader * __thiscall
ArchiveFileLoader::getArchiveFromCache(ArchiveFileLoader *this,char *param_1)

{
  ArchiveFileLoader *pAVar1;
  long lVar2;
  __tree_iterator _Var3;
  size_t __n;
  void *__dest;
  ulong uVar4;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  Mutex::enterCriticalSection();
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00b305cc;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_70 = uVar4 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_00b305cc:
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00b305d4 to 00b305db has its CatchHandler @ 00b30644 */
  _Var3 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ArchiveFileLoader::ArchiveCacheEntry>>>
                      *)(this + 0x40),(basic_string *)&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  pAVar1 = (ArchiveFileLoader *)0x0;
  if (this + 0x48 != (ArchiveFileLoader *)(ulong)_Var3) {
    pAVar1 = (ArchiveFileLoader *)(ulong)_Var3 + 0x38;
  }
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pAVar1;
}


