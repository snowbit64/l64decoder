// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecode
// Entry Point: 00cf5dbc
// Size: 288 bytes
// Signature: undefined __thiscall BERDecode(Integer * this, BufferedTransformation * param_1)


/* WARNING: Removing unreachable block (ram,0x00cf5ea8) */
/* CryptoPP::Integer::BERDecode(CryptoPP::BufferedTransformation&) */

void __thiscall CryptoPP::Integer::BERDecode(Integer *this,BufferedTransformation *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  BERGeneralDecoder aBStack_60 [40];
  ulong local_38;
  char local_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  BERGeneralDecoder::BERGeneralDecoder(aBStack_60,param_1,'\x02');
                    /* try { // try from 00cf5df0 to 00cf5e1b has its CatchHandler @ 00cf5f04 */
  if ((local_2f != '\0') && (uVar2 = BufferedTransformation::MaxRetrievable(), local_38 <= uVar2)) {
    Decode(this,(BufferedTransformation *)aBStack_60,local_38,1);
    BERGeneralDecoder::MessageEnd();
    BERGeneralDecoder::~BERGeneralDecoder(aBStack_60);
    if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
  *(undefined4 *)(puVar3 + 1) = 1;
  *puVar3 = &PTR__Exception_00fe0298;
                    /* try { // try from 00cf5e88 to 00cf5e8f has its CatchHandler @ 00cf5edc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar3 + 2));
  *puVar3 = &PTR__Exception_00fe9ee0;
  *puVar3 = &PTR__Exception_01002700;
                    /* try { // try from 00cf5ec0 to 00cf5ed7 has its CatchHandler @ 00cf5f04 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&BERDecodeErr::typeinfo,Exception::~Exception);
}


