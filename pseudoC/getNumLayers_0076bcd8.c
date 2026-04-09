// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumLayers
// Entry Point: 0076bcd8
// Size: 80 bytes
// Signature: undefined __thiscall getNumLayers(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getNumLayers(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getNumLayers
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = FoliageSystemDesc::getMultiLayer((FoliageSystemDesc *)this,*(uint *)param_1,true);
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 8);
    lVar2 = *(long *)(lVar2 + 0x10);
    *(undefined4 *)(param_1 + 0x108) = 1;
    *(int *)(param_1 + 0x100) = (int)((ulong)(lVar2 - lVar1) >> 4) * -0x49249249;
  }
  return;
}


