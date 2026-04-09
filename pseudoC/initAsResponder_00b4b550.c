// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initAsResponder
// Entry Point: 00b4b550
// Size: 140 bytes
// Signature: undefined __thiscall initAsResponder(ENetConnection * this, uchar * param_1, uint param_2, uchar * param_3, uint param_4)


/* ENetConnection::initAsResponder(unsigned char const*, unsigned int, unsigned char const*,
   unsigned int) */

undefined8 __thiscall
ENetConnection::initAsResponder
          (ENetConnection *this,uchar *param_1,uint param_2,uchar *param_3,uint param_4)

{
  KeyAgreementResponder *this_00;
  ulong uVar1;
  
  if (*(long *)(this + 0x450) != 0) {
    this_00 = (KeyAgreementResponder *)operator_new(0x230);
                    /* try { // try from 00b4b58c to 00b4b58f has its CatchHandler @ 00b4b5dc */
    KeyAgreementResponder::KeyAgreementResponder(this_00);
    *(KeyAgreementResponder **)(this + 0x18) = this_00;
    uVar1 = KeyAgreementResponder::Initialize
                      (this_00,*(SecureRandomGenerator **)(this + 0x450),param_1,param_2,param_3,
                       param_4);
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(this + 8) = 2;
      return 1;
    }
  }
  return 0;
}


