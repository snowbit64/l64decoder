// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecode
// Entry Point: 00ccdac0
// Size: 696 bytes
// Signature: undefined __thiscall BERDecode(OID * this, BufferedTransformation * param_1)


/* CryptoPP::OID::BERDecode(CryptoPP::BufferedTransformation&) */

void __thiscall CryptoPP::OID::BERDecode(OID *this,BufferedTransformation *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  BERDecodeErr *this_00;
  uint *puVar6;
  uint **this_01;
  ulong __n;
  ulong uVar7;
  byte local_78 [4];
  bool local_74 [4];
  ulong local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar4 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_78);
  if (lVar4 == 0 || local_78[0] != 6) {
    this_00 = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccdd30 to 00ccdd33 has its CatchHandler @ 00ccdd84 */
    BERDecodeErr::BERDecodeErr(this_00);
  }
  else {
    local_70 = 0;
    local_74[0] = false;
    uVar5 = BERLengthDecode(param_1,&local_70,local_74);
    uVar7 = local_70;
    if ((uVar5 & 1) == 0) {
      this_00 = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccdd44 to 00ccdd47 has its CatchHandler @ 00ccdd80 */
      BERDecodeErr::BERDecodeErr(this_00);
    }
    else if ((local_74[0] == false) || (local_70 == 0)) {
      this_00 = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccdd58 to 00ccdd5b has its CatchHandler @ 00ccdd7c */
      BERDecodeErr::BERDecodeErr(this_00);
    }
    else {
      lVar4 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_78);
      if (lVar4 == 0) {
        this_00 = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccdd6c to 00ccdd6f has its CatchHandler @ 00ccdd78 */
        BERDecodeErr::BERDecodeErr(this_00);
      }
      else {
        uVar7 = uVar7 - 1;
        this_01 = (uint **)(this + 8);
        puVar6 = *this_01;
        uVar5 = *(long *)(this + 0x10) - (long)puVar6;
        if (uVar5 < 8) {
          std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
                    ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)this_01,
                     2 - (uVar5 >> 2));
          puVar6 = *this_01;
        }
        else if (uVar5 != 8) {
          *(uint **)(this + 0x10) = puVar6 + 2;
        }
        *puVar6 = local_78[0] / 0x28;
        puVar6[1] = (uint)local_78[0] % 0x28;
        while( true ) {
          if (uVar7 == 0) {
            if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
          uVar5 = DecodeValue(param_1,(uint *)&local_70);
          if (uVar7 < uVar5) break;
          puVar2 = *(undefined4 **)(this + 0x10);
          if (puVar2 == *(undefined4 **)(this + 0x18)) {
            puVar6 = *this_01;
            __n = (long)puVar2 - (long)puVar6;
            lVar4 = (long)__n >> 2;
            uVar1 = lVar4 + 1;
            if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar1 <= (ulong)((long)__n >> 1)) {
              uVar1 = (long)__n >> 1;
            }
            if (0x7ffffffffffffffb < __n) {
              uVar1 = 0x3fffffffffffffff;
            }
            if (uVar1 == 0) {
              __dest = (void *)0x0;
              puVar2 = (undefined4 *)(lVar4 * 4);
              *puVar2 = (undefined4)local_70;
            }
            else {
              if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              __dest = operator_new(uVar1 << 2);
              puVar2 = (undefined4 *)((long)__dest + lVar4 * 4);
              *puVar2 = (undefined4)local_70;
            }
            if (0 < (long)__n) {
              memcpy(__dest,puVar6,__n);
            }
            *(void **)(this + 8) = __dest;
            *(undefined4 **)(this + 0x10) = puVar2 + 1;
            *(void **)(this + 0x18) = (void *)((long)__dest + uVar1 * 4);
            if (puVar6 != (uint *)0x0) {
              operator_delete(puVar6);
            }
          }
          else {
            *puVar2 = (undefined4)local_70;
            *(undefined4 **)(this + 0x10) = puVar2 + 1;
          }
          uVar7 = uVar7 - uVar5;
        }
        this_00 = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccdcf4 to 00ccdcf7 has its CatchHandler @ 00ccdd88 */
        BERDecodeErr::BERDecodeErr(this_00);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&BERDecodeErr::typeinfo,Exception::~Exception);
}


