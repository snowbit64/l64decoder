// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __swap_out_circular_buffer
// Entry Point: 00cbef04
// Size: 176 bytes
// Signature: undefined __thiscall __swap_out_circular_buffer(vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> * this, __split_buffer * param_1)


/* std::__ndk1::vector<CryptoPP::WindowSlider, std::__ndk1::allocator<CryptoPP::WindowSlider>
   >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<CryptoPP::WindowSlider,
   std::__ndk1::allocator<CryptoPP::WindowSlider>&>&) */

void __thiscall
std::__ndk1::vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>>::
__swap_out_circular_buffer
          (vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> *this,
          __split_buffer *param_1)

{
  undefined8 uVar1;
  Integer *pIVar2;
  long lVar3;
  Integer *pIVar4;
  Integer *pIVar5;
  
  pIVar4 = *(Integer **)this;
  lVar3 = *(long *)(param_1 + 8);
  pIVar5 = *(Integer **)(this + 8);
  if (*(Integer **)(this + 8) != pIVar4) {
    do {
      pIVar2 = pIVar5 + -0x70;
      CryptoPP::Integer::Integer((Integer *)(lVar3 + -0x70),pIVar2);
                    /* try { // try from 00cbef48 to 00cbef4b has its CatchHandler @ 00cbefb4 */
      CryptoPP::Integer::Integer((Integer *)(lVar3 + -0x40),pIVar5 + -0x40);
      uVar1 = *(undefined8 *)(pIVar5 + -0x10);
      *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(pIVar5 + -8);
      *(undefined8 *)(lVar3 + -0x10) = uVar1;
      lVar3 = *(long *)(param_1 + 8) + -0x70;
      *(long *)(param_1 + 8) = lVar3;
      pIVar5 = pIVar2;
    } while (pIVar2 != pIVar4);
    pIVar4 = *(Integer **)this;
  }
  *(long *)this = lVar3;
  *(Integer **)(param_1 + 8) = pIVar4;
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
  return;
}


