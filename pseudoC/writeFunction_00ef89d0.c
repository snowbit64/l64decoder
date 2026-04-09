// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeFunction
// Entry Point: 00ef89d0
// Size: 1916 bytes
// Signature: undefined __thiscall writeFunction(BytecodeBuilder * this, basic_string * param_1, uint param_2)


/* Luau::BytecodeBuilder::writeFunction(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, unsigned int) const */

void __thiscall
Luau::BytecodeBuilder::writeFunction(BytecodeBuilder *this,basic_string *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar10 = *(long *)this;
  lVar12 = lVar10 + (ulong)param_2 * 0x58;
  local_70._0_1_ = *(undefined *)(lVar12 + 0x18);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1,(ulong)&local_70);
  local_70._0_1_ = *(undefined *)(lVar12 + 0x19);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1,(ulong)&local_70);
  local_70._0_1_ = *(undefined *)(lVar12 + 0x1a);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1,(ulong)&local_70);
  local_70 = CONCAT71(local_70._1_7_,*(undefined *)(lVar12 + 0x1b));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1,(ulong)&local_70);
  uVar13 = (ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20)) >> 2;
  do {
    uVar11 = (uint)uVar13;
    local_70 = CONCAT71(local_70._1_7_,(byte)uVar13 & 0x7f | (0x7f < uVar11) << 7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1,(ulong)&local_70);
    uVar13 = (ulong)(uVar11 >> 7);
  } while (0x7f < uVar11);
  lVar12 = *(long *)(this + 0x20);
  if (*(long *)(this + 0x28) != lVar12) {
    uVar13 = 0;
    do {
      uVar11 = *(uint *)(lVar12 + uVar13 * 4);
      uVar6 = FUN_00efb464(uVar11 & 0xff);
      plVar8 = *(long **)(this + 0x240);
      uVar7 = uVar11;
      if (plVar8 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar11);
        uVar11 = *(uint *)(*(long *)(this + 0x20) + uVar13 * 4);
      }
      local_70 = CONCAT44(local_70._4_4_,uVar11 & 0xffffff00 | uVar7 & 0xff);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_70);
      if (1 < uVar6) {
        local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(*(long *)(this + 0x20) + uVar13 * 4 + 4))
        ;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)param_1,(ulong)&local_70);
      }
      lVar12 = *(long *)(this + 0x20);
      uVar13 = uVar13 + uVar6;
    } while (uVar13 < (ulong)(*(long *)(this + 0x28) - lVar12 >> 2));
  }
  uVar13 = (ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50)) >> 4;
  do {
    uVar11 = (uint)uVar13;
    local_70 = CONCAT71(local_70._1_7_,(byte)uVar13 & 0x7f | (0x7f < uVar11) << 7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1,(ulong)&local_70);
    uVar13 = (ulong)(uVar11 >> 7);
  } while (0x7f < uVar11);
  puVar2 = *(uint **)(this + 0x58);
  for (puVar1 = *(uint **)(this + 0x50); puVar1 != puVar2; puVar1 = puVar1 + 4) {
    if (6 < *puVar1) goto LAB_00ef8be0;
    local_70._1_7_ = (uint7)((ulong)local_70 >> 8);
    switch(*puVar1) {
    case 0:
      local_70 = (ulong)local_70._1_7_ << 8;
      break;
    case 1:
      local_70._0_1_ = 1;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_70);
      local_70 = CONCAT71(local_70._1_7_,*(undefined *)(puVar1 + 2));
      break;
    case 2:
      local_70 = CONCAT71(local_70._1_7_,2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_70);
      local_70 = *(long *)(puVar1 + 2);
      break;
    case 3:
      local_70 = CONCAT71(local_70._1_7_,3);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_70);
      uVar11 = puVar1[2];
      do {
        local_70 = CONCAT71(local_70._1_7_,(byte)uVar11 & 0x7f | (0x7f < uVar11) << 7);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)param_1,(ulong)&local_70);
        bVar5 = 0x7f < uVar11;
        uVar11 = uVar11 >> 7;
      } while (bVar5);
      goto LAB_00ef8be0;
    case 4:
      local_70 = CONCAT71(local_70._1_7_,4);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_70);
      local_70 = CONCAT44(local_70._4_4_,puVar1[2]);
      break;
    case 5:
      uVar11 = puVar1[2];
      lVar12 = *(long *)(this + 0x98);
      local_70 = CONCAT71(local_70._1_7_,5);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_70);
      puVar14 = (uint *)(lVar12 + (ulong)uVar11 * 0x84 + 0x80);
      uVar7 = *puVar14;
      do {
        local_70 = CONCAT71(local_70._1_7_,(byte)uVar7 & 0x7f | (0x7f < uVar7) << 7);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)param_1,(ulong)&local_70);
        bVar5 = 0x7f < uVar7;
        uVar7 = uVar7 >> 7;
      } while (bVar5);
      if (*puVar14 != 0) {
        uVar13 = 0;
        do {
          uVar7 = *(uint *)(lVar12 + (ulong)uVar11 * 0x84 + uVar13 * 4);
          do {
            local_70 = CONCAT71(local_70._1_7_,(byte)uVar7 & 0x7f | (0x7f < uVar7) << 7);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)param_1,(ulong)&local_70);
            bVar5 = 0x7f < uVar7;
            uVar7 = uVar7 >> 7;
          } while (bVar5);
          uVar13 = uVar13 + 1;
        } while (uVar13 < *puVar14);
      }
      goto LAB_00ef8be0;
    case 6:
      local_70 = CONCAT71(local_70._1_7_,6);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_70);
      uVar11 = puVar1[2];
      do {
        local_70 = CONCAT71(local_70._1_7_,(byte)uVar11 & 0x7f | (0x7f < uVar11) << 7);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)param_1,(ulong)&local_70);
        bVar5 = 0x7f < uVar11;
        uVar11 = uVar11 >> 7;
      } while (bVar5);
      goto LAB_00ef8be0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1,(ulong)&local_70);
LAB_00ef8be0:
  }
  uVar13 = (ulong)(*(long *)(this + 0x70) - *(long *)(this + 0x68)) >> 2;
  do {
    uVar11 = (uint)uVar13;
    local_70 = CONCAT71(local_70._1_7_,(byte)uVar13 & 0x7f | (0x7f < uVar11) << 7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1,(ulong)&local_70);
    uVar13 = (ulong)(uVar11 >> 7);
  } while (0x7f < uVar11);
  puVar2 = *(uint **)(this + 0x70);
  for (puVar1 = *(uint **)(this + 0x68); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    uVar11 = *puVar1;
    do {
      local_70 = CONCAT71(local_70._1_7_,(byte)uVar11 & 0x7f | (0x7f < uVar11) << 7);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_70);
      bVar5 = 0x7f < uVar11;
      uVar11 = uVar11 >> 7;
    } while (bVar5);
  }
  uVar11 = *(uint *)(lVar10 + (ulong)param_2 * 0x58 + 0x20);
  do {
    local_70 = CONCAT71(local_70._1_7_,(byte)uVar11 & 0x7f | (0x7f < uVar11) << 7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1,(ulong)&local_70);
    bVar5 = 0x7f < uVar11;
    uVar11 = uVar11 >> 7;
  } while (bVar5);
  uVar11 = *(uint *)(lVar10 + (ulong)param_2 * 0x58 + 0x1c);
  do {
    local_70 = CONCAT71(local_70._1_7_,(byte)uVar11 & 0x7f | (0x7f < uVar11) << 7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1,(ulong)&local_70);
    bVar5 = 0x7f < uVar11;
    uVar11 = uVar11 >> 7;
  } while (bVar5);
  piVar9 = *(int **)(this + 0x38);
  do {
    if (piVar9 == *(int **)(this + 0x40)) {
      local_70 = CONCAT71(local_70._1_7_,1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_70);
      writeLineInfo(this,param_1);
      if (*(long *)(this + 0x1b0) == *(long *)(this + 0x1b8)) goto LAB_00ef8f38;
      goto LAB_00ef8f44;
    }
    iVar3 = *piVar9;
    piVar9 = piVar9 + 1;
  } while (iVar3 != 0);
  local_70 = (ulong)local_70._1_7_ << 8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1,(ulong)&local_70);
  if (*(long *)(this + 0x1b0) == *(long *)(this + 0x1b8)) {
LAB_00ef8f38:
    if (*(long *)(this + 0x1c8) == *(long *)(this + 0x1d0)) {
      local_70._0_1_ = 0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_70);
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return;
      }
      goto LAB_00ef9148;
    }
  }
LAB_00ef8f44:
  local_70._0_1_ = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1,(ulong)&local_70);
  uVar13 = (ulong)(*(long *)(this + 0x1b8) - *(long *)(this + 0x1b0)) >> 4;
  do {
    uVar11 = (uint)uVar13;
    local_70._0_1_ = (byte)uVar13 & 0x7f | (0x7f < uVar11) << 7;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1,(ulong)&local_70);
    uVar13 = (ulong)(uVar11 >> 7);
  } while (0x7f < uVar11);
  puVar2 = *(uint **)(this + 0x1b8);
  for (puVar1 = *(uint **)(this + 0x1b0); puVar1 != puVar2; puVar1 = puVar1 + 4) {
    uVar11 = *puVar1;
    do {
      local_70._0_1_ = (byte)uVar11 & 0x7f | (0x7f < uVar11) << 7;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_70);
      bVar5 = 0x7f < uVar11;
      uVar11 = uVar11 >> 7;
    } while (bVar5);
    uVar11 = puVar1[2];
    do {
      local_70._0_1_ = (byte)uVar11 & 0x7f | (0x7f < uVar11) << 7;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_70);
      bVar5 = 0x7f < uVar11;
      uVar11 = uVar11 >> 7;
    } while (bVar5);
    uVar11 = puVar1[3];
    do {
      local_70._0_1_ = (byte)uVar11 & 0x7f | (0x7f < uVar11) << 7;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_70);
      bVar5 = 0x7f < uVar11;
      uVar11 = uVar11 >> 7;
    } while (bVar5);
    local_70._0_1_ = *(byte *)(puVar1 + 1);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1,(ulong)&local_70);
  }
  uVar13 = (ulong)(*(long *)(this + 0x1d0) - *(long *)(this + 0x1c8)) >> 2;
  do {
    uVar11 = (uint)uVar13;
    local_70._0_1_ = (byte)uVar13 & 0x7f | (0x7f < uVar11) << 7;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1,(ulong)&local_70);
    uVar13 = (ulong)(uVar11 >> 7);
  } while (0x7f < uVar11);
  puVar2 = *(uint **)(this + 0x1d0);
  for (puVar1 = *(uint **)(this + 0x1c8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    uVar11 = *puVar1;
    do {
      local_70._0_1_ = (byte)uVar11 & 0x7f | (0x7f < uVar11) << 7;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1,(ulong)&local_70);
      bVar5 = 0x7f < uVar11;
      uVar11 = uVar11 >> 7;
    } while (bVar5);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
LAB_00ef9148:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


