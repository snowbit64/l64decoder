// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00af0034
// Size: 184 bytes
// Signature: undefined __thiscall vector(vector<TextLine,std::__ndk1::allocator<TextLine>> * this, vector * param_1)


/* std::__ndk1::vector<TextLine, std::__ndk1::allocator<TextLine>
   >::vector(std::__ndk1::vector<TextLine, std::__ndk1::allocator<TextLine> > const&) */

void __thiscall
std::__ndk1::vector<TextLine,std::__ndk1::allocator<TextLine>>::vector
          (vector<TextLine,std::__ndk1::allocator<TextLine>> *this,vector *param_1)

{
  TextLine *pTVar1;
  TextLine *pTVar2;
  ulong uVar3;
  TextLine *this_00;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar3 != 0) {
    if (0xbe82fa0be82fa0 < (ulong)(((long)uVar3 >> 3) * -0x7d05f417d05f417d)) {
                    /* try { // try from 00af00e4 to 00af00eb has its CatchHandler @ 00af00ec */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00af0090 to 00af0093 has its CatchHandler @ 00af00ec */
    this_00 = (TextLine *)operator_new(uVar3);
    *(TextLine **)this = this_00;
    *(TextLine **)(this + 8) = this_00;
    *(TextLine **)(this + 0x10) = this_00 + ((long)uVar3 >> 3) * 8;
    pTVar2 = *(TextLine **)(param_1 + 8);
    for (pTVar1 = *(TextLine **)param_1; pTVar1 != pTVar2; pTVar1 = pTVar1 + 0x158) {
                    /* try { // try from 00af00b4 to 00af00bf has its CatchHandler @ 00af00f4 */
      TextLine::TextLine(this_00,pTVar1);
      this_00 = this_00 + 0x158;
    }
    *(TextLine **)(this + 8) = this_00;
  }
  return;
}


