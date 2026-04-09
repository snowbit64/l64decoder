// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ENetConnection
// Entry Point: 00b4b454
// Size: 116 bytes
// Signature: undefined __thiscall ~ENetConnection(ENetConnection * this)


/* ENetConnection::~ENetConnection() */

void __thiscall ENetConnection::~ENetConnection(ENetConnection *this)

{
  KeyAgreementInitiator *this_00;
  KeyAgreementResponder *this_01;
  SecureRandomGenerator *this_02;
  
  this_00 = *(KeyAgreementInitiator **)(this + 0x10);
  if (this_00 != (KeyAgreementInitiator *)0x0) {
    KeyAgreementInitiator::~KeyAgreementInitiator(this_00);
    operator_delete(this_00);
  }
  this_01 = *(KeyAgreementResponder **)(this + 0x18);
  if (this_01 != (KeyAgreementResponder *)0x0) {
    KeyAgreementResponder::~KeyAgreementResponder(this_01);
    operator_delete(this_01);
  }
  this_02 = *(SecureRandomGenerator **)(this + 0x450);
  if (this_02 != (SecureRandomGenerator *)0x0) {
    SecureRandomGenerator::~SecureRandomGenerator(this_02);
    operator_delete(this_02);
  }
  if (*(void **)(this + 0x460) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x460));
  }
  AuthenticatedEncryption::~AuthenticatedEncryption((AuthenticatedEncryption *)(this + 0x20));
  return;
}


