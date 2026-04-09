// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AuthenticatedDecryptionFilter
// Entry Point: 00cdb504
// Size: 532 bytes
// Signature: undefined __thiscall AuthenticatedDecryptionFilter(AuthenticatedDecryptionFilter * this, AuthenticatedSymmetricCipher * param_1, BufferedTransformation * param_2, uint param_3, int param_4, BlockPaddingScheme param_5)


/* CryptoPP::AuthenticatedDecryptionFilter::AuthenticatedDecryptionFilter(CryptoPP::AuthenticatedSymmetricCipher&,
   CryptoPP::BufferedTransformation*, unsigned int, int,
   CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme) */

void __thiscall
CryptoPP::AuthenticatedDecryptionFilter::AuthenticatedDecryptionFilter
          (AuthenticatedDecryptionFilter *this,AuthenticatedSymmetricCipher *param_1,
          BufferedTransformation *param_2,uint param_3,int param_4,BlockPaddingScheme param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined uVar4;
  BlockPaddingScheme local_84;
  undefined **local_80;
  long *local_78;
  undefined local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar4 = (undefined)param_5;
  local_84 = param_5;
  Algorithm::Algorithm((Algorithm *)this,false);
  *(BufferedTransformation **)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x48] = (AuthenticatedDecryptionFilter)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__AuthenticatedDecryptionFilter_01006ef8;
  *(undefined ***)(this + 8) = &PTR__AuthenticatedDecryptionFilter_01007108;
                    /* try { // try from 00cdb590 to 00cdb597 has its CatchHandler @ 00cdb74c */
  puVar2 = (undefined8 *)operator_new(0x28);
                    /* try { // try from 00cdb59c to 00cdb5a3 has its CatchHandler @ 00cdb734 */
  Algorithm::Algorithm((Algorithm *)puVar2,false);
  puVar2[3] = this;
  *(undefined *)(puVar2 + 4) = 0;
  *puVar2 = &PTR__BufferedTransformation_01008a80;
  puVar2[1] = &PTR__OutputProxy_01008c10;
                    /* try { // try from 00cdb5c8 to 00cdb5db has its CatchHandler @ 00cdb74c */
  HashVerificationFilter::HashVerificationFilter
            ((HashVerificationFilter *)(this + 0x90),(HashTransformation *)(param_1 + 8),
             (BufferedTransformation *)puVar2,9,-1);
                    /* try { // try from 00cdb5dc to 00cdb5e3 has its CatchHandler @ 00cdb744 */
  puVar2 = (undefined8 *)operator_new(0x28);
                    /* try { // try from 00cdb5e8 to 00cdb5ef has its CatchHandler @ 00cdb724 */
  Algorithm::Algorithm((Algorithm *)puVar2,false);
  puVar2[3] = this;
  *puVar2 = &PTR__BufferedTransformation_01008a80;
  puVar2[1] = &PTR__OutputProxy_01008c10;
  *(undefined *)(puVar2 + 4) = 0;
                    /* try { // try from 00cdb60c to 00cdb61f has its CatchHandler @ 00cdb744 */
  StreamTransformationFilter::StreamTransformationFilter
            ((StreamTransformationFilter *)(this + 0x158),(StreamTransformation *)(param_1 + 0x10),
             (BufferedTransformation *)puVar2,param_5,true);
                    /* try { // try from 00cdb620 to 00cdb637 has its CatchHandler @ 00cdb71c */
  MakeParameters<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme>
            ((CryptoPP *)"BlockPaddingScheme",(char *)&local_84,(BlockPaddingScheme *)0x1,
             (bool)uVar4);
                    /* try { // try from 00cdb63c to 00cdb6bf has its CatchHandler @ 00cdb754 */
  puVar2 = (undefined8 *)operator_new(0x28);
  *(undefined *)(puVar2 + 2) = local_70;
  *(undefined *)((long)puVar2 + 0x11) = 0;
  *(uint *)(puVar2 + 4) = param_3;
  puVar2[3] = local_78;
  *puVar2 = &PTR__AlgorithmParametersBase_01008d78;
  puVar2[1] = "AuthenticatedDecryptionFilterFlags";
  local_78 = puVar2;
  local_78 = (long *)operator_new(0x28);
  *(undefined *)(local_78 + 2) = local_70;
  lVar3 = *(long *)this;
  *(undefined *)((long)local_78 + 0x11) = 0;
  *(int *)(local_78 + 4) = param_4;
  local_78[3] = (long)puVar2;
  *local_78 = (long)&PTR__AlgorithmParametersBase_00ff0ef0;
  local_78[1] = (long)"TruncatedDigestSize";
  (**(code **)(lVar3 + 0x58))(this,&local_80);
  local_80 = &PTR__AlgorithmParameters_00feeb08;
  if (local_78 != (long *)0x0) {
                    /* try { // try from 00cdb6e0 to 00cdb6e3 has its CatchHandler @ 00cdb718 */
    (**(code **)(*local_78 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


