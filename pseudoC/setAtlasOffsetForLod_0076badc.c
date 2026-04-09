// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAtlasOffsetForLod
// Entry Point: 0076badc
// Size: 76 bytes
// Signature: undefined __thiscall setAtlasOffsetForLod(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::setAtlasOffsetForLod(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::setAtlasOffsetForLod
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLod
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x40),
                     true);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_1 + 0x60);
  }
  return;
}


