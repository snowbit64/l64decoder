// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShapeForLod
// Entry Point: 0076ba50
// Size: 72 bytes
// Signature: undefined __thiscall setShapeForLod(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::setShapeForLod(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::setShapeForLod
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLod
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x40),
                     true);
  if (lVar1 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(lVar1 + 8));
  }
  return;
}


