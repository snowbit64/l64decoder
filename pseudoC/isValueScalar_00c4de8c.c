// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isValueScalar
// Entry Point: 00c4de8c
// Size: 80 bytes
// Signature: undefined __thiscall isValueScalar(IR_Section * this, uint param_1, vector * param_2)


/* IR_Section::isValueScalar(unsigned int, std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >&) */

bool __thiscall IR_Section::isValueScalar(IR_Section *this,uint param_1,vector *param_2)

{
  int *piVar1;
  
  if (-1 < (int)param_1) {
    piVar1 = (int *)IR_RegisterSet::getRegisterType
                              ((IR_RegisterSet *)(*(long *)this + 0x98),param_1);
    if (*piVar1 != 0) {
      return *(int *)(*(long *)param_2 + (ulong)param_1 * 4) != -1;
    }
  }
  return true;
}


