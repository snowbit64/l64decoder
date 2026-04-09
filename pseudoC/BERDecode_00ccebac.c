// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecode
// Entry Point: 00ccebac
// Size: 656 bytes
// Signature: undefined __thiscall BERDecode(X509PublicKey * this, BufferedTransformation * param_1)


/* CryptoPP::X509PublicKey::BERDecode(CryptoPP::BufferedTransformation&) */

void __thiscall
CryptoPP::X509PublicKey::BERDecode(X509PublicKey *this,BufferedTransformation *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  BERDecodeErr *this_00;
  char local_114 [4];
  undefined **local_110;
  undefined **local_108;
  void *local_100;
  undefined local_f8;
  undefined ***local_f0;
  undefined8 local_e8;
  char local_e0;
  undefined **local_d8;
  undefined **ppuStack_d0;
  undefined4 local_c4;
  undefined local_c0;
  undefined ***local_b8;
  long local_b0;
  char local_a8;
  char local_a7;
  undefined **local_a0;
  undefined **ppuStack_98;
  undefined4 local_8c;
  undefined local_88;
  BufferedTransformation *local_80;
  char local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Algorithm::Algorithm((Algorithm *)&local_a0,false);
  local_88 = 0;
  local_8c = 0xffffffff;
  local_70 = '\0';
  local_a0 = &PTR__BERGeneralDecoder_010050a8;
  ppuStack_98 = &PTR__BERGeneralDecoder_01005240;
  local_80 = param_1;
  BERGeneralDecoder::Init((BERGeneralDecoder *)&local_a0,'0');
  local_a0 = &PTR__BERGeneralDecoder_01000a70;
  ppuStack_98 = &PTR__BERSequenceDecoder_01000c08;
                    /* try { // try from 00ccec3c to 00ccec67 has its CatchHandler @ 00cceed8 */
  Algorithm::Algorithm((Algorithm *)&local_d8,false);
  local_c4 = 0xffffffff;
  local_c0 = 0;
  local_a8 = '\0';
  local_d8 = &PTR__BERGeneralDecoder_010050a8;
  ppuStack_d0 = &PTR__BERGeneralDecoder_01005240;
  local_b8 = &local_a0;
  BERGeneralDecoder::Init((BERGeneralDecoder *)&local_d8,'0');
  local_d8 = &PTR__BERGeneralDecoder_01000a70;
  ppuStack_d0 = &PTR__BERSequenceDecoder_01000c08;
                    /* try { // try from 00ccec7c to 00ccec87 has its CatchHandler @ 00cceec0 */
  (**(code **)(*(long *)this + 0x38))(&local_110,this);
                    /* try { // try from 00ccec88 to 00ccec93 has its CatchHandler @ 00ccee94 */
  OID::BERDecodeAndCheck((OID *)&local_110,(BufferedTransformation *)&local_d8);
  local_110 = &PTR__OID_00fecd98;
  if (local_108 != (undefined **)0x0) {
    local_100 = local_108;
    operator_delete(local_108);
  }
  if (local_a7 == '\0') {
    lVar3 = BufferedTransformation::PeekWord16
                      ((BufferedTransformation *)local_b8,(ushort *)&local_110,1);
    if ((lVar3 == 2) && ((short)local_110 == 0)) goto LAB_00cced00;
  }
  else if (local_b0 == 0) {
LAB_00cced00:
    uVar2 = 0;
    goto LAB_00cced04;
  }
                    /* try { // try from 00cceccc to 00cced0b has its CatchHandler @ 00cceec8 */
  uVar2 = (**(code **)(*(long *)this + 0x40))(this,&local_d8);
LAB_00cced04:
  BERGeneralDecoder::MessageEnd();
                    /* try { // try from 00cced0c to 00cced47 has its CatchHandler @ 00cceed0 */
  Algorithm::Algorithm((Algorithm *)&local_110,false);
  local_110 = &PTR__BERGeneralDecoder_010050a8;
  local_108 = &PTR__BERGeneralDecoder_01005240;
  local_f0 = &local_a0;
  local_f8 = 0;
  local_100 = (void *)CONCAT44(0xffffffff,local_100._0_4_);
  local_e0 = '\0';
  BERGeneralDecoder::Init((BERGeneralDecoder *)&local_110,'\x03');
                    /* try { // try from 00cced50 to 00cced93 has its CatchHandler @ 00cceee0 */
  lVar3 = (*(code *)local_110[0x15])(&local_110,local_114);
  if ((lVar3 == 0) || (local_114[0] != '\0')) {
    this_00 = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccee1c to 00ccee1f has its CatchHandler @ 00ccee84 */
    BERDecodeErr::BERDecodeErr(this_00);
                    /* try { // try from 00ccee20 to 00ccee37 has its CatchHandler @ 00cceee0 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
  (**(code **)(*(long *)this + 0x50))(this,&local_110,uVar2 & 1,local_e8);
  BERGeneralDecoder::MessageEnd();
  BERGeneralDecoder::MessageEnd();
  local_110 = &PTR__BERGeneralDecoder_010050a8;
  local_108 = &PTR__BERGeneralDecoder_01005240;
  if (local_e0 == '\0') {
                    /* try { // try from 00cceda8 to 00ccedaf has its CatchHandler @ 00ccee6c */
    BERGeneralDecoder::MessageEnd();
  }
  local_d8 = &PTR__BERGeneralDecoder_010050a8;
  ppuStack_d0 = &PTR__BERGeneralDecoder_01005240;
  if (local_a8 == '\0') {
                    /* try { // try from 00ccedbc to 00ccedc3 has its CatchHandler @ 00ccee54 */
    BERGeneralDecoder::MessageEnd();
  }
  local_a0 = &PTR__BERGeneralDecoder_010050a8;
  ppuStack_98 = &PTR__BERGeneralDecoder_01005240;
  if (local_70 == '\0') {
                    /* try { // try from 00ccedd8 to 00cceddf has its CatchHandler @ 00ccee3c */
    BERGeneralDecoder::MessageEnd();
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


