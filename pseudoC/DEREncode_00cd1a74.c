// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncode
// Entry Point: 00cd1a74
// Size: 172 bytes
// Signature: undefined __thiscall DEREncode(ECP * this, BufferedTransformation * param_1)


/* CryptoPP::ECP::DEREncode(CryptoPP::BufferedTransformation&) const */

void __thiscall CryptoPP::ECP::DEREncode(ECP *this,BufferedTransformation *param_1)

{
  long lVar1;
  undefined **local_90;
  undefined **ppuStack_88;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ModularArithmetic::DEREncode(*(ModularArithmetic **)(this + 0x10),param_1);
  DERGeneralEncoder::DERGeneralEncoder((DERGeneralEncoder *)&local_90,param_1,'0');
  local_90 = &PTR__DERGeneralEncoder_01000c90;
  ppuStack_88 = &PTR__DERSequenceEncoder_01000e20;
                    /* try { // try from 00cd1ad0 to 00cd1aef has its CatchHandler @ 00cd1b20 */
  ModularArithmetic::DEREncodeElement
            (*(ModularArithmetic **)(this + 0x10),(BufferedTransformation *)&local_90,
             (Integer *)(this + 0x18));
  ModularArithmetic::DEREncodeElement
            (*(ModularArithmetic **)(this + 0x10),(BufferedTransformation *)&local_90,
             (Integer *)(this + 0x48));
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


