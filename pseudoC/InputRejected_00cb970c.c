// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InputRejected
// Entry Point: 00cb970c
// Size: 208 bytes
// Signature: undefined __thiscall InputRejected(InputRejected * this)


/* CryptoPP::InputRejecting<CryptoPP::Filter>::InputRejected::InputRejected() */

void __thiscall
CryptoPP::InputRejecting<CryptoPP::Filter>::InputRejected::InputRejected(InputRejected *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x40);
  puVar2[5] = 0x6f6c6c612074276e;
  puVar2[4] = 0x73656f6420746365;
  *(undefined8 *)((long)puVar2 + 0x2f) = 0x7475706e6920776f;
  *(undefined *)((long)puVar2 + 0x37) = 0;
  *(undefined ***)this = &PTR__Exception_00fe0298;
  *(undefined4 *)(this + 8) = 0;
  puVar2[1] = 0x726f66736e617254;
  *puVar2 = 0x6465726566667542;
  puVar2[3] = 0x6a626f2073696874;
  puVar2[2] = 0x203a6e6f6974616d;
                    /* try { // try from 00cb9780 to 00cb9787 has its CatchHandler @ 00cb97dc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_00fe0270;
  operator_delete(puVar2);
  *(undefined ***)this = &PTR__Exception_01002ba8;
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


