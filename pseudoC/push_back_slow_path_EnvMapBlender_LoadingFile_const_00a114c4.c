// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<EnvMapBlender::LoadingFile_const&>
// Entry Point: 00a114c4
// Size: 600 bytes
// Signature: void __thiscall __push_back_slow_path<EnvMapBlender::LoadingFile_const&>(vector<EnvMapBlender::LoadingFile,std::__ndk1::allocator<EnvMapBlender::LoadingFile>> * this, LoadingFile * param_1)


/* void std::__ndk1::vector<EnvMapBlender::LoadingFile,
   std::__ndk1::allocator<EnvMapBlender::LoadingFile>
   >::__push_back_slow_path<EnvMapBlender::LoadingFile const&>(EnvMapBlender::LoadingFile const&) */

void __thiscall
std::__ndk1::vector<EnvMapBlender::LoadingFile,std::__ndk1::allocator<EnvMapBlender::LoadingFile>>::
__push_back_slow_path<EnvMapBlender::LoadingFile_const&>
          (vector<EnvMapBlender::LoadingFile,std::__ndk1::allocator<EnvMapBlender::LoadingFile>>
           *this,LoadingFile *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar6 * -0x30c30c30c30c30c3 + 1;
  if (0x186186186186186 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar11 = lVar9 * -0x6186186186186186;
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  if (0xc30c30c30c30c2 < (ulong)(lVar9 * -0x30c30c30c30c30c3)) {
    uVar1 = 0x186186186186186;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x186186186186186 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0xa8);
  }
  uVar20 = *(undefined8 *)(param_1 + 0x48);
  uVar19 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  puVar13 = (undefined8 *)((long)pvVar4 + lVar6 * 8);
  puVar13[5] = *(undefined8 *)(param_1 + 0x28);
  puVar13[4] = uVar7;
  puVar13[7] = uVar16;
  puVar13[6] = uVar15;
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  uVar16 = *(undefined8 *)(param_1 + 8);
  uVar15 = *(undefined8 *)param_1;
  uVar18 = *(undefined8 *)(param_1 + 0x18);
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  puVar13[9] = uVar20;
  puVar13[8] = uVar19;
  puVar13[10] = uVar7;
  puVar13[1] = uVar16;
  *puVar13 = uVar15;
  puVar13[3] = uVar18;
  puVar13[2] = uVar17;
                    /* try { // try from 00a115d0 to 00a115d3 has its CatchHandler @ 00a1171c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar13 + 0xb));
  uVar18 = *(undefined8 *)(param_1 + 0x90);
  uVar15 = *(undefined8 *)(param_1 + 0x78);
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  uVar17 = *(undefined8 *)(param_1 + 0x88);
  uVar16 = *(undefined8 *)(param_1 + 0x80);
  puVar2 = puVar13 + 0x15;
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x98) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x90) = uVar18;
  pvVar8 = *(void **)this;
  pvVar10 = *(void **)(this + 8);
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x78) = uVar15;
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x70) = uVar7;
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x88) = uVar17;
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x80) = uVar16;
  *(LoadingFile *)((long)pvVar4 + lVar6 * 8 + 0xa0) = param_1[0xa0];
  pvVar12 = pvVar8;
  puVar14 = puVar13;
  if (pvVar10 != pvVar8) {
    do {
      uVar7 = *(undefined8 *)((long)pvVar10 + -0x98);
      pvVar12 = (void *)((long)pvVar10 + -0xa8);
      uVar16 = *(undefined8 *)((long)pvVar10 + -0xa0);
      uVar15 = *(undefined8 *)((long)pvVar10 + -0xa8);
      puVar14[-0x12] = *(undefined8 *)((long)pvVar10 + -0x90);
      puVar14[-0x13] = uVar7;
      puVar14[-0x14] = uVar16;
      puVar14[-0x15] = uVar15;
      uVar15 = *(undefined8 *)((long)pvVar10 + -0x60);
      uVar7 = *(undefined8 *)((long)pvVar10 + -0x68);
      uVar17 = *(undefined8 *)((long)pvVar10 + -0x70);
      uVar16 = *(undefined8 *)((long)pvVar10 + -0x78);
      uVar19 = *(undefined8 *)((long)pvVar10 + -0x80);
      uVar18 = *(undefined8 *)((long)pvVar10 + -0x88);
      puVar14[-0xb] = *(undefined8 *)((long)pvVar10 + -0x58);
      puVar14[-0xc] = uVar15;
      puVar14[-0xd] = uVar7;
      puVar14[-0xe] = uVar17;
      puVar14[-0xf] = uVar16;
      puVar14[-0x10] = uVar19;
      puVar14[-0x11] = uVar18;
      uVar15 = *(undefined8 *)((long)pvVar10 + -0x48);
      uVar7 = *(undefined8 *)((long)pvVar10 + -0x50);
      puVar14[-8] = *(undefined8 *)((long)pvVar10 + -0x40);
      puVar14[-9] = uVar15;
      puVar14[-10] = uVar7;
      *(undefined8 *)((long)pvVar10 + -0x48) = 0;
      *(undefined8 *)((long)pvVar10 + -0x40) = 0;
      uVar15 = *(undefined8 *)((long)pvVar10 + -0x10);
      uVar7 = *(undefined8 *)((long)pvVar10 + -0x18);
      *(undefined8 *)((long)pvVar10 + -0x50) = 0;
      uVar17 = *(undefined8 *)((long)pvVar10 + -0x30);
      uVar16 = *(undefined8 *)((long)pvVar10 + -0x38);
      uVar19 = *(undefined8 *)((long)pvVar10 + -0x20);
      uVar18 = *(undefined8 *)((long)pvVar10 + -0x28);
      *(undefined *)(puVar14 + -1) = *(undefined *)((long)pvVar10 + -8);
      puVar14[-2] = uVar15;
      puVar14[-3] = uVar7;
      puVar13 = puVar14 + -0x15;
      puVar14[-6] = uVar17;
      puVar14[-7] = uVar16;
      puVar14[-4] = uVar19;
      puVar14[-5] = uVar18;
      pvVar10 = pvVar12;
      puVar14 = puVar13;
    } while (pvVar12 != pvVar8);
    pvVar8 = *(void **)(this + 8);
    pvVar12 = *(void **)this;
  }
  *(undefined8 **)this = puVar13;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0xa8);
  while (pvVar4 = pvVar8, pvVar4 != pvVar12) {
    pvVar8 = (void *)((long)pvVar4 + -0xa8);
    if ((*(byte *)((long)pvVar4 + -0x50) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar4 + -0x40));
    }
  }
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


