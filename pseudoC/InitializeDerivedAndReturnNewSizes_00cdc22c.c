// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InitializeDerivedAndReturnNewSizes
// Entry Point: 00cdc22c
// Size: 260 bytes
// Signature: undefined __thiscall InitializeDerivedAndReturnNewSizes(SignatureVerificationFilter * this, NameValuePairs * param_1, ulong * param_2, ulong * param_3, ulong * param_4)


/* CryptoPP::SignatureVerificationFilter::InitializeDerivedAndReturnNewSizes(CryptoPP::NameValuePairs
   const&, unsigned long&, unsigned long&, unsigned long&) */

void __thiscall
CryptoPP::SignatureVerificationFilter::InitializeDerivedAndReturnNewSizes
          (SignatureVerificationFilter *this,NameValuePairs *param_1,ulong *param_2,ulong *param_3,
          ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*(long *)param_1 + 0x10))
                    (param_1,"SignatureVerificationFilterFlags",&unsigned_int::typeinfo,&local_4c);
  if ((uVar3 & 1) == 0) {
    local_4c = 9;
  }
  lVar7 = **(long **)(this + 0x90);
  *(undefined4 *)(this + 0xa0) = local_4c;
  uVar4 = (**(code **)(lVar7 + 0x50))(*(long **)(this + 0x90));
  plVar6 = *(long **)(this + 0x98);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  *(undefined8 *)(this + 0x98) = uVar4;
  uVar5 = (**(code **)(**(long **)(this + 0x90) + 0x10))();
  this[200] = (SignatureVerificationFilter)0x0;
  uVar3 = uVar5;
  uVar2 = 0;
  if ((*(uint *)(this + 0xa0) & 1) != 0) {
    uVar3 = 0;
    uVar2 = uVar5;
  }
  *param_2 = uVar2;
  *param_3 = 1;
  *param_4 = uVar3;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


