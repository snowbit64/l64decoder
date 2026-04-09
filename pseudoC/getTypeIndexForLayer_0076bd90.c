// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTypeIndexForLayer
// Entry Point: 0076bd90
// Size: 76 bytes
// Signature: undefined __thiscall getTypeIndexForLayer(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getTypeIndexForLayer(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getTypeIndexForLayer
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLayer
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),true);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x48);
  }
  *(uint *)(param_1 + 0x108) = (uint)(lVar1 != 0);
  return;
}


