// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aff18
// Entry Point: 007aff18
// Size: 112 bytes
// Signature: undefined FUN_007aff18(void)


void FUN_007aff18(FoliageSystemDesc *param_1,uint *param_2)

{
  State *pSVar1;
  long lVar2;
  State *this;
  
  lVar2 = FoliageSystemDesc::getLayer(param_1,*param_2,param_2[4],true);
  if (lVar2 != 0) {
    pSVar1 = *(State **)(lVar2 + 0x58);
    this = *(State **)(lVar2 + 0x60);
    *(uint *)(lVar2 + 0x4c) = param_2[8];
    *(uint *)(lVar2 + 0x50) = param_2[0xc];
    while (this != pSVar1) {
      this = this + -0x68;
      FoliageSystemDesc::State::~State(this);
    }
    *(State **)(lVar2 + 0x60) = pSVar1;
  }
  return;
}


