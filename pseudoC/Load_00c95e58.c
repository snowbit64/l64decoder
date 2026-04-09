// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Load
// Entry Point: 00c95e58
// Size: 696 bytes
// Signature: undefined __thiscall Load(DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> * this, DL_GroupPrecomputation * param_1, BufferedTransformation * param_2)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::Load(CryptoPP::DL_GroupPrecomputation<CryptoPP::EC2NPoint>
   const&, CryptoPP::BufferedTransformation&) */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::Load
          (DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *this,DL_GroupPrecomputation *param_1
          ,BufferedTransformation *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *this_00;
  undefined8 *puVar5;
  uint uStack_f4;
  undefined **local_f0;
  PolynomialMod2 aPStack_e8 [8];
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  PolynomialMod2 aPStack_c8 [8];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> local_a8;
  undefined **local_a0;
  undefined **ppuStack_98;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  BERGeneralDecoder::BERGeneralDecoder((BERGeneralDecoder *)&local_a0,param_2,'0');
  local_a0 = &PTR__BERGeneralDecoder_01000a70;
  ppuStack_98 = &PTR__BERSequenceDecoder_01000c08;
                    /* try { // try from 00c95eb0 to 00c95edf has its CatchHandler @ 00c96120 */
  BERDecodeUnsigned<unsigned_int>((BufferedTransformation *)&local_a0,&uStack_f4,'\x02',1,1);
  Integer::BERDecode((Integer *)(this + 0x60),(BufferedTransformation *)&local_a0);
  iVar3 = Integer::BitCount();
  this_00 = (long *)(this + 0x90);
  puVar1 = (undefined8 *)*this_00;
  puVar5 = *(undefined8 **)(this + 0x98);
  *(int *)(this + 0x58) = iVar3 + -1;
  while (puVar5 != puVar1) {
    puVar5 = puVar5 + -10;
    (**(code **)*puVar5)(puVar5);
  }
  *(undefined8 **)(this + 0x98) = puVar1;
                    /* try { // try from 00c95f40 to 00c95f47 has its CatchHandler @ 00c96184 */
  while (uVar4 = BERGeneralDecoder::EndReached(), (uVar4 & 1) == 0) {
                    /* try { // try from 00c95f54 to 00c95f63 has its CatchHandler @ 00c96180 */
    (**(code **)(*(long *)param_1 + 0x30))(&local_f0,param_1,&local_a0);
    puVar1 = *(undefined8 **)(this + 0x98);
    if (puVar1 < *(undefined8 **)(this + 0xa0)) {
      *puVar1 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00c95f78 to 00c95f7f has its CatchHandler @ 00c96124 */
      PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(puVar1 + 1),aPStack_e8);
                    /* try { // try from 00c95f84 to 00c95f8b has its CatchHandler @ 00c96134 */
      PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(puVar1 + 5),aPStack_c8);
      *(DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)(puVar1 + 9) = local_a8;
      *(undefined8 **)(this + 0x98) = puVar1 + 10;
    }
    else {
                    /* try { // try from 00c95fa0 to 00c95fab has its CatchHandler @ 00c9612c */
      std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>::
      __push_back_slow_path<CryptoPP::EC2NPoint>
                ((vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *)this_00,
                 (EC2NPoint *)&local_f0);
    }
    local_f0 = &PTR__EC2NPoint_010026a8;
    uVar4 = local_c0;
    if (uStack_b8 <= local_c0) {
      uVar4 = uStack_b8;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_b0 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00c95fdc to 00c95fdf has its CatchHandler @ 00c96178 */
    UnalignedDeallocate(local_b0);
    uVar4 = local_e0;
    if (uStack_d8 <= local_e0) {
      uVar4 = uStack_d8;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_d0 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00c95f3c to 00c95f3f has its CatchHandler @ 00c9617c */
    UnalignedDeallocate(local_d0);
  }
                    /* try { // try from 00c96020 to 00c96027 has its CatchHandler @ 00c96120 */
  if ((*(long *)(this + 0x90) != *(long *)(this + 0x98)) &&
     (uVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1), (uVar4 & 1) != 0)) {
                    /* try { // try from 00c96038 to 00c96047 has its CatchHandler @ 00c96118 */
    (**(code **)(*(long *)param_1 + 0x20))(&local_f0,param_1,*this_00);
                    /* try { // try from 00c96050 to 00c96063 has its CatchHandler @ 00c9611c */
    PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x10),aPStack_e8);
    PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x30),aPStack_c8);
    local_f0 = &PTR__EC2NPoint_010026a8;
    this[0x50] = local_a8;
    if (uStack_b8 <= local_c0) {
      local_c0 = uStack_b8;
    }
    for (; local_c0 != 0; local_c0 = local_c0 - 1) {
      *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9609c to 00c9609f has its CatchHandler @ 00c96114 */
    UnalignedDeallocate(local_b0);
    if (uStack_d8 <= local_e0) {
      local_e0 = uStack_d8;
    }
    for (; local_e0 != 0; local_e0 = local_e0 - 1) {
      *(undefined4 *)((long)local_d0 + local_e0 * 4 + -4) = 0;
    }
                    /* try { // try from 00c960c8 to 00c960cb has its CatchHandler @ 00c96110 */
    UnalignedDeallocate(local_d0);
  }
                    /* try { // try from 00c960cc to 00c960d3 has its CatchHandler @ 00c96120 */
  BERGeneralDecoder::MessageEnd();
  BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)&local_a0);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


