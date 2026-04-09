// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,ShaderStructLayout>>
// Entry Point: 006d919c
// Size: 168 bytes
// Signature: void __cdecl destroy<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,ShaderStructLayout>>(allocator * param_1, pair * param_2)


/* void 
   std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, ShaderStructLayout>, void*> >
   >::destroy<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, ShaderStructLayout>
   >(std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, ShaderStructLayout>, void*> >&,
   std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, ShaderStructLayout>*) */

void std::__ndk1::
     allocator_traits<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,void*>>>
     ::
     destroy<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,ShaderStructLayout>>
               (allocator *param_1,pair *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = *(byte **)(param_2 + 0xe);
  if (pbVar3 != (byte *)0x0) {
    pbVar2 = *(byte **)(param_2 + 0x10);
    pbVar4 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar4 = pbVar2 + -0x20;
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x10));
        }
        pbVar2 = pbVar4;
      } while (pbVar4 != pbVar3);
      pbVar4 = *(byte **)(param_2 + 0xe);
    }
    *(byte **)(param_2 + 0x10) = pbVar3;
    operator_delete(pbVar4);
  }
  if ((*(byte *)(param_2 + 6) & 1) == 0) {
    bVar1 = *(byte *)param_2;
  }
  else {
    operator_delete(*(void **)(param_2 + 10));
    bVar1 = *(byte *)param_2;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_2 + 4));
    return;
  }
  return;
}


