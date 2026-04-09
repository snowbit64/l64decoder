// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00cc4330
// Size: 544 bytes
// Signature: undefined __thiscall __append(vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> * this, ulong param_1)


/* std::__ndk1::vector<CryptoPP::ECPPoint, std::__ndk1::allocator<CryptoPP::ECPPoint>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::__append
          (vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *this,ulong param_1
          )

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *pvStack_68;
  vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
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
    local_60 = this + 0x10;
    if (0x124924924924923 < (ulong)(lVar4 * 0x6db6db6db6db6db7)) {
      uVar2 = 0x249249249249249;
    }
    if (uVar2 == 0) {
      local_80 = (void *)0x0;
    }
    else {
      if (0x249249249249249 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_80 = operator_new(uVar2 * 0x70);
    }
    local_78 = (undefined8 *)((long)local_80 + lVar5 * 0x10);
    pvStack_68 = (void *)((long)local_80 + uVar2 * 0x70);
    puVar7 = local_78 + param_1 * 0xe;
    puVar8 = local_78;
    local_70 = local_78;
    do {
      *puVar8 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00cc44a4 to 00cc44ab has its CatchHandler @ 00cc45f8 */
      CryptoPP::Integer::Integer((Integer *)(puVar8 + 1));
                    /* try { // try from 00cc44b0 to 00cc44b7 has its CatchHandler @ 00cc45b0 */
      CryptoPP::Integer::Integer((Integer *)(puVar8 + 7));
      puVar1 = puVar8 + 0xe;
      *(undefined *)(puVar8 + 0xd) = 1;
      puVar8 = puVar1;
    } while (puVar1 != puVar7);
    local_70 = puVar7;
                    /* try { // try from 00cc44cc to 00cc44d7 has its CatchHandler @ 00cc4550 */
    __swap_out_circular_buffer(this,(__split_buffer *)&local_80);
    puVar8 = local_78;
    while (local_70 != puVar8) {
      local_70 = local_70 + -0xe;
      (**(code **)*local_70)();
    }
    if (local_80 != (void *)0x0) {
      operator_delete(local_80);
    }
  }
  else {
    puVar7 = puVar8;
    if (param_1 != 0) {
      puVar7 = puVar8 + param_1 * 0xe;
      do {
        *puVar8 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00cc443c to 00cc4443 has its CatchHandler @ 00cc45a0 */
        CryptoPP::Integer::Integer((Integer *)(puVar8 + 1));
                    /* try { // try from 00cc4448 to 00cc444f has its CatchHandler @ 00cc4558 */
        CryptoPP::Integer::Integer((Integer *)(puVar8 + 7));
        puVar1 = puVar8 + 0xe;
        *(undefined *)(puVar8 + 0xd) = 1;
        puVar8 = puVar1;
      } while (puVar1 != puVar7);
    }
    *(undefined8 **)(this + 8) = puVar7;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


