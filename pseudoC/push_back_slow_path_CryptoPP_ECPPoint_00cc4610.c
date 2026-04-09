// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<CryptoPP::ECPPoint>
// Entry Point: 00cc4610
// Size: 436 bytes
// Signature: void __thiscall __push_back_slow_path<CryptoPP::ECPPoint>(vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> * this, ECPPoint * param_1)


/* void std::__ndk1::vector<CryptoPP::ECPPoint, std::__ndk1::allocator<CryptoPP::ECPPoint>
   >::__push_back_slow_path<CryptoPP::ECPPoint>(CryptoPP::ECPPoint&&) */

void __thiscall
std::__ndk1::vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::
__push_back_slow_path<CryptoPP::ECPPoint>
          (vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *this,
          ECPPoint *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *pvStack_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar4 * 0x6db6db6db6db6db7 + 1;
  if (0x249249249249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  local_60 = (long *)(this + 0x10);
  lVar5 = *local_60 - *(long *)this >> 4;
  uVar6 = lVar5 * -0x2492492492492492;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (0x124924924924923 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
    uVar1 = 0x249249249249249;
  }
  if (uVar1 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0x249249249249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar3 = operator_new(uVar1 * 0x70);
  }
  puVar7 = (undefined8 *)((long)pvVar3 + lVar4 * 0x10);
  pvStack_68 = (void *)((long)pvVar3 + uVar1 * 0x70);
  *puVar7 = &PTR__ECPPoint_00fe9fd8;
  local_80 = pvVar3;
  local_78 = puVar7;
  local_70 = puVar7;
                    /* try { // try from 00cc470c to 00cc4713 has its CatchHandler @ 00cc4814 */
  CryptoPP::Integer::Integer((Integer *)(puVar7 + 1),(Integer *)(param_1 + 8));
                    /* try { // try from 00cc4724 to 00cc4727 has its CatchHandler @ 00cc47c4 */
  CryptoPP::Integer::Integer
            ((Integer *)((long)pvVar3 + lVar4 * 0x10 + 0x38),(Integer *)(param_1 + 0x38));
  local_70 = puVar7 + 0xe;
  *(ECPPoint *)((long)pvVar3 + lVar4 * 0x10 + 0x68) = param_1[0x68];
                    /* try { // try from 00cc4740 to 00cc474b has its CatchHandler @ 00cc4814 */
  __swap_out_circular_buffer(this,(__split_buffer *)&local_80);
  puVar7 = local_78;
  while (local_70 != puVar7) {
    local_70 = local_70 + -0xe;
    (**(code **)*local_70)();
  }
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


