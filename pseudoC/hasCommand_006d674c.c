// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasCommand
// Entry Point: 006d674c
// Size: 244 bytes
// Signature: undefined __thiscall hasCommand(Console * this, char * param_1)


/* Console::hasCommand(char const*) */

void __thiscall Console::hasCommand(Console *this,char *param_1)

{
  long lVar1;
  __tree_iterator _Var2;
  size_t __n;
  void *__dest;
  ulong uVar3;
  undefined8 local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_006d67dc;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_60 = uVar3 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_006d67dc:
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 006d67e4 to 006d67eb has its CatchHandler @ 006d6840 */
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
                      *)(this + 0x28),(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this + 0x30 != (Console *)(ulong)_Var2);
  }
  return;
}


