// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<SceneSave::SerializeFile_const&>
// Entry Point: 00920e10
// Size: 504 bytes
// Signature: void __thiscall __push_back_slow_path<SceneSave::SerializeFile_const&>(vector<SceneSave::SerializeFile,std::__ndk1::allocator<SceneSave::SerializeFile>> * this, SerializeFile * param_1)


/* void std::__ndk1::vector<SceneSave::SerializeFile,
   std::__ndk1::allocator<SceneSave::SerializeFile>
   >::__push_back_slow_path<SceneSave::SerializeFile const&>(SceneSave::SerializeFile const&) */

void __thiscall
std::__ndk1::vector<SceneSave::SerializeFile,std::__ndk1::allocator<SceneSave::SerializeFile>>::
__push_back_slow_path<SceneSave::SerializeFile_const&>
          (vector<SceneSave::SerializeFile,std::__ndk1::allocator<SceneSave::SerializeFile>> *this,
          SerializeFile *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar6 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar9 * -0x2492492492492492;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x249249249249248 < (ulong)(lVar9 * 0x6db6db6db6db6db7)) {
    uVar1 = 0x492492492492492;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x38);
  }
  puVar13 = (undefined8 *)((long)pvVar4 + lVar6 * 8);
  *puVar13 = *(undefined8 *)param_1;
                    /* try { // try from 00920f00 to 00920f03 has its CatchHandler @ 00921008 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar13 + 1));
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x2e);
  puVar2 = puVar13 + 7;
  puVar7 = *(undefined8 **)this;
  puVar8 = *(undefined8 **)(this + 8);
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x20) = uVar14;
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x2e) = uVar11;
  puVar12 = puVar7;
  if (puVar8 != puVar7) {
    do {
      puVar12 = puVar8 + -7;
      puVar13[-7] = *puVar12;
      uVar14 = puVar8[-5];
      uVar11 = puVar8[-6];
      puVar13[-4] = puVar8[-4];
      puVar13[-5] = uVar14;
      puVar13[-6] = uVar11;
      puVar8[-5] = 0;
      puVar8[-4] = 0;
      uVar14 = puVar8[-2];
      uVar11 = puVar8[-3];
      puVar8[-6] = 0;
      *(undefined8 *)((long)puVar13 + -10) = *(undefined8 *)((long)puVar8 + -10);
      puVar13[-2] = uVar14;
      puVar13[-3] = uVar11;
      puVar13 = puVar13 + -7;
      puVar8 = puVar12;
    } while (puVar12 != puVar7);
    puVar7 = *(undefined8 **)(this + 8);
    puVar12 = *(undefined8 **)this;
  }
  *(undefined8 **)this = puVar13;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x38);
  while (puVar2 = puVar7, puVar2 != puVar12) {
    puVar7 = puVar2 + -7;
    if ((*(byte *)(puVar2 + -6) & 1) != 0) {
      operator_delete((void *)puVar2[-4]);
    }
  }
  if (puVar12 != (undefined8 *)0x0) {
    operator_delete(puVar12);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


