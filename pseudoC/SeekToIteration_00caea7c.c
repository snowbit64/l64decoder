// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SeekToIteration
// Entry Point: 00caea7c
// Size: 160 bytes
// Signature: undefined __cdecl SeekToIteration(ulong param_1)


/* CryptoPP::AdditiveCipherAbstractPolicy::SeekToIteration(unsigned long) */

void CryptoPP::AdditiveCipherAbstractPolicy::SeekToIteration(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00caea98 to 00caea9f has its CatchHandler @ 00caeb64 */
  puVar2 = (undefined8 *)operator_new(0x40);
  puVar2[1] = 0x616d726f66736e61;
  *puVar2 = 0x72546d6165727453;
  puVar2[3] = 0x63656a626f207369;
  puVar2[2] = 0x6874203a6e6f6974;
  puVar2[5] = 0x726f707075732074;
  puVar2[4] = 0x276e73656f642074;
  *(undefined8 *)((long)puVar2 + 0x37) = 0x737365636361206d;
  *(undefined8 *)((long)puVar2 + 0x2f) = 0x6f646e6172207472;
  *(undefined *)((long)puVar2 + 0x3f) = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR__Exception_00fe0298;
                    /* try { // try from 00caeaec to 00caeaf3 has its CatchHandler @ 00caeb38 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00caeb04 to 00caeb1b has its CatchHandler @ 00caeb1c */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


