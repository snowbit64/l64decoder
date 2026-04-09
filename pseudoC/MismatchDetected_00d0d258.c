// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MismatchDetected
// Entry Point: 00d0d258
// Size: 196 bytes
// Signature: undefined __thiscall MismatchDetected(MismatchDetected * this)


/* CryptoPP::EqualityComparisonFilter::MismatchDetected::MismatchDetected() */

void __thiscall
CryptoPP::EqualityComparisonFilter::MismatchDetected::MismatchDetected(MismatchDetected *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar2[5] = 0x6173206568742065;
  puVar2[4] = 0x7669656365722074;
  puVar2[7] = 0x63206f7774206e6f;
  puVar2[6] = 0x206174616420656d;
  *(undefined *)((long)puVar2 + 0x47) = 0;
  *(undefined ***)this = &PTR__Exception_00fe0298;
  puVar2[1] = 0x73697261706d6f43;
  *puVar2 = 0x7974696c61757145;
  puVar2[3] = 0x6f6e20646964203a;
  puVar2[2] = 0x7265746c69466e6f;
  *(undefined8 *)((long)puVar2 + 0x3f) = 0x736c656e6e616863;
  *(undefined4 *)(this + 8) = 3;
                    /* try { // try from 00d0d2d0 to 00d0d2d7 has its CatchHandler @ 00d0d31c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  operator_delete(puVar2);
  *(undefined ***)this = &PTR__Exception_0100e980;
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


