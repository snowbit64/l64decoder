// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HashVerificationFilter
// Entry Point: 00cda674
// Size: 324 bytes
// Signature: undefined __thiscall HashVerificationFilter(HashVerificationFilter * this, HashTransformation * param_1, BufferedTransformation * param_2, uint param_3, int param_4)


/* CryptoPP::HashVerificationFilter::HashVerificationFilter(CryptoPP::HashTransformation&,
   CryptoPP::BufferedTransformation*, unsigned int, int) */

void __thiscall
CryptoPP::HashVerificationFilter::HashVerificationFilter
          (HashVerificationFilter *this,HashTransformation *param_1,BufferedTransformation *param_2,
          uint param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  undefined uVar3;
  long lVar4;
  uint local_64;
  undefined **local_60;
  long *local_58;
  undefined local_50;
  long local_48;
  
  uVar3 = (undefined)param_3;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = param_3;
  Algorithm::Algorithm((Algorithm *)this,false);
  *(BufferedTransformation **)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x48] = (HashVerificationFilter)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
  *(HashTransformation **)(this + 0x90) = param_1;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined ***)this = &PTR__HashVerificationFilter_01006a28;
  *(undefined ***)(this + 8) = &PTR__HashVerificationFilter_01006c38;
  this[0xa0] = (HashVerificationFilter)0x0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb0) = 0xffffffffffffffff;
                    /* try { // try from 00cda700 to 00cda717 has its CatchHandler @ 00cda7bc */
  MakeParameters<unsigned_int>
            ((CryptoPP *)"HashVerificationFilterFlags",(char *)&local_64,(uint *)0x1,(bool)uVar3);
                    /* try { // try from 00cda71c to 00cda767 has its CatchHandler @ 00cda7c4 */
  plVar2 = (long *)operator_new(0x28);
  *(undefined *)(plVar2 + 2) = local_50;
  *(undefined *)((long)plVar2 + 0x11) = 0;
  lVar4 = *(long *)this;
  *(int *)(plVar2 + 4) = param_4;
  plVar2[3] = (long)local_58;
  *plVar2 = (long)&PTR__AlgorithmParametersBase_00ff0ef0;
  plVar2[1] = (long)"TruncatedDigestSize";
  local_58 = plVar2;
  (**(code **)(lVar4 + 0x58))(this,&local_60);
  local_60 = &PTR__AlgorithmParameters_00feeb08;
  if (local_58 != (long *)0x0) {
                    /* try { // try from 00cda788 to 00cda78b has its CatchHandler @ 00cda7b8 */
    (**(code **)(*local_58 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


