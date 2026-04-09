// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clone
// Entry Point: 00d26ebc
// Size: 136 bytes
// Signature: undefined Clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ClonableImpl<CryptoPP::SHA512, CryptoPP::AlgorithmImpl<CryptoPP::IteratedHash<unsigned
   long, CryptoPP::EnumToType<CryptoPP::ByteOrder, 1>, 128u, CryptoPP::HashTransformation>,
   CryptoPP::SHA512> >::Clone() const */

undefined8 *
CryptoPP::
ClonableImpl<CryptoPP::SHA512,CryptoPP::AlgorithmImpl<CryptoPP::IteratedHash<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,CryptoPP::HashTransformation>,CryptoPP::SHA512>>
::Clone(void)

{
  long in_x0;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x160);
  uVar2 = *(undefined8 *)(in_x0 + 8);
  puVar1[2] = *(undefined8 *)(in_x0 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR__IteratedHash_01000e98;
                    /* try { // try from 00d26efc to 00d26f03 has its CatchHandler @ 00d26f88 */
  SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,false>>
  ::SecBlock((SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,false>>
              *)(puVar1 + 3),(SecBlock *)(in_x0 + 0x18));
  *puVar1 = &PTR__IteratedHashWithStaticTransform_01010dc0;
                    /* try { // try from 00d26f1c to 00d26f1f has its CatchHandler @ 00d26f44 */
  SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,true>>
  ::SecBlock((SecBlock<unsigned_long,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_long,16ul,CryptoPP::NullAllocator<unsigned_long>,true>>
              *)(puVar1 + 0x17),(SecBlock *)(in_x0 + 0xb8));
  *puVar1 = &PTR__IteratedHashWithStaticTransform_01010ac0;
  return puVar1;
}


