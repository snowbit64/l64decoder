// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakePublicKey
// Entry Point: 00cc60b0
// Size: 360 bytes
// Signature: undefined __thiscall MakePublicKey(DL_PrivateKey<CryptoPP::ECPPoint> * this, DL_PublicKey * param_1)


/* CryptoPP::DL_PrivateKey<CryptoPP::ECPPoint>::MakePublicKey(CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>&)
   const */

void __thiscall
CryptoPP::DL_PrivateKey<CryptoPP::ECPPoint>::MakePublicKey
          (DL_PrivateKey<CryptoPP::ECPPoint> *this,DL_PublicKey *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined **local_a8;
  undefined **local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined **local_70;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
  plVar2 = (long *)((long)plVar2 + *(long *)(*plVar2 + -0x70));
  plVar3 = (long *)(**(code **)(*(long *)this + 0x10))(this);
  (**(code **)(*plVar2 + 0x18))(plVar2,(long)plVar3 + *(long *)(*plVar3 + -0x70));
  plVar2 = (long *)(**(code **)(*(long *)this + 0x10))(this);
  uVar4 = (**(code **)(*(long *)this + 0x20))(this);
  (**(code **)(*plVar2 + 0x78))(&local_a8,plVar2,uVar4);
                    /* try { // try from 00cc6164 to 00cc616f has its CatchHandler @ 00cc6220 */
  (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_a8);
  local_a8 = &PTR__ECPPoint_00fe9fd8;
  local_70 = &PTR__Integer_0100c890;
  if (uStack_58 <= local_60) {
    local_60 = uStack_58;
  }
  for (; local_60 != 0; local_60 = local_60 - 1) {
    *(undefined4 *)((long)local_50 + local_60 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc61b8 to 00cc61bb has its CatchHandler @ 00cc621c */
  UnalignedDeallocate(local_50);
  local_a0 = &PTR__Integer_0100c890;
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc61ec to 00cc61ef has its CatchHandler @ 00cc6218 */
  UnalignedDeallocate(local_80);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


