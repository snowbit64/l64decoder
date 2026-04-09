// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodePrivateKey
// Entry Point: 00cab38c
// Size: 272 bytes
// Signature: undefined __thiscall DEREncodePrivateKey(DL_PrivateKey_ECGDSA<CryptoPP::ECP> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::DEREncodePrivateKey(CryptoPP::BufferedTransformation&)
   const */

void __thiscall
CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::DEREncodePrivateKey
          (DL_PrivateKey_ECGDSA<CryptoPP::ECP> *this,BufferedTransformation *param_1)

{
  long lVar1;
  Integer *this_00;
  ulong uVar2;
  undefined local_9c [4];
  undefined **local_98;
  undefined **ppuStack_90;
  undefined4 local_40;
  undefined local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  DERGeneralEncoder::DERGeneralEncoder((DERGeneralEncoder *)&local_98,param_1,'0');
  local_40 = 0;
  local_3c[0] = 1;
  local_9c[0] = 2;
  local_98 = &PTR__DERGeneralEncoder_01000c90;
  ppuStack_90 = &PTR__DERSequenceEncoder_01000e20;
                    /* try { // try from 00cab3e4 to 00cab46b has its CatchHandler @ 00cab49c */
  ByteQueue::Put2((uchar *)&local_98,(ulong)local_9c,1,false);
  DERLengthEncode((BufferedTransformation *)&local_98,1);
  (*(code *)local_98[7])(&local_98,local_3c,1,0,1);
  this_00 = (Integer *)(**(code **)(*(long *)this + 0x20))(this);
  (**(code **)(*(long *)(this + 0x60) + 0xa0))(this + 0x60);
  uVar2 = Integer::ByteCount();
  Integer::DEREncodeAsOctetString(this_00,(BufferedTransformation *)&local_98,uVar2 & 0xffffffff);
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


