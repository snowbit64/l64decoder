// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFieldValue
// Entry Point: 00c30524
// Size: 224 bytes
// Signature: undefined __thiscall getFieldValue(IR_HllConvertUtil * this, ConversionContext * param_1, vector * param_2, uint param_3, IR_Type * param_4)


/* IR_HllConvertUtil::getFieldValue(IR_HllConvertUtil::ConversionContext&,
   std::__ndk1::vector<IR_HllConvertUtil::RegContents,
   std::__ndk1::allocator<IR_HllConvertUtil::RegContents> > const&, unsigned int, IR_Type*) */

void __thiscall
IR_HllConvertUtil::getFieldValue
          (IR_HllConvertUtil *this,ConversionContext *param_1,vector *param_2,uint param_3,
          IR_Type *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  size_t __n;
  ulong *in_x8;
  undefined *__dest;
  ulong uVar4;
  
  if ((int)param_2 < 0) {
    getConstantExpression
              (this,(ConversionContext *)((ulong)param_2 & 0xffffffff),param_3,
               (IR_Type *)(ulong)param_3);
    return;
  }
  pbVar1 = (byte *)(*(long *)param_1 + ((ulong)param_2 & 0xffffffff) * 0x20);
  pbVar2 = *(byte **)(pbVar1 + 0x10);
  bVar3 = (*pbVar1 & 1) != 0;
  uVar4 = (ulong)(*pbVar1 >> 1);
  if (bVar3) {
    uVar4 = *(ulong *)(pbVar1 + 8);
  }
  if (!bVar3) {
    pbVar2 = pbVar1 + 1;
  }
  pbVar1 = (byte *)"<<ERROR>>";
  if (uVar4 != 0) {
    pbVar1 = pbVar2;
  }
  __n = strlen((char *)pbVar1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00c305e8;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar4);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar4 | 1;
  }
  memcpy(__dest,pbVar1,__n);
LAB_00c305e8:
  __dest[__n] = 0;
  return;
}


