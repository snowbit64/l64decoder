// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SignatureVerificationFilter
// Entry Point: 00cdc0c4
// Size: 256 bytes
// Signature: undefined __thiscall SignatureVerificationFilter(SignatureVerificationFilter * this, PK_Verifier * param_1, BufferedTransformation * param_2, uint param_3)


/* CryptoPP::SignatureVerificationFilter::SignatureVerificationFilter(CryptoPP::PK_Verifier const&,
   CryptoPP::BufferedTransformation*, unsigned int) */

void __thiscall
CryptoPP::SignatureVerificationFilter::SignatureVerificationFilter
          (SignatureVerificationFilter *this,PK_Verifier *param_1,BufferedTransformation *param_2,
          uint param_3)

{
  long lVar1;
  undefined uVar2;
  uint local_54;
  undefined **local_50;
  long *local_48;
  long local_38;
  
  uVar2 = (undefined)param_3;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_54 = param_3;
  Algorithm::Algorithm((Algorithm *)this,false);
  *(BufferedTransformation **)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x48] = (SignatureVerificationFilter)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
  *(PK_Verifier **)(this + 0x90) = param_1;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined ***)this = &PTR__SignatureVerificationFilter_01007138;
  *(undefined ***)(this + 8) = &PTR__SignatureVerificationFilter_01007348;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb0) = 0xffffffffffffffff;
  this[200] = (SignatureVerificationFilter)0x0;
                    /* try { // try from 00cdc14c to 00cdc163 has its CatchHandler @ 00cdc1fc */
  MakeParameters<unsigned_int>
            ((CryptoPP *)"SignatureVerificationFilterFlags",(char *)&local_54,(uint *)0x1,
             (bool)uVar2);
                    /* try { // try from 00cdc16c to 00cdc177 has its CatchHandler @ 00cdc1c8 */
  (**(code **)(*(long *)this + 0x58))(this,&local_50);
  local_50 = &PTR__AlgorithmParameters_00feeb08;
  if (local_48 != (long *)0x0) {
                    /* try { // try from 00cdc198 to 00cdc19b has its CatchHandler @ 00cdc1c4 */
    (**(code **)(*local_48 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


