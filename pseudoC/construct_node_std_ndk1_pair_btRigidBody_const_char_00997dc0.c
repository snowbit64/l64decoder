// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_node<std::__ndk1::pair<btRigidBody_const*,char*>>
// Entry Point: 00997dc0
// Size: 196 bytes
// Signature: unique_ptr __cdecl __construct_node<std::__ndk1::pair<btRigidBody_const*,char*>>(pair * param_1)


/* std::__ndk1::unique_ptr<std::__ndk1::__tree_node<std::__ndk1::__value_type<btCollisionObject
   const*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, void*>,
   std::__ndk1::__tree_node_destructor<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<btCollisionObject
   const*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, void*> > > >
   std::__ndk1::__tree<std::__ndk1::__value_type<btCollisionObject const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__map_value_compare<btCollisionObject const*,
   std::__ndk1::__value_type<btCollisionObject const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::less<btCollisionObject const*>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<btCollisionObject const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   > >::__construct_node<std::__ndk1::pair<btRigidBody const*, char*>
   >(std::__ndk1::pair<btRigidBody const*, char*>&&) */

unique_ptr
std::__ndk1::
__tree<std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<btCollisionObject_const*,std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<btCollisionObject_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btCollisionObject_const*,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
::__construct_node<std::__ndk1::pair<btRigidBody_const*,char*>>(pair *param_1)

{
  undefined8 uVar1;
  char *__s;
  unique_ptr uVar2;
  void *pvVar3;
  size_t __n;
  undefined8 *in_x1;
  void **in_x8;
  void *__dest;
  ulong uVar4;
  
  pvVar3 = operator_new(0x40);
  uVar1 = *in_x1;
  __s = (char *)in_x1[1];
  *in_x8 = pvVar3;
  in_x8[1] = param_1 + 2;
  *(undefined *)(in_x8 + 2) = 0;
  *(undefined8 *)((long)pvVar3 + 0x20) = uVar1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00997e7c to 00997e83 has its CatchHandler @ 00997e84 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)pvVar3 + 0x29);
    *(char *)((long)pvVar3 + 0x28) = (char)((int)__n << 1);
    if (__n == 0) {
      uVar2 = 0;
      goto LAB_00997e5c;
    }
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00997e34 to 00997e3b has its CatchHandler @ 00997e84 */
    __dest = operator_new(uVar4);
    *(size_t *)((long)pvVar3 + 0x30) = __n;
    *(void **)((long)pvVar3 + 0x38) = __dest;
    *(ulong *)((long)pvVar3 + 0x28) = uVar4 | 1;
  }
  pvVar3 = memcpy(__dest,__s,__n);
  uVar2 = (unique_ptr)pvVar3;
LAB_00997e5c:
  *(undefined *)((long)__dest + __n) = 0;
  *(undefined *)(in_x8 + 2) = 1;
  return uVar2;
}


