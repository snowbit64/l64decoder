// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncode
// Entry Point: 00ceb7f8
// Size: 192 bytes
// Signature: undefined __thiscall DEREncode(DL_GroupParameters_IntegerBased * this, BufferedTransformation * param_1)


/* CryptoPP::DL_GroupParameters_IntegerBased::DEREncode(CryptoPP::BufferedTransformation&) const */

void __thiscall
CryptoPP::DL_GroupParameters_IntegerBased::DEREncode
          (DL_GroupParameters_IntegerBased *this,BufferedTransformation *param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_80;
  undefined **ppuStack_78;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  DERGeneralEncoder::DERGeneralEncoder((DERGeneralEncoder *)&local_80,param_1,'0');
  local_80 = &PTR__DERGeneralEncoder_01000c90;
  ppuStack_78 = &PTR__DERSequenceEncoder_01000e20;
                    /* try { // try from 00ceb840 to 00ceb88b has its CatchHandler @ 00ceb8b8 */
  plVar2 = (long *)(**(code **)(*(long *)this + 0xa0))(this);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_80);
  Integer::DEREncode((Integer *)(this + 0x18),(BufferedTransformation *)&local_80);
  plVar2 = (long *)(**(code **)(*(long *)(this + 8) + 0x68))(this + 8);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_80);
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_80);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


