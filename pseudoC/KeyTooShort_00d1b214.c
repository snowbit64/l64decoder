// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: KeyTooShort
// Entry Point: 00d1b214
// Size: 212 bytes
// Signature: undefined __thiscall KeyTooShort(KeyTooShort * this)


/* CryptoPP::PK_SignatureScheme::KeyTooShort::KeyTooShort() */

void __thiscall CryptoPP::PK_SignatureScheme::KeyTooShort::KeyTooShort(KeyTooShort *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x40);
  *(undefined2 *)(puVar2 + 6) = 0x656d;
  *(undefined *)((long)puVar2 + 0x32) = 0;
  *(undefined ***)this = &PTR__Exception_00fe0298;
  puVar2[1] = 0x742079656b203a72;
  *puVar2 = 0x656e6769535f4b50;
  puVar2[3] = 0x69687420726f6620;
  puVar2[2] = 0x74726f6873206f6f;
  puVar2[5] = 0x6568637320657275;
  puVar2[4] = 0x74616e6769732073;
  *(undefined4 *)(this + 8) = 6;
                    /* try { // try from 00d1b28c to 00d1b293 has its CatchHandler @ 00d1b2e8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_0100f2e0;
  operator_delete(puVar2);
  *(undefined ***)this = &PTR__Exception_0100f2b8;
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


