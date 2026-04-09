// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeAttribute
// Entry Point: 00a5d880
// Size: 404 bytes
// Signature: undefined __thiscall removeAttribute(UserAttributes * this, char * param_1)


/* UserAttributes::removeAttribute(char const*) */

void __thiscall UserAttributes::removeAttribute(UserAttributes *this,char *param_1)

{
  long lVar1;
  __tree_iterator _Var2;
  size_t __n;
  __tree_node_base **pp_Var4;
  __tree_node_base **pp_Var5;
  __tree_node_base *p_Var6;
  UserAttribute *this_00;
  void *__dest;
  ulong uVar7;
  undefined8 local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  __tree_node_base *p_Var3;
  
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
    if (__n == 0) goto LAB_00a5d910;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    local_60 = uVar7 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_00a5d910:
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00a5d914 to 00a5d91f has its CatchHandler @ 00a5da14 */
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>>>
                      *)this,(basic_string *)&local_60);
  p_Var3 = (__tree_node_base *)(ulong)_Var2;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (this + 8 != (UserAttributes *)p_Var3) {
    this_00 = *(UserAttribute **)(p_Var3 + 0x38);
    if (this_00 != (UserAttribute *)0x0) {
      UserAttribute::~UserAttribute(this_00);
      operator_delete(this_00);
    }
    pp_Var5 = *(__tree_node_base ***)(p_Var3 + 8);
    if (*(__tree_node_base ***)(p_Var3 + 8) == (__tree_node_base **)0x0) {
      pp_Var5 = (__tree_node_base **)(p_Var3 + 0x10);
      pp_Var4 = (__tree_node_base **)*pp_Var5;
      if (*pp_Var4 != p_Var3) {
        do {
          p_Var6 = *pp_Var5;
          pp_Var5 = (__tree_node_base **)(p_Var6 + 0x10);
          pp_Var4 = (__tree_node_base **)*pp_Var5;
        } while (*pp_Var4 != p_Var6);
      }
    }
    else {
      do {
        pp_Var4 = pp_Var5;
        pp_Var5 = (__tree_node_base **)*pp_Var4;
      } while ((__tree_node_base **)*pp_Var4 != (__tree_node_base **)0x0);
    }
    if (*(__tree_node_base **)this == p_Var3) {
      *(__tree_node_base ***)this = pp_Var4;
    }
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
    std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var3);
    if (((byte)p_Var3[0x20] & 1) != 0) {
      operator_delete(*(void **)(p_Var3 + 0x30));
    }
    operator_delete(p_Var3);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this + 8 != (UserAttributes *)p_Var3);
  }
  return;
}


