// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDecalLayer
// Entry Point: 0076bbac
// Size: 20 bytes
// Signature: undefined __thiscall getDecalLayer(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getDecalLayer(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getDecalLayer
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  return;
}


