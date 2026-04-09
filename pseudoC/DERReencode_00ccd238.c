// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DERReencode
// Entry Point: 00ccd238
// Size: 512 bytes
// Signature: undefined __cdecl DERReencode(BufferedTransformation * param_1, BufferedTransformation * param_2)


/* CryptoPP::DERReencode(CryptoPP::BufferedTransformation&, CryptoPP::BufferedTransformation&) */

void CryptoPP::DERReencode(BufferedTransformation *param_1,BufferedTransformation *param_2)

{
  long lVar1;
  uchar uVar2;
  ulong uVar3;
  long lVar4;
  uchar local_e4 [4];
  undefined8 local_e0;
  undefined **local_d8;
  undefined **ppuStack_d0;
  long *local_90;
  uchar local_88;
  undefined local_87;
  undefined **local_80;
  undefined **ppuStack_78;
  undefined4 local_6c;
  undefined local_68;
  BufferedTransformation *local_60;
  long local_58;
  char local_50;
  char local_4f;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0xb8))(param_1,local_e4);
  uVar2 = local_e4[0];
  Algorithm::Algorithm((Algorithm *)&local_80,false);
  local_68 = 0;
  local_6c = 0xffffffff;
  local_80 = &PTR__BERGeneralDecoder_010050a8;
  ppuStack_78 = &PTR__BERGeneralDecoder_01005240;
  local_50 = '\0';
  local_60 = param_1;
  BERGeneralDecoder::Init((BERGeneralDecoder *)&local_80,uVar2);
                    /* try { // try from 00ccd2c0 to 00ccd2cb has its CatchHandler @ 00ccd450 */
  ByteQueue::ByteQueue((ByteQueue *)&local_d8,0);
  local_88 = local_e4[0];
  local_87 = 0;
  local_d8 = &PTR__DERGeneralEncoder_01005270;
  ppuStack_d0 = &PTR__DERGeneralEncoder_01005400;
  local_90 = (long *)param_2;
  if (local_4f == '\0') {
                    /* try { // try from 00ccd400 to 00ccd427 has its CatchHandler @ 00ccd45c */
    while ((lVar4 = BufferedTransformation::PeekWord16(local_60,(ushort *)&local_e0,1), lVar4 != 2
           || ((short)local_e0 != 0))) {
      while (DERReencode((BufferedTransformation *)&local_80,(BufferedTransformation *)&local_d8),
            local_4f != '\0') {
        if (local_58 == 0) goto LAB_00ccd320;
      }
    }
  }
  else {
    local_e0 = local_58;
                    /* try { // try from 00ccd304 to 00ccd39b has its CatchHandler @ 00ccd458 */
    (*(code *)local_80[0x23])(&local_80,&local_d8,&local_e0,&DEFAULT_CHANNEL,1);
  }
LAB_00ccd320:
  BERGeneralDecoder::MessageEnd();
  local_87 = 1;
  uVar3 = ByteQueue::CurrentSize();
  local_e0 = CONCAT71(local_e0._1_7_,local_88);
  (**(code **)(*local_90 + 0x38))(local_90,&local_e0,1,0,1);
  DERLengthEncode((BufferedTransformation *)local_90,uVar3);
  local_e0 = 0xffffffffffffffff;
  (*(code *)local_d8[0x23])(&local_d8,local_90,&local_e0,&DEFAULT_CHANNEL,1);
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_d8);
  local_80 = &PTR__BERGeneralDecoder_010050a8;
  ppuStack_78 = &PTR__BERGeneralDecoder_01005240;
  if (local_50 == '\0') {
                    /* try { // try from 00ccd3b8 to 00ccd3bf has its CatchHandler @ 00ccd438 */
    BERGeneralDecoder::MessageEnd();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


