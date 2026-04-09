// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clone
// Entry Point: 00be4380
// Size: 132 bytes
// Signature: undefined Clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ClonableImpl<CryptoPP::Weak1::MD5,
   CryptoPP::AlgorithmImpl<CryptoPP::IteratedHash<unsigned int,
   CryptoPP::EnumToType<CryptoPP::ByteOrder, 0>, 64u, CryptoPP::HashTransformation>,
   CryptoPP::Weak1::MD5> >::Clone() const */

undefined8 *
CryptoPP::
ClonableImpl<CryptoPP::Weak1::MD5,CryptoPP::AlgorithmImpl<CryptoPP::IteratedHash<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,CryptoPP::HashTransformation>,CryptoPP::Weak1::MD5>>
::Clone(void)

{
  long in_x0;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  uVar2 = *(undefined8 *)(in_x0 + 8);
  *puVar1 = &PTR__IteratedHash_00fe0160;
  puVar1[1] = uVar2;
                    /* try { // try from 00be43bc to 00be43c3 has its CatchHandler @ 00be4448 */
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
  ::SecBlock((SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
              *)(puVar1 + 2),(SecBlock *)(in_x0 + 0x10));
  *puVar1 = &PTR__IteratedHashWithStaticTransform_00febd60;
                    /* try { // try from 00be43dc to 00be43df has its CatchHandler @ 00be4404 */
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
  ::SecBlock((SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
              *)(puVar1 + 0xe),(SecBlock *)(in_x0 + 0x70));
  *puVar1 = &PTR__IteratedHashWithStaticTransform_00febe88;
  return puVar1;
}


