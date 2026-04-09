// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAtlasSizeForLod
// Entry Point: 0076ba98
// Size: 68 bytes
// Signature: undefined __thiscall setAtlasSizeForLod(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::setAtlasSizeForLod(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::setAtlasSizeForLod
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLod
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x40),
                     true);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_1 + 0x50);
  }
  return;
}


