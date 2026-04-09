// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumShapesForState
// Entry Point: 0076c1b8
// Size: 88 bytes
// Signature: undefined __thiscall getNumShapesForState(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getNumShapesForState(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getNumShapesForState
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getState
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),true);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  else {
    *(int *)(param_1 + 0x100) =
         (int)((ulong)(*(long *)(lVar1 + 0x58) - *(long *)(lVar1 + 0x50)) >> 5);
  }
  *(uint *)(param_1 + 0x108) = (uint)(lVar1 != 0);
  return;
}


