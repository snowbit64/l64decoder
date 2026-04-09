// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateBlock
// Entry Point: 00c7c0f0
// Size: 168 bytes
// Signature: undefined __cdecl GenerateBlock(uchar * param_1, ulong param_2)


/* CryptoPP::ClassNullRNG::GenerateBlock(unsigned char*, unsigned long) */

void CryptoPP::ClassNullRNG::GenerateBlock(uchar *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c7c10c to 00c7c113 has its CatchHandler @ 00c7c1e0 */
  puVar2 = (undefined8 *)operator_new(0x60);
  puVar2[5] = 0x6974636e7566206f;
  puVar2[4] = 0x7420646573736170;
  puVar2[7] = 0x6e2074276e6f6420;
  puVar2[6] = 0x7461687420736e6f;
  puVar2[9] = 0x2065746172656e65;
  puVar2[8] = 0x67206f7420646565;
  *(undefined8 *)((long)puVar2 + 0x54) = 0x7365747962206d6f;
  *(undefined8 *)((long)puVar2 + 0x4c) = 0x646e617220657461;
  *(undefined *)((long)puVar2 + 0x5c) = 0;
  puVar2[1] = 0x474e526c6c754e20;
  *puVar2 = 0x3a474e526c6c754e;
  puVar2[3] = 0x20656220796c6e6f;
  puVar2[2] = 0x20646c756f687320;
  *puVar1 = &PTR__Exception_00fe0298;
  *(undefined4 *)(puVar1 + 1) = 0;
                    /* try { // try from 00c7c168 to 00c7c16f has its CatchHandler @ 00c7c1b4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00c7c180 to 00c7c197 has its CatchHandler @ 00c7c198 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


