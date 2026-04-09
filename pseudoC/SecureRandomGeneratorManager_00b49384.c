// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SecureRandomGeneratorManager
// Entry Point: 00b49384
// Size: 732 bytes
// Signature: undefined __thiscall SecureRandomGeneratorManager(SecureRandomGeneratorManager * this)


/* SecureRandomGeneratorManager::SecureRandomGeneratorManager() */

void __thiscall
SecureRandomGeneratorManager::SecureRandomGeneratorManager(SecureRandomGeneratorManager *this)

{
  Mutex::Mutex((Mutex *)this,true);
                    /* try { // try from 00b493ac to 00b493b7 has its CatchHandler @ 00b49670 */
  Mutex::Mutex((Mutex *)(this + 0x28),true);
                    /* try { // try from 00b493bc to 00b493c3 has its CatchHandler @ 00b49668 */
  CryptoPP::RandomPool::RandomPool((RandomPool *)(this + 0x60));
                    /* try { // try from 00b493c8 to 00b493cf has its CatchHandler @ 00b49660 */
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0xf8) = &PTR__IteratedHashWithStaticTransform_01010888;
                    /* try { // try from 00b493e4 to 00b4963f has its CatchHandler @ 00b49678 */
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x1d0) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x2a8) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x380) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x458) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x530) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x608) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x6e0) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x7b8) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x890) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x968) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0xa40) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0xb18) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0xbf0) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0xcc8) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0xda0) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0xe78) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0xf50) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x1028) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x1100) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x11d8) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x12b0) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 5000) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x1460) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x1538) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x1610) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x16e8) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x17c0) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x1898) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x1970) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x1a48) = &PTR__IteratedHashWithStaticTransform_01010888;
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x1b20) = &PTR__IteratedHashWithStaticTransform_01010888;
  *(undefined4 *)(this + 0x1bf8) = 0;
  return;
}


