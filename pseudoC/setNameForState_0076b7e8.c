// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNameForState
// Entry Point: 0076b7e8
// Size: 60 bytes
// Signature: undefined __thiscall setNameForState(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::setNameForState(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::setNameForState
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FoliageSystemDesc::getState
                             ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                              *(uint *)(param_1 + 0x20),true);
  if (pcVar1 != (char *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(pcVar1);
  }
  return;
}


