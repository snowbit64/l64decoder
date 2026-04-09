// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SignatureVerificationFailed
// Entry Point: 00cdc658
// Size: 188 bytes
// Signature: undefined __thiscall SignatureVerificationFailed(SignatureVerificationFailed * this)


/* CryptoPP::SignatureVerificationFilter::SignatureVerificationFailed::SignatureVerificationFailed()
    */

void __thiscall
CryptoPP::SignatureVerificationFilter::SignatureVerificationFailed::SignatureVerificationFailed
          (SignatureVerificationFailed *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  puVar2[1] = 0x203a7265746c6946;
  *puVar2 = 0x7265696669726556;
  puVar2[3] = 0x727574616e676973;
  puVar2[2] = 0x206c617469676964;
  *(undefined8 *)((long)puVar2 + 0x23) = 0x64696c617620746f;
  *(undefined8 *)((long)puVar2 + 0x1b) = 0x6e2065727574616e;
  *(undefined *)((long)puVar2 + 0x2b) = 0;
  *(undefined4 *)(this + 8) = 3;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00cdc6c8 to 00cdc6cf has its CatchHandler @ 00cdc714 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  operator_delete(puVar2);
  *(undefined ***)this = &PTR__Exception_01008ca8;
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


