// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIndexedFilePos
// Entry Point: 00b372e4
// Size: 256 bytes
// Signature: undefined __thiscall getIndexedFilePos(ZIPFileArchive * this, char * param_1)


/* ZIPFileArchive::getIndexedFilePos(char const*) */

void __thiscall ZIPFileArchive::getIndexedFilePos(ZIPFileArchive *this,char *param_1)

{
  ZIPFileArchive *pZVar1;
  long lVar2;
  __tree_iterator _Var3;
  size_t __n;
  void *__dest;
  ulong uVar4;
  undefined8 local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00b37374;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_60 = uVar4 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_00b37374:
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00b37380 to 00b37387 has its CatchHandler @ 00b373e4 */
  _Var3 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>>>
                      *)(this + 0x80b8),(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  pZVar1 = (ZIPFileArchive *)0x0;
  if (this + 0x80c0 != (ZIPFileArchive *)(ulong)_Var3) {
    pZVar1 = (ZIPFileArchive *)(ulong)_Var3 + 0x38;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pZVar1);
  }
  return;
}


