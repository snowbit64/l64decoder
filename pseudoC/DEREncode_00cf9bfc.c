// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncode
// Entry Point: 00cf9bfc
// Size: 128 bytes
// Signature: undefined __thiscall DEREncode(Integer * this, BufferedTransformation * param_1)


/* CryptoPP::Integer::DEREncode(CryptoPP::BufferedTransformation&) const */

void __thiscall CryptoPP::Integer::DEREncode(Integer *this,BufferedTransformation *param_1)

{
  long lVar1;
  ulong uVar2;
  DERGeneralEncoder aDStack_80 [88];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  DERGeneralEncoder::DERGeneralEncoder(aDStack_80,param_1,'\x02');
                    /* try { // try from 00cf9c28 to 00cf9c4f has its CatchHandler @ 00cf9c7c */
  uVar2 = MinEncodedSize(this,1);
  Encode(this,(BufferedTransformation *)aDStack_80,uVar2,1);
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::~DERGeneralEncoder(aDStack_80);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


