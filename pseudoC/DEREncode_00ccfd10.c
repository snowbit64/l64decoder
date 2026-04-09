// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncode
// Entry Point: 00ccfd10
// Size: 180 bytes
// Signature: undefined __thiscall DEREncode(EC2N * this, BufferedTransformation * param_1)


/* CryptoPP::EC2N::DEREncode(CryptoPP::BufferedTransformation&) const */

void __thiscall CryptoPP::EC2N::DEREncode(EC2N *this,BufferedTransformation *param_1)

{
  long lVar1;
  undefined **local_90;
  undefined **ppuStack_88;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(this + 0x10) + 200))();
  DERGeneralEncoder::DERGeneralEncoder((DERGeneralEncoder *)&local_90,param_1,'0');
  local_90 = &PTR__DERGeneralEncoder_01000c90;
  ppuStack_88 = &PTR__DERSequenceEncoder_01000e20;
                    /* try { // try from 00ccfd74 to 00ccfd93 has its CatchHandler @ 00ccfdc4 */
  GF2NP::DEREncodeElement
            (*(GF2NP **)(this + 0x10),(BufferedTransformation *)&local_90,
             (PolynomialMod2 *)(this + 0x18));
  GF2NP::DEREncodeElement
            (*(GF2NP **)(this + 0x10),(BufferedTransformation *)&local_90,
             (PolynomialMod2 *)(this + 0x38));
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


