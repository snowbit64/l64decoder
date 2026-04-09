// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setViewDistanceForLod
// Entry Point: 0076ba04
// Size: 76 bytes
// Signature: undefined __thiscall setViewDistanceForLod(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::setViewDistanceForLod(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::setViewDistanceForLod
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FoliageSystemDesc::getLod
                     ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                      *(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x40),
                      true);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 0x50);
    puVar1[1] = *(undefined4 *)(param_1 + 0x60);
  }
  return;
}


