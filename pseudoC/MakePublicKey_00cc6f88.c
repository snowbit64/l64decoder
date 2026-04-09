// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakePublicKey
// Entry Point: 00cc6f88
// Size: 336 bytes
// Signature: undefined __thiscall MakePublicKey(DL_PrivateKey<CryptoPP::EC2NPoint> * this, DL_PublicKey * param_1)


/* CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>::MakePublicKey(CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>&)
   const */

void __thiscall
CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>::MakePublicKey
          (DL_PrivateKey<CryptoPP::EC2NPoint> *this,DL_PublicKey *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
  plVar2 = (long *)((long)plVar2 + *(long *)(*plVar2 + -0x70));
  plVar3 = (long *)(**(code **)(*(long *)this + 0x10))(this);
  (**(code **)(*plVar2 + 0x18))(plVar2,(long)plVar3 + *(long *)(*plVar3 + -0x70));
  plVar2 = (long *)(**(code **)(*(long *)this + 0x10))(this);
  uVar4 = (**(code **)(*(long *)this + 0x20))(this);
  (**(code **)(*plVar2 + 0x78))(local_88,plVar2,uVar4);
                    /* try { // try from 00cc703c to 00cc7047 has its CatchHandler @ 00cc70e0 */
  (**(code **)(*(long *)param_1 + 0x28))(param_1,local_88);
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_88[0] = &PTR__EC2NPoint_010026a8;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc7080 to 00cc7083 has its CatchHandler @ 00cc70dc */
  UnalignedDeallocate(local_48);
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc70ac to 00cc70af has its CatchHandler @ 00cc70d8 */
  UnalignedDeallocate(local_68);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


