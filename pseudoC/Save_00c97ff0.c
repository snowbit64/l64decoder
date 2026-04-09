// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Save
// Entry Point: 00c97ff0
// Size: 336 bytes
// Signature: undefined __thiscall Save(DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> * this, DL_GroupPrecomputation * param_1, BufferedTransformation * param_2)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::Save(CryptoPP::DL_GroupPrecomputation<CryptoPP::ECPPoint>
   const&, CryptoPP::BufferedTransformation&) const */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::Save
          (DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *this,DL_GroupPrecomputation *param_1,
          BufferedTransformation *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined local_ac [4];
  undefined **local_a8;
  undefined **ppuStack_a0;
  undefined4 local_50;
  undefined local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  DERGeneralEncoder::DERGeneralEncoder((DERGeneralEncoder *)&local_a8,param_2,'0');
  local_50 = 0;
  local_4c[0] = 1;
  local_ac[0] = 2;
  local_a8 = &PTR__DERGeneralEncoder_01000c90;
  ppuStack_a0 = &PTR__DERSequenceEncoder_01000e20;
                    /* try { // try from 00c98054 to 00c980a7 has its CatchHandler @ 00c98140 */
  ByteQueue::Put2((uchar *)&local_a8,(ulong)local_ac,1,false);
  DERLengthEncode((BufferedTransformation *)&local_a8,1);
  (*(code *)local_a8[7])(&local_a8,local_4c,1,0,1);
  Integer::DEREncode((Integer *)(this + 0x80),(BufferedTransformation *)&local_a8);
  lVar2 = *(long *)(this + 0xb0);
  if (*(long *)(this + 0xb8) != lVar2) {
    uVar4 = 0;
    do {
                    /* try { // try from 00c980dc to 00c980e7 has its CatchHandler @ 00c98144 */
      (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_a8,lVar2 + uVar4 * 0x70);
      lVar2 = *(long *)(this + 0xb0);
      uVar4 = (ulong)((int)uVar4 + 1);
      uVar3 = (*(long *)(this + 0xb8) - lVar2 >> 4) * 0x6db6db6db6db6db7;
    } while (uVar4 <= uVar3 && uVar3 - uVar4 != 0);
  }
                    /* try { // try from 00c98104 to 00c9810b has its CatchHandler @ 00c98140 */
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_a8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


