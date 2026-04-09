// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: openFile
// Entry Point: 00b310f4
// Size: 228 bytes
// Signature: undefined __cdecl openFile(char * param_1)


/* CompressedFileArchive::openFile(char const*) */

long * CompressedFileArchive::openFile(char *param_1)

{
  uint uVar1;
  long lVar2;
  __tree_iterator _Var3;
  long *this;
  ulong uVar4;
  long lVar5;
  basic_string local_60 [4];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x80) == 0) {
    this = (long *)0x0;
    goto LAB_00b311a8;
  }
  FUN_006cadd8(local_60,param_1 + 0x60);
                    /* try { // try from 00b31134 to 00b3113b has its CatchHandler @ 00b311e8 */
  _Var3 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                      *)(param_1 + 8),local_60);
  if (param_1 + 0x10 == (char *)(ulong)_Var3) {
LAB_00b3118c:
    this = (long *)0x0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x28);
    uVar1 = *(uint *)((char *)(ulong)_Var3 + 0x38);
                    /* try { // try from 00b31150 to 00b31157 has its CatchHandler @ 00b311ec */
    this = (long *)operator_new(0x228);
                    /* try { // try from 00b31160 to 00b31167 has its CatchHandler @ 00b311d8 */
    CompressedFile::CompressedFile
              ((CompressedFile *)this,(FILE_ITEM *)(lVar5 + (ulong)uVar1 * 0x200),
               (CompressedFileArchive *)param_1);
                    /* try { // try from 00b31170 to 00b31177 has its CatchHandler @ 00b311ec */
    uVar4 = (**(code **)(*this + 0x10))(this);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*this + 8))(this);
      goto LAB_00b3118c;
    }
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00b311a8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


