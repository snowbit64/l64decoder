// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShapeSourceForLayer
// Entry Point: 0076b6f8
// Size: 60 bytes
// Signature: undefined __thiscall setShapeSourceForLayer(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::setShapeSourceForLayer(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::setShapeSourceForLayer
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLayer
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),true);
  if (lVar1 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(lVar1 + 0x30));
  }
  return;
}


