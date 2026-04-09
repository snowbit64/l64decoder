// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecode
// Entry Point: 00c9a364
// Size: 700 bytes
// Signature: undefined __thiscall BERDecode(DL_GroupParameters_EC<CryptoPP::ECP> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::BERDecode(CryptoPP::BufferedTransformation&) */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::BERDecode
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,BufferedTransformation *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  Integer *pIVar4;
  BERDecodeErr *this_00;
  uint uStack_240;
  char local_23c [4];
  undefined **local_238 [2];
  ulong local_228;
  ulong uStack_220;
  void *local_218;
  undefined **local_208 [2];
  ulong local_1f8;
  ulong uStack_1f0;
  void *local_1e8;
  undefined **local_1d8;
  undefined **local_1d0;
  ulong local_1c0;
  ulong uStack_1b8;
  void *local_1b0;
  undefined **local_1a0;
  ulong local_190;
  ulong uStack_188;
  void *local_180;
  undefined **local_168;
  void *local_160;
  void *local_158;
  undefined8 uStack_150;
  undefined **local_80;
  undefined **ppuStack_78;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*(long *)param_1 + 0xb8))(param_1,local_23c);
  if (lVar2 == 0) {
    this_00 = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c9a600 to 00c9a603 has its CatchHandler @ 00c9a630 */
    BERDecodeErr::BERDecodeErr(this_00);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
  if (local_23c[0] == '\x06') {
    local_158 = (void *)0x0;
    uStack_150 = 0;
    local_168 = &PTR__OID_00fecd98;
    local_160 = (void *)0x0;
                    /* try { // try from 00c9a3c8 to 00c9a3d3 has its CatchHandler @ 00c9a684 */
    OID::BERDecode((OID *)&local_168,param_1);
                    /* try { // try from 00c9a3d4 to 00c9a3df has its CatchHandler @ 00c9a66c */
    Initialize(this,(OID *)&local_168);
    local_168 = &PTR__OID_00fecd98;
    if (local_160 != (void *)0x0) {
      local_158 = local_160;
      operator_delete(local_160);
    }
  }
  else {
    BERGeneralDecoder::BERGeneralDecoder((BERGeneralDecoder *)&local_80,param_1,'0');
    local_80 = &PTR__BERGeneralDecoder_01000a70;
    ppuStack_78 = &PTR__BERSequenceDecoder_01000c08;
                    /* try { // try from 00c9a420 to 00c9a437 has its CatchHandler @ 00c9a664 */
    BERDecodeUnsigned<unsigned_int>((BufferedTransformation *)&local_80,&uStack_240,'\x02',1,1);
                    /* try { // try from 00c9a438 to 00c9a443 has its CatchHandler @ 00c9a65c */
    ECP::ECP((ECP *)&local_168,(BufferedTransformation *)&local_80);
                    /* try { // try from 00c9a444 to 00c9a453 has its CatchHandler @ 00c9a654 */
    ECP::BERDecodePoint((BufferedTransformation *)&local_168);
                    /* try { // try from 00c9a454 to 00c9a45f has its CatchHandler @ 00c9a64c */
    Integer::Integer((Integer *)local_208,(BufferedTransformation *)&local_80);
                    /* try { // try from 00c9a460 to 00c9a467 has its CatchHandler @ 00c9a644 */
    Integer::Integer((Integer *)local_238);
                    /* try { // try from 00c9a468 to 00c9a4d3 has its CatchHandler @ 00c9a6a4 */
    uVar3 = BERGeneralDecoder::EndReached();
    if ((uVar3 & 1) == 0) {
      Integer::BERDecode((Integer *)local_238,(BufferedTransformation *)&local_80);
    }
    else {
      pIVar4 = (Integer *)Integer::Zero();
      Integer::operator=((Integer *)local_238,pIVar4);
    }
    BERGeneralDecoder::MessageEnd();
    EcPrecomputation<CryptoPP::ECP>::SetCurve
              ((EcPrecomputation<CryptoPP::ECP> *)(this + 0x10),(ECP *)&local_168);
    (**(code **)(*(long *)this + 0x70))(this,&local_1d8);
    Integer::operator=((Integer *)(this + 0x110),(Integer *)local_208);
    Integer::operator=((Integer *)(this + 0x140),(Integer *)local_238);
    if (uStack_220 <= local_228) {
      local_228 = uStack_220;
    }
    local_238[0] = &PTR__Integer_0100c890;
    for (; local_228 != 0; local_228 = local_228 - 1) {
      *(undefined4 *)((long)local_218 + local_228 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9a50c to 00c9a50f has its CatchHandler @ 00c9a62c */
    UnalignedDeallocate(local_218);
    local_208[0] = &PTR__Integer_0100c890;
    if (uStack_1f0 <= local_1f8) {
      local_1f8 = uStack_1f0;
    }
    for (; local_1f8 != 0; local_1f8 = local_1f8 - 1) {
      *(undefined4 *)((long)local_1e8 + local_1f8 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9a540 to 00c9a543 has its CatchHandler @ 00c9a628 */
    UnalignedDeallocate(local_1e8);
    local_1a0 = &PTR__Integer_0100c890;
    local_1d8 = &PTR__ECPPoint_00fe9fd8;
    if (uStack_188 <= local_190) {
      local_190 = uStack_188;
    }
    for (; local_190 != 0; local_190 = local_190 - 1) {
      *(undefined4 *)((long)local_180 + local_190 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9a584 to 00c9a587 has its CatchHandler @ 00c9a624 */
    UnalignedDeallocate(local_180);
    local_1d0 = &PTR__Integer_0100c890;
    if (uStack_1b8 <= local_1c0) {
      local_1c0 = uStack_1b8;
    }
    for (; local_1c0 != 0; local_1c0 = local_1c0 - 1) {
      *(undefined4 *)((long)local_1b0 + local_1c0 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9a5b8 to 00c9a5bb has its CatchHandler @ 00c9a620 */
    UnalignedDeallocate(local_1b0);
    ECP::~ECP((ECP *)&local_168);
    BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)&local_80);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


