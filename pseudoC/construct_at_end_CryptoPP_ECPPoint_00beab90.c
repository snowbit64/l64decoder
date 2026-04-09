// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_at_end<CryptoPP::ECPPoint*>
// Entry Point: 00beab90
// Size: 164 bytes
// Signature: type __cdecl __construct_at_end<CryptoPP::ECPPoint*>(ECPPoint * param_1, ECPPoint * param_2, ulong param_3)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<CryptoPP::ECPPoint*>::value, void>::type
   std::__ndk1::vector<CryptoPP::ECPPoint, std::__ndk1::allocator<CryptoPP::ECPPoint>
   >::__construct_at_end<CryptoPP::ECPPoint*>(CryptoPP::ECPPoint*, CryptoPP::ECPPoint*, unsigned
   long) */

type std::__ndk1::vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::
     __construct_at_end<CryptoPP::ECPPoint*>(ECPPoint *param_1,ECPPoint *param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ECPPoint *pEVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 8);
  pEVar3 = param_1;
  if (param_2 != (ECPPoint *)param_3) {
    lVar5 = 0;
    do {
      puVar2 = (undefined8 *)(lVar4 + lVar5);
      *puVar2 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00beabe0 to 00beabe7 has its CatchHandler @ 00beac80 */
      CryptoPP::Integer::Integer((Integer *)(puVar2 + 1),(Integer *)(param_2 + lVar5 + 8));
                    /* try { // try from 00beabf0 to 00beabf7 has its CatchHandler @ 00beac34 */
      pEVar3 = (ECPPoint *)
               CryptoPP::Integer::Integer
                         ((Integer *)(puVar2 + 7),(Integer *)(param_2 + lVar5 + 0x38));
      lVar1 = lVar5 + 0x70;
      *(ECPPoint *)(puVar2 + 0xd) = param_2[lVar5 + 0x68];
      lVar5 = lVar1;
    } while (param_2 + lVar1 != (ECPPoint *)param_3);
    lVar4 = lVar4 + lVar1;
  }
  *(long *)(param_1 + 8) = lVar4;
  return (type)pEVar3;
}


