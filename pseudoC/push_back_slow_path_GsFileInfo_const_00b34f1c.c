// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<GsFileInfo_const&>
// Entry Point: 00b34f1c
// Size: 468 bytes
// Signature: void __thiscall __push_back_slow_path<GsFileInfo_const&>(vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>> * this, GsFileInfo * param_1)


/* void std::__ndk1::vector<GsFileInfo, std::__ndk1::allocator<GsFileInfo>
   >::__push_back_slow_path<GsFileInfo const&>(GsFileInfo const&) */

void __thiscall
std::__ndk1::vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>>::
__push_back_slow_path<GsFileInfo_const&>
          (vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>> *this,GsFileInfo *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  basic_string *pbVar13;
  basic_string *pbVar14;
  undefined8 uVar15;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar9 = lVar7 * 0x5555555555555556;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar1 = 0x555555555555555;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x30);
  }
  pbVar13 = (basic_string *)((long)pvVar4 + lVar6 * 0x10);
                    /* try { // try from 00b34fe4 to 00b34fef has its CatchHandler @ 00b350f0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar13);
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  pbVar2 = pbVar13 + 0xc;
  pbVar12 = *(byte **)this;
  pbVar8 = *(byte **)(this + 8);
  *(undefined8 *)((long)pvVar4 + lVar6 * 0x10 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((long)pvVar4 + lVar6 * 0x10 + 0x18) = uVar15;
  *(undefined8 *)((long)pvVar4 + lVar6 * 0x10 + 0x28) = uVar10;
  pbVar11 = pbVar12;
  pbVar14 = pbVar13;
  if (pbVar8 != pbVar12) {
    do {
      uVar15 = *(undefined8 *)(pbVar8 + -0x28);
      uVar10 = *(undefined8 *)(pbVar8 + -0x30);
      *(undefined8 *)(pbVar14 + -8) = *(undefined8 *)(pbVar8 + -0x20);
      pbVar11 = pbVar8 + -0x30;
      *(undefined8 *)(pbVar14 + -10) = uVar15;
      *(undefined8 *)(pbVar14 + -0xc) = uVar10;
      pbVar13 = pbVar14 + -0xc;
      *(undefined8 *)(pbVar8 + -0x28) = 0;
      *(undefined8 *)(pbVar8 + -0x20) = 0;
      *(undefined8 *)(pbVar8 + -0x30) = 0;
      uVar15 = *(undefined8 *)(pbVar8 + -0x10);
      uVar10 = *(undefined8 *)(pbVar8 + -0x18);
      *(undefined8 *)(pbVar14 + -2) = *(undefined8 *)(pbVar8 + -8);
      *(undefined8 *)(pbVar14 + -4) = uVar15;
      *(undefined8 *)(pbVar14 + -6) = uVar10;
      pbVar8 = pbVar11;
      pbVar14 = pbVar13;
    } while (pbVar11 != pbVar12);
    pbVar12 = *(byte **)(this + 8);
    pbVar11 = *(byte **)this;
  }
  *(basic_string **)this = pbVar13;
  *(basic_string **)(this + 8) = pbVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x30);
  while (pbVar8 = pbVar12, pbVar8 != pbVar11) {
    pbVar12 = pbVar8 + -0x30;
    if ((*pbVar12 & 1) != 0) {
      operator_delete(*(void **)(pbVar8 + -0x20));
    }
  }
  if (pbVar11 != (byte *)0x0) {
    operator_delete(pbVar11);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


