// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InitializeDerivedAndReturnNewSizes
// Entry Point: 00cdb7a4
// Size: 408 bytes
// Signature: undefined __thiscall InitializeDerivedAndReturnNewSizes(AuthenticatedDecryptionFilter * this, NameValuePairs * param_1, ulong * param_2, ulong * param_3, ulong * param_4)


/* CryptoPP::AuthenticatedDecryptionFilter::InitializeDerivedAndReturnNewSizes(CryptoPP::NameValuePairs
   const&, unsigned long&, unsigned long&, unsigned long&) */

void __thiscall
CryptoPP::AuthenticatedDecryptionFilter::InitializeDerivedAndReturnNewSizes
          (AuthenticatedDecryptionFilter *this,NameValuePairs *param_1,ulong *param_2,ulong *param_3
          ,ulong *param_4)

{
  long lVar1;
  undefined uVar2;
  ulong uVar3;
  long *plVar4;
  undefined **local_90;
  NameValuePairs *pNStack_88;
  undefined ***local_80;
  undefined4 local_74;
  undefined **local_70;
  long *local_68;
  long local_58;
  
  uVar2 = SUB81(&local_90,0);
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*(long *)param_1 + 0x10))
                    (param_1,"AuthenticatedDecryptionFilterFlags",&unsigned_int::typeinfo);
  if ((uVar3 & 1) == 0) {
    local_90._0_4_ = 0x10;
  }
  local_74 = local_90._0_4_;
  MakeParameters<unsigned_int>
            ((CryptoPP *)"HashVerificationFilterFlags",(char *)&local_74,(uint *)0x1,(bool)uVar2);
  plVar4 = (long *)(this + 0x90);
  *(undefined4 *)(this + 0xb8) = 0;
  local_90 = &PTR__NameValuePairs_00feeb30;
  *(undefined8 *)(this + 0xb0) = 0;
  pNStack_88 = param_1;
  local_80 = &local_70;
                    /* try { // try from 00cdb85c to 00cdb88b has its CatchHandler @ 00cdb940 */
  (**(code **)(*plVar4 + 0x58))(plVar4,&local_90);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x160))(plVar4);
  (**(code **)(*plVar4 + 0x70))(plVar4,&local_90,0xfffffffe);
  local_70 = &PTR__AlgorithmParameters_00feeb08;
  if (local_68 != (long *)0x0) {
                    /* try { // try from 00cdb8ac to 00cdb8af has its CatchHandler @ 00cdb93c */
    (**(code **)(*local_68 + 8))();
  }
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  (**(code **)(*(long *)(this + 0x158) + 0x58))(this + 0x158,param_1);
  plVar4 = (long *)(**(code **)(*(long *)(this + 0x158) + 0x160))(this + 0x158);
  (**(code **)(*plVar4 + 0x70))(plVar4,param_1,0xfffffffe);
  *param_2 = *(ulong *)(this + 0xc0);
  *param_3 = 1;
  *param_4 = *(ulong *)(this + 0xd0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


