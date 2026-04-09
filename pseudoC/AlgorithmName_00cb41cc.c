// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmName
// Entry Point: 00cb41cc
// Size: 156 bytes
// Signature: undefined __thiscall AlgorithmName(AlgorithmImpl<CryptoPP::DL_VerifierBase<CryptoPP::Integer>,CryptoPP::DSA2<CryptoPP::SHA1>> * this)


/* non-virtual thunk to CryptoPP::AlgorithmImpl<CryptoPP::DL_VerifierBase<CryptoPP::Integer>,
   CryptoPP::DSA2<CryptoPP::SHA1> >::AlgorithmName() const */

void __thiscall
CryptoPP::AlgorithmImpl<CryptoPP::DL_VerifierBase<CryptoPP::Integer>,CryptoPP::DSA2<CryptoPP::SHA1>>
::AlgorithmName(AlgorithmImpl<CryptoPP::DL_VerifierBase<CryptoPP::Integer>,CryptoPP::DSA2<CryptoPP::SHA1>>
                *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *in_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte local_40;
  undefined4 local_3f;
  undefined2 local_3b;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 10;
  local_3f = 0x2d414853;
  local_3b = 0x31;
                    /* try { // try from 00cb4208 to 00cb421b has its CatchHandler @ 00cb4268 */
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((ulong)&local_40,(char *)0x0);
  uVar3 = puVar2[2];
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  in_x8[2] = uVar3;
  in_x8[1] = uVar5;
  *in_x8 = uVar4;
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


