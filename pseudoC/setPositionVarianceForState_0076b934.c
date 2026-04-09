// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPositionVarianceForState
// Entry Point: 0076b934
// Size: 60 bytes
// Signature: undefined __thiscall setPositionVarianceForState(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::setPositionVarianceForState(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::setPositionVarianceForState
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getState
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),true);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(param_1 + 0x30);
  }
  return;
}


