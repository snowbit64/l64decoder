// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecode
// Entry Point: 00ccf3a0
// Size: 664 bytes
// Signature: undefined __thiscall BERDecode(PKCS8PrivateKey * this, BufferedTransformation * param_1)


/* CryptoPP::PKCS8PrivateKey::BERDecode(CryptoPP::BufferedTransformation&) */

void __thiscall
CryptoPP::PKCS8PrivateKey::BERDecode(PKCS8PrivateKey *this,BufferedTransformation *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uStack_e8;
  ushort local_e4 [2];
  undefined **local_e0;
  undefined **local_d8;
  void *local_d0;
  undefined local_c8;
  undefined ***local_c0;
  char local_b0;
  undefined **local_a8;
  undefined **ppuStack_a0;
  undefined4 local_94;
  undefined local_90;
  undefined ***local_88;
  long local_80;
  char local_78;
  char local_77;
  undefined **local_70;
  undefined **ppuStack_68;
  undefined4 local_5c;
  undefined local_58;
  BufferedTransformation *local_50;
  long local_48;
  char local_40;
  char local_3f;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Algorithm::Algorithm((Algorithm *)&local_70,false);
  local_58 = 0;
  local_5c = 0xffffffff;
  local_70 = &PTR__BERGeneralDecoder_010050a8;
  ppuStack_68 = &PTR__BERGeneralDecoder_01005240;
  local_40 = '\0';
  local_50 = param_1;
  BERGeneralDecoder::Init((BERGeneralDecoder *)&local_70,'0');
  local_70 = &PTR__BERGeneralDecoder_01000a70;
  ppuStack_68 = &PTR__BERSequenceDecoder_01000c08;
                    /* try { // try from 00ccf41c to 00ccf433 has its CatchHandler @ 00ccf6b0 */
  BERDecodeUnsigned<unsigned_int>((BufferedTransformation *)&local_70,&uStack_e8,'\x02',0,0);
                    /* try { // try from 00ccf434 to 00ccf46f has its CatchHandler @ 00ccf6c4 */
  Algorithm::Algorithm((Algorithm *)&local_a8,false);
  local_a8 = &PTR__BERGeneralDecoder_010050a8;
  ppuStack_a0 = &PTR__BERGeneralDecoder_01005240;
  local_88 = &local_70;
  local_90 = 0;
  local_94 = 0xffffffff;
  local_78 = '\0';
  BERGeneralDecoder::Init((BERGeneralDecoder *)&local_a8,'0');
  local_a8 = &PTR__BERGeneralDecoder_01000a70;
  ppuStack_a0 = &PTR__BERSequenceDecoder_01000c08;
                    /* try { // try from 00ccf484 to 00ccf48f has its CatchHandler @ 00ccf6ac */
  (**(code **)(*(long *)this + 0x38))(&local_e0,this);
                    /* try { // try from 00ccf490 to 00ccf49b has its CatchHandler @ 00ccf680 */
  OID::BERDecodeAndCheck((OID *)&local_e0,(BufferedTransformation *)&local_a8);
  local_e0 = &PTR__OID_00fecd98;
  if (local_d8 != (undefined **)0x0) {
    local_d0 = local_d8;
    operator_delete(local_d8);
  }
  if (local_77 == '\0') {
    lVar3 = BufferedTransformation::PeekWord16
                      ((BufferedTransformation *)local_88,(ushort *)&local_e0,1);
    if ((lVar3 == 2) && ((short)local_e0 == 0)) goto LAB_00ccf508;
LAB_00ccf4cc:
                    /* try { // try from 00ccf4d4 to 00ccf513 has its CatchHandler @ 00ccf6b8 */
    uVar2 = (**(code **)(*(long *)this + 0x40))(this,&local_a8);
  }
  else {
    if (local_80 != 0) goto LAB_00ccf4cc;
LAB_00ccf508:
    uVar2 = 0;
  }
  BERGeneralDecoder::MessageEnd();
                    /* try { // try from 00ccf514 to 00ccf54f has its CatchHandler @ 00ccf6bc */
  Algorithm::Algorithm((Algorithm *)&local_e0,false);
  local_e0 = &PTR__BERGeneralDecoder_010050a8;
  local_d8 = &PTR__BERGeneralDecoder_01005240;
  local_c0 = &local_70;
  local_c8 = 0;
  local_d0 = (void *)CONCAT44(0xffffffff,local_d0._0_4_);
  local_b0 = '\0';
  BERGeneralDecoder::Init((BERGeneralDecoder *)&local_e0,'\x04');
                    /* try { // try from 00ccf55c to 00ccf5c3 has its CatchHandler @ 00ccf6cc */
  (**(code **)(*(long *)this + 0x50))(this,&local_e0,uVar2 & 1,local_48);
  BERGeneralDecoder::MessageEnd();
  if (local_3f == '\0') {
    lVar3 = BufferedTransformation::PeekWord16(local_50,local_e4,1);
    if ((lVar3 == 2) && (local_e4[0] == 0)) goto LAB_00ccf5bc;
  }
  else if (local_48 == 0) goto LAB_00ccf5bc;
  (**(code **)(*(long *)this + 0x60))(this,&local_70);
LAB_00ccf5bc:
  BERGeneralDecoder::MessageEnd();
  local_e0 = &PTR__BERGeneralDecoder_010050a8;
  local_d8 = &PTR__BERGeneralDecoder_01005240;
  if (local_b0 == '\0') {
                    /* try { // try from 00ccf5d8 to 00ccf5df has its CatchHandler @ 00ccf668 */
    BERGeneralDecoder::MessageEnd();
  }
  local_a8 = &PTR__BERGeneralDecoder_010050a8;
  ppuStack_a0 = &PTR__BERGeneralDecoder_01005240;
  if (local_78 == '\0') {
                    /* try { // try from 00ccf5ec to 00ccf5f3 has its CatchHandler @ 00ccf650 */
    BERGeneralDecoder::MessageEnd();
  }
  local_70 = &PTR__BERGeneralDecoder_010050a8;
  ppuStack_68 = &PTR__BERGeneralDecoder_01005240;
  if (local_40 == '\0') {
                    /* try { // try from 00ccf608 to 00ccf60f has its CatchHandler @ 00ccf638 */
    BERGeneralDecoder::MessageEnd();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


