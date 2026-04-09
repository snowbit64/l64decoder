// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator+
// Entry Point: 00be98f0
// Size: 440 bytes
// Signature: undefined __thiscall operator+(CryptoPP * this, OID * param_1, ulong param_2)


/* CryptoPP::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::OID const&, unsigned long) */

void __thiscall CryptoPP::operator+(CryptoPP *this,OID *param_1,ulong param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *__dest;
  void *__dest_00;
  undefined8 *in_x8;
  ulong __n;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)&local_80,
             (vector *)(this + 8));
  puVar5 = local_80;
  if (local_78 == local_70) {
    __n = (long)local_78 - (long)local_80;
    uVar3 = ((long)__n >> 2) + 1;
    if (uVar3 >> 0x3e != 0) {
                    /* try { // try from 00be9a90 to 00be9aa3 has its CatchHandler @ 00be9aa8 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar3 <= (ulong)((long)__n >> 1)) {
      uVar3 = (long)__n >> 1;
    }
    if (0x7ffffffffffffffb < __n) {
      uVar3 = 0x3fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (undefined4 *)0x0;
    }
    else {
      if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00be99a4 to 00be99a7 has its CatchHandler @ 00be9aa8 */
      __dest = (undefined4 *)operator_new(uVar3 << 2);
    }
    puVar1 = __dest + ((long)__n >> 2);
    *puVar1 = (int)param_1;
    if (0 < (long)__n) {
      memcpy(__dest,local_80,__n);
    }
    bVar2 = local_80 != (undefined4 *)0x0;
    local_80 = __dest;
    local_78 = puVar1 + 1;
    local_70 = __dest + uVar3;
    if (bVar2) {
      operator_delete(puVar5);
    }
  }
  else {
    *local_78 = (int)param_1;
    local_78 = local_78 + 1;
  }
  puVar5 = local_80;
  in_x8[2] = 0;
  in_x8[3] = 0;
  uVar3 = (long)local_78 - (long)local_80;
  in_x8[1] = 0;
  *in_x8 = &PTR__OID_00fecd98;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* try { // try from 00be9a88 to 00be9a8f has its CatchHandler @ 00be9ab0 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00be9a14 to 00be9a1b has its CatchHandler @ 00be9ab0 */
    __dest_00 = operator_new(uVar3);
    in_x8[1] = __dest_00;
    in_x8[3] = (void *)((long)__dest_00 + ((long)uVar3 >> 2) * 4);
    memcpy(__dest_00,puVar5,uVar3);
    in_x8[2] = (long)__dest_00 + uVar3;
  }
  if (puVar5 != (undefined4 *)0x0) {
    local_78 = puVar5;
    operator_delete(puVar5);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


