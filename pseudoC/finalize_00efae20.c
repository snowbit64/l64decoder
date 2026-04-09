// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finalize
// Entry Point: 00efae20
// Size: 872 bytes
// Signature: undefined finalize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::BytecodeBuilder::finalize() */

void Luau::BytecodeBuilder::finalize(void)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  byte *pbVar4;
  byte *__n;
  long lVar5;
  int iVar6;
  byte **in_x0;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  byte **ppbVar13;
  byte *pbVar14;
  byte local_70 [4];
  byte local_6c [4];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pbVar12 = (byte *)0x0;
  plVar3 = (long *)in_x0[0x3c];
  pbVar4 = in_x0[0x3d];
  pbVar8 = in_x0[0x3f];
  __n = in_x0[0x40];
  if (pbVar4 == (byte *)0x0) {
LAB_00efaecc:
    if (pbVar12 != pbVar4) {
      if (pbVar8 == (byte *)0x0) {
        do {
          pbVar8 = pbVar12 + 1;
          if (pbVar8 < pbVar4) {
            plVar7 = plVar3 + (long)pbVar12 * 3 + 3;
            while (*plVar7 == 0) {
              pbVar8 = pbVar8 + 1;
              plVar7 = plVar7 + 3;
              if (pbVar4 == pbVar8) goto LAB_00efafa8;
            }
          }
          pbVar12 = pbVar8;
        } while (pbVar8 != pbVar4);
      }
      else {
        do {
          pbVar14 = pbVar12 + 1;
          if (pbVar14 < pbVar4) {
            ppbVar13 = (byte **)(plVar3 + (long)pbVar12 * 3 + 4);
            while (((ppbVar13[-1] != (byte *)0x0 && (*ppbVar13 == __n)) &&
                   (iVar6 = memcmp(ppbVar13[-1],pbVar8,(size_t)__n), iVar6 == 0))) {
              pbVar14 = pbVar14 + 1;
              ppbVar13 = ppbVar13 + 3;
              if (pbVar4 == pbVar14) goto LAB_00efafa8;
            }
          }
          pbVar12 = pbVar14;
        } while (pbVar12 != pbVar4);
      }
    }
  }
  else {
    plVar7 = plVar3;
    if (pbVar8 == (byte *)0x0) {
      do {
        if (*plVar7 != 0) goto LAB_00efaecc;
        pbVar12 = pbVar12 + 1;
        plVar7 = plVar7 + 3;
      } while (pbVar4 != pbVar12);
    }
    else {
      ppbVar13 = (byte **)(plVar3 + 1);
      do {
        if (((ppbVar13[-1] == (byte *)0x0) || (*ppbVar13 != __n)) ||
           (iVar6 = memcmp(ppbVar13[-1],pbVar8,(size_t)__n), iVar6 != 0)) goto LAB_00efaecc;
        pbVar12 = pbVar12 + 1;
        ppbVar13 = ppbVar13 + 3;
      } while (pbVar4 != pbVar12);
    }
  }
LAB_00efafa8:
  pbVar12 = *in_x0;
  pbVar8 = in_x0[1];
  if (pbVar12 != pbVar8) {
    if ((byte *)0x57 < pbVar8 + (-0x58 - (long)pbVar12)) {
      uVar2 = (ulong)(pbVar8 + (-0x58 - (long)pbVar12)) / 0x58 + 1;
      uVar9 = uVar2 & 0x7fffffffffffffe;
      pbVar12 = pbVar12 + uVar9 * 0x58;
      uVar10 = uVar9;
      do {
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
      if (uVar2 == uVar9) goto LAB_00efb078;
    }
    do {
      pbVar12 = pbVar12 + 0x58;
    } while (pbVar12 != pbVar8);
  }
LAB_00efb078:
  ppbVar13 = in_x0 + 0x49;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)ppbVar13);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            ppbVar13,'\x03');
  writeStringTable((BytecodeBuilder *)in_x0,(basic_string *)ppbVar13);
  uVar11 = (int)((ulong)((long)in_x0[1] - (long)*in_x0) >> 3) * -0x45d1745d;
  do {
    local_70[0] = (byte)uVar11 & 0x7f | (0x7f < uVar11) << 7;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)ppbVar13,(ulong)local_70);
    bVar1 = 0x7f < uVar11;
    uVar11 = uVar11 >> 7;
  } while (bVar1);
  pbVar8 = in_x0[1];
  for (pbVar12 = *in_x0; pbVar12 != pbVar8; pbVar12 = pbVar12 + 0x58) {
    pbVar4 = *(byte **)(pbVar12 + 0x10);
    if ((*pbVar12 & 1) == 0) {
      pbVar4 = pbVar12 + 1;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)ppbVar13,(ulong)pbVar4);
  }
  uVar11 = *(uint *)((long)in_x0 + 0x1c);
  do {
    local_6c[0] = (byte)uVar11 & 0x7f | (0x7f < uVar11) << 7;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)ppbVar13,(ulong)local_6c);
    bVar1 = 0x7f < uVar11;
    uVar11 = uVar11 >> 7;
  } while (bVar1);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


