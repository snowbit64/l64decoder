// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncode
// Entry Point: 00d01ec4
// Size: 284 bytes
// Signature: undefined __thiscall DEREncode(ModularArithmetic * this, BufferedTransformation * param_1)


/* CryptoPP::ModularArithmetic::DEREncode(CryptoPP::BufferedTransformation&) const */

void __thiscall
CryptoPP::ModularArithmetic::DEREncode(ModularArithmetic *this,BufferedTransformation *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined **local_108;
  void *local_100;
  void *local_f8;
  undefined **local_e8;
  undefined **ppuStack_e0;
  undefined **local_90;
  void *local_88;
  void *local_80;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = 0x30;
  DERGeneralEncoder::DERGeneralEncoder((DERGeneralEncoder *)&local_e8,param_1,'0');
  local_e8 = &PTR__DERGeneralEncoder_01000c90;
  ppuStack_e0 = &PTR__DERSequenceEncoder_01000e20;
                    /* try { // try from 00d01f08 to 00d01f0f has its CatchHandler @ 00d02028 */
  ASN1::id_fieldType();
                    /* try { // try from 00d01f10 to 00d01f1f has its CatchHandler @ 00d01ffc */
  operator+((CryptoPP *)&local_90,(OID *)0x1,uVar2);
  local_90 = &PTR__OID_00fecd98;
  if (local_88 != (void *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
                    /* try { // try from 00d01f40 to 00d01f4b has its CatchHandler @ 00d01fe0 */
  OID::DEREncode((OID *)&local_108,(BufferedTransformation *)&local_e8);
  local_108 = &PTR__OID_00fecd98;
  if (local_100 != (void *)0x0) {
    local_f8 = local_100;
    operator_delete(local_100);
  }
                    /* try { // try from 00d01f64 to 00d01f73 has its CatchHandler @ 00d0202c */
  DERGeneralEncoder::DERGeneralEncoder
            ((DERGeneralEncoder *)&local_90,(BufferedTransformation *)&local_e8,'\x02');
                    /* try { // try from 00d01f78 to 00d01f9f has its CatchHandler @ 00d02034 */
  uVar2 = Integer::MinEncodedSize((Integer *)(this + 0x18),1);
  Integer::Encode((Integer *)(this + 0x18),(BufferedTransformation *)&local_90,uVar2,1);
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_90);
                    /* try { // try from 00d01fa8 to 00d01faf has its CatchHandler @ 00d0202c */
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_e8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


