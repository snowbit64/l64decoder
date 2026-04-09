// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00cc2938
// Size: 588 bytes
// Signature: undefined __thiscall __append(vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> * this, ulong param_1, ECPPoint * param_2)


/* std::__ndk1::vector<CryptoPP::ECPPoint, std::__ndk1::allocator<CryptoPP::ECPPoint>
   >::__append(unsigned long, CryptoPP::ECPPoint const&) */

void __thiscall
std::__ndk1::vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::__append
          (vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *this,ulong param_1
          ,ECPPoint *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  void *pvStack_78;
  vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar8 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar8 >> 4) * 0x6db6db6db6db6db7) < param_1) {
    lVar5 = (long)puVar8 - *(long *)this >> 4;
    uVar2 = lVar5 * 0x6db6db6db6db6db7 + param_1;
    if (0x249249249249249 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = *(long *)(this + 0x10) - *(long *)this >> 4;
    uVar6 = lVar4 * -0x2492492492492492;
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    local_70 = this + 0x10;
    if (0x124924924924923 < (ulong)(lVar4 * 0x6db6db6db6db6db7)) {
      uVar2 = 0x249249249249249;
    }
    if (uVar2 == 0) {
      local_90 = (void *)0x0;
    }
    else {
      if (0x249249249249249 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_90 = operator_new(uVar2 * 0x70);
    }
    local_88 = (undefined8 *)((long)local_90 + lVar5 * 0x10);
    pvStack_78 = (void *)((long)local_90 + uVar2 * 0x70);
    puVar7 = local_88 + param_1 * 0xe;
    puVar8 = local_88;
    local_80 = local_88;
    do {
      *puVar8 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00cc2ac8 to 00cc2ad3 has its CatchHandler @ 00cc2c2c */
      CryptoPP::Integer::Integer((Integer *)(puVar8 + 1),(Integer *)(param_2 + 8));
                    /* try { // try from 00cc2ad8 to 00cc2ae3 has its CatchHandler @ 00cc2be4 */
      CryptoPP::Integer::Integer((Integer *)(puVar8 + 7),(Integer *)(param_2 + 0x38));
      puVar1 = puVar8 + 0xe;
      *(ECPPoint *)(puVar8 + 0xd) = param_2[0x68];
      puVar8 = puVar1;
    } while (puVar1 != puVar7);
    local_80 = puVar7;
                    /* try { // try from 00cc2afc to 00cc2b07 has its CatchHandler @ 00cc2b84 */
    __swap_out_circular_buffer(this,(__split_buffer *)&local_90);
    puVar8 = local_88;
    while (local_80 != puVar8) {
      local_80 = local_80 + -0xe;
      (**(code **)*local_80)();
    }
    if (local_90 != (void *)0x0) {
      operator_delete(local_90);
    }
  }
  else {
    puVar7 = puVar8;
    if (param_1 != 0) {
      puVar7 = puVar8 + param_1 * 0xe;
      do {
        *puVar8 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00cc2a50 to 00cc2a5b has its CatchHandler @ 00cc2bd4 */
        CryptoPP::Integer::Integer((Integer *)(puVar8 + 1),(Integer *)(param_2 + 8));
                    /* try { // try from 00cc2a60 to 00cc2a6b has its CatchHandler @ 00cc2b8c */
        CryptoPP::Integer::Integer((Integer *)(puVar8 + 7),(Integer *)(param_2 + 0x38));
        puVar1 = puVar8 + 0xe;
        *(ECPPoint *)(puVar8 + 0xd) = param_2[0x68];
        puVar8 = puVar1;
      } while (puVar1 != puVar7);
    }
    *(undefined8 **)(this + 8) = puVar7;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


