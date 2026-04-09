// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTexCoordsForLod
// Entry Point: 0076bb28
// Size: 92 bytes
// Signature: undefined __thiscall setTexCoordsForLod(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::setTexCoordsForLod(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::setTexCoordsForLod
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLod
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x40),
                     true);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(param_1 + 0x80);
  }
  return;
}


