// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AuthenticatedEncryption
// Entry Point: 00be6aa4
// Size: 364 bytes
// Signature: undefined __thiscall AuthenticatedEncryption(AuthenticatedEncryption * this)


/* AuthenticatedEncryption::AuthenticatedEncryption() */

void __thiscall AuthenticatedEncryption::AuthenticatedEncryption(AuthenticatedEncryption *this)

{
  *(undefined ***)(this + 8) = &PTR__SimpleKeyingInterface_00fef588;
  CryptoPP::Algorithm::Algorithm((Algorithm *)(this + 0x10),true);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x38] = (AuthenticatedEncryption)0x0;
  *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
  *(undefined ***)(this + 8) = &PTR__HMAC_00fec030;
  *(undefined ***)(this + 0x10) = &PTR__HMAC_00fec100;
                    /* try { // try from 00be6b04 to 00be6b07 has its CatchHandler @ 00be6c54 */
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)(this + 0x40) = &PTR__IteratedHashWithStaticTransform_01010888;
                    /* try { // try from 00be6b1c to 00be6b23 has its CatchHandler @ 00be6c40 */
  CryptoPP::GCM_Base::GCM_Base((GCM_Base *)(this + 0x118));
  *(undefined ***)(this + 0x200) = &PTR__SimpleKeyingInterface_00fef588;
  *(undefined ***)(this + 0x118) = &PTR__GCM_Final_00fec368;
  *(undefined ***)(this + 0x120) = &PTR__GCM_Final_00fec4e0;
  *(undefined ***)(this + 0x128) = &PTR__GCM_Final_00fec590;
                    /* try { // try from 00be6b4c to 00be6b53 has its CatchHandler @ 00be6c30 */
  CryptoPP::Algorithm::Algorithm((Algorithm *)(this + 0x208),true);
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0x3fffffffffffffff;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = 0xffffffffffffffff;
  *(undefined ***)(this + 0x200) = &PTR__Base_00feb820;
  *(undefined ***)(this + 0x208) = &PTR__BlockCipherFinal_00feb8f0;
                    /* try { // try from 00be6b90 to 00be6b97 has its CatchHandler @ 00be6c20 */
  CryptoPP::GCM_Base::GCM_Base((GCM_Base *)(this + 600));
  *(undefined ***)(this + 0x340) = &PTR__SimpleKeyingInterface_00fef588;
  *(undefined ***)(this + 600) = &PTR__GCM_Final_00feca00;
  *(undefined ***)(this + 0x260) = &PTR__GCM_Final_00fecb78;
  *(undefined ***)(this + 0x268) = &PTR__GCM_Final_00fecc28;
                    /* try { // try from 00be6bc4 to 00be6bcb has its CatchHandler @ 00be6c10 */
  CryptoPP::Algorithm::Algorithm((Algorithm *)(this + 0x348),true);
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x360) = 0x3fffffffffffffff;
  *(undefined8 *)(this + 0x380) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined ***)(this + 0x340) = &PTR__Base_00feb820;
  *(undefined ***)(this + 0x348) = &PTR__BlockCipherFinal_00feb8f0;
  return;
}


