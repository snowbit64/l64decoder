// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DERGeneralEncoder
// Entry Point: 00ccf28c
// Size: 228 bytes
// Signature: undefined __thiscall ~DERGeneralEncoder(DERGeneralEncoder * this)


/* CryptoPP::DERGeneralEncoder::~DERGeneralEncoder() */

void __thiscall CryptoPP::DERGeneralEncoder::~DERGeneralEncoder(DERGeneralEncoder *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__DERGeneralEncoder_01005270;
  *(undefined ***)(this + 8) = &PTR__DERGeneralEncoder_01005400;
  if (this[0x51] == (DERGeneralEncoder)0x0) {
    this[0x51] = (DERGeneralEncoder)0x1;
                    /* try { // try from 00ccf2d4 to 00ccf33f has its CatchHandler @ 00ccf370 */
    uVar2 = ByteQueue::CurrentSize();
    local_40 = CONCAT71(local_40._1_7_,this[0x50]);
    (**(code **)(**(long **)(this + 0x48) + 0x38))(*(long **)(this + 0x48),&local_40,1,0,1);
    DERLengthEncode(*(BufferedTransformation **)(this + 0x48),uVar2);
    local_40 = 0xffffffffffffffff;
    (**(code **)(*(long *)this + 0x118))
              (this,*(undefined8 *)(this + 0x48),&local_40,&DEFAULT_CHANNEL,1);
  }
  ByteQueue::~ByteQueue((ByteQueue *)this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


