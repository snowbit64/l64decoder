// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginFunction
// Entry Point: 00ef8550
// Size: 336 bytes
// Signature: undefined __thiscall beginFunction(BytecodeBuilder * this, uchar param_1, bool param_2)


/* Luau::BytecodeBuilder::beginFunction(unsigned char, bool) */

int __thiscall
Luau::BytecodeBuilder::beginFunction(BytecodeBuilder *this,uchar param_1,bool param_2)

{
  basic_string *pbVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulong local_88;
  basic_string local_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pbVar1 = *(basic_string **)(this + 8);
  local_80 = 0;
  lVar4 = *(long *)this;
  uStack_98 = 0;
  local_a0 = 0;
  local_90 = (void *)0x0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_60 = 0;
  local_68 = (void *)0x0;
  pvStack_50 = (void *)0x0;
  local_58 = 0;
  local_88 = (ulong)CONCAT13(param_2,(uint3)param_1 << 8);
  if (pbVar1 == *(basic_string **)(this + 0x10)) {
                    /* try { // try from 00ef85f4 to 00ef85ff has its CatchHandler @ 00ef86a0 */
    std::__ndk1::
    vector<Luau::BytecodeBuilder::Function,std::__ndk1::allocator<Luau::BytecodeBuilder::Function>>
    ::__push_back_slow_path<Luau::BytecodeBuilder::Function_const&>
              ((vector<Luau::BytecodeBuilder::Function,std::__ndk1::allocator<Luau::BytecodeBuilder::Function>>
                *)this,(Function *)&local_a0);
  }
  else {
                    /* try { // try from 00ef85a8 to 00ef85b3 has its CatchHandler @ 00ef86d8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar1);
    pbVar1[8] = local_80;
    *(ulong *)(pbVar1 + 6) = local_88;
                    /* try { // try from 00ef85d0 to 00ef85d7 has its CatchHandler @ 00ef86c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar1 + 10);
                    /* try { // try from 00ef85e4 to 00ef85e7 has its CatchHandler @ 00ef86a8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar1 + 0x10);
    *(basic_string **)(this + 8) = pbVar1 + 0x16;
  }
  this[0xb0] = (BytecodeBuilder)0x0;
  iVar2 = (int)((ulong)((long)pbVar1 - lVar4) >> 3) * -0x45d1745d;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(int *)(this + 0x18) = iVar2;
  if ((uStack_60 & 1) != 0) {
    operator_delete(pvStack_50);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_a0 & 1) == 0) {
    if (*(long *)(lVar3 + 0x28) != local_48) {
LAB_00ef869c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    operator_delete(local_90);
    if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00ef869c;
  }
  return iVar2;
}


