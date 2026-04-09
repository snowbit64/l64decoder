// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaxNumStatesForLayer
// Entry Point: 0076bea4
// Size: 80 bytes
// Signature: undefined __thiscall getMaxNumStatesForLayer(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getMaxNumStatesForLayer(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getMaxNumStatesForLayer
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLayer
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),true);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  else {
    *(int *)(param_1 + 0x100) = (int)(1L << ((ulong)*(uint *)(lVar1 + 0x50) & 0x3f));
  }
  *(uint *)(param_1 + 0x108) = (uint)(lVar1 != 0);
  return;
}


