// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: openFile
// Entry Point: 00b31c94
// Size: 356 bytes
// Signature: undefined __thiscall openFile(CryptoFileArchive * this, char * param_1)


/* CryptoFileArchive::openFile(char const*) */

long * __thiscall CryptoFileArchive::openFile(CryptoFileArchive *this,char *param_1)

{
  long lVar1;
  __tree_iterator _Var2;
  size_t __n;
  long *this_00;
  ulong uVar3;
  void *__dest;
  FILE_ITEM *pFVar4;
  undefined8 local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 8) == 0) {
    this_00 = (long *)0x0;
    goto LAB_00b31dc0;
  }
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00b31d24;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_60 = uVar3 | 1;
    local_58 = __n;
    local_50 = __dest;
LAB_00b31d24:
    memcpy(__dest,param_1,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00b31d3c to 00b31d43 has its CatchHandler @ 00b31e08 */
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>>>
                      *)(this + 0x38),(basic_string *)&local_60);
  if (this + 0x40 == (CryptoFileArchive *)(ulong)_Var2) {
LAB_00b31dac:
    this_00 = (long *)0x0;
  }
  else {
    pFVar4 = *(FILE_ITEM **)((CryptoFileArchive *)(ulong)_Var2 + 0x38);
                    /* try { // try from 00b31d58 to 00b31d67 has its CatchHandler @ 00b31e0c */
    Mutex::enterCriticalSection();
    this_00 = (long *)operator_new(0x28);
                    /* try { // try from 00b31d78 to 00b31d7f has its CatchHandler @ 00b31df8 */
    CryptoFile::CryptoFile
              ((CryptoFile *)this_00,*(File **)(this + 8),pFVar4,*(AESCipher **)(this + 0x58),
               *(CustomCipher **)(this + 0x60),*(ulonglong *)(this + 0x80));
                    /* try { // try from 00b31d80 to 00b31d97 has its CatchHandler @ 00b31e0c */
    Mutex::leaveCriticalSection();
    uVar3 = (**(code **)(*this_00 + 0x10))(this_00);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*this_00 + 8))(this_00);
      goto LAB_00b31dac;
    }
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00b31dc0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}


