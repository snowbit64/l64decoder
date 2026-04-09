// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAttribute
// Entry Point: 00a5d6bc
// Size: 260 bytes
// Signature: undefined __thiscall getAttribute(UserAttributes * this, char * param_1)


/* UserAttributes::getAttribute(char const*) */

undefined8 __thiscall UserAttributes::getAttribute(UserAttributes *this,char *param_1)

{
  long lVar1;
  __tree_iterator _Var2;
  size_t __n;
  undefined8 uVar3;
  void *__dest;
  ulong uVar4;
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
    if (__n == 0) goto LAB_00a5d74c;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_60 = uVar4 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_00a5d74c:
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00a5d750 to 00a5d75b has its CatchHandler @ 00a5d7c0 */
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>>>
                      *)this,(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (this + 8 == (UserAttributes *)(ulong)_Var2) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)((UserAttributes *)(ulong)_Var2 + 0x38);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


