// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00a67ec8
// Size: 108 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>> * this)


/* std::__ndk1::__vector_base<FoliageSystemDesc::State,
   std::__ndk1::allocator<FoliageSystemDesc::State> >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>::
~__vector_base(__vector_base<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>
               *this)

{
  State *pSVar1;
  State *this_00;
  State *pSVar2;
  
  pSVar2 = *(State **)this;
  if (pSVar2 == (State *)0x0) {
    return;
  }
  this_00 = *(State **)(this + 8);
  pSVar1 = pSVar2;
  if (this_00 != pSVar2) {
    do {
      this_00 = this_00 + -0x68;
      FoliageSystemDesc::State::~State(this_00);
    } while (this_00 != pSVar2);
    pSVar1 = *(State **)this;
  }
  *(State **)(this + 8) = pSVar2;
  operator_delete(pSVar1);
  return;
}


