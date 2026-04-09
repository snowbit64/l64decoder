// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AgreeWithStaticPrivateKey
// Entry Point: 00cc209c
// Size: 628 bytes
// Signature: undefined __cdecl AgreeWithStaticPrivateKey(DL_GroupParameters * param_1, Integer * param_2, bool param_3, Integer * param_4)


/* CryptoPP::DL_KeyAgreementAlgorithm_DH<CryptoPP::Integer,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 0>
   >::AgreeWithStaticPrivateKey(CryptoPP::DL_GroupParameters<CryptoPP::Integer> const&,
   CryptoPP::Integer const&, bool, CryptoPP::Integer const&) const */

void CryptoPP::
     DL_KeyAgreementAlgorithm_DH<CryptoPP::Integer,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,0>>
     ::AgreeWithStaticPrivateKey
               (DL_GroupParameters *param_1,Integer *param_2,bool param_3,Integer *param_4)

{
  long lVar1;
  ulong uVar2;
  Integer *pIVar3;
  DL_BadElement *pDVar4;
  Integer *in_x4;
  Integer *in_x8;
  undefined **local_118 [2];
  ulong local_108;
  ulong uStack_100;
  void *local_f8;
  undefined **local_e8 [2];
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined **local_b8 [2];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((ulong)param_4 & 1) != 0) {
    uVar2 = (**(code **)(*(long *)param_2 + 0xf0))(param_2);
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 00cc2134 to 00cc214b has its CatchHandler @ 00cc2354 */
      pIVar3 = (Integer *)(**(code **)(*(long *)param_2 + 0xa0))(param_2);
      Integer::Integer((Integer *)local_b8,pIVar3);
                    /* try { // try from 00cc2150 to 00cc215b has its CatchHandler @ 00cc2344 */
      Integer::Integer((Integer *)local_88,in_x4);
                    /* try { // try from 00cc215c to 00cc2167 has its CatchHandler @ 00cc233c */
      Integer::Integer((Integer *)local_118);
                    /* try { // try from 00cc216c to 00cc2173 has its CatchHandler @ 00cc2334 */
      Integer::Integer((Integer *)local_e8);
                    /* try { // try from 00cc217c to 00cc21b7 has its CatchHandler @ 00cc2358 */
      (**(code **)(*(long *)param_2 + 0x100))(param_2,local_118,param_3,local_b8,2);
      uVar2 = (**(code **)(*(long *)param_2 + 0xf8))(param_2,local_118);
      if ((uVar2 & 1) == 0) {
        pDVar4 = (DL_BadElement *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cc22f0 to 00cc22f3 has its CatchHandler @ 00cc2310 */
        DL_BadElement::DL_BadElement(pDVar4);
                    /* try { // try from 00cc22f4 to 00cc230b has its CatchHandler @ 00cc2358 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pDVar4,&DL_BadElement::typeinfo,Exception::~Exception);
      }
      Integer::Integer(in_x8,(Integer *)local_e8);
      if (uStack_d0 <= local_d8) {
        local_d8 = uStack_d0;
      }
      local_e8[0] = &PTR__Integer_0100c890;
      for (; local_d8 != 0; local_d8 = local_d8 - 1) {
        *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cc21f0 to 00cc2227 has its CatchHandler @ 00cc2350 */
      UnalignedDeallocate(local_c8);
      local_118[0] = &PTR__Integer_0100c890;
      if (uStack_100 <= local_108) {
        local_108 = uStack_100;
      }
      for (; local_108 != 0; local_108 = local_108 - 1) {
        *(undefined4 *)((long)local_f8 + local_108 * 4 + -4) = 0;
      }
      UnalignedDeallocate(local_f8);
      local_88[0] = &PTR__Integer_0100c890;
      if (uStack_70 <= local_78) {
        local_78 = uStack_70;
      }
      for (; local_78 != 0; local_78 = local_78 - 1) {
        *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
      }
                    /* try { // try from 00cc2258 to 00cc228f has its CatchHandler @ 00cc234c */
      UnalignedDeallocate(local_68);
      local_b8[0] = &PTR__Integer_0100c890;
      if (uStack_a0 <= local_a8) {
        local_a8 = uStack_a0;
      }
      for (; local_a8 != 0; local_a8 = local_a8 - 1) {
        *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
      }
      UnalignedDeallocate(local_98);
      goto LAB_00cc2290;
    }
    uVar2 = (**(code **)(*(long *)param_2 + 0xe8))(param_2,2,param_3,0);
    if ((uVar2 & 1) == 0) {
      pDVar4 = (DL_BadElement *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cc22c8 to 00cc22cb has its CatchHandler @ 00cc2320 */
      DL_BadElement::DL_BadElement(pDVar4);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pDVar4,&DL_BadElement::typeinfo,Exception::~Exception);
    }
  }
  (**(code **)(*(long *)param_2 + 0x80))(param_2,param_3);
LAB_00cc2290:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


