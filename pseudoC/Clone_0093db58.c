// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clone
// Entry Point: 0093db58
// Size: 152 bytes
// Signature: undefined Clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Clonable::Clone() const */

void CryptoPP::Clonable::Clone(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 0093db74 to 0093db7b has its CatchHandler @ 0093dc2c */
  puVar2 = (undefined8 *)operator_new(0x20);
  puVar2[1] = 0x6920746f6e207369;
  *puVar2 = 0x202928656e6f6c43;
  *(undefined8 *)((long)puVar2 + 0x17) = 0x2e74657920646574;
  *(undefined8 *)((long)puVar2 + 0xf) = 0x6e656d656c706d69;
  *(undefined *)((long)puVar2 + 0x1f) = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR__Exception_00fe0298;
                    /* try { // try from 0093dbc0 to 0093dbc7 has its CatchHandler @ 0093dc0c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 0093dbd8 to 0093dbef has its CatchHandler @ 0093dbf0 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


