// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<ConditionalAnimationBlending::Node_const&>
// Entry Point: 0086ab8c
// Size: 528 bytes
// Signature: void __thiscall __push_back_slow_path<ConditionalAnimationBlending::Node_const&>(vector<ConditionalAnimationBlending::Node,std::__ndk1::allocator<ConditionalAnimationBlending::Node>> * this, Node * param_1)


/* void std::__ndk1::vector<ConditionalAnimationBlending::Node,
   std::__ndk1::allocator<ConditionalAnimationBlending::Node>
   >::__push_back_slow_path<ConditionalAnimationBlending::Node
   const&>(ConditionalAnimationBlending::Node const&) */

void __thiscall
std::__ndk1::
vector<ConditionalAnimationBlending::Node,std::__ndk1::allocator<ConditionalAnimationBlending::Node>>
::__push_back_slow_path<ConditionalAnimationBlending::Node_const&>
          (vector<ConditionalAnimationBlending::Node,std::__ndk1::allocator<ConditionalAnimationBlending::Node>>
           *this,Node *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  undefined4 uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  undefined8 uVar13;
  byte *pbVar14;
  basic_string *pbVar15;
  basic_string *pbVar16;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar7 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar8 * -0x2492492492492492;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
    uVar1 = 0x492492492492492;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 * 0x38);
  }
  pbVar15 = (basic_string *)((long)pvVar5 + lVar7 * 8);
                    /* try { // try from 0086ac6c to 0086ac77 has its CatchHandler @ 0086ad9c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar15);
  uVar11 = *(undefined8 *)(param_1 + 0x1d);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  pbVar14 = *(byte **)this;
  pbVar9 = *(byte **)(this + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  pbVar2 = pbVar15 + 0xe;
  *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x1d) = uVar11;
  *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x28) = uVar13;
  *(undefined4 *)((long)pvVar5 + lVar7 * 8 + 0x30) = uVar3;
  pbVar12 = pbVar14;
  pbVar16 = pbVar15;
  if (pbVar9 != pbVar14) {
    do {
      uVar13 = *(undefined8 *)(pbVar9 + -0x30);
      uVar11 = *(undefined8 *)(pbVar9 + -0x38);
      *(undefined8 *)(pbVar16 + -10) = *(undefined8 *)(pbVar9 + -0x28);
      *(undefined8 *)(pbVar16 + -0xc) = uVar13;
      *(undefined8 *)(pbVar16 + -0xe) = uVar11;
      *(undefined8 *)(pbVar9 + -0x30) = 0;
      *(undefined8 *)(pbVar9 + -0x28) = 0;
      uVar11 = *(undefined8 *)(pbVar9 + -0x20);
      *(undefined8 *)(pbVar9 + -0x38) = 0;
      *(undefined8 *)((long)pbVar16 + -0x1b) = *(undefined8 *)(pbVar9 + -0x1b);
      pbVar12 = pbVar9 + -0x38;
      *(undefined8 *)(pbVar16 + -8) = uVar11;
      pbVar15 = pbVar16 + -0xe;
      uVar11 = *(undefined8 *)(pbVar9 + -0x10);
      pbVar16[-2] = *(basic_string *)(pbVar9 + -8);
      *(undefined8 *)(pbVar16 + -4) = uVar11;
      pbVar9 = pbVar12;
      pbVar16 = pbVar15;
    } while (pbVar12 != pbVar14);
    pbVar14 = *(byte **)(this + 8);
    pbVar12 = *(byte **)this;
  }
  *(basic_string **)this = pbVar15;
  *(basic_string **)(this + 8) = pbVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x38);
  while (pbVar9 = pbVar14, pbVar9 != pbVar12) {
    pbVar14 = pbVar9 + -0x38;
    if ((*pbVar14 & 1) != 0) {
      operator_delete(*(void **)(pbVar9 + -0x28));
    }
  }
  if (pbVar12 != (byte *)0x0) {
    operator_delete(pbVar12);
  }
  if (*(long *)(lVar4 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


