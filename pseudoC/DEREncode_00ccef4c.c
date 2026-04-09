// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncode
// Entry Point: 00ccef4c
// Size: 720 bytes
// Signature: undefined __thiscall DEREncode(X509PublicKey * this, BufferedTransformation * param_1)


/* CryptoPP::X509PublicKey::DEREncode(CryptoPP::BufferedTransformation&) const */

void __thiscall
CryptoPP::X509PublicKey::DEREncode(X509PublicKey *this,BufferedTransformation *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_168;
  undefined8 local_160;
  undefined **local_158;
  void *local_150;
  undefined ***local_118;
  undefined2 local_110;
  undefined **local_108;
  undefined **ppuStack_100;
  undefined ***local_c0;
  undefined2 local_b8;
  undefined **local_b0;
  undefined **ppuStack_a8;
  long *local_68;
  undefined2 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  ByteQueue::ByteQueue((ByteQueue *)&local_b0,0);
  local_60 = 0x30;
                    /* try { // try from 00ccefac to 00ccefb7 has its CatchHandler @ 00ccf258 */
  local_b0 = &PTR__DERGeneralEncoder_01000c90;
  ppuStack_a8 = &PTR__DERSequenceEncoder_01000e20;
  local_68 = (long *)param_1;
  ByteQueue::ByteQueue((ByteQueue *)&local_108,0);
  local_b8 = 0x30;
                    /* try { // try from 00ccefcc to 00ccefd7 has its CatchHandler @ 00ccf250 */
  local_108 = &PTR__DERGeneralEncoder_01000c90;
  ppuStack_100 = &PTR__DERSequenceEncoder_01000e20;
  local_c0 = &local_b0;
  (**(code **)(*(long *)this + 0x38))(&local_160,this);
                    /* try { // try from 00ccefd8 to 00ccefe3 has its CatchHandler @ 00ccf224 */
  OID::DEREncode((OID *)&local_160,(BufferedTransformation *)&local_108);
  local_160 = &PTR__OID_00fecd98;
  if (local_158 != (undefined **)0x0) {
    local_150 = local_158;
    operator_delete(local_158);
  }
                    /* try { // try from 00ccf00c to 00ccf08b has its CatchHandler @ 00ccf260 */
  (**(code **)(*(long *)this + 0x48))(this,&local_108);
  local_b8 = CONCAT11(1,(undefined)local_b8);
  uVar2 = ByteQueue::CurrentSize();
  local_160 = (undefined **)CONCAT71(local_160._1_7_,(undefined)local_b8);
  (*(code *)(*local_c0)[7])(local_c0,&local_160,1,0,1);
  DERLengthEncode((BufferedTransformation *)local_c0,uVar2);
  local_160 = (undefined **)0xffffffffffffffff;
  (*(code *)local_108[0x23])(&local_108,local_c0,&local_160,&DEFAULT_CHANNEL,1);
                    /* try { // try from 00ccf08c to 00ccf097 has its CatchHandler @ 00ccf21c */
  ByteQueue::ByteQueue((ByteQueue *)&local_160,0);
  local_118 = &local_b0;
  local_110 = 3;
  local_168 = local_168 & 0xffffffffffffff00;
  local_160 = &PTR__DERGeneralEncoder_01005270;
  local_158 = &PTR__DERGeneralEncoder_01005400;
                    /* try { // try from 00ccf0c0 to 00ccf1d3 has its CatchHandler @ 00ccf268 */
  ByteQueue::Put2((uchar *)&local_160,(ulong)&local_168,1,false);
  (**(code **)(*(long *)this + 0x58))(this,&local_160);
  local_110 = CONCAT11(1,(undefined)local_110);
  uVar2 = ByteQueue::CurrentSize();
  local_168 = CONCAT71(local_168._1_7_,(undefined)local_110);
  (*(code *)(*local_118)[7])(local_118,&local_168,1,0,1);
  DERLengthEncode((BufferedTransformation *)local_118,uVar2);
  local_168 = 0xffffffffffffffff;
  (*(code *)local_160[0x23])(&local_160,local_118,&local_168,&DEFAULT_CHANNEL,1);
  local_60 = CONCAT11(1,(undefined)local_60);
  uVar2 = ByteQueue::CurrentSize();
  local_168 = CONCAT71(local_168._1_7_,(undefined)local_60);
  (**(code **)(*local_68 + 0x38))(local_68,&local_168,1,0,1);
  DERLengthEncode((BufferedTransformation *)local_68,uVar2);
  local_168 = 0xffffffffffffffff;
  (*(code *)local_b0[0x23])(&local_b0,local_68,&local_168,&DEFAULT_CHANNEL,1);
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_160);
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_108);
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_b0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


