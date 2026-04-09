// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncode
// Entry Point: 00ce8214
// Size: 728 bytes
// Signature: undefined __thiscall DEREncode(GF2NT * this, BufferedTransformation * param_1)


/* CryptoPP::GF2NT::DEREncode(CryptoPP::BufferedTransformation&) const */

void __thiscall CryptoPP::GF2NT::DEREncode(GF2NT *this,BufferedTransformation *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 local_138;
  void *local_130;
  void *local_128;
  undefined **local_118;
  undefined **local_110;
  void *local_108;
  undefined **local_c0;
  undefined **ppuStack_b8;
  undefined8 local_68;
  void *local_60;
  void *local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = 0x30;
  DERGeneralEncoder::DERGeneralEncoder((DERGeneralEncoder *)&local_c0,param_1,'0');
  local_c0 = &PTR__DERGeneralEncoder_01000c90;
  ppuStack_b8 = &PTR__DERSequenceEncoder_01000e20;
                    /* try { // try from 00ce825c to 00ce8263 has its CatchHandler @ 00ce8580 */
  ASN1::id_fieldType();
                    /* try { // try from 00ce8264 to 00ce8273 has its CatchHandler @ 00ce8554 */
  operator+((CryptoPP *)&local_118,(OID *)0x2,uVar4);
  local_118 = &PTR__OID_00fecd98;
  if (local_110 != (undefined **)0x0) {
    local_108 = local_110;
    operator_delete(local_110);
  }
                    /* try { // try from 00ce8294 to 00ce829f has its CatchHandler @ 00ce8538 */
  OID::DEREncode((OID *)&local_68,(BufferedTransformation *)&local_c0);
  local_68 = &PTR__OID_00fecd98;
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
                    /* try { // try from 00ce82b8 to 00ce82c7 has its CatchHandler @ 00ce8530 */
  DERGeneralEncoder::DERGeneralEncoder
            ((DERGeneralEncoder *)&local_118,(DERGeneralEncoder *)&local_c0,'0');
  uVar1 = *(uint *)(this + 0x90);
  local_118 = &PTR__DERGeneralEncoder_01000c90;
  local_110 = &PTR__DERSequenceEncoder_01000e20;
  local_68 = (undefined **)
             ((ulong)CONCAT43(CONCAT31(local_68._5_3_,(char)uVar1),
                              CONCAT12((char)(uVar1 >> 8),
                                       CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18)))) << 8)
  ;
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
  bVar2 = *(byte *)((long)&local_68 + (5 - (ulong)uVar5));
  local_138 = (undefined **)CONCAT71(local_138._1_7_,2);
                    /* try { // try from 00ce833c to 00ce838b has its CatchHandler @ 00ce8588 */
  ByteQueue::Put2((uchar *)&local_118,(ulong)&local_138,1,false);
  uVar4 = (ulong)uVar5 + (ulong)(bVar2 >> 7);
  DERLengthEncode((BufferedTransformation *)&local_118,uVar4);
  (*(code *)local_118[7])(&local_118,(long)&local_68 + (5 - uVar4),uVar4,0,1);
                    /* try { // try from 00ce838c to 00ce8393 has its CatchHandler @ 00ce852c */
  ASN1::id_characteristic_two_basis();
                    /* try { // try from 00ce8394 to 00ce83a3 has its CatchHandler @ 00ce8508 */
  operator+((CryptoPP *)&local_68,(OID *)0x2,uVar4);
  local_68 = &PTR__OID_00fecd98;
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
                    /* try { // try from 00ce83bc to 00ce83c7 has its CatchHandler @ 00ce84ec */
  OID::DEREncode((OID *)&local_138,(BufferedTransformation *)&local_118);
  local_138 = &PTR__OID_00fecd98;
  if (local_130 != (void *)0x0) {
    local_128 = local_130;
    operator_delete(local_130);
  }
  uVar1 = *(uint *)(this + 0x98);
  local_68 = (undefined **)
             ((ulong)CONCAT43(CONCAT31(local_68._5_3_,(char)uVar1),
                              CONCAT12((char)(uVar1 >> 8),
                                       CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18)))) << 8)
  ;
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
  bVar2 = *(byte *)((long)&local_68 + (5 - (ulong)uVar5));
  local_138 = (undefined **)CONCAT71(local_138._1_7_,2);
                    /* try { // try from 00ce8450 to 00ce84af has its CatchHandler @ 00ce8588 */
  (*(code *)local_118[7])(&local_118,&local_138,1,0,1);
  uVar4 = (ulong)uVar5 + (ulong)(bVar2 >> 7);
  DERLengthEncode((BufferedTransformation *)&local_118,uVar4);
  (*(code *)local_118[7])(&local_118,(long)&local_68 + (5 - uVar4),uVar4,0,1);
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_118);
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_c0);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


