// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumStatesForLayer
// Entry Point: 0076bef4
// Size: 96 bytes
// Signature: undefined __thiscall getNumStatesForLayer(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getNumStatesForLayer(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getNumStatesForLayer
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLayer
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),true);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  else {
    *(int *)(param_1 + 0x100) =
         (int)((ulong)(*(long *)(lVar1 + 0x60) - *(long *)(lVar1 + 0x58)) >> 3) * -0x3b13b13b;
  }
  *(uint *)(param_1 + 0x108) = (uint)(lVar1 != 0);
  return;
}


