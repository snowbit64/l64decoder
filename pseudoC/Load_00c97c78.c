// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Load
// Entry Point: 00c97c78
// Size: 744 bytes
// Signature: undefined __thiscall Load(DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> * this, DL_GroupPrecomputation * param_1, BufferedTransformation * param_2)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::Load(CryptoPP::DL_GroupPrecomputation<CryptoPP::ECPPoint>
   const&, CryptoPP::BufferedTransformation&) */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::Load
          (DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *this,DL_GroupPrecomputation *param_1,
          BufferedTransformation *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *this_00;
  undefined8 *puVar5;
  uint uStack_11c;
  undefined **local_118;
  undefined **local_110 [2];
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  undefined **local_e0 [2];
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> local_b0;
  undefined **local_a8;
  undefined **ppuStack_a0;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  BERGeneralDecoder::BERGeneralDecoder((BERGeneralDecoder *)&local_a8,param_2,'0');
  local_a8 = &PTR__BERGeneralDecoder_01000a70;
  ppuStack_a0 = &PTR__BERSequenceDecoder_01000c08;
                    /* try { // try from 00c97cd4 to 00c97d03 has its CatchHandler @ 00c97f70 */
  BERDecodeUnsigned<unsigned_int>((BufferedTransformation *)&local_a8,&uStack_11c,'\x02',1,1);
  Integer::BERDecode((Integer *)(this + 0x80),(BufferedTransformation *)&local_a8);
  iVar3 = Integer::BitCount();
  this_00 = (long *)(this + 0xb0);
  puVar1 = (undefined8 *)*this_00;
  puVar5 = *(undefined8 **)(this + 0xb8);
  *(int *)(this + 0x78) = iVar3 + -1;
  while (puVar5 != puVar1) {
    puVar5 = puVar5 + -0xe;
    (**(code **)*puVar5)(puVar5);
  }
  *(undefined8 **)(this + 0xb8) = puVar1;
                    /* try { // try from 00c97d70 to 00c97d77 has its CatchHandler @ 00c97fdc */
  while (uVar4 = BERGeneralDecoder::EndReached(), (uVar4 & 1) == 0) {
                    /* try { // try from 00c97d84 to 00c97d93 has its CatchHandler @ 00c97fd8 */
    (**(code **)(*(long *)param_1 + 0x30))(&local_118,param_1,&local_a8);
    puVar1 = *(undefined8 **)(this + 0xb8);
    if (puVar1 < *(undefined8 **)(this + 0xc0)) {
      *puVar1 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00c97da8 to 00c97daf has its CatchHandler @ 00c97f74 */
      Integer::Integer((Integer *)(puVar1 + 1),(Integer *)local_110);
                    /* try { // try from 00c97db4 to 00c97dbb has its CatchHandler @ 00c97f84 */
      Integer::Integer((Integer *)(puVar1 + 7),(Integer *)local_e0);
      *(DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(puVar1 + 0xd) = local_b0;
      *(undefined8 **)(this + 0xb8) = puVar1 + 0xe;
    }
    else {
                    /* try { // try from 00c97dd0 to 00c97ddb has its CatchHandler @ 00c97f7c */
      std::__ndk1::vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::
      __push_back_slow_path<CryptoPP::ECPPoint>
                ((vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *)this_00,
                 (ECPPoint *)&local_118);
    }
    local_118 = &PTR__ECPPoint_00fe9fd8;
    uVar4 = local_d0;
    if (uStack_c8 <= local_d0) {
      uVar4 = uStack_c8;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_c0 + uVar4 * 4 + -4) = 0;
    }
    local_e0[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00c97e10 to 00c97e13 has its CatchHandler @ 00c97fd0 */
    UnalignedDeallocate(local_c0);
    local_110[0] = &PTR__Integer_0100c890;
    uVar4 = local_100;
    if (uStack_f8 <= local_100) {
      uVar4 = uStack_f8;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_f0 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00c97d6c to 00c97d6f has its CatchHandler @ 00c97fd4 */
    UnalignedDeallocate(local_f0);
  }
                    /* try { // try from 00c97e5c to 00c97e63 has its CatchHandler @ 00c97f70 */
  if ((*(long *)(this + 0xb0) != *(long *)(this + 0xb8)) &&
     (uVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1), (uVar4 & 1) != 0)) {
                    /* try { // try from 00c97e74 to 00c97e83 has its CatchHandler @ 00c97f68 */
    (**(code **)(*(long *)param_1 + 0x20))(&local_118,param_1,*this_00);
                    /* try { // try from 00c97e8c to 00c97e9f has its CatchHandler @ 00c97f6c */
    Integer::operator=((Integer *)(this + 0x10),(Integer *)local_110);
    Integer::operator=((Integer *)(this + 0x40),(Integer *)local_e0);
    local_118 = &PTR__ECPPoint_00fe9fd8;
    local_e0[0] = &PTR__Integer_0100c890;
    this[0x70] = local_b0;
    if (uStack_c8 <= local_d0) {
      local_d0 = uStack_c8;
    }
    for (; local_d0 != 0; local_d0 = local_d0 - 1) {
      *(undefined4 *)((long)local_c0 + local_d0 * 4 + -4) = 0;
    }
                    /* try { // try from 00c97ee0 to 00c97ee3 has its CatchHandler @ 00c97f64 */
    UnalignedDeallocate(local_c0);
    local_110[0] = &PTR__Integer_0100c890;
    if (uStack_f8 <= local_100) {
      local_100 = uStack_f8;
    }
    for (; local_100 != 0; local_100 = local_100 - 1) {
      *(undefined4 *)((long)local_f0 + local_100 * 4 + -4) = 0;
    }
                    /* try { // try from 00c97f14 to 00c97f17 has its CatchHandler @ 00c97f60 */
    UnalignedDeallocate(local_f0);
  }
                    /* try { // try from 00c97f18 to 00c97f1f has its CatchHandler @ 00c97f70 */
  BERGeneralDecoder::MessageEnd();
  BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)&local_a8);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


