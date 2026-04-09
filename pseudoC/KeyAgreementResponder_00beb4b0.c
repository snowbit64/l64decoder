// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: KeyAgreementResponder
// Entry Point: 00beb4b0
// Size: 96 bytes
// Signature: undefined __thiscall KeyAgreementResponder(KeyAgreementResponder * this)


/* KeyAgreementResponder::KeyAgreementResponder() */

void __thiscall KeyAgreementResponder::KeyAgreementResponder(KeyAgreementResponder *this)

{
  KeyAgreementCommon::KeyAgreementCommon((KeyAgreementCommon *)this);
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 400) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x1b0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1d0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f0) = 0xffffffffffffffff;
                    /* try { // try from 00beb4f4 to 00beb4fb has its CatchHandler @ 00beb510 */
  Mutex::Mutex((Mutex *)(this + 0x208),true);
  return;
}


