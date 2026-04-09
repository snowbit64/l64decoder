// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTexCoordsForLod
// Entry Point: 0076c40c
// Size: 140 bytes
// Signature: undefined __thiscall getTexCoordsForLod(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getTexCoordsForLod(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getTexCoordsForLod
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = FoliageSystemDesc::getLod
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x40),
                     true);
  if (lVar1 == 0) {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  else {
    uVar2 = 4;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x2c);
    uVar3 = *(undefined4 *)(lVar1 + 0x30);
    *(undefined4 *)(param_1 + 0x108) = 4;
    *(undefined4 *)(param_1 + 0x110) = uVar3;
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(lVar1 + 0x34);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(lVar1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  return;
}


