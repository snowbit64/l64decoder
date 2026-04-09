// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: join
// Entry Point: 00ee28b0
// Size: 540 bytes
// Signature: undefined __cdecl join(vector * param_1, basic_string_view param_2)


/* Luau::join(std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const&,
   std::__ndk1::basic_string_view<char, std::__ndk1::char_traits<char> >) */

void Luau::join(vector *param_1,basic_string_view param_2)

{
  byte *pbVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  size_t in_x2;
  ulong *in_x8;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  void *pvVar14;
  byte *pbVar15;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pbVar8 = *(byte **)param_1;
  pbVar15 = *(byte **)(param_1 + 8);
  if (pbVar8 == pbVar15) {
    *(undefined2 *)in_x8 = 0;
    goto LAB_00ee2a9c;
  }
  lVar7 = (((long)pbVar15 - (long)pbVar8 >> 3) * -0x5555555555555555 + -1) * in_x2;
  uVar10 = ((long)pbVar15 - (long)pbVar8) - 0x18;
  if (uVar10 < 0x18) {
LAB_00ee2994:
    do {
      pbVar1 = pbVar8 + 0x18;
      uVar10 = (ulong)(*pbVar8 >> 1);
      if ((*pbVar8 & 1) != 0) {
        uVar10 = *(ulong *)(pbVar8 + 8);
      }
      lVar7 = uVar10 + lVar7;
      cVar6 = (char)lVar7;
      pbVar8 = pbVar1;
    } while (pbVar1 != pbVar15);
  }
  else {
    lVar9 = 0;
    uVar10 = uVar10 / 0x18 + 1;
    uVar11 = uVar10 & 0x1ffffffffffffffe;
    puVar12 = (ulong *)(pbVar8 + 0x20);
    uVar13 = uVar11;
    do {
      uVar2 = (ulong)(*(byte *)(puVar12 + -4) >> 1);
      if ((*(byte *)(puVar12 + -4) & 1) != 0) {
        uVar2 = puVar12[-3];
      }
      lVar7 = uVar2 + lVar7;
      uVar2 = (ulong)(*(byte *)(puVar12 + -1) >> 1);
      if ((*(byte *)(puVar12 + -1) & 1) != 0) {
        uVar2 = *puVar12;
      }
      uVar13 = uVar13 - 2;
      lVar9 = uVar2 + lVar9;
      puVar12 = puVar12 + 6;
    } while (uVar13 != 0);
    lVar7 = lVar9 + lVar7;
    cVar6 = (char)lVar7;
    pbVar8 = pbVar8 + uVar11 * 0x18;
    if (uVar10 != uVar11) goto LAB_00ee2994;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (void *)0x0;
                    /* try { // try from 00ee29c0 to 00ee29cf has its CatchHandler @ 00ee2acc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  resize((ulong)&local_70,cVar6);
  pbVar15 = *(byte **)param_1;
  sVar3 = *(size_t *)(pbVar15 + 8);
  pbVar8 = *(byte **)(pbVar15 + 0x10);
  pvVar14 = (void *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pvVar14 = local_60;
  }
  if ((*pbVar15 & 1) == 0) {
    pbVar8 = pbVar15 + 1;
    sVar3 = (ulong)(*pbVar15 >> 1);
  }
  memcpy(pvVar14,pbVar8,sVar3);
  pbVar8 = pbVar15 + 0x18;
  if (pbVar8 != *(byte **)(param_1 + 8)) {
    uVar10 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      uVar10 = *(ulong *)(pbVar15 + 8);
    }
    pvVar14 = (void *)((long)pvVar14 + uVar10);
    do {
      memcpy(pvVar14,(void *)(ulong)param_2,in_x2);
      sVar3 = *(size_t *)(pbVar8 + 8);
      pbVar15 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar15 = pbVar8 + 1;
        sVar3 = (ulong)(*pbVar8 >> 1);
      }
      memcpy((void *)((long)pvVar14 + in_x2),pbVar15,sVar3);
      bVar4 = *pbVar8;
      puVar12 = (ulong *)(pbVar8 + 8);
      pbVar8 = pbVar8 + 0x18;
      uVar10 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar10 = *puVar12;
      }
      pvVar14 = (void *)((long)(void *)((long)pvVar14 + in_x2) + uVar10);
    } while (pbVar8 != *(byte **)(param_1 + 8));
  }
  in_x8[1] = uStack_68;
  *in_x8 = local_70;
  in_x8[2] = (ulong)local_60;
LAB_00ee2a9c:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


