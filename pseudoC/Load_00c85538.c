// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Load
// Entry Point: 00c85538
// Size: 532 bytes
// Signature: undefined __thiscall Load(DL_FixedBasePrecomputationImpl<CryptoPP::Integer> * this, DL_GroupPrecomputation * param_1, BufferedTransformation * param_2)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::Load(CryptoPP::DL_GroupPrecomputation<CryptoPP::Integer>
   const&, CryptoPP::BufferedTransformation&) */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::Load
          (DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *this,DL_GroupPrecomputation *param_1,
          BufferedTransformation *param_2)

{
  undefined8 *puVar1;
  Integer *this_00;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *this_01;
  undefined8 *puVar5;
  uint uStack_c4;
  undefined **local_c0 [2];
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined **local_90;
  undefined **ppuStack_88;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  BERGeneralDecoder::BERGeneralDecoder((BERGeneralDecoder *)&local_90,param_2,'0');
  local_90 = &PTR__BERGeneralDecoder_01000a70;
  ppuStack_88 = &PTR__BERSequenceDecoder_01000c08;
                    /* try { // try from 00c8558c to 00c855bb has its CatchHandler @ 00c85758 */
  BERDecodeUnsigned<unsigned_int>((BufferedTransformation *)&local_90,&uStack_c4,'\x02',1,1);
  Integer::BERDecode((Integer *)(this + 0x40),(BufferedTransformation *)&local_90);
  iVar3 = Integer::BitCount();
  this_01 = (long *)(this + 0x70);
  puVar1 = (undefined8 *)*this_01;
  puVar5 = *(undefined8 **)(this + 0x78);
  *(int *)(this + 0x38) = iVar3 + -1;
  while (puVar5 != puVar1) {
    puVar5 = puVar5 + -6;
    (**(code **)*puVar5)(puVar5);
  }
  *(undefined8 **)(this + 0x78) = puVar1;
                    /* try { // try from 00c85610 to 00c85617 has its CatchHandler @ 00c85780 */
  while (uVar4 = BERGeneralDecoder::EndReached(), (uVar4 & 1) == 0) {
                    /* try { // try from 00c85624 to 00c85633 has its CatchHandler @ 00c85778 */
    (**(code **)(*(long *)param_1 + 0x30))(local_c0,param_1,&local_90);
    this_00 = *(Integer **)(this + 0x78);
    if (this_00 < *(Integer **)(this + 0x80)) {
                    /* try { // try from 00c85640 to 00c8564b has its CatchHandler @ 00c85764 */
      Integer::Integer(this_00,(Integer *)local_c0);
      *(Integer **)(this + 0x78) = this_00 + 0x30;
    }
    else {
                    /* try { // try from 00c85658 to 00c85663 has its CatchHandler @ 00c8575c */
      std::__ndk1::vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>>::
      __push_back_slow_path<CryptoPP::Integer>
                ((vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> *)this_01,
                 (Integer *)local_c0);
    }
    uVar4 = local_b0;
    if (uStack_a8 <= local_b0) {
      uVar4 = uStack_a8;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_a0 + uVar4 * 4 + -4) = 0;
    }
    local_c0[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00c8560c to 00c8560f has its CatchHandler @ 00c8577c */
    UnalignedDeallocate(local_a0);
  }
                    /* try { // try from 00c856a8 to 00c856af has its CatchHandler @ 00c85758 */
  if ((*(long *)(this + 0x70) != *(long *)(this + 0x78)) &&
     (uVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1), (uVar4 & 1) != 0)) {
                    /* try { // try from 00c856c0 to 00c856cb has its CatchHandler @ 00c85754 */
    (**(code **)(*(long *)param_1 + 0x20))(local_c0,param_1,*this_01);
                    /* try { // try from 00c856d0 to 00c856d7 has its CatchHandler @ 00c85750 */
    Integer::operator=((Integer *)(this + 8),(Integer *)local_c0);
    local_c0[0] = &PTR__Integer_0100c890;
    if (uStack_a8 <= local_b0) {
      local_b0 = uStack_a8;
    }
    for (; local_b0 != 0; local_b0 = local_b0 - 1) {
      *(undefined4 *)((long)local_a0 + local_b0 * 4 + -4) = 0;
    }
                    /* try { // try from 00c85708 to 00c8570b has its CatchHandler @ 00c8574c */
    UnalignedDeallocate(local_a0);
  }
                    /* try { // try from 00c8570c to 00c85713 has its CatchHandler @ 00c85758 */
  BERGeneralDecoder::MessageEnd();
  BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)&local_90);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


