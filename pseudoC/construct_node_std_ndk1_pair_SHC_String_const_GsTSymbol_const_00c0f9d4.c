// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_node<std::__ndk1::pair<SHC_String_const,GsTSymbol*>const&>
// Entry Point: 00c0f9d4
// Size: 216 bytes
// Signature: unique_ptr __cdecl __construct_node<std::__ndk1::pair<SHC_String_const,GsTSymbol*>const&>(pair * param_1)


/* std::__ndk1::unique_ptr<std::__ndk1::__tree_node<std::__ndk1::__value_type<SHC_String,
   GsTSymbol*>, void*>,
   std::__ndk1::__tree_node_destructor<SHC_STLPoolAllocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<SHC_String,
   GsTSymbol*>, void*> > > > std::__ndk1::__tree<std::__ndk1::__value_type<SHC_String, GsTSymbol*>,
   std::__ndk1::__map_value_compare<SHC_String, std::__ndk1::__value_type<SHC_String, GsTSymbol*>,
   std::__ndk1::less<SHC_String>, true>, SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,
   GsTSymbol*> > >::__construct_node<std::__ndk1::pair<SHC_String const, GsTSymbol*>
   const&>(std::__ndk1::pair<SHC_String const, GsTSymbol*> const&) */

unique_ptr
std::__ndk1::
__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
::__construct_node<std::__ndk1::pair<SHC_String_const,GsTSymbol*>const&>(pair *param_1)

{
  ulong uVar1;
  void *__src;
  byte bVar2;
  long lVar3;
  void *__dest;
  undefined8 *puVar4;
  undefined8 *in_x1;
  long *in_x8;
  SHC_PoolAllocator *this;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_1 + 4),0x48);
  this = (SHC_PoolAllocator *)in_x1[3];
  puVar4 = (undefined8 *)(lVar3 + 0x20);
  *(undefined *)(in_x8 + 2) = 0;
  *(SHC_PoolAllocator **)(lVar3 + 0x38) = this;
  bVar2 = *(byte *)in_x1;
  *in_x8 = lVar3;
  in_x8[1] = (long)(param_1 + 4);
  if ((bVar2 & 1) == 0) {
    uVar7 = in_x1[1];
    uVar6 = *in_x1;
    *(undefined8 *)(lVar3 + 0x30) = in_x1[2];
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
    *puVar4 = uVar6;
  }
  else {
    uVar1 = in_x1[1];
    __src = (void *)in_x1[2];
    if (uVar1 < 0x17) {
      __dest = (void *)(lVar3 + 0x21);
      *(char *)(lVar3 + 0x20) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00c0faa8 to 00c0faab has its CatchHandler @ 00c0faac */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c0fa60 to 00c0fa6b has its CatchHandler @ 00c0faac */
      __dest = (void *)SHC_PoolAllocator::allocate(this,uVar5);
      *(ulong *)(lVar3 + 0x28) = uVar1;
      *(void **)(lVar3 + 0x30) = __dest;
      *(ulong *)(lVar3 + 0x20) = uVar5 | 1;
    }
    puVar4 = (undefined8 *)memcpy(__dest,__src,uVar1 + 1);
  }
  *(undefined8 *)(lVar3 + 0x40) = in_x1[4];
  *(undefined *)(in_x8 + 2) = 1;
  return (unique_ptr)puVar4;
}


