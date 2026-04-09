// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBlocksPerUnitForState
// Entry Point: 0076b870
// Size: 60 bytes
// Signature: undefined __thiscall setBlocksPerUnitForState(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::setBlocksPerUnitForState(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::setBlocksPerUnitForState
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getState
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),true);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  }
  return;
}


