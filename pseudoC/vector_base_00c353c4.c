// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00c353c4
// Size: 128 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<IR_HllConvertUtil::RegContents,std::__ndk1::allocator<IR_HllConvertUtil::RegContents>> * this)


/* std::__ndk1::__vector_base<IR_HllConvertUtil::RegContents,
   std::__ndk1::allocator<IR_HllConvertUtil::RegContents> >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<IR_HllConvertUtil::RegContents,std::__ndk1::allocator<IR_HllConvertUtil::RegContents>>
::~__vector_base(__vector_base<IR_HllConvertUtil::RegContents,std::__ndk1::allocator<IR_HllConvertUtil::RegContents>>
                 *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)this;
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar1 = *(byte **)(this + 8);
  pbVar3 = pbVar2;
  if (pbVar1 != pbVar2) {
    do {
      pbVar3 = pbVar1 + -0x20;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -0x10));
      }
      pbVar1 = pbVar3;
    } while (pbVar3 != pbVar2);
    pbVar3 = *(byte **)this;
  }
  *(byte **)(this + 8) = pbVar2;
  operator_delete(pbVar3);
  return;
}


