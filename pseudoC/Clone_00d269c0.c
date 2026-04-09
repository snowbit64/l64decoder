// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clone
// Entry Point: 00d269c0
// Size: 132 bytes
// Signature: undefined Clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ClonableImpl<CryptoPP::SHA224, CryptoPP::AlgorithmImpl<CryptoPP::IteratedHash<unsigned
   int, CryptoPP::EnumToType<CryptoPP::ByteOrder, 1>, 64u, CryptoPP::HashTransformation>,
   CryptoPP::SHA224> >::Clone() const */

undefined8 *
CryptoPP::
ClonableImpl<CryptoPP::SHA224,CryptoPP::AlgorithmImpl<CryptoPP::IteratedHash<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,CryptoPP::HashTransformation>,CryptoPP::SHA224>>
::Clone(void)

{
  long in_x0;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  uVar2 = *(undefined8 *)(in_x0 + 8);
  *puVar1 = &PTR__IteratedHash_00fe9de8;
  puVar1[1] = uVar2;
                    /* try { // try from 00d269fc to 00d26a03 has its CatchHandler @ 00d26a88 */
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
  ::SecBlock((SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
              *)(puVar1 + 2),(SecBlock *)(in_x0 + 0x10));
  *puVar1 = &PTR__IteratedHashWithStaticTransform_01010c00;
                    /* try { // try from 00d26a1c to 00d26a1f has its CatchHandler @ 00d26a44 */
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
  ::SecBlock((SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
              *)(puVar1 + 0xe),(SecBlock *)(in_x0 + 0x70));
  *puVar1 = &PTR__IteratedHashWithStaticTransform_01010748;
  return puVar1;
}


