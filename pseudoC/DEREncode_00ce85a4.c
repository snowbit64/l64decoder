// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncode
// Entry Point: 00ce85a4
// Size: 1164 bytes
// Signature: undefined __thiscall DEREncode(GF2NPP * this, BufferedTransformation * param_1)


/* CryptoPP::GF2NPP::DEREncode(CryptoPP::BufferedTransformation&) const */

void __thiscall CryptoPP::GF2NPP::DEREncode(GF2NPP *this,BufferedTransformation *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined local_184 [4];
  undefined8 local_180;
  undefined **local_178;
  void *local_170;
  undefined8 local_128;
  void *local_120;
  void *local_118;
  undefined **local_108;
  undefined **local_100;
  void *local_f8;
  undefined **local_b0;
  undefined **ppuStack_a8;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar4 = 0x30;
  DERGeneralEncoder::DERGeneralEncoder((DERGeneralEncoder *)&local_b0,param_1,'0');
  local_b0 = &PTR__DERGeneralEncoder_01000c90;
  ppuStack_a8 = &PTR__DERSequenceEncoder_01000e20;
                    /* try { // try from 00ce85f4 to 00ce85fb has its CatchHandler @ 00ce8ad0 */
  ASN1::id_fieldType();
                    /* try { // try from 00ce85fc to 00ce860b has its CatchHandler @ 00ce8aa4 */
  operator+((CryptoPP *)&local_108,(OID *)0x2,uVar4);
  local_108 = &PTR__OID_00fecd98;
  if (local_100 != (undefined **)0x0) {
    local_f8 = local_100;
    operator_delete(local_100);
  }
                    /* try { // try from 00ce862c to 00ce8637 has its CatchHandler @ 00ce8a88 */
  OID::DEREncode((OID *)&local_180,(BufferedTransformation *)&local_b0);
  local_180 = &PTR__OID_00fecd98;
  if (local_178 != (undefined **)0x0) {
    local_170 = local_178;
    operator_delete(local_178);
  }
                    /* try { // try from 00ce8650 to 00ce865f has its CatchHandler @ 00ce8a80 */
  DERGeneralEncoder::DERGeneralEncoder
            ((DERGeneralEncoder *)&local_108,(DERGeneralEncoder *)&local_b0,'0');
  uVar1 = *(uint *)(this + 0x90);
  local_108 = &PTR__DERGeneralEncoder_01000c90;
  local_100 = &PTR__DERSequenceEncoder_01000e20;
  local_180 = (undefined **)
              ((ulong)CONCAT43(CONCAT31(local_180._5_3_,(char)uVar1),
                               CONCAT12((char)(uVar1 >> 8),
                                        CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18)))) << 8
              );
  if (uVar1 >> 0x18 == 0) {
    if ((uVar1 >> 0x10 & 0xff) == 0) {
      uVar5 = 1;
      if ((uVar1 >> 8 & 0xff) != 0) {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 3;
    }
  }
  else {
    uVar5 = 4;
  }
  bVar2 = *(byte *)((long)&local_180 + (5 - (ulong)uVar5));
  local_128 = (undefined **)CONCAT71(local_128._1_7_,2);
                    /* try { // try from 00ce86d8 to 00ce8727 has its CatchHandler @ 00ce8ad8 */
  ByteQueue::Put2((uchar *)&local_108,(ulong)&local_128,1,false);
  uVar4 = (ulong)uVar5 + (ulong)(bVar2 >> 7);
  DERLengthEncode((BufferedTransformation *)&local_108,uVar4);
  (*(code *)local_108[7])(&local_108,(long)&local_180 + (5 - uVar4),uVar4,0,1);
                    /* try { // try from 00ce8728 to 00ce872f has its CatchHandler @ 00ce8a78 */
  ASN1::id_characteristic_two_basis();
                    /* try { // try from 00ce8730 to 00ce873f has its CatchHandler @ 00ce8a54 */
  operator+((CryptoPP *)&local_180,(OID *)0x3,uVar4);
  local_180 = &PTR__OID_00fecd98;
  if (local_178 != (undefined **)0x0) {
    local_170 = local_178;
    operator_delete(local_178);
  }
                    /* try { // try from 00ce8758 to 00ce8763 has its CatchHandler @ 00ce8a38 */
  OID::DEREncode((OID *)&local_128,(BufferedTransformation *)&local_108);
  local_128 = &PTR__OID_00fecd98;
  if (local_120 != (void *)0x0) {
    local_118 = local_120;
    operator_delete(local_120);
  }
                    /* try { // try from 00ce877c to 00ce878b has its CatchHandler @ 00ce8a30 */
  DERGeneralEncoder::DERGeneralEncoder
            ((DERGeneralEncoder *)&local_180,(DERGeneralEncoder *)&local_108,'0');
  uVar1 = *(uint *)(this + 0x9c);
  local_180 = &PTR__DERGeneralEncoder_01000c90;
  local_178 = &PTR__DERSequenceEncoder_01000e20;
  local_128 = (undefined **)
              ((ulong)CONCAT43(CONCAT31(local_128._5_3_,(char)uVar1),
                               CONCAT12((char)(uVar1 >> 8),
                                        CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18)))) << 8
              );
  if (uVar1 >> 0x18 == 0) {
    if ((uVar1 >> 0x10 & 0xff) == 0) {
      uVar5 = 1;
      if ((uVar1 >> 8 & 0xff) != 0) {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 3;
    }
  }
  else {
    uVar5 = 4;
  }
  bVar2 = *(byte *)((long)&local_128 + (5 - (ulong)uVar5));
  local_184[0] = 2;
                    /* try { // try from 00ce8800 to 00ce89e7 has its CatchHandler @ 00ce8ae0 */
  ByteQueue::Put2((uchar *)&local_180,(ulong)local_184,1,false);
  uVar4 = (ulong)uVar5 + (ulong)(bVar2 >> 7);
  DERLengthEncode((BufferedTransformation *)&local_180,uVar4);
  (*(code *)local_180[7])(&local_180,(long)&local_128 + (5 - uVar4),uVar4,0,1);
  uVar1 = *(uint *)(this + 0x98);
  local_128 = (undefined **)
              ((ulong)CONCAT43(CONCAT31(local_128._5_3_,(char)uVar1),
                               CONCAT12((char)(uVar1 >> 8),
                                        CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18)))) << 8
              );
  if (uVar1 >> 0x18 == 0) {
    if ((uVar1 >> 0x10 & 0xff) == 0) {
      uVar5 = 1;
      if ((uVar1 >> 8 & 0xff) != 0) {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 3;
    }
  }
  else {
    uVar5 = 4;
  }
  bVar2 = *(byte *)((long)&local_128 + (5 - (ulong)uVar5));
  local_184[0] = 2;
  (*(code *)local_180[7])(&local_180,local_184,1,0,1);
  uVar4 = (ulong)uVar5 + (ulong)(bVar2 >> 7);
  DERLengthEncode((BufferedTransformation *)&local_180,uVar4);
  (*(code *)local_180[7])(&local_180,(long)&local_128 + (5 - uVar4),uVar4,0,1);
  uVar1 = *(uint *)(this + 0x94);
  local_128 = (undefined **)
              ((ulong)CONCAT43(CONCAT31(local_128._5_3_,(char)uVar1),
                               CONCAT12((char)(uVar1 >> 8),
                                        CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18)))) << 8
              );
  if (uVar1 >> 0x18 == 0) {
    if ((uVar1 >> 0x10 & 0xff) == 0) {
      uVar5 = 1;
      if ((uVar1 >> 8 & 0xff) != 0) {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 3;
    }
  }
  else {
    uVar5 = 4;
  }
  bVar2 = *(byte *)((long)&local_128 + (5 - (ulong)uVar5));
  local_184[0] = 2;
  (*(code *)local_180[7])(&local_180,local_184,1,0,1);
  uVar4 = (ulong)uVar5 + (ulong)(bVar2 >> 7);
  DERLengthEncode((BufferedTransformation *)&local_180,uVar4);
  (*(code *)local_180[7])(&local_180,(long)&local_128 + (5 - uVar4),uVar4,0,1);
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_180);
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_108);
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_b0);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


