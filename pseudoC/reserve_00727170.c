// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 00727170
// Size: 224 bytes
// Signature: undefined __thiscall reserve(vector<bool,std::__ndk1::allocator<bool>> * this, ulong param_1)


/* std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::reserve
          (vector<bool,std::__ndk1::allocator<bool>> *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  long lStack_58;
  uint local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((ulong)(*(long *)(this + 0x10) * 0x40) < param_1) {
    local_70 = (void *)0x0;
    local_68 = 0;
    lStack_60 = 0;
    if ((long)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar1 = (param_1 - 1 >> 6) + 1;
                    /* try { // try from 007271bc to 0072724b has its CatchHandler @ 00727250 */
    local_70 = operator_new(lVar1 * 8);
    local_48 = *(long *)this;
    local_68 = 0;
    local_40 = 0;
    local_50 = (uint)*(ulong *)(this + 8) & 0x3f;
    lStack_58 = local_48 + (*(ulong *)(this + 8) >> 3 & 0x1ffffffffffffff8);
    lStack_60 = lVar1;
    __construct_at_end<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false,0ul>>
              ((__bit_iterator)&local_70,(int)&stack0xffffffffffffffd0 - 0x18);
    pvVar3 = *(void **)this;
    uVar5 = *(undefined8 *)(this + 0x10);
    uVar4 = *(undefined8 *)(this + 8);
    *(void **)this = local_70;
    *(long *)(this + 0x10) = lStack_60;
    *(undefined8 *)(this + 8) = local_68;
    local_70 = pvVar3;
    local_68 = uVar4;
    lStack_60 = uVar5;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


