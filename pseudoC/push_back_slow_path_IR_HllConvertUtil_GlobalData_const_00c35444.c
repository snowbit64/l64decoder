// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<IR_HllConvertUtil::GlobalData_const&>
// Entry Point: 00c35444
// Size: 424 bytes
// Signature: void __thiscall __push_back_slow_path<IR_HllConvertUtil::GlobalData_const&>(vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>> * this, GlobalData * param_1)


/* void std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>
   >::__push_back_slow_path<IR_HllConvertUtil::GlobalData const&>(IR_HllConvertUtil::GlobalData
   const&) */

void __thiscall
std::__ndk1::
vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>::
__push_back_slow_path<IR_HllConvertUtil::GlobalData_const&>
          (vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>
           *this,GlobalData *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar12 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar1 = lVar12 + 1;
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar8 = *(long *)(this + 0x10) - *(long *)this;
  uVar10 = (long)uVar8 >> 5;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x7fffffffffffffbf < uVar8) {
    uVar1 = 0x3ffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 << 6);
  }
  puVar14 = (undefined8 *)((long)pvVar4 + lVar12 * 0x40);
  uVar15 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  puVar14[1] = *(undefined8 *)(param_1 + 8);
  *puVar14 = uVar15;
  puVar14[2] = uVar6;
                    /* try { // try from 00c354f8 to 00c354fb has its CatchHandler @ 00c355ec */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar14 + 3));
  pvVar7 = *(void **)this;
  pvVar9 = *(void **)(this + 8);
  puVar2 = puVar14 + 8;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  puVar14[7] = *(undefined8 *)(param_1 + 0x38);
  puVar14[6] = uVar6;
  pvVar11 = pvVar7;
  puVar13 = puVar14;
  if (pvVar9 != pvVar7) {
    do {
      uVar15 = *(undefined8 *)((long)pvVar9 + -0x38);
      uVar6 = *(undefined8 *)((long)pvVar9 + -0x40);
      puVar13[-6] = *(undefined8 *)((long)pvVar9 + -0x30);
      puVar13[-7] = uVar15;
      puVar13[-8] = uVar6;
      uVar15 = *(undefined8 *)((long)pvVar9 + -0x20);
      uVar6 = *(undefined8 *)((long)pvVar9 + -0x28);
      puVar13[-3] = *(undefined8 *)((long)pvVar9 + -0x18);
      pvVar11 = (void *)((long)pvVar9 + -0x40);
      puVar13[-4] = uVar15;
      puVar13[-5] = uVar6;
      puVar14 = puVar13 + -8;
      *(undefined8 *)((long)pvVar9 + -0x20) = 0;
      *(undefined8 *)((long)pvVar9 + -0x18) = 0;
      uVar6 = *(undefined8 *)((long)pvVar9 + -0x10);
      *(undefined8 *)((long)pvVar9 + -0x28) = 0;
      puVar13[-1] = *(undefined8 *)((long)pvVar9 + -8);
      puVar13[-2] = uVar6;
      pvVar9 = pvVar11;
      puVar13 = puVar14;
    } while (pvVar11 != pvVar7);
    pvVar7 = *(void **)(this + 8);
    pvVar11 = *(void **)this;
  }
  *(undefined8 **)this = puVar14;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x40);
  while (pvVar4 = pvVar7, pvVar4 != pvVar11) {
    pvVar7 = (void *)((long)pvVar4 + -0x40);
    if ((*(byte *)((long)pvVar4 + -0x28) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar4 + -0x18));
    }
  }
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


