// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Resynchronize
// Entry Point: 00bbecc4
// Size: 184 bytes
// Signature: undefined __cdecl Resynchronize(uchar * param_1, int param_2)


/* CryptoPP::SimpleKeyingInterface::Resynchronize(unsigned char const*, int) */

void CryptoPP::SimpleKeyingInterface::Resynchronize(uchar *param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char acStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28,param_2);
                    /* try { // try from 00bbecf0 to 00bbed07 has its CatchHandler @ 00bbedec */
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x70))(param_1);
  (**(code **)(*plVar2 + 0x18))(acStack_68);
                    /* try { // try from 00bbed08 to 00bbed17 has its CatchHandler @ 00bbedd4 */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     (acStack_68);
  local_40 = puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR__Exception_00fe0298;
                    /* try { // try from 00bbed48 to 00bbed53 has its CatchHandler @ 00bbed90 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00bbed64 to 00bbed7b has its CatchHandler @ 00bbed7c */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


