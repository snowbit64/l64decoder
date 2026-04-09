// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecode
// Entry Point: 00c9fe3c
// Size: 652 bytes
// Signature: undefined __thiscall BERDecode(DL_GroupParameters_EC<CryptoPP::EC2N> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::BERDecode(CryptoPP::BufferedTransformation&) */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::BERDecode
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,BufferedTransformation *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  Integer *pIVar4;
  BERDecodeErr *this_00;
  uint uStack_1e0;
  char local_1dc [4];
  undefined **local_1d8 [2];
  ulong local_1c8;
  ulong uStack_1c0;
  void *local_1b8;
  undefined **local_1a8 [2];
  ulong local_198;
  ulong uStack_190;
  void *local_188;
  undefined **local_178 [2];
  ulong local_168;
  ulong uStack_160;
  void *local_158;
  ulong local_148;
  ulong uStack_140;
  void *local_138;
  undefined **local_128;
  void *local_120;
  void *local_118;
  undefined8 uStack_110;
  undefined **local_80;
  undefined **ppuStack_78;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*(long *)param_1 + 0xb8))(param_1,local_1dc);
  if (lVar2 == 0) {
    this_00 = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ca00a8 to 00ca00ab has its CatchHandler @ 00ca00d8 */
    BERDecodeErr::BERDecodeErr(this_00);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
  if (local_1dc[0] == '\x06') {
    local_118 = (void *)0x0;
    uStack_110 = 0;
    local_128 = &PTR__OID_00fecd98;
    local_120 = (void *)0x0;
                    /* try { // try from 00c9fea0 to 00c9feab has its CatchHandler @ 00ca012c */
    OID::BERDecode((OID *)&local_128,param_1);
                    /* try { // try from 00c9feac to 00c9feb7 has its CatchHandler @ 00ca0114 */
    Initialize(this,(OID *)&local_128);
    local_128 = &PTR__OID_00fecd98;
    if (local_120 != (void *)0x0) {
      local_118 = local_120;
      operator_delete(local_120);
    }
  }
  else {
    BERGeneralDecoder::BERGeneralDecoder((BERGeneralDecoder *)&local_80,param_1,'0');
    local_80 = &PTR__BERGeneralDecoder_01000a70;
    ppuStack_78 = &PTR__BERSequenceDecoder_01000c08;
                    /* try { // try from 00c9fef8 to 00c9ff0f has its CatchHandler @ 00ca010c */
    BERDecodeUnsigned<unsigned_int>((BufferedTransformation *)&local_80,&uStack_1e0,'\x02',1,1);
                    /* try { // try from 00c9ff10 to 00c9ff1b has its CatchHandler @ 00ca0104 */
    EC2N::EC2N((EC2N *)&local_128,(BufferedTransformation *)&local_80);
                    /* try { // try from 00c9ff1c to 00c9ff2b has its CatchHandler @ 00ca00fc */
    EC2N::BERDecodePoint((BufferedTransformation *)&local_128);
                    /* try { // try from 00c9ff2c to 00c9ff37 has its CatchHandler @ 00ca00f4 */
    Integer::Integer((Integer *)local_1a8,(BufferedTransformation *)&local_80);
                    /* try { // try from 00c9ff38 to 00c9ff3f has its CatchHandler @ 00ca00ec */
    Integer::Integer((Integer *)local_1d8);
                    /* try { // try from 00c9ff40 to 00c9ff8b has its CatchHandler @ 00ca014c */
    uVar3 = BERGeneralDecoder::EndReached();
    if ((uVar3 & 1) == 0) {
      Integer::BERDecode((Integer *)local_1d8,(BufferedTransformation *)&local_80);
    }
    else {
      pIVar4 = (Integer *)Integer::Zero();
      Integer::operator=((Integer *)local_1d8,pIVar4);
    }
    BERGeneralDecoder::MessageEnd();
    Initialize(this,(EC2N *)&local_128,(EC2NPoint *)local_178,(Integer *)local_1a8,
               (Integer *)local_1d8);
    if (uStack_1c0 <= local_1c8) {
      local_1c8 = uStack_1c0;
    }
    local_1d8[0] = &PTR__Integer_0100c890;
    for (; local_1c8 != 0; local_1c8 = local_1c8 - 1) {
      *(undefined4 *)((long)local_1b8 + local_1c8 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9ffc4 to 00c9ffc7 has its CatchHandler @ 00ca00d4 */
    UnalignedDeallocate(local_1b8);
    local_1a8[0] = &PTR__Integer_0100c890;
    if (uStack_190 <= local_198) {
      local_198 = uStack_190;
    }
    for (; local_198 != 0; local_198 = local_198 - 1) {
      *(undefined4 *)((long)local_188 + local_198 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9fff8 to 00c9fffb has its CatchHandler @ 00ca00d0 */
    UnalignedDeallocate(local_188);
    if (uStack_140 <= local_148) {
      local_148 = uStack_140;
    }
    local_178[0] = &PTR__EC2NPoint_010026a8;
    for (; local_148 != 0; local_148 = local_148 - 1) {
      *(undefined4 *)((long)local_138 + local_148 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca0034 to 00ca0037 has its CatchHandler @ 00ca00cc */
    UnalignedDeallocate(local_138);
    if (uStack_160 <= local_168) {
      local_168 = uStack_160;
    }
    for (; local_168 != 0; local_168 = local_168 - 1) {
      *(undefined4 *)((long)local_158 + local_168 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca0060 to 00ca0063 has its CatchHandler @ 00ca00c8 */
    UnalignedDeallocate(local_158);
    EC2N::~EC2N((EC2N *)&local_128);
    BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)&local_80);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


