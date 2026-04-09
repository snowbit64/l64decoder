// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAtlasSizeForLod
// Entry Point: 0076c34c
// Size: 88 bytes
// Signature: undefined __thiscall getAtlasSizeForLod(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getAtlasSizeForLod(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getAtlasSizeForLod
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLod
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x40),
                     true);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x20);
  }
  *(uint *)(param_1 + 0x108) = (uint)(lVar1 != 0);
  return;
}


