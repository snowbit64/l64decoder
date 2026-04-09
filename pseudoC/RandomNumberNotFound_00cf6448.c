// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RandomNumberNotFound
// Entry Point: 00cf6448
// Size: 196 bytes
// Signature: undefined __thiscall RandomNumberNotFound(RandomNumberNotFound * this)


/* CryptoPP::Integer::RandomNumberNotFound::RandomNumberNotFound() */

void __thiscall
CryptoPP::Integer::RandomNumberNotFound::RandomNumberNotFound(RandomNumberNotFound *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x40);
  *(undefined2 *)(puVar2 + 6) = 0x7372;
  *(undefined *)((long)puVar2 + 0x32) = 0;
  *(undefined ***)this = &PTR__Exception_00fe0298;
  puVar2[1] = 0x65746e69206f6e20;
  *puVar2 = 0x3a72656765746e49;
  puVar2[3] = 0x6874207365696673;
  puVar2[2] = 0x6974617320726567;
  puVar2[5] = 0x6574656d61726170;
  puVar2[4] = 0x206e657669672065;
  *(undefined4 *)(this + 8) = 6;
                    /* try { // try from 00cf64c0 to 00cf64c7 has its CatchHandler @ 00cf650c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  operator_delete(puVar2);
  *(undefined ***)this = &PTR__Exception_0100cb68;
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


