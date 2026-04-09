// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initAsInitiator
// Entry Point: 00b4b4d0
// Size: 108 bytes
// Signature: undefined __thiscall initAsInitiator(ENetConnection * this, uchar * param_1, uint param_2)


/* ENetConnection::initAsInitiator(unsigned char const*, unsigned int) */

undefined8 __thiscall
ENetConnection::initAsInitiator(ENetConnection *this,uchar *param_1,uint param_2)

{
  KeyAgreementInitiator *this_00;
  ulong uVar1;
  
  if (*(long *)(this + 0x450) != 0) {
    this_00 = (KeyAgreementInitiator *)operator_new(0x1e8);
                    /* try { // try from 00b4b500 to 00b4b503 has its CatchHandler @ 00b4b53c */
    KeyAgreementInitiator::KeyAgreementInitiator(this_00);
    *(KeyAgreementInitiator **)(this + 0x10) = this_00;
    uVar1 = KeyAgreementInitiator::Initialize(this_00,param_1,param_2);
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(this + 8) = 1;
      return 1;
    }
  }
  return 0;
}


