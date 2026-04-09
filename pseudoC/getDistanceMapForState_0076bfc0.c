// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDistanceMapForState
// Entry Point: 0076bfc0
// Size: 136 bytes
// Signature: undefined __thiscall getDistanceMapForState(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::getDistanceMapForState(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::getDistanceMapForState
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar2 = FoliageSystemDesc::getState
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),
                     *(uint *)(param_1 + 0x20),true);
  if (lVar2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  else {
    lVar1 = lVar2 + 0x19;
    if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
      lVar1 = *(long *)(lVar2 + 0x28);
    }
    *(long *)(param_1 + 0x100) = lVar1;
    uVar4 = 6;
    *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(lVar2 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x108) = uVar4;
  *(undefined4 *)(param_1 + 0x118) = uVar3;
  return;
}


