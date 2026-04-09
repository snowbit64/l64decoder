// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakePublicKey
// Entry Point: 00caa9c4
// Size: 424 bytes
// Signature: undefined __thiscall MakePublicKey(DL_PrivateKey_ECGDSA<CryptoPP::ECP> * this, DL_PublicKey_ECGDSA * param_1)


/* CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::MakePublicKey(CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>&)
   const */

void __thiscall
CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::MakePublicKey
          (DL_PrivateKey_ECGDSA<CryptoPP::ECP> *this,DL_PublicKey_ECGDSA *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  Integer *this_00;
  Integer *pIVar4;
  undefined **local_d8;
  undefined **local_d0;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined **local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)(**(code **)(*(long *)this + 0x10))();
  plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
  plVar3 = (long *)((long)plVar3 + *(long *)(*plVar3 + -0x70));
  (**(code **)(*plVar3 + 0x18))(plVar3,(long)plVar2 + *(long *)(*plVar2 + -0x70));
  this_00 = (Integer *)(**(code **)(*(long *)this + 0x20))(this);
  pIVar4 = (Integer *)(**(code **)(*plVar2 + 0xa0))(plVar2);
  Integer::InverseMod(this_00,pIVar4);
                    /* try { // try from 00caaa6c to 00caaa7b has its CatchHandler @ 00caab88 */
  (**(code **)(*plVar2 + 0x78))(&local_d8,plVar2,local_68);
                    /* try { // try from 00caaa84 to 00caaa8f has its CatchHandler @ 00caab78 */
  (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_d8);
  local_d8 = &PTR__ECPPoint_00fe9fd8;
  local_a0 = &PTR__Integer_0100c890;
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00caaad8 to 00caaadb has its CatchHandler @ 00caab74 */
  UnalignedDeallocate(local_80);
  local_d0 = &PTR__Integer_0100c890;
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00caab0c to 00caab0f has its CatchHandler @ 00caab70 */
  UnalignedDeallocate(local_b0);
  local_68[0] = &PTR__Integer_0100c890;
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00caab40 to 00caab43 has its CatchHandler @ 00caab6c */
  UnalignedDeallocate(local_48);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


