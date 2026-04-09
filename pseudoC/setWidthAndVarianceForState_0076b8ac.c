// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWidthAndVarianceForState
// Entry Point: 0076b8ac
// Size: 68 bytes
// Signature: undefined __thiscall setWidthAndVarianceForState(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::setWidthAndVarianceForState(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::setWidthAndVarianceForState
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getState
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),true);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(lVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x40);
  }
  return;
}


