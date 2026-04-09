// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dump
// Entry Point: 00c57850
// Size: 744 bytes
// Signature: undefined __thiscall dump(GsTFunction * this, GsTInfoSink * param_1)


/* GsTFunction::dump(GsTInfoSink&) const */

void __thiscall GsTFunction::dump(GsTFunction *this,GsTInfoSink *param_1)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  size_t sVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong *puVar11;
  byte local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  pbVar9 = *(byte **)(this + 8);
  pbVar10 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar10 = pbVar9 + 1;
  }
  sVar7 = strlen((char *)pbVar10);
  puVar11 = (ulong *)(param_1 + 0x18);
  bVar6 = (*(byte *)puVar11 & 1) != 0;
  uVar3 = (ulong)(*(byte *)puVar11 >> 1);
  if (bVar6) {
    uVar3 = *(ulong *)(param_1 + 0x20);
  }
  uVar4 = 0x16;
  if (bVar6) {
    uVar4 = (*puVar11 & 0xfffffffffffffffe) - 1;
  }
  if (uVar4 < sVar7 + uVar3 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar11);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar11);
  bVar6 = ((byte)param_1[0x18] & 1) != 0;
  uVar3 = (ulong)((byte)param_1[0x18] >> 1);
  if (bVar6) {
    uVar3 = *(ulong *)(param_1 + 0x20);
  }
  uVar4 = 0x16;
  if (bVar6) {
    uVar4 = (*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe) - 1;
  }
  if (uVar4 < uVar3 + 4) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar11);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar11);
  SHC_Type::getUserString();
  uVar3 = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    uVar3 = local_58;
  }
  bVar6 = ((byte)param_1[0x18] & 1) != 0;
  uVar4 = (ulong)((byte)param_1[0x18] >> 1);
  if (bVar6) {
    uVar4 = *(ulong *)(param_1 + 0x20);
  }
  uVar1 = 0x16;
  if (bVar6) {
    uVar1 = (*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe) - 1;
  }
  if (uVar1 < uVar3 + uVar4 + 2) {
                    /* try { // try from 00c57990 to 00c57afb has its CatchHandler @ 00c57b38 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar11);
  }
  pvVar2 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar2 = local_50;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar11,(ulong)pvVar2);
  lVar8 = __strlen_chk(&DAT_004d3339,2);
  bVar6 = ((byte)param_1[0x18] & 1) != 0;
  uVar3 = (ulong)((byte)param_1[0x18] >> 1);
  if (bVar6) {
    uVar3 = *(ulong *)(param_1 + 0x20);
  }
  uVar4 = 0x16;
  if (bVar6) {
    uVar4 = (*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe) - 1;
  }
  if (uVar4 < lVar8 + uVar3 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar11);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar11);
  pbVar9 = (byte *)(**(code **)(*(long *)this + 0x10))(this);
  pbVar10 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar10 = pbVar9 + 1;
  }
  lVar8 = __strlen_chk(pbVar10,0xffffffffffffffff);
  bVar6 = ((byte)param_1[0x18] & 1) != 0;
  uVar3 = (ulong)((byte)param_1[0x18] >> 1);
  if (bVar6) {
    uVar3 = *(ulong *)(param_1 + 0x20);
  }
  uVar4 = 0x16;
  if (bVar6) {
    uVar4 = (*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe) - 1;
  }
  if (uVar4 < lVar8 + uVar3 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar11);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar11);
  lVar8 = __strlen_chk(&DAT_004fddf9,2);
  bVar6 = ((byte)param_1[0x18] & 1) != 0;
  uVar3 = (ulong)((byte)param_1[0x18] >> 1);
  if (bVar6) {
    uVar3 = *(ulong *)(param_1 + 0x20);
  }
  uVar4 = 0x16;
  if (bVar6) {
    uVar4 = (*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe) - 1;
  }
  if (uVar4 < lVar8 + uVar3 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar11);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar11);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


