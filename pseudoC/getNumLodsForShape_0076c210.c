// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumLodsForShape
// Entry Point: 0076c210
// Size: 92 bytes
// Signature: undefined __thiscall getNumLodsForShape(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getNumLodsForShape(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getNumLodsForShape
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getShape
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x30),true);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  else {
    *(int *)(param_1 + 0x100) = (int)((ulong)(*(long *)(lVar1 + 0x10) - *(long *)(lVar1 + 8)) >> 6);
  }
  *(uint *)(param_1 + 0x108) = (uint)(lVar1 != 0);
  return;
}


