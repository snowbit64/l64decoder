// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: str
// Entry Point: 006d1f98
// Size: 552 bytes
// Signature: undefined str(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::str() const */

void std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
     ::str(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_x0;
  ulong *in_x8;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((*(uint *)(in_x0 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(in_x0 + 0x60) >> 3 & 1) == 0) {
      *in_x8 = 0;
      in_x8[1] = 0;
      in_x8[2] = 0;
      return;
    }
    puVar12 = *(undefined **)(in_x0 + 0x10);
    puVar10 = *(undefined **)(in_x0 + 0x20);
    uVar11 = (long)puVar10 - (long)puVar12;
    if (0xffffffffffffffef < uVar11) {
LAB_006d21b8:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar11 < 0x17) {
      puVar8 = (undefined *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)uVar11 << 1);
    }
    else {
      uVar9 = uVar11 + 0x10 & 0xfffffffffffffff0;
      puVar8 = (undefined *)operator_new(uVar9);
      in_x8[1] = uVar11;
      in_x8[2] = (ulong)puVar8;
      *in_x8 = uVar9 | 1;
    }
    if (puVar12 != puVar10) {
      if ((0x1f < uVar11) && ((puVar10 <= puVar8 || (puVar8 + uVar11 <= puVar12)))) {
        uVar5 = uVar11 & 0xffffffffffffffe0;
        puVar6 = (undefined8 *)(puVar8 + 0x10);
        puVar3 = puVar8 + uVar5;
        puVar7 = (undefined8 *)(puVar12 + 0x10);
        uVar9 = uVar5;
        do {
          puVar2 = puVar7 + -1;
          uVar13 = puVar7[-2];
          uVar15 = puVar7[1];
          uVar14 = *puVar7;
          puVar7 = puVar7 + 4;
          uVar9 = uVar9 - 0x20;
          puVar6[-1] = *puVar2;
          puVar6[-2] = uVar13;
          puVar6[1] = uVar15;
          *puVar6 = uVar14;
          puVar6 = puVar6 + 4;
        } while (uVar9 != 0);
        puVar8 = puVar3;
        puVar12 = puVar12 + uVar5;
        if (uVar11 == uVar5) goto LAB_006d219c;
      }
      do {
        puVar4 = puVar12 + 1;
        puVar3 = puVar8 + 1;
        *puVar8 = *puVar12;
        puVar8 = puVar3;
        puVar12 = puVar4;
      } while (puVar4 != puVar10);
LAB_006d219c:
      *puVar3 = 0;
      return;
    }
  }
  else {
    puVar10 = *(undefined **)(in_x0 + 0x58);
    puVar3 = *(undefined **)(in_x0 + 0x30);
    puVar12 = puVar10;
    if (puVar10 < puVar3) {
      *(undefined **)(in_x0 + 0x58) = puVar3;
      puVar12 = puVar3;
    }
    puVar4 = *(undefined **)(in_x0 + 0x28);
    uVar11 = (long)puVar12 - (long)puVar4;
    if (0xffffffffffffffef < uVar11) goto LAB_006d21b8;
    if (uVar11 < 0x17) {
      puVar8 = (undefined *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)uVar11 << 1);
    }
    else {
      uVar9 = uVar11 + 0x10 & 0xfffffffffffffff0;
      puVar8 = (undefined *)operator_new(uVar9);
      in_x8[1] = uVar11;
      in_x8[2] = (ulong)puVar8;
      *in_x8 = uVar9 | 1;
    }
    if (puVar4 != puVar12) {
      puVar1 = puVar3;
      if (puVar3 <= puVar10) {
        puVar1 = puVar10;
      }
      uVar11 = (long)puVar1 - (long)puVar4;
      if (0x1f < uVar11) {
        if (puVar3 <= puVar10) {
          puVar3 = puVar10;
        }
        if ((puVar3 <= puVar8) || (puVar8 + ((long)puVar3 - (long)puVar4) <= puVar4)) {
          uVar5 = uVar11 & 0xffffffffffffffe0;
          puVar6 = (undefined8 *)(puVar8 + 0x10);
          puVar3 = puVar8 + uVar5;
          puVar7 = (undefined8 *)(puVar4 + 0x10);
          uVar9 = uVar5;
          do {
            puVar2 = puVar7 + -1;
            uVar13 = puVar7[-2];
            uVar15 = puVar7[1];
            uVar14 = *puVar7;
            puVar7 = puVar7 + 4;
            uVar9 = uVar9 - 0x20;
            puVar6[-1] = *puVar2;
            puVar6[-2] = uVar13;
            puVar6[1] = uVar15;
            *puVar6 = uVar14;
            puVar6 = puVar6 + 4;
          } while (uVar9 != 0);
          puVar8 = puVar3;
          puVar4 = puVar4 + uVar5;
          if (uVar11 == uVar5) goto LAB_006d219c;
        }
      }
      do {
        puVar10 = puVar4 + 1;
        puVar3 = puVar8 + 1;
        *puVar8 = *puVar4;
        puVar8 = puVar3;
        puVar4 = puVar10;
      } while (puVar10 != puVar12);
      goto LAB_006d219c;
    }
  }
  *puVar8 = 0;
  return;
}


