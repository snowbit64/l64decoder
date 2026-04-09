// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GCM_Base
// Entry Point: 00be7edc
// Size: 272 bytes
// Signature: undefined __thiscall GCM_Base(GCM_Base * this)


/* CryptoPP::GCM_Base::GCM_Base() */

void __thiscall CryptoPP::GCM_Base::GCM_Base(GCM_Base *this)

{
  *(undefined ***)this = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(this + 8),true);
  *(undefined ***)this = &PTR__MessageAuthenticationCode_00fec640;
  *(undefined ***)(this + 8) = &PTR__MessageAuthenticationCode_00fec6d0;
  Algorithm::Algorithm((Algorithm *)(this + 0x10),true);
  *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
  *(undefined ***)(this + 0x58) = &PTR__SimpleKeyingInterface_00fef588;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__GCM_Base_010090c0;
  *(undefined ***)(this + 8) = &PTR__GCM_Base_01009230;
  *(undefined ***)(this + 0x10) = &PTR__GCM_Base_010092e0;
                    /* try { // try from 00be7f6c to 00be7f73 has its CatchHandler @ 00be7ffc */
  Algorithm::Algorithm((Algorithm *)(this + 0x60),true);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x78) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa0) = 0xffffffffffffffff;
  *(undefined ***)(this + 0x58) = &PTR__CTR_ModePolicy_00fec7b8;
  *(undefined ***)(this + 0x60) = &PTR__AbstractPolicyHolder_00fec8d0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined ***)(this + 0x90) = &PTR__AbstractPolicyHolder_00fec968;
                    /* try { // try from 00be7fa4 to 00be7fab has its CatchHandler @ 00be7fec */
  Algorithm::Algorithm((Algorithm *)(this + 0xb8),true);
  *(undefined8 *)(this + 200) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)(this + 0x58) = &PTR__AdditiveCipherTemplate_01008dc0;
  *(undefined ***)(this + 0x60) = &PTR__GCTR_01008f18;
  *(undefined ***)(this + 0x90) = &PTR__GCTR_01008fb0;
  *(undefined ***)(this + 0xb8) = &PTR__GCTR_01009030;
  return;
}


