// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDensityChannelsForLayer
// Entry Point: 0076b734
// Size: 112 bytes
// Signature: undefined __thiscall setDensityChannelsForLayer(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::setDensityChannelsForLayer(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::setDensityChannelsForLayer
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  State *pSVar1;
  long lVar2;
  State *this_00;
  
  lVar2 = FoliageSystemDesc::getLayer
                    ((FoliageSystemDesc *)this,*(uint *)param_1,*(uint *)(param_1 + 0x10),true);
  if (lVar2 != 0) {
    pSVar1 = *(State **)(lVar2 + 0x58);
    this_00 = *(State **)(lVar2 + 0x60);
    *(undefined4 *)(lVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(param_1 + 0x30);
    while (this_00 != pSVar1) {
      this_00 = this_00 + -0x68;
      FoliageSystemDesc::State::~State(this_00);
    }
    *(State **)(lVar2 + 0x60) = pSVar1;
  }
  return;
}


