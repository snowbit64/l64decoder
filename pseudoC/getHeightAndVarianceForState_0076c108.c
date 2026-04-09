// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHeightAndVarianceForState
// Entry Point: 0076c108
// Size: 96 bytes
// Signature: undefined __thiscall getHeightAndVarianceForState(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getHeightAndVarianceForState(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getHeightAndVarianceForState
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FoliageSystemDesc::getState
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),true);
  if (lVar1 == 0) {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  else {
    uVar2 = 4;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x40);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(lVar1 + 0x44);
  }
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  return;
}


