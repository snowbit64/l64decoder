// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addBlockMask
// Entry Point: 009d2bfc
// Size: 200 bytes
// Signature: undefined __thiscall addBlockMask(ProceduralPlacementManager * this, basic_string * param_1, basic_string * param_2)


/* ProceduralPlacementManager::addBlockMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
ProceduralPlacementManager::addBlockMask
          (ProceduralPlacementManager *this,basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  long *this_00;
  byte local_60;
  undefined8 local_5f;
  undefined2 local_57;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0xb0) == 0) {
    this_00 = (long *)operator_new(200);
    local_60 = 0x12;
    local_57 = 0x4b;
    local_5f._0_1_ = 'B';
    local_5f._1_1_ = 'L';
    local_5f._2_1_ = 'O';
    local_5f._3_1_ = 'C';
    local_5f._4_1_ = 'K';
    local_5f._5_1_ = 'M';
    local_5f._6_1_ = 'A';
    local_5f._7_1_ = 'S';
                    /* try { // try from 009d2c60 to 009d2c6f has its CatchHandler @ 009d2cc4 */
    ProceduralPlacementMask::ProceduralPlacementMask
              ((ProceduralPlacementMask *)this_00,(basic_string *)&local_60,param_1,param_2);
    *(long **)(this + 0xb0) = this_00;
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
      this_00 = *(long **)(this + 0xb0);
    }
    (**(code **)(*this_00 + 0x28))(this_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


