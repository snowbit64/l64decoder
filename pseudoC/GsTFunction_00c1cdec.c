// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GsTFunction
// Entry Point: 00c1cdec
// Size: 280 bytes
// Signature: undefined __thiscall GsTFunction(GsTFunction * this, SHC_String * param_1, SHC_Type * param_2, GsTOperator param_3, SHC_PoolAllocator * param_4)


/* GsTFunction::GsTFunction(SHC_String const*, SHC_Type const&, GsTOperator, SHC_PoolAllocator&) */

void __thiscall
GsTFunction::GsTFunction
          (GsTFunction *this,SHC_String *param_1,SHC_Type *param_2,GsTOperator param_3,
          SHC_PoolAllocator *param_4)

{
  SHC_String SVar1;
  size_t __n;
  SHC_String *__s;
  GsTFunction *__dest;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(SHC_String **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(SHC_PoolAllocator **)(this + 0x38) = param_4;
  *(undefined ***)this = &PTR__GsTFunction_00fee7a0;
  uVar3 = *(undefined8 *)param_2;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x40) = uVar3;
  *(undefined8 *)(this + 0x58) = uVar5;
  *(undefined8 *)(this + 0x50) = uVar4;
  *(undefined8 *)(this + 0x68) = uVar7;
  *(undefined8 *)(this + 0x60) = uVar6;
  SVar1 = *param_1;
  __s = *(SHC_String **)(param_1 + 0x10);
  *(SHC_PoolAllocator **)(this + 0x88) = param_4;
  if (((byte)SVar1 & 1) == 0) {
    __s = param_1 + 1;
  }
  __n = strlen((char *)__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00c1cefc to 00c1cf03 has its CatchHandler @ 00c1cf08 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 0x71;
    *(basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>> *)(this + 0x70) =
         SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_00c1cec0;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c1ce94 to 00c1ce9f has its CatchHandler @ 00c1cf08 */
    __dest = (GsTFunction *)SHC_PoolAllocator::allocate(param_4,uVar2);
    *(size_t *)(this + 0x78) = __n;
    *(GsTFunction **)(this + 0x80) = __dest;
    *(ulong *)(this + 0x70) = uVar2 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_00c1cec0:
  __dest[__n] = (GsTFunction)0x0;
  *(GsTOperator *)(this + 0x90) = param_3;
  *(undefined8 *)(this + 0x98) = 0;
  this[0xc0] = (GsTFunction)0x0;
  *(undefined8 *)(this + 200) = 0;
                    /* try { // try from 00c1ced4 to 00c1cee3 has its CatchHandler @ 00c1cf04 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>>::append
            ((basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>> *)
             (this + 0x70),"_");
  return;
}


