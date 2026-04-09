// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dump
// Entry Point: 00c5754c
// Size: 744 bytes
// Signature: undefined __thiscall dump(GsTVariable * this, GsTInfoSink * param_1)


/* GsTVariable::dump(GsTInfoSink&) const */

void __thiscall GsTVariable::dump(GsTVariable *this,GsTInfoSink *param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  size_t sVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong *puVar11;
  byte local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  pbVar9 = *(byte **)(this + 8);
  pbVar10 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar10 = pbVar9 + 1;
  }
  sVar8 = strlen((char *)pbVar10);
  puVar11 = (ulong *)(param_1 + 0x18);
  bVar7 = (*(byte *)puVar11 & 1) != 0;
  uVar2 = (ulong)(*(byte *)puVar11 >> 1);
  if (bVar7) {
    uVar2 = *(ulong *)(param_1 + 0x20);
  }
  uVar3 = 0x16;
  if (bVar7) {
    uVar3 = (*puVar11 & 0xfffffffffffffffe) - 1;
  }
  if (uVar3 < sVar8 + uVar2 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar11);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar11);
  bVar7 = ((byte)param_1[0x18] & 1) != 0;
  uVar2 = (ulong)((byte)param_1[0x18] >> 1);
  if (bVar7) {
    uVar2 = *(ulong *)(param_1 + 0x20);
  }
  uVar3 = 0x16;
  if (bVar7) {
    uVar3 = (*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe) - 1;
  }
  if (uVar3 < uVar2 + 4) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar11);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar11);
  SHC_Type::getUserString();
  uVar2 = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    uVar2 = local_58;
  }
  bVar7 = ((byte)param_1[0x18] & 1) != 0;
  uVar3 = (ulong)((byte)param_1[0x18] >> 1);
  if (bVar7) {
    uVar3 = *(ulong *)(param_1 + 0x20);
  }
  uVar4 = 0x16;
  if (bVar7) {
    uVar4 = (*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe) - 1;
  }
  if (uVar4 < uVar2 + uVar3 + 2) {
                    /* try { // try from 00c5768c to 00c576bf has its CatchHandler @ 00c57834 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar11);
  }
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar11,(ulong)pvVar1);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  pbVar10 = *(byte **)(this + 0x10);
  if (pbVar10 != (byte *)0x0) {
    uVar2 = (ulong)(*pbVar10 >> 1);
    if ((*pbVar10 & 1) != 0) {
      uVar2 = *(ulong *)(pbVar10 + 8);
    }
    if (uVar2 != 0) {
      bVar7 = ((byte)param_1[0x18] & 1) != 0;
      uVar2 = (ulong)((byte)param_1[0x18] >> 1);
      if (bVar7) {
        uVar2 = *(ulong *)(param_1 + 0x20);
      }
      uVar3 = 0x16;
      if (bVar7) {
        uVar3 = (*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe) - 1;
      }
      if (uVar3 < uVar2 + 5) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::reserve((ulong)puVar11);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)puVar11);
      pbVar10 = *(byte **)(this + 0x10);
      bVar5 = *pbVar10;
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar10 + 8);
      }
      bVar7 = ((byte)param_1[0x18] & 1) != 0;
      uVar3 = (ulong)((byte)param_1[0x18] >> 1);
      if (bVar7) {
        uVar3 = *(ulong *)(param_1 + 0x20);
      }
      uVar4 = 0x16;
      if (bVar7) {
        uVar4 = (*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe) - 1;
      }
      if (uVar4 < uVar2 + uVar3 + 2) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::reserve((ulong)puVar11);
        bVar5 = *pbVar10;
      }
      pbVar9 = *(byte **)(pbVar10 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar9 = pbVar10 + 1;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)puVar11,(ulong)pbVar9);
    }
  }
  bVar7 = ((byte)param_1[0x18] & 1) != 0;
  uVar2 = (ulong)((byte)param_1[0x18] >> 1);
  if (bVar7) {
    uVar2 = *(ulong *)(param_1 + 0x20);
  }
  uVar3 = 0x16;
  if (bVar7) {
    uVar3 = (*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe) - 1;
  }
  if (uVar3 < uVar2 + 3) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)puVar11);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)puVar11);
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


