// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00b68690
// Size: 180 bytes
// Signature: undefined __thiscall vector(vector<Brep::Split,std::__ndk1::allocator<Brep::Split>> * this, vector * param_1)


/* std::__ndk1::vector<Brep::Split, std::__ndk1::allocator<Brep::Split>
   >::vector(std::__ndk1::vector<Brep::Split, std::__ndk1::allocator<Brep::Split> > const&) */

void __thiscall
std::__ndk1::vector<Brep::Split,std::__ndk1::allocator<Brep::Split>>::vector
          (vector<Brep::Split,std::__ndk1::allocator<Brep::Split>> *this,vector *param_1)

{
  ulong uVar1;
  void *__dest;
  size_t __n;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar1 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar1 >> 3) * -0x5555555555555555)) {
                    /* try { // try from 00b6873c to 00b68743 has its CatchHandler @ 00b68744 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00b686e0 to 00b686e3 has its CatchHandler @ 00b68744 */
    __dest = operator_new(uVar1);
    *(void **)this = __dest;
    *(void **)(this + 8) = __dest;
    *(void **)(this + 0x10) = (void *)((long)__dest + ((long)uVar1 >> 3) * 8);
    __n = *(long *)(param_1 + 8) - (long)*(void **)param_1;
    if (0 < (long)__n) {
      memcpy(__dest,*(void **)param_1,__n);
      __dest = (void *)((long)__dest + (__n / 0x18) * 0x18);
    }
    *(void **)(this + 8) = __dest;
  }
  return;
}


