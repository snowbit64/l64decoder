// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmName
// Entry Point: 00b4a04c
// Size: 144 bytes
// Signature: undefined AlgorithmName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 2> >::AlgorithmName() const */

void CryptoPP::
     DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>
     ::AlgorithmName(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *in_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte local_40;
  undefined2 local_3f;
  undefined local_3d;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 4;
  local_3f = 0x4345;
  local_3d = 0;
                    /* try { // try from 00b4a080 to 00b4a08f has its CatchHandler @ 00b4a0dc */
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_40);
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


