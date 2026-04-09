// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodePublicKey
// Entry Point: 00ca5bd0
// Size: 444 bytes
// Signature: undefined __thiscall BERDecodePublicKey(DL_PublicKey_EC<CryptoPP::EC2N> * this, BufferedTransformation * param_1, bool param_2, ulong param_3)


/* WARNING: Removing unreachable block (ram,0x00ca5d58) */
/* CryptoPP::DL_PublicKey_EC<CryptoPP::EC2N>::BERDecodePublicKey(CryptoPP::BufferedTransformation&,
   bool, unsigned long) */

void __thiscall
CryptoPP::DL_PublicKey_EC<CryptoPP::EC2N>::BERDecodePublicKey
          (DL_PublicKey_EC<CryptoPP::EC2N> *this,BufferedTransformation *param_1,bool param_2,
          ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined **local_a8;
  PolynomialMod2 aPStack_a0 [8];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  PolynomialMod2 aPStack_80 [8];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  undefined local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_a8 = &PTR__EC2NPoint_010026a8;
  PolynomialMod2::PolynomialMod2(aPStack_a0);
                    /* try { // try from 00ca5c28 to 00ca5c2b has its CatchHandler @ 00ca5dbc */
  PolynomialMod2::PolynomialMod2(aPStack_80);
  local_60 = 1;
                    /* try { // try from 00ca5c40 to 00ca5c67 has its CatchHandler @ 00ca5dd0 */
  uVar2 = (**(code **)(*(long *)(this + 0x30) + 0x80))(this + 0x30,&local_a8,param_1,param_3);
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR__Exception_00fe0298;
                    /* try { // try from 00ca5d38 to 00ca5d3f has its CatchHandler @ 00ca5d8c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar3 + 2));
    *puVar3 = &PTR__Exception_00fe9ee0;
    *puVar3 = &PTR__Exception_01002700;
                    /* try { // try from 00ca5d70 to 00ca5d87 has its CatchHandler @ 00ca5dd0 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
  (**(code **)(*(long *)this + 0x28))(this,&local_a8);
  local_a8 = &PTR__EC2NPoint_010026a8;
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00ca5c98 to 00ca5c9b has its CatchHandler @ 00ca5db8 */
  UnalignedDeallocate(local_68);
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  for (; local_98 != 0; local_98 = local_98 - 1) {
    *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00ca5cc4 to 00ca5cc7 has its CatchHandler @ 00ca5db4 */
  UnalignedDeallocate(local_88);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


