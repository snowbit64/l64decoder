// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: eliminateUnusedFields
// Entry Point: 00c08314
// Size: 160 bytes
// Signature: undefined __thiscall eliminateUnusedFields(ShaderConverter * this, IR_Function * param_1, IR_TypeSet * param_2, set * param_3)


/* ShaderConverter::eliminateUnusedFields(IR_Function*, IR_TypeSet*,
   std::__ndk1::set<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&) */

void __thiscall
ShaderConverter::eliminateUnusedFields
          (ShaderConverter *this,IR_Function *param_1,IR_TypeSet *param_2,set *param_3)

{
  long lVar1;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  IR_TypeSet::clearStructFieldMarks();
  IR_Function::markUsedStructFields(param_1,1,2,true);
  IR_Function::eliminateReadsFromConstantStructFields();
  local_3c = 0x1010100;
  IR_TypeSet::removeStructFields(param_2,(bool *)&local_3c,param_3);
  IR_Function::simplifyHssa(param_1,true);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


