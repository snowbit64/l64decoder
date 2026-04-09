// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_node<std::__ndk1::pair<char_const*,unsigned_int>>
// Entry Point: 006ffd4c
// Size: 208 bytes
// Signature: unique_ptr __cdecl __construct_node<std::__ndk1::pair<char_const*,unsigned_int>>(pair * param_1)


/* std::__ndk1::unique_ptr<std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>, void*>,
   std::__ndk1::__tree_node_destructor<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>, void*> > > >
   std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int> >
   >::__construct_node<std::__ndk1::pair<char const*, unsigned int> >(std::__ndk1::pair<char const*,
   unsigned int>&&) */

unique_ptr
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
::__construct_node<std::__ndk1::pair<char_const*,unsigned_int>>(pair *param_1)

{
  undefined4 uVar1;
  unique_ptr uVar2;
  void *pvVar3;
  size_t __n;
  char **in_x1;
  void **in_x8;
  void *__dest;
  char *__s;
  ulong uVar5;
  void *pvVar4;
  
  pvVar3 = operator_new(0x40);
  __s = *in_x1;
  *in_x8 = pvVar3;
  in_x8[1] = param_1 + 2;
  *(undefined *)(in_x8 + 2) = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006ffe14 to 006ffe1b has its CatchHandler @ 006ffe1c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)pvVar3 + 0x21);
    *(char *)((long)pvVar3 + 0x20) = (char)((int)__n << 1);
    if (__n == 0) {
      uVar2 = 0;
      goto LAB_006ffde8;
    }
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 006ffdc0 to 006ffdc7 has its CatchHandler @ 006ffe1c */
    __dest = operator_new(uVar5);
    *(size_t *)((long)pvVar3 + 0x28) = __n;
    *(void **)((long)pvVar3 + 0x30) = __dest;
    *(ulong *)((long)pvVar3 + 0x20) = uVar5 | 1;
  }
  pvVar4 = memcpy(__dest,__s,__n);
  uVar2 = (unique_ptr)pvVar4;
LAB_006ffde8:
  *(undefined *)((long)__dest + __n) = 0;
  uVar1 = *(undefined4 *)(in_x1 + 1);
  *(undefined *)(in_x8 + 2) = 1;
  *(undefined4 *)((long)pvVar3 + 0x38) = uVar1;
  return uVar2;
}


