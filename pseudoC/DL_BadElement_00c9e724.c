// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_BadElement
// Entry Point: 00c9e724
// Size: 204 bytes
// Signature: undefined __thiscall DL_BadElement(DL_BadElement * this)


/* CryptoPP::DL_BadElement::DL_BadElement() */

void __thiscall CryptoPP::DL_BadElement::DL_BadElement(DL_BadElement *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x20);
  puVar2[1] = 0x696c61766e69203a;
  *puVar2 = 0x50506f7470797243;
  *(undefined8 *)((long)puVar2 + 0x17) = 0x746e656d656c6520;
  *(undefined8 *)((long)puVar2 + 0xf) = 0x70756f7267206469;
  *(undefined *)((long)puVar2 + 0x1f) = 0;
  *(undefined4 *)(this + 8) = 4;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00c9e794 to 00c9e79b has its CatchHandler @ 00c9e7f0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_01002bf8;
  operator_delete(puVar2);
  *(undefined ***)this = &PTR__Exception_01002bd0;
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


