// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IntToString<CryptoPP::Integer>
// Entry Point: 00d03ce4
// Size: 800 bytes
// Signature: basic_string __thiscall IntToString<CryptoPP::Integer>(CryptoPP * this, Integer param_1, uint param_2)


/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   CryptoPP::IntToString<CryptoPP::Integer>(CryptoPP::Integer, unsigned int) */

void __thiscall
CryptoPP::IntToString<CryptoPP::Integer>(undefined8 *param_1,CryptoPP *this,uint param_3)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  undefined8 *local_78;
  int local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  DataMemoryBarrier(2,3);
  if ((DAT_02120808 & 1) == 0) {
    DAT_02120978 = Baseline_MultiplyTop2;
    DAT_02120980 = Baseline_MultiplyTop4;
    DAT_021208a0 = Baseline_Multiply2;
    DAT_021208a8 = Baseline_Multiply4;
    DAT_021208b0 = Baseline_Multiply8;
    DAT_02120930 = Baseline_MultiplyBottom2;
    DAT_02120938 = Baseline_MultiplyBottom4;
    DAT_02120940 = Baseline_MultiplyBottom8;
    DAT_021208e8 = Baseline_Square2;
    DAT_021208f0 = Baseline_Square4;
    DAT_021208f8 = Baseline_Square8;
    DAT_02120988 = Baseline_MultiplyTop8;
    DAT_021208c0 = Baseline_Multiply16;
    DAT_02120950 = Baseline_MultiplyBottom16;
    DAT_02120908 = Baseline_Square16;
    DAT_02120998 = Baseline_MultiplyTop16;
    DAT_02120808 = 1;
    DataMemoryBarrier(2,3);
  }
  local_98[0] = &PTR__Integer_0100c890;
  uStack_80 = 2;
  local_88 = 0x3fffffffffffffff;
  puVar11 = (undefined8 *)UnalignedAllocate(8);
  local_70 = 0;
  *puVar11 = 0;
  local_78 = puVar11;
  iVar10 = Integer::Compare((Integer *)this,(Integer *)local_98);
  *(undefined4 *)((long)puVar11 + 4) = 0;
  *(undefined4 *)puVar11 = 0;
                    /* try { // try from 00d03e40 to 00d03e47 has its CatchHandler @ 00d042f0 */
  UnalignedDeallocate(puVar11);
  if (iVar10 == 0) {
    *(undefined *)((long)param_1 + 2) = 0;
    *(undefined2 *)param_1 = 0x3002;
    goto LAB_00d04234;
  }
  iVar10 = *(int *)(this + 0x28);
  if (iVar10 == 1) {
    *(undefined4 *)(this + 0x28) = 0;
  }
  uVar14 = *(ulong *)(this + 0x18);
  piVar3 = *(int **)(this + 0x20);
  uVar1 = param_3 & 0x3fffffff;
  uVar21 = uVar14;
  if (*piVar3 == 0) {
    do {
      uVar20 = uVar21;
      if (uVar20 == 0) break;
      uVar21 = uVar20 - 1;
    } while (piVar3[uVar20 - 1] == 0);
    bVar9 = (int)uVar20 == 0;
  }
  else {
    bVar9 = false;
  }
  iVar16 = (int)uVar14 * -0x20;
  do {
    if (uVar14 == 0) goto LAB_00d03f40;
    uVar21 = uVar14 - 1;
    lVar13 = uVar14 - 1;
    iVar16 = iVar16 + 0x20;
    uVar14 = uVar21;
  } while (piVar3[lVar13] == 0);
  if ((int)uVar21 == -1) {
LAB_00d03f40:
    uVar12 = 0;
joined_r0x00d03f44:
    if (uVar1 != 0) goto LAB_00d03f48;
LAB_00d03f0c:
    uStack_a8 = (ulong)(uVar12 / 1 + 1);
    if (0xfffffffe < uVar12 / 1) goto LAB_00d03f90;
  }
  else {
    if (piVar3[uVar21 & 0xffffffff] == 0) {
      uVar12 = -iVar16;
      goto joined_r0x00d03f44;
    }
    uVar19 = 0;
    uVar17 = 0x20;
    do {
      uVar5 = uVar19 + uVar17 >> 1;
      uVar12 = uVar5;
      if ((uint)piVar3[uVar21 & 0xffffffff] >> (ulong)(uVar5 & 0x1f) != 0) {
        uVar12 = uVar17;
        uVar19 = uVar5;
      }
      uVar17 = uVar12;
    } while (1 < uVar12 - uVar19);
    uVar12 = uVar12 - iVar16;
    if (uVar1 == 0) goto LAB_00d03f0c;
LAB_00d03f48:
    uVar19 = 0;
    uVar17 = 0x20;
    do {
      uVar6 = uVar19 + uVar17 >> 1;
      uVar5 = uVar6;
      if (uVar1 >> (ulong)(uVar6 & 0x1f) != 0) {
        uVar5 = uVar17;
        uVar19 = uVar6;
      }
      uVar17 = uVar5;
    } while (1 < uVar5 - uVar19);
    uVar19 = uVar5 - 1;
    if (uVar5 == 0 || uVar19 == 0) {
      uVar19 = 1;
    }
    uVar17 = 0;
    if (uVar19 != 0) {
      uVar17 = uVar12 / uVar19;
    }
    uStack_a8 = (ulong)(uVar17 + 1);
    if (uVar17 == 0xffffffff) {
LAB_00d03f90:
      local_b0 = 0xffffffffffffffff;
      local_a0 = (void *)0x0;
      DataMemoryBarrier(2,3);
      goto joined_r0x00d03fa4;
    }
  }
  local_b0 = 0xffffffffffffffff;
  local_a0 = (void *)UnalignedAllocate(uStack_a8);
  DataMemoryBarrier(2,3);
joined_r0x00d03fa4:
  if ((DAT_02120808 & 1) == 0) {
    DAT_02120978 = Baseline_MultiplyTop2;
    DAT_02120980 = Baseline_MultiplyTop4;
    DAT_021208a0 = Baseline_Multiply2;
    DAT_021208a8 = Baseline_Multiply4;
    DAT_021208b0 = Baseline_Multiply8;
    FUN_00fa8628();
    return;
  }
  uStack_80 = 2;
  local_88 = 0x3fffffffffffffff;
  local_98[0] = &PTR__Integer_0100c890;
  local_78 = (undefined8 *)UnalignedAllocate(8);
  local_70 = 0;
  *local_78 = 0;
  uVar12 = 0;
  iVar16 = *(int *)(this + 0x28);
  cVar15 = 'W';
  iVar4 = local_70;
  if ((int)param_3 < 0) {
    cVar15 = '7';
  }
  do {
    local_70 = iVar4;
    if ((iVar16 != 1) && (**(int **)(this + 0x20) == 0)) {
      lVar13 = *(long *)(this + 0x18);
      do {
        if (lVar13 == 0) goto LAB_00d04154;
        lVar18 = lVar13 + -1;
        lVar8 = lVar13 + -1;
        lVar13 = lVar18;
      } while ((*(int **)(this + 0x20))[lVar8] == 0);
      if ((int)lVar18 == -1) break;
    }
    Integer::Divide((uint *)&uStack_d0,(Integer *)local_98,(Integer *)this,uVar1);
    cVar2 = '0';
    if (9 < (uint)uStack_d0) {
      cVar2 = cVar15;
    }
    *(char *)((long)local_a0 + (ulong)uVar12) = cVar2 + (char)uStack_d0;
    uVar12 = uVar12 + 1;
    puVar11 = *(undefined8 **)(this + 0x20);
    uVar21 = *(ulong *)(this + 0x18);
    uVar14 = *(ulong *)(this + 0x10);
    *(undefined8 **)(this + 0x20) = local_78;
    iVar4 = *(int *)(this + 0x28);
    *(ulong *)(this + 0x18) = uStack_80;
    *(ulong *)(this + 0x10) = local_88;
    *(int *)(this + 0x28) = local_70;
    local_78 = puVar11;
    local_88 = uVar14;
    uStack_80 = uVar21;
    iVar16 = local_70;
  } while( true );
LAB_00d04154:
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)&uStack_d0);
  if (iVar10 == 1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back((char)&uStack_d0);
  }
  if (bVar9) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back((char)&uStack_d0);
  }
  uVar14 = (ulong)uVar12;
  while (uVar14 = uVar14 - 1, uVar14 != 0xffffffffffffffff) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back((char)&uStack_d0);
  }
  if ((param_3 >> 0x1e & 1) != 0) {
    switch(uVar1 - 2 >> 1 | uVar1 << 0x1f) {
    case 0:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back((char)&uStack_d0);
      break;
    case 3:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back((char)&uStack_d0);
      break;
    case 4:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back((char)&uStack_d0);
      break;
    case 7:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back((char)&uStack_d0);
    }
  }
  uVar14 = local_88;
  if (uStack_80 <= local_88) {
    uVar14 = uStack_80;
  }
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  local_98[0] = &PTR__Integer_0100c890;
  param_1[2] = uStack_c0;
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)((long)local_78 + uVar14 * 4 + -4) = 0;
  }
  UnalignedDeallocate(local_78);
  uVar14 = local_b0;
  if (uStack_a8 <= local_b0) {
    uVar14 = uStack_a8;
  }
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined *)((long)local_a0 + (uVar14 - 1)) = 0;
  }
  UnalignedDeallocate(local_a0);
LAB_00d04234:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


