// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PK_MessageAccumulatorImpl
// Entry Point: 00cc93dc
// Size: 172 bytes
// Signature: undefined PK_MessageAccumulatorImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::PK_MessageAccumulatorImpl<CryptoPP::SHA256>::PK_MessageAccumulatorImpl() */

void CryptoPP::PK_MessageAccumulatorImpl<CryptoPP::SHA256>::PK_MessageAccumulatorImpl(void)

{
  uint *puVar1;
  undefined8 *in_x0;
  
  PK_MessageAccumulatorBase::PK_MessageAccumulatorBase((PK_MessageAccumulatorBase *)in_x0);
                    /* try { // try from 00cc93f8 to 00cc9403 has its CatchHandler @ 00cc9514 */
  Algorithm::Algorithm((Algorithm *)(in_x0 + 0x1e),true);
  in_x0[0x1e] = &PTR__IteratedHashWithStaticTransform_00fe9ca8;
  in_x0[0x1f] = 0;
  in_x0[0x2a] = 0x10;
  in_x0[0x29] = 0x3fffffffffffffff;
  in_x0[0x2b] = in_x0 + 0x20;
  *(undefined *)((long)in_x0 + 0x141) = 1;
  puVar1 = (uint *)((long)(in_x0 + 0x2c) + ((ulong)(uint)-(int)(in_x0 + 0x2c) & 8));
  in_x0[0x37] = 0x10;
  in_x0[0x36] = 0x3fffffffffffffff;
  *(undefined *)((long)in_x0 + 0x1a9) = 1;
  in_x0[0x38] = puVar1;
                    /* try { // try from 00cc9450 to 00cc9457 has its CatchHandler @ 00cc9488 */
  SHA256::InitState(puVar1);
  in_x0[0x1e] = &PTR__IteratedHashWithStaticTransform_01010888;
  *in_x0 = &PTR__PK_MessageAccumulatorImpl_01004800;
  return;
}


