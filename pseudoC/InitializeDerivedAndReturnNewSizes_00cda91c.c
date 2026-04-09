// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InitializeDerivedAndReturnNewSizes
// Entry Point: 00cda91c
// Size: 268 bytes
// Signature: undefined __thiscall InitializeDerivedAndReturnNewSizes(HashVerificationFilter * this, NameValuePairs * param_1, ulong * param_2, ulong * param_3, ulong * param_4)


/* CryptoPP::HashVerificationFilter::InitializeDerivedAndReturnNewSizes(CryptoPP::NameValuePairs
   const&, unsigned long&, unsigned long&, unsigned long&) */

void __thiscall
CryptoPP::HashVerificationFilter::InitializeDerivedAndReturnNewSizes
          (HashVerificationFilter *this,NameValuePairs *param_1,ulong *param_2,ulong *param_3,
          ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = (**(code **)(*(long *)param_1 + 0x10))
                    (param_1,"HashVerificationFilterFlags",&unsigned_int::typeinfo,&local_4c);
  uVar1 = local_4c;
  if ((uVar4 & 1) == 0) {
    uVar1 = 9;
  }
  *(uint *)(this + 0x98) = uVar1;
  uVar4 = (**(code **)(*(long *)param_1 + 0x10))
                    (param_1,"TruncatedDigestSize",&int::typeinfo,&local_4c);
  if (((uVar4 & 1) == 0) || ((int)local_4c < 0)) {
    local_4c = (**(code **)(**(long **)(this + 0x90) + 0x48))();
  }
  uVar2 = *(uint *)(this + 0x98);
  *(uint *)(this + 0x9c) = local_4c;
  this[0xa0] = (HashVerificationFilter)0x0;
  *param_2 = (ulong)(-(uVar2 & 1) & local_4c);
  *param_3 = 1;
  uVar1 = *(uint *)(this + 0x9c);
  if ((uVar2 & 1) != 0) {
    uVar1 = 0;
  }
  *param_4 = (ulong)uVar1;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


