// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateRandomNumber
// Entry Point: 008a7f04
// Size: 88 bytes
// Signature: undefined __cdecl generateRandomNumber(int param_1, int param_2)


/* AudioMathUtil::generateRandomNumber(int, int) */

void AudioMathUtil::generateRandomNumber(int param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int local_30;
  int iStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  iStack_2c = param_2;
  iVar2 = std::__ndk1::uniform_int_distribution<int>::operator()
                    ((uniform_int_distribution<int> *)&local_30,
                     (mersenne_twister_engine *)&m_randomNumberGenerator,(param_type *)&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


