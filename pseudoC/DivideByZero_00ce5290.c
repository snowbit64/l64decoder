// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DivideByZero
// Entry Point: 00ce5290
// Size: 180 bytes
// Signature: undefined __thiscall DivideByZero(DivideByZero * this)


/* CryptoPP::PolynomialMod2::DivideByZero::DivideByZero() */

void __thiscall CryptoPP::PolynomialMod2::DivideByZero::DivideByZero(DivideByZero *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  puVar2[1] = 0x203a32646f4d6c61;
  *puVar2 = 0x696d6f6e796c6f50;
  puVar2[3] = 0x6f72657a20796220;
  puVar2[2] = 0x6e6f697369766964;
  *(undefined *)(puVar2 + 4) = 0;
  *(undefined4 *)(this + 8) = 6;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00ce52f8 to 00ce52ff has its CatchHandler @ 00ce5344 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  operator_delete(puVar2);
  *(undefined ***)this = &PTR__Exception_01009788;
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


