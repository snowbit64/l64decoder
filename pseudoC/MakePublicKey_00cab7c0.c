// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakePublicKey
// Entry Point: 00cab7c0
// Size: 408 bytes
// Signature: undefined __thiscall MakePublicKey(DL_PrivateKey_ECGDSA<CryptoPP::EC2N> * this, DL_PublicKey_ECGDSA * param_1)


/* CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::EC2N>::MakePublicKey(CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::EC2N>&)
   const */

void __thiscall
CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::EC2N>::MakePublicKey
          (DL_PrivateKey_ECGDSA<CryptoPP::EC2N> *this,DL_PublicKey_ECGDSA *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  Integer *this_00;
  Integer *pIVar4;
  undefined **local_b8 [2];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
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
                    /* try { // try from 00cab868 to 00cab877 has its CatchHandler @ 00cab974 */
  (**(code **)(*plVar2 + 0x78))(local_b8,plVar2,local_68);
                    /* try { // try from 00cab880 to 00cab88b has its CatchHandler @ 00cab964 */
  (**(code **)(*(long *)param_1 + 0x28))(param_1,local_b8);
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  local_b8[0] = &PTR__EC2NPoint_010026a8;
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00cab8c4 to 00cab8c7 has its CatchHandler @ 00cab960 */
  UnalignedDeallocate(local_78);
  if (uStack_a0 <= local_a8) {
    local_a8 = uStack_a0;
  }
  for (; local_a8 != 0; local_a8 = local_a8 - 1) {
    *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cab8f0 to 00cab8f3 has its CatchHandler @ 00cab95c */
  UnalignedDeallocate(local_98);
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68[0] = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00cab92c to 00cab92f has its CatchHandler @ 00cab958 */
  UnalignedDeallocate(local_48);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


