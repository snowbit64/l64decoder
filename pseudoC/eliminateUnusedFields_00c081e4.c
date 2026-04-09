// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: eliminateUnusedFields
// Entry Point: 00c081e4
// Size: 304 bytes
// Signature: undefined __thiscall eliminateUnusedFields(ShaderConverter * this, IR_Function * param_1, IR_Function * param_2, IR_TypeSet * param_3, set * param_4)


/* ShaderConverter::eliminateUnusedFields(IR_Function*, IR_Function*, IR_TypeSet*,
   std::__ndk1::set<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&) */

void __thiscall
ShaderConverter::eliminateUnusedFields
          (ShaderConverter *this,IR_Function *param_1,IR_Function *param_2,IR_TypeSet *param_3,
          set *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  while( true ) {
    IR_TypeSet::clearStructFieldMarks();
    IR_Function::markUsedStructFields(param_1,1,2,true);
    IR_Function::markUsedStructFields(param_2,4,8,false);
    IR_TypeSet::markStructFieldsWithSemantic(param_3,"GS_OUT_POSITION",4);
    IR_TypeSet::markStructFieldsWithSemantic(param_3,"GS_SYSTEM_SHADING_RATE",4);
    IR_Function::eliminateReadsFromConstantStructFields();
    IR_Function::eliminateReadsFromConstantStructFields();
    uStack_68 = 0x101010101000100;
    local_70 = 0x101010101000100;
    uVar2 = IR_TypeSet::removeStructFields(param_3,(bool *)&local_70,param_4);
    if ((uVar2 & 1) == 0) break;
    IR_Function::eliminateWritesToRemovedStructFields();
    IR_Function::eliminateWritesToRemovedStructFields();
    IR_Function::simplifyHssa(param_1,true);
    IR_Function::simplifyHssa(param_2,true);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


