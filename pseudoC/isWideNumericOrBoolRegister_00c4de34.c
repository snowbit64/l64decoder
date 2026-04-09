// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isWideNumericOrBoolRegister
// Entry Point: 00c4de34
// Size: 88 bytes
// Signature: undefined __thiscall isWideNumericOrBoolRegister(IR_Section * this, uint param_1)


/* IR_Section::isWideNumericOrBoolRegister(unsigned int) */

bool __thiscall IR_Section::isWideNumericOrBoolRegister(IR_Section *this,uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)IR_RegisterSet::getRegisterType
                               ((IR_RegisterSet *)(*(long *)this + 0x98),param_1);
    return *puVar1 - 1 < 2 && (*puVar1 < 3 && puVar1[2] - 3 < 7);
  }
  return false;
}


