// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exist
// Entry Point: 00b31e28
// Size: 260 bytes
// Signature: undefined __thiscall exist(CryptoFileArchive * this, char * param_1)


/* CryptoFileArchive::exist(char const*) */

bool __thiscall CryptoFileArchive::exist(CryptoFileArchive *this,char *param_1)

{
  long lVar1;
  bool bVar2;
  __tree_iterator _Var3;
  size_t __n;
  void *__dest;
  ulong uVar4;
  undefined8 local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 8) == 0) {
    bVar2 = false;
    goto LAB_00b31ef4;
  }
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00b31eb8;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_60 = uVar4 | 1;
    local_58 = __n;
    local_50 = __dest;
LAB_00b31eb8:
    memcpy(__dest,param_1,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00b31ed0 to 00b31ed7 has its CatchHandler @ 00b31f2c */
  _Var3 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,CryptoFileArchive::FILE_ITEM*>>>
                      *)(this + 0x38),(basic_string *)&local_60);
  bVar2 = this + 0x40 != (CryptoFileArchive *)(ulong)_Var3;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00b31ef4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


