// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getViewDistanceForLod
// Entry Point: 0076c26c
// Size: 104 bytes
// Signature: undefined __thiscall getViewDistanceForLod(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getViewDistanceForLod(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getViewDistanceForLod
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)
           FoliageSystemDesc::getLod
                     ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                      *(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x40),
                      true);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  else {
    uVar2 = 4;
    *(undefined4 *)(param_1 + 0x100) = *puVar1;
    *(undefined4 *)(param_1 + 0x110) = puVar1[1];
  }
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  return;
}


