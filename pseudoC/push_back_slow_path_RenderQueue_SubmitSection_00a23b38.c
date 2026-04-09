// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<RenderQueue::SubmitSection>
// Entry Point: 00a23b38
// Size: 824 bytes
// Signature: void __thiscall __push_back_slow_path<RenderQueue::SubmitSection>(vector<RenderQueue::SubmitSection,std::__ndk1::allocator<RenderQueue::SubmitSection>> * this, SubmitSection * param_1)


/* void std::__ndk1::vector<RenderQueue::SubmitSection,
   std::__ndk1::allocator<RenderQueue::SubmitSection>
   >::__push_back_slow_path<RenderQueue::SubmitSection>(RenderQueue::SubmitSection&&) */

void __thiscall
std::__ndk1::vector<RenderQueue::SubmitSection,std::__ndk1::allocator<RenderQueue::SubmitSection>>::
__push_back_slow_path<RenderQueue::SubmitSection>
          (vector<RenderQueue::SubmitSection,std::__ndk1::allocator<RenderQueue::SubmitSection>>
           *this,SubmitSection *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  SubmitSection SVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar1 = lVar7 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x5d1745d1745d17 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = *(long *)(this + 0x10) - *(long *)this >> 6;
  uVar11 = lVar10 * 0x5d1745d1745d1746;
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  if (0x2e8ba2e8ba2e8a < (ulong)(lVar10 * 0x2e8ba2e8ba2e8ba3)) {
    uVar1 = 0x5d1745d1745d17;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x5d1745d1745d17 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 * 0x2c0);
  }
  uVar19 = *(undefined8 *)(param_1 + 0xe0);
  uVar16 = *(undefined8 *)(param_1 + 200);
  uVar8 = *(undefined8 *)(param_1 + 0xc0);
  uVar18 = *(undefined8 *)(param_1 + 0xd8);
  uVar17 = *(undefined8 *)(param_1 + 0xd0);
  puVar15 = (undefined8 *)((long)pvVar5 + lVar7 * 0x40);
  puVar15[0x1d] = *(undefined8 *)(param_1 + 0xe8);
  puVar15[0x1c] = uVar19;
  puVar15[0x19] = uVar16;
  puVar15[0x18] = uVar8;
  puVar15[0x1b] = uVar18;
  puVar15[0x1a] = uVar17;
  uVar16 = *(undefined8 *)(param_1 + 0x88);
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  uVar18 = *(undefined8 *)(param_1 + 0x98);
  uVar17 = *(undefined8 *)(param_1 + 0x90);
  *(undefined4 *)(puVar15 + 0x1e) = *(undefined4 *)(param_1 + 0xf0);
  uVar20 = *(undefined8 *)(param_1 + 0xa8);
  uVar19 = *(undefined8 *)(param_1 + 0xa0);
  uVar22 = *(undefined8 *)(param_1 + 0xb8);
  uVar21 = *(undefined8 *)(param_1 + 0xb0);
  puVar15[0x11] = uVar16;
  puVar15[0x10] = uVar8;
  puVar15[0x13] = uVar18;
  puVar15[0x12] = uVar17;
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar18 = *(undefined8 *)(param_1 + 0x58);
  uVar17 = *(undefined8 *)(param_1 + 0x50);
  puVar15[0x15] = uVar20;
  puVar15[0x14] = uVar19;
  puVar15[0x17] = uVar22;
  puVar15[0x16] = uVar21;
  uVar20 = *(undefined8 *)(param_1 + 0x68);
  uVar19 = *(undefined8 *)(param_1 + 0x60);
  uVar22 = *(undefined8 *)(param_1 + 0x78);
  uVar21 = *(undefined8 *)(param_1 + 0x70);
  puVar15[9] = uVar16;
  puVar15[8] = uVar8;
  puVar15[0xb] = uVar18;
  puVar15[10] = uVar17;
  uVar16 = *(undefined8 *)(param_1 + 8);
  uVar8 = *(undefined8 *)param_1;
  uVar18 = *(undefined8 *)(param_1 + 0x18);
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  puVar15[0xd] = uVar20;
  puVar15[0xc] = uVar19;
  puVar15[0xf] = uVar22;
  puVar15[0xe] = uVar21;
  puVar15[1] = uVar16;
  *puVar15 = uVar8;
  puVar15[3] = uVar18;
  puVar15[2] = uVar17;
  uVar8 = *(undefined8 *)(param_1 + 0x108);
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  uVar17 = *(undefined8 *)(param_1 + 0x38);
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  puVar15[5] = *(undefined8 *)(param_1 + 0x28);
  puVar15[4] = uVar18;
  puVar15[7] = uVar17;
  puVar15[6] = uVar16;
  uVar17 = *(undefined8 *)(param_1 + 0x100);
  uVar16 = *(undefined8 *)(param_1 + 0xf8);
  puVar15[0x21] = uVar8;
  *(undefined8 *)(param_1 + 0x108) = 0;
  SVar3 = param_1[0x118];
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  puVar15[0x20] = uVar17;
  puVar15[0x1f] = uVar16;
  *(SubmitSection *)(puVar15 + 0x23) = SVar3;
  puVar15[0x22] = &PTR__Task_00fde908;
                    /* try { // try from 00a23ca8 to 00a23cab has its CatchHandler @ 00a23e70 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar15 + 0x24));
  puVar15[0x22] = &PTR__Task_00fe3150;
  memcpy((void *)((long)pvVar5 + lVar7 * 0x40 + 0x138),param_1 + 0x138,0x180);
  puVar12 = *(undefined8 **)this;
  puVar9 = *(undefined8 **)(this + 8);
  puVar14 = puVar15 + 0x58;
  *(undefined8 *)((long)pvVar5 + lVar7 * 0x40 + 0x2b8) = *(undefined8 *)(param_1 + 0x2b8);
  puVar13 = puVar12;
  if (puVar9 != puVar12) {
    do {
      puVar13 = puVar9 + -0x58;
      uVar17 = puVar9[-0x54];
      uVar16 = puVar9[-0x51];
      uVar8 = puVar9[-0x52];
      uVar21 = puVar9[-0x57];
      uVar20 = *puVar13;
      uVar19 = puVar9[-0x55];
      uVar18 = puVar9[-0x56];
      puVar15[-0x53] = puVar9[-0x53];
      puVar15[-0x54] = uVar17;
      puVar15[-0x51] = uVar16;
      puVar15[-0x52] = uVar8;
      puVar15[-0x57] = uVar21;
      puVar15[-0x58] = uVar20;
      puVar15[-0x55] = uVar19;
      puVar15[-0x56] = uVar18;
      uVar17 = puVar9[-0x4c];
      uVar16 = puVar9[-0x49];
      uVar8 = puVar9[-0x4a];
      uVar21 = puVar9[-0x4f];
      uVar20 = puVar9[-0x50];
      uVar19 = puVar9[-0x4d];
      uVar18 = puVar9[-0x4e];
      puVar15[-0x4b] = puVar9[-0x4b];
      puVar15[-0x4c] = uVar17;
      puVar15[-0x49] = uVar16;
      puVar15[-0x4a] = uVar8;
      puVar15[-0x4f] = uVar21;
      puVar15[-0x50] = uVar20;
      puVar15[-0x4d] = uVar19;
      puVar15[-0x4e] = uVar18;
      uVar17 = puVar9[-0x44];
      uVar16 = puVar9[-0x41];
      uVar8 = puVar9[-0x42];
      uVar21 = puVar9[-0x47];
      uVar20 = puVar9[-0x48];
      uVar19 = puVar9[-0x45];
      uVar18 = puVar9[-0x46];
      puVar15[-0x43] = puVar9[-0x43];
      puVar15[-0x44] = uVar17;
      puVar15[-0x41] = uVar16;
      puVar15[-0x42] = uVar8;
      puVar15[-0x47] = uVar21;
      puVar15[-0x48] = uVar20;
      puVar15[-0x45] = uVar19;
      puVar15[-0x46] = uVar18;
      uVar19 = puVar9[-0x3e];
      uVar16 = puVar9[-0x3b];
      uVar8 = puVar9[-0x3c];
      uVar2 = *(undefined4 *)(puVar9 + -0x3a);
      uVar18 = puVar9[-0x3f];
      uVar17 = puVar9[-0x40];
      puVar15[-0x3d] = puVar9[-0x3d];
      puVar15[-0x3e] = uVar19;
      puVar15[-0x3b] = uVar16;
      puVar15[-0x3c] = uVar8;
      *(undefined4 *)(puVar15 + -0x3a) = uVar2;
      puVar15[-0x3f] = uVar18;
      puVar15[-0x40] = uVar17;
                    /* try { // try from 00a23d50 to 00a23d57 has its CatchHandler @ 00a23eac */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar15 + -0x39));
      puVar15[-0x36] = &PTR__Task_00fde908;
      *(byte *)(puVar15 + -0x35) = *(byte *)(puVar9 + -0x35);
                    /* try { // try from 00a23d74 to 00a23d77 has its CatchHandler @ 00a23e90 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar15 + -0x34));
      puVar15[-0x36] = &PTR__Task_00fe3150;
      memcpy(puVar15 + -0x31,puVar9 + -0x31,0x180);
      puVar15[-1] = puVar9[-1];
      puVar15 = puVar15 + -0x58;
      puVar9 = puVar13;
    } while (puVar13 != puVar12);
    puVar12 = *(undefined8 **)this;
    puVar13 = *(undefined8 **)(this + 8);
  }
  *(undefined8 **)this = puVar15;
  *(undefined8 **)(this + 8) = puVar14;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x2c0);
  if (puVar13 != puVar12) {
    puVar14 = puVar13 + -0x39;
    do {
      puVar14[3] = &PTR__Task_00fde908;
      if ((*(byte *)(puVar14 + 5) & 1) != 0) {
        operator_delete((void *)puVar14[7]);
      }
      if ((*(byte *)puVar14 & 1) != 0) {
        operator_delete((void *)puVar14[2]);
      }
      puVar9 = puVar14 + -0x1f;
      puVar14 = puVar14 + -0x58;
    } while (puVar9 != puVar12);
  }
  if (puVar12 != (undefined8 *)0x0) {
    operator_delete(puVar12);
  }
  if (*(long *)(lVar4 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


