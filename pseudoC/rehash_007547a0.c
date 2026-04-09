// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 007547a0
// Size: 220 bytes
// Signature: undefined __thiscall rehash(__hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>> * this, ulong param_1)


/* std::__ndk1::__hash_table<LanguageUtil::LANGUAGE_TYPE, LocalizationManager::EnumClassHash,
   std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,
   std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE> >::rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
::rehash(__hash_table<LanguageUtil::LANGUAGE_TYPE,LocalizationManager::EnumClassHash,std::__ndk1::equal_to<LanguageUtil::LANGUAGE_TYPE>,std::__ndk1::allocator<LanguageUtil::LANGUAGE_TYPE>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if (param_1 - 1 == 0) {
    param_1 = 2;
  }
  else if ((param_1 & param_1 - 1) != 0) {
    param_1 = std::__ndk1::__next_prime(param_1);
  }
  uVar2 = *(ulong *)(this + 8);
  uVar1 = param_1;
  if (uVar2 < param_1) goto LAB_00754854;
  if (uVar2 <= param_1) {
    return;
  }
  uVar1 = (ulong)((float)(unkuint9)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
  if (uVar2 < 3) {
LAB_00754840:
    uVar1 = std::__ndk1::__next_prime(uVar1);
  }
  else {
    uVar4 = NEON_cnt(uVar2,1);
    uVar3 = NEON_uaddlv(uVar4,1);
    if (1 < (uint)CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar3)) goto LAB_00754840;
    if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
  }
  if (uVar1 <= param_1) {
    uVar1 = param_1;
  }
  if (uVar2 <= uVar1) {
    return;
  }
LAB_00754854:
  __rehash(this,uVar1);
  return;
}


