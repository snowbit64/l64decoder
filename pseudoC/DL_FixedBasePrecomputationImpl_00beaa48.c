// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_FixedBasePrecomputationImpl
// Entry Point: 00beaa48
// Size: 264 bytes
// Signature: undefined __thiscall DL_FixedBasePrecomputationImpl(DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> * this, DL_FixedBasePrecomputationImpl * param_1)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::DL_FixedBasePrecomputationImpl(CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>
   const&) */

ulong __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::DL_FixedBasePrecomputationImpl
          (DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *this,
          DL_FixedBasePrecomputationImpl *param_1)

{
  undefined4 uVar1;
  type tVar2;
  void *pvVar3;
  ulong uVar4;
  
  *(undefined ***)this = &PTR__DL_FixedBasePrecomputationImpl_00ff3438;
  *(undefined ***)(this + 8) = &PTR__ECPPoint_00fe9fd8;
  Integer::Integer((Integer *)(this + 0x10),(Integer *)(param_1 + 0x10));
                    /* try { // try from 00beaaa0 to 00beaaa3 has its CatchHandler @ 00beab58 */
  Integer::Integer((Integer *)(this + 0x40),(Integer *)(param_1 + 0x40));
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  this[0x70] = *(DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x78) = uVar1;
                    /* try { // try from 00beaabc to 00beaac3 has its CatchHandler @ 00beab50 */
  Integer::Integer((Integer *)(this + 0x80),(Integer *)(param_1 + 0x80));
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  uVar4 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0);
  if (uVar4 != 0) {
    if (0x249249249249249 < (ulong)(((long)uVar4 >> 4) * 0x6db6db6db6db6db7)) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00beab0c to 00beab4f has its CatchHandler @ 00beab6c */
    pvVar3 = operator_new(uVar4);
    *(void **)(this + 0xb0) = pvVar3;
    *(void **)(this + 0xb8) = pvVar3;
    *(void **)(this + 0xc0) = (void *)((long)pvVar3 + ((long)uVar4 >> 4) * 0x10);
    tVar2 = std::__ndk1::vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::
            __construct_at_end<CryptoPP::ECPPoint*>
                      ((ECPPoint *)(this + 0xb0),*(ECPPoint **)(param_1 + 0xb0),
                       *(ulong *)(param_1 + 0xb8));
    uVar4 = (ulong)tVar2;
  }
  return uVar4;
}


