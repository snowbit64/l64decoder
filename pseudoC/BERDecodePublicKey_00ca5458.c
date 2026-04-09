// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodePublicKey
// Entry Point: 00ca5458
// Size: 468 bytes
// Signature: undefined __thiscall BERDecodePublicKey(DL_PublicKey_EC<CryptoPP::ECP> * this, BufferedTransformation * param_1, bool param_2, ulong param_3)


/* WARNING: Removing unreachable block (ram,0x00ca55f8) */
/* CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::BERDecodePublicKey(CryptoPP::BufferedTransformation&,
   bool, unsigned long) */

void __thiscall
CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::BERDecodePublicKey
          (DL_PublicKey_EC<CryptoPP::ECP> *this,BufferedTransformation *param_1,bool param_2,
          ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined **local_c8;
  undefined **local_c0 [2];
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined **local_90 [2];
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  undefined local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_c8 = &PTR__ECPPoint_00fe9fd8;
  Integer::Integer((Integer *)local_c0);
                    /* try { // try from 00ca54b0 to 00ca54b3 has its CatchHandler @ 00ca565c */
  Integer::Integer((Integer *)local_90);
  local_60 = 1;
                    /* try { // try from 00ca54c8 to 00ca54ef has its CatchHandler @ 00ca5670 */
  uVar2 = (**(code **)(**(long **)(this + 0x38) + 0x80))
                    (*(long **)(this + 0x38),&local_c8,param_1,param_3);
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR__Exception_00fe0298;
                    /* try { // try from 00ca55d8 to 00ca55df has its CatchHandler @ 00ca562c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar3 + 2));
    *puVar3 = &PTR__Exception_00fe9ee0;
    *puVar3 = &PTR__Exception_01002700;
                    /* try { // try from 00ca5610 to 00ca5627 has its CatchHandler @ 00ca5670 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
  (**(code **)(*(long *)this + 0x28))(this,&local_c8);
  local_c8 = &PTR__ECPPoint_00fe9fd8;
  if (uStack_78 <= local_80) {
    local_80 = uStack_78;
  }
  local_90[0] = &PTR__Integer_0100c890;
  for (; local_80 != 0; local_80 = local_80 - 1) {
    *(undefined4 *)((long)local_70 + local_80 * 4 + -4) = 0;
  }
                    /* try { // try from 00ca5530 to 00ca5533 has its CatchHandler @ 00ca5658 */
  UnalignedDeallocate(local_70);
  local_c0[0] = &PTR__Integer_0100c890;
  if (uStack_a8 <= local_b0) {
    local_b0 = uStack_a8;
  }
  for (; local_b0 != 0; local_b0 = local_b0 - 1) {
    *(undefined4 *)((long)local_a0 + local_b0 * 4 + -4) = 0;
  }
                    /* try { // try from 00ca5564 to 00ca5567 has its CatchHandler @ 00ca5654 */
  UnalignedDeallocate(local_a0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


