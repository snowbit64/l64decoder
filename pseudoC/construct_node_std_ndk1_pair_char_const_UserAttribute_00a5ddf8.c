// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_node<std::__ndk1::pair<char_const*,UserAttribute*>>
// Entry Point: 00a5ddf8
// Size: 208 bytes
// Signature: unique_ptr __cdecl __construct_node<std::__ndk1::pair<char_const*,UserAttribute*>>(pair * param_1)


/* std::__ndk1::unique_ptr<std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, UserAttribute*>, void*>,
   std::__ndk1::__tree_node_destructor<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, UserAttribute*>, void*> > > >
   std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, UserAttribute*>,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, UserAttribute*>,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, UserAttribute*> >
   >::__construct_node<std::__ndk1::pair<char const*, UserAttribute*> >(std::__ndk1::pair<char
   const*, UserAttribute*>&&) */

unique_ptr
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserAttribute*>>>
::__construct_node<std::__ndk1::pair<char_const*,UserAttribute*>>(pair *param_1)

{
  unique_ptr uVar1;
  void *pvVar2;
  size_t __n;
  char **in_x1;
  void **in_x8;
  void *__dest;
  char *pcVar4;
  ulong uVar5;
  void *pvVar3;
  
  pvVar2 = operator_new(0x40);
  pcVar4 = *in_x1;
  *in_x8 = pvVar2;
  in_x8[1] = param_1 + 2;
  *(undefined *)(in_x8 + 2) = 0;
  __n = strlen(pcVar4);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00a5dec0 to 00a5dec7 has its CatchHandler @ 00a5dec8 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)pvVar2 + 0x21);
    *(char *)((long)pvVar2 + 0x20) = (char)((int)__n << 1);
    if (__n == 0) {
      uVar1 = 0;
      goto LAB_00a5de94;
    }
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00a5de6c to 00a5de73 has its CatchHandler @ 00a5dec8 */
    __dest = operator_new(uVar5);
    *(size_t *)((long)pvVar2 + 0x28) = __n;
    *(void **)((long)pvVar2 + 0x30) = __dest;
    *(ulong *)((long)pvVar2 + 0x20) = uVar5 | 1;
  }
  pvVar3 = memcpy(__dest,pcVar4,__n);
  uVar1 = (unique_ptr)pvVar3;
LAB_00a5de94:
  *(undefined *)((long)__dest + __n) = 0;
  pcVar4 = in_x1[1];
  *(undefined *)(in_x8 + 2) = 1;
  *(char **)((long)pvVar2 + 0x38) = pcVar4;
  return uVar1;
}


