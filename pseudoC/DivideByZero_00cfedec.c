// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DivideByZero
// Entry Point: 00cfedec
// Size: 188 bytes
// Signature: undefined __thiscall DivideByZero(DivideByZero * this)


/* CryptoPP::Integer::DivideByZero::DivideByZero() */

void __thiscall CryptoPP::Integer::DivideByZero::DivideByZero(DivideByZero *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x20);
  puVar2[1] = 0x6f69736976696420;
  *puVar2 = 0x3a72656765746e49;
  *(undefined8 *)((long)puVar2 + 0x11) = 0x6f72657a20796220;
  *(undefined8 *)((long)puVar2 + 9) = 0x6e6f697369766964;
  *(undefined *)((long)puVar2 + 0x19) = 0;
  *(undefined4 *)(this + 8) = 6;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00cfee5c to 00cfee63 has its CatchHandler @ 00cfeea8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  operator_delete(puVar2);
  *(undefined ***)this = &PTR__Exception_0100cc48;
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


