// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakePublicKey
// Entry Point: 00ccadb8
// Size: 292 bytes
// Signature: undefined __thiscall MakePublicKey(DL_PrivateKey<CryptoPP::Integer> * this, DL_PublicKey * param_1)


/* CryptoPP::DL_PrivateKey<CryptoPP::Integer>::MakePublicKey(CryptoPP::DL_PublicKey<CryptoPP::Integer>&)
   const */

void __thiscall
CryptoPP::DL_PrivateKey<CryptoPP::Integer>::MakePublicKey
          (DL_PrivateKey<CryptoPP::Integer> *this,DL_PublicKey *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined **local_68 [2];
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
  (**(code **)(*plVar2 + 0x78))(local_68,plVar2,uVar4);
                    /* try { // try from 00ccae6c to 00ccae77 has its CatchHandler @ 00ccaee0 */
  (**(code **)(*(long *)param_1 + 0x28))(param_1,local_68);
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68[0] = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00ccaeb0 to 00ccaeb3 has its CatchHandler @ 00ccaedc */
  UnalignedDeallocate(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


