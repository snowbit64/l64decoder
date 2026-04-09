// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeMaxShadingRates
// Entry Point: 00a497ac
// Size: 160 bytes
// Signature: undefined __thiscall computeMaxShadingRates(ValarShadingRateController * this, uint * param_1, uint * param_2)


/* ValarShadingRateController::computeMaxShadingRates(unsigned int&, unsigned int&) */

void __thiscall
ValarShadingRateController::computeMaxShadingRates
          (ValarShadingRateController *this,uint *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  
  EngineManager::getInstance();
  lVar3 = (**(code **)(**(long **)this + 0x28))(*(long **)this);
  uVar2 = HardwareScalability::getMSAA();
  *param_1 = 0;
  *param_2 = 0;
  if (uVar2 < 5) {
    cVar1 = *(char *)(lVar3 + 0xdd);
    *param_1 = 1;
    *param_2 = 1;
    if (cVar1 != '\0') {
      if (uVar2 < 2) {
        *param_2 = 2;
      }
      else {
        param_1 = param_2;
        if (uVar2 != 2) {
          return;
        }
      }
      *param_1 = 2;
    }
  }
  return;
}


