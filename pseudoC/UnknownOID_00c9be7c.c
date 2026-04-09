// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UnknownOID
// Entry Point: 00c9be7c
// Size: 204 bytes
// Signature: undefined __thiscall UnknownOID(UnknownOID * this)


/* CryptoPP::UnknownOID::UnknownOID() */

void __thiscall CryptoPP::UnknownOID::UnknownOID(UnknownOID *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  puVar2[1] = 0x726f727265206564;
  *puVar2 = 0x6f63656420524542;
  puVar2[3] = 0x7463656a626f206e;
  puVar2[2] = 0x776f6e6b6e75203a;
  *(undefined8 *)((long)puVar2 + 0x23) = 0x7265696669746e65;
  *(undefined8 *)((long)puVar2 + 0x1b) = 0x6469207463656a62;
  *(undefined *)((long)puVar2 + 0x2b) = 0;
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00c9beec to 00c9bef3 has its CatchHandler @ 00c9bf48 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_01002700;
  operator_delete(puVar2);
  *(undefined ***)this = &PTR__Exception_010026d8;
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


