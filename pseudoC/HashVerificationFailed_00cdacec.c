// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HashVerificationFailed
// Entry Point: 00cdacec
// Size: 196 bytes
// Signature: undefined __thiscall HashVerificationFailed(HashVerificationFailed * this)


/* CryptoPP::HashVerificationFilter::HashVerificationFailed::HashVerificationFailed() */

void __thiscall
CryptoPP::HashVerificationFilter::HashVerificationFailed::HashVerificationFailed
          (HashVerificationFailed *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x40);
  puVar2[5] = 0x20746f6e2043414d;
  puVar2[4] = 0x20726f2068736168;
  *(undefined8 *)((long)puVar2 + 0x2d) = 0x64696c617620746f;
  puVar2[1] = 0x6e6f697461636966;
  *puVar2 = 0x6972655668736148;
  puVar2[3] = 0x206567617373656d;
  puVar2[2] = 0x203a7265746c6946;
  *(undefined *)((long)puVar2 + 0x35) = 0;
  *(undefined4 *)(this + 8) = 3;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00cdad64 to 00cdad6b has its CatchHandler @ 00cdadb0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  operator_delete(puVar2);
  *(undefined ***)this = &PTR__Exception_01008c58;
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


