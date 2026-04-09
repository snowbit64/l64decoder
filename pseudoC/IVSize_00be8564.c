// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IVSize
// Entry Point: 00be8564
// Size: 184 bytes
// Signature: undefined IVSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::SimpleKeyingInterface::IVSize() const */

void CryptoPP::SimpleKeyingInterface::IVSize(void)

{
  long *in_x0;
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char acStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00be8590 to 00be85a7 has its CatchHandler @ 00be868c */
  plVar2 = (long *)(**(code **)(*in_x0 + 0x70))();
  (**(code **)(*plVar2 + 0x18))(acStack_68);
                    /* try { // try from 00be85a8 to 00be85b7 has its CatchHandler @ 00be8674 */
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
                    /* try { // try from 00be85e8 to 00be85f3 has its CatchHandler @ 00be8630 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00be8604 to 00be861b has its CatchHandler @ 00be861c */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


