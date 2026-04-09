// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_FixedBasePrecomputationImpl
// Entry Point: 00cb6364
// Size: 248 bytes
// Signature: undefined __thiscall DL_FixedBasePrecomputationImpl(DL_FixedBasePrecomputationImpl<CryptoPP::Integer> * this, DL_FixedBasePrecomputationImpl * param_1)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::DL_FixedBasePrecomputationImpl(CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>
   const&) */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::DL_FixedBasePrecomputationImpl
          (DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *this,
          DL_FixedBasePrecomputationImpl *param_1)

{
  Integer *pIVar1;
  Integer *pIVar2;
  ulong uVar3;
  Integer *this_00;
  
  *(undefined ***)this = &PTR__DL_FixedBasePrecomputationImpl_00ff25e0;
  Integer::Integer((Integer *)(this + 8),(Integer *)(param_1 + 8));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
                    /* try { // try from 00cb63b4 to 00cb63bb has its CatchHandler @ 00cb645c */
  Integer::Integer((Integer *)(this + 0x40),(Integer *)(param_1 + 0x40));
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  uVar3 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70);
  if (uVar3 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar3 >> 4) * -0x5555555555555555)) {
                    /* try { // try from 00cb6454 to 00cb645b has its CatchHandler @ 00cb6464 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00cb63f8 to 00cb63fb has its CatchHandler @ 00cb6464 */
    this_00 = (Integer *)operator_new(uVar3);
    *(Integer **)(this + 0x70) = this_00;
    *(Integer **)(this + 0x78) = this_00;
    *(Integer **)(this + 0x80) = this_00 + ((long)uVar3 >> 4) * 0x10;
    pIVar2 = *(Integer **)(param_1 + 0x78);
    for (pIVar1 = *(Integer **)(param_1 + 0x70); pIVar1 != pIVar2; pIVar1 = pIVar1 + 0x30) {
                    /* try { // try from 00cb641c to 00cb6427 has its CatchHandler @ 00cb646c */
      Integer::Integer(this_00,pIVar1);
      this_00 = this_00 + 0x30;
    }
    *(Integer **)(this + 0x78) = this_00;
  }
  return;
}


