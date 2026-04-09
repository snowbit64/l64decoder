// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncode
// Entry Point: 00ccf6f0
// Size: 832 bytes
// Signature: undefined __thiscall DEREncode(PKCS8PrivateKey * this, BufferedTransformation * param_1)


/* CryptoPP::PKCS8PrivateKey::DEREncode(CryptoPP::BufferedTransformation&) const */

void __thiscall
CryptoPP::PKCS8PrivateKey::DEREncode(PKCS8PrivateKey *this,BufferedTransformation *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_158;
  undefined8 local_150;
  undefined **local_148;
  void *local_140;
  undefined ***local_108;
  undefined2 local_100;
  undefined8 local_f8;
  undefined **ppuStack_f0;
  undefined ***local_b0;
  undefined2 local_a8;
  undefined **local_a0;
  undefined **ppuStack_98;
  long *local_58;
  undefined2 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ByteQueue::ByteQueue((ByteQueue *)&local_a0,0);
  local_f8 = (undefined **)((ulong)local_f8 & 0xffffff0000000000);
  local_a0 = &PTR__DERGeneralEncoder_01000c90;
  ppuStack_98 = &PTR__DERSequenceEncoder_01000e20;
  local_50 = 0x30;
  local_150._0_1_ = 2;
                    /* try { // try from 00ccf758 to 00ccf7bb has its CatchHandler @ 00ccfa74 */
  local_58 = (long *)param_1;
  ByteQueue::Put2((uchar *)&local_a0,(ulong)&local_150,1,false);
  local_150 = (undefined **)CONCAT71(local_150._1_7_,1);
  (*(code *)local_a0[7])(&local_a0,&local_150,1,0,1);
  (*(code *)local_a0[7])(&local_a0,(long)&local_f8 + 4,1,0,1);
                    /* try { // try from 00ccf7bc to 00ccf7c7 has its CatchHandler @ 00ccfa6c */
  ByteQueue::ByteQueue((ByteQueue *)&local_f8,0);
  local_b0 = &local_a0;
  local_f8 = &PTR__DERGeneralEncoder_01000c90;
  ppuStack_f0 = &PTR__DERSequenceEncoder_01000e20;
  local_a8 = 0x30;
                    /* try { // try from 00ccf7ec to 00ccf7f7 has its CatchHandler @ 00ccfa64 */
  (**(code **)(*(long *)this + 0x38))(&local_150,this);
                    /* try { // try from 00ccf7f8 to 00ccf803 has its CatchHandler @ 00ccfa38 */
  OID::DEREncode((OID *)&local_150,(BufferedTransformation *)&local_f8);
  local_150 = &PTR__OID_00fecd98;
  if (local_148 != (undefined **)0x0) {
    local_140 = local_148;
    operator_delete(local_148);
  }
                    /* try { // try from 00ccf82c to 00ccf8ab has its CatchHandler @ 00ccfa7c */
  (**(code **)(*(long *)this + 0x48))(this,&local_f8);
  local_a8 = CONCAT11(1,(undefined)local_a8);
  uVar2 = ByteQueue::CurrentSize();
  local_150 = (undefined **)CONCAT71(local_150._1_7_,(undefined)local_a8);
  (*(code *)(*local_b0)[7])(local_b0,&local_150,1,0,1);
  DERLengthEncode((BufferedTransformation *)local_b0,uVar2);
  local_150 = (undefined **)0xffffffffffffffff;
  (*(code *)local_f8[0x23])(&local_f8,local_b0,&local_150,&DEFAULT_CHANNEL,1);
                    /* try { // try from 00ccf8ac to 00ccf8b7 has its CatchHandler @ 00ccfa30 */
  ByteQueue::ByteQueue((ByteQueue *)&local_150,0);
  local_108 = &local_a0;
  local_100 = 4;
  local_150 = &PTR__DERGeneralEncoder_01005270;
  local_148 = &PTR__DERGeneralEncoder_01005400;
                    /* try { // try from 00ccf8e4 to 00ccf9eb has its CatchHandler @ 00ccfa84 */
  (**(code **)(*(long *)this + 0x58))(this,&local_150);
  local_100 = CONCAT11(1,(undefined)local_100);
  uVar2 = ByteQueue::CurrentSize();
  local_158 = CONCAT71(local_158._1_7_,(undefined)local_100);
  (*(code *)(*local_108)[7])(local_108,&local_158,1,0,1);
  DERLengthEncode((BufferedTransformation *)local_108,uVar2);
  local_158 = 0xffffffffffffffff;
  (*(code *)local_150[0x23])(&local_150,local_108,&local_158,&DEFAULT_CHANNEL,1);
  (**(code **)(*(long *)this + 0x68))(this,&local_a0);
  local_50 = CONCAT11(1,(undefined)local_50);
  uVar2 = ByteQueue::CurrentSize();
  local_158 = CONCAT71(local_158._1_7_,(undefined)local_50);
  (**(code **)(*local_58 + 0x38))(local_58,&local_158,1,0,1);
  DERLengthEncode((BufferedTransformation *)local_58,uVar2);
  local_158 = 0xffffffffffffffff;
  (*(code *)local_a0[0x23])(&local_a0,local_58,&local_158,&DEFAULT_CHANNEL,1);
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_150);
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_f8);
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


