// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<FoliageLayerGraphics::State_const&>
// Entry Point: 00a623cc
// Size: 540 bytes
// Signature: void __thiscall __push_back_slow_path<FoliageLayerGraphics::State_const&>(vector<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>> * this, State * param_1)


/* void std::__ndk1::vector<FoliageLayerGraphics::State,
   std::__ndk1::allocator<FoliageLayerGraphics::State>
   >::__push_back_slow_path<FoliageLayerGraphics::State const&>(FoliageLayerGraphics::State const&)
    */

void __thiscall
std::__ndk1::vector<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
::__push_back_slow_path<FoliageLayerGraphics::State_const&>
          (vector<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
           *this,State *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *pvStack_68;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar5 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  local_60 = (long *)(this + 0x10);
  lVar7 = *local_60 - *(long *)this >> 3;
  uVar8 = lVar7 * 0x5d1745d1745d1746;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x1745d1745d1745c < (ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3)) {
    uVar1 = 0x2e8ba2e8ba2e8ba;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x58);
  }
  uVar11 = *(undefined8 *)param_1;
  uVar13 = *(undefined8 *)(param_1 + 0x14);
  uVar12 = *(undefined8 *)(param_1 + 0xc);
  puVar9 = (undefined8 *)((long)pvVar4 + lVar5 * 8);
  pvVar10 = (void *)((long)pvVar4 + uVar1 * 0x58);
  puVar9[1] = *(undefined8 *)(param_1 + 8);
  *puVar9 = uVar11;
  *(undefined8 *)((long)puVar9 + 0x14) = uVar13;
  *(undefined8 *)((long)puVar9 + 0xc) = uVar12;
  local_80 = pvVar4;
  local_78 = puVar9;
  local_70 = puVar9;
  pvStack_68 = pvVar10;
                    /* try { // try from 00a624c4 to 00a624cb has its CatchHandler @ 00a62608 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar9 + 4));
                    /* try { // try from 00a624dc to 00a624df has its CatchHandler @ 00a625e8 */
  vector<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>>::vector
            ((vector<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>>
              *)((long)pvVar4 + lVar5 * 8 + 0x38),(vector *)(param_1 + 0x38));
  puVar2 = puVar9 + 0xb;
  local_70 = *(undefined8 **)this;
  pvVar6 = *(void **)(this + 8);
  *(undefined4 *)((long)pvVar4 + lVar5 * 8 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  local_80 = local_70;
  if ((undefined8 *)pvVar6 != local_70) {
    do {
      uVar11 = *(undefined8 *)((long)pvVar6 + -0x4c);
      pvVar4 = (void *)((long)pvVar6 + -0x58);
      uVar13 = *(undefined8 *)((long)pvVar6 + -0x50);
      uVar12 = *(undefined8 *)((long)pvVar6 + -0x58);
      *(undefined8 *)((long)puVar9 + -0x44) = *(undefined8 *)((long)pvVar6 + -0x44);
      *(undefined8 *)((long)puVar9 + -0x4c) = uVar11;
      puVar9[-10] = uVar13;
      puVar9[-0xb] = uVar12;
      uVar12 = *(undefined8 *)((long)pvVar6 + -0x30);
      uVar11 = *(undefined8 *)((long)pvVar6 + -0x38);
      puVar9[-5] = *(undefined8 *)((long)pvVar6 + -0x28);
      puVar9[-6] = uVar12;
      puVar9[-7] = uVar11;
      *(undefined8 *)((long)pvVar6 + -0x30) = 0;
      *(undefined8 *)((long)pvVar6 + -0x28) = 0;
      *(undefined8 *)((long)pvVar6 + -0x38) = 0;
      puVar9[-4] = 0;
      puVar9[-3] = 0;
      puVar9[-2] = 0;
      puVar9[-4] = *(undefined8 *)((long)pvVar6 + -0x20);
      puVar9[-3] = *(undefined8 *)((long)pvVar6 + -0x18);
      puVar9[-2] = *(undefined8 *)((long)pvVar6 + -0x10);
      *(undefined8 *)((long)pvVar6 + -0x18) = 0;
      *(undefined8 *)((long)pvVar6 + -0x10) = 0;
      *(undefined8 *)((long)pvVar6 + -0x20) = 0;
      *(undefined4 *)(puVar9 + -1) = *(undefined4 *)((long)pvVar6 + -8);
      puVar9 = local_78 + -0xb;
      pvVar6 = pvVar4;
      local_78 = puVar9;
    } while ((undefined8 *)pvVar4 != local_70);
    local_70 = *(undefined8 **)(this + 8);
    local_80 = *(void **)this;
    pvVar10 = pvStack_68;
  }
  *(undefined8 **)this = puVar9;
  *(undefined8 **)(this + 8) = puVar2;
  pvStack_68 = *(void **)(this + 0x10);
  *(void **)(this + 0x10) = pvVar10;
  local_78 = (undefined8 *)local_80;
  __split_buffer<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>&>::
  ~__split_buffer((__split_buffer<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>&>
                   *)&local_80);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


