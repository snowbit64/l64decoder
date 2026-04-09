// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncode
// Entry Point: 00ca3b40
// Size: 348 bytes
// Signature: undefined __thiscall DEREncode(DL_GroupParameters_EC<CryptoPP::EC2N> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DEREncode(CryptoPP::BufferedTransformation&)
   const */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DEREncode
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,BufferedTransformation *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined local_9c [4];
  undefined **local_98;
  undefined **ppuStack_90;
  undefined4 local_40;
  undefined local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((this[0x1e9] == (DL_GroupParameters_EC<CryptoPP::EC2N>)0x0) ||
     (*(long *)(this + 0x170) == *(long *)(this + 0x178))) {
    DERGeneralEncoder::DERGeneralEncoder((DERGeneralEncoder *)&local_98,param_1,'0');
    local_40 = 0;
    local_3c[0] = 1;
    local_9c[0] = 2;
    local_98 = &PTR__DERGeneralEncoder_01000c90;
    ppuStack_90 = &PTR__DERSequenceEncoder_01000e20;
                    /* try { // try from 00ca3bb8 to 00ca3c6b has its CatchHandler @ 00ca3c9c */
    ByteQueue::Put2((uchar *)&local_98,(ulong)local_9c,1,false);
    DERLengthEncode((BufferedTransformation *)&local_98,1);
    (*(code *)local_98[7])(&local_98,local_3c,1,0,1);
    EC2N::DEREncode((EC2N *)(this + 0x18),(BufferedTransformation *)&local_98);
    uVar2 = (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*(long *)(this + 0x18) + 0xa8))((EC2N *)(this + 0x18),&local_98,uVar2,this[0x1e8]);
    Integer::DEREncode((Integer *)(this + 0x188),(BufferedTransformation *)&local_98);
    uVar3 = Integer::operator!((Integer *)(this + 0x1b8));
    if ((uVar3 & 1) == 0) {
      Integer::DEREncode((Integer *)(this + 0x1b8),(BufferedTransformation *)&local_98);
    }
    DERGeneralEncoder::MessageEnd();
    DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_98);
  }
  else {
    OID::DEREncode((OID *)(this + 0x168),param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


