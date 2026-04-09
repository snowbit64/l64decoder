// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeAsOctetString
// Entry Point: 00ce3aec
// Size: 292 bytes
// Signature: undefined __thiscall BERDecodeAsOctetString(PolynomialMod2 * this, BufferedTransformation * param_1, ulong param_2)


/* WARNING: Removing unreachable block (ram,0x00ce3bdc) */
/* CryptoPP::PolynomialMod2::BERDecodeAsOctetString(CryptoPP::BufferedTransformation&, unsigned
   long) */

void __thiscall
CryptoPP::PolynomialMod2::BERDecodeAsOctetString
          (PolynomialMod2 *this,BufferedTransformation *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  BERGeneralDecoder aBStack_70 [40];
  ulong local_48;
  char local_3f;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  BERGeneralDecoder::BERGeneralDecoder(aBStack_70,param_1,'\x04');
  if ((local_3f != '\0') && (local_48 == param_2)) {
                    /* try { // try from 00ce3b34 to 00ce3b4b has its CatchHandler @ 00ce3c38 */
    Decode(this,(BufferedTransformation *)aBStack_70,param_2);
    BERGeneralDecoder::MessageEnd();
    BERGeneralDecoder::~BERGeneralDecoder(aBStack_70);
    if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  puVar2 = (undefined8 *)__cxa_allocate_exception(0x28);
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR__Exception_00fe0298;
                    /* try { // try from 00ce3bbc to 00ce3bc3 has its CatchHandler @ 00ce3c10 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar2 + 2));
  *puVar2 = &PTR__Exception_00fe9ee0;
  *puVar2 = &PTR__Exception_01002700;
                    /* try { // try from 00ce3bf4 to 00ce3c0b has its CatchHandler @ 00ce3c38 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,&BERDecodeErr::typeinfo,Exception::~Exception);
}


