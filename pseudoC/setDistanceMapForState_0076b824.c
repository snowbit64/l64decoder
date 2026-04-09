// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDistanceMapForState
// Entry Point: 0076b824
// Size: 76 bytes
// Signature: undefined __thiscall setDistanceMapForState(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::setDistanceMapForState(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::setDistanceMapForState
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getState
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),true);
  if (lVar1 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(lVar1 + 0x18));
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(param_1 + 0x40);
  }
  return;
}


