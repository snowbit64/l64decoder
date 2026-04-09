// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readInterpolatedStringSection
// Entry Point: 00ee79e8
// Size: 904 bytes
// Signature: undefined __cdecl readInterpolatedStringSection(Position param_1, Type param_2, Type param_3)


/* Luau::Lexer::readInterpolatedStringSection(Luau::Position, Luau::Lexeme::Type,
   Luau::Lexeme::Type) */

void Luau::Lexer::readInterpolatedStringSection
               (undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  void *__dest;
  size_t __n;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  void *__src;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  
  uVar3 = *(uint *)(param_2 + 2);
  uVar14 = (ulong)uVar3;
  uVar16 = param_2[1];
  uVar9 = uVar14;
  uVar15 = uVar3;
  if (uVar14 < uVar16) {
    do {
      lVar6 = *param_2;
      bVar4 = *(byte *)(lVar6 + uVar9);
      uVar7 = (uint)bVar4;
      uVar15 = (uint)uVar9;
      if (bVar4 < 0x5c) {
        if (uVar7 < 0xe && (1 << (ulong)(uVar7 & 0x1f) & 0x2401U) != 0) break;
LAB_00ee7b0c:
        uVar9 = (ulong)(uVar15 + 1);
        *(uint *)(param_2 + 2) = uVar15 + 1;
      }
      else {
        if (bVar4 != 0x5c) {
          if (uVar7 == 0x60) {
            if (*(char *)(lVar6 + uVar9) == '\n') {
              iVar13 = uVar15 + 1;
              iVar8 = *(int *)((long)param_2 + 0x14) + 1;
              *(int *)((long)param_2 + 0x14) = iVar8;
              *(int *)(param_2 + 3) = iVar13;
            }
            else {
              iVar8 = *(int *)((long)param_2 + 0x14);
              iVar13 = *(int *)(param_2 + 3);
            }
            iVar10 = uVar15 + 1;
            *(int *)(param_2 + 2) = iVar10;
            *param_1 = param_5;
            *(undefined8 *)(param_1 + 1) = param_3;
            param_1[5] = iVar10 + ~uVar3;
            *(ulong *)(param_1 + 3) = CONCAT44(iVar10 - iVar13,iVar8);
            *(ulong *)(param_1 + 6) = lVar6 + uVar14;
            return;
          }
          if (uVar7 == 0x7b) {
            puVar2 = (undefined4 *)param_2[0xd];
            if (puVar2 < (undefined4 *)param_2[0xe]) {
              *puVar2 = 0;
              param_2[0xd] = (long)(puVar2 + 1);
            }
            else {
              __src = (void *)param_2[0xc];
              __n = (long)puVar2 - (long)__src;
              uVar9 = ((long)__n >> 2) + 1;
              if (uVar9 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar11 = (long)(undefined4 *)param_2[0xe] - (long)__src;
              uVar12 = (long)uVar11 >> 1;
              if (uVar9 <= uVar12) {
                uVar9 = uVar12;
              }
              if (0x7ffffffffffffffb < uVar11) {
                uVar9 = 0x3fffffffffffffff;
              }
              if (uVar9 == 0) {
                __dest = (void *)0x0;
              }
              else {
                if (uVar9 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                __dest = operator_new(uVar9 << 2);
              }
              puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
              *puVar2 = 0;
              if (0 < (long)__n) {
                memcpy(__dest,__src,__n);
              }
              param_2[0xc] = (long)__dest;
              param_2[0xd] = (long)(puVar2 + 1);
              param_2[0xe] = (long)((long)__dest + uVar9 * 4);
              if (__src != (void *)0x0) {
                operator_delete(__src);
                uVar15 = *(uint *)(param_2 + 2);
                uVar16 = param_2[1];
              }
            }
            uVar7 = uVar15 + 1;
            uVar9 = (ulong)uVar7;
            lVar6 = *param_2;
            if ((uVar9 < uVar16) && (*(char *)(lVar6 + uVar9) == '{')) {
              iVar13 = *(int *)((long)param_2 + 0x14);
              iVar8 = *(int *)(param_2 + 3);
              cVar5 = *(char *)(lVar6 + (ulong)uVar15);
              *(undefined8 *)(param_1 + 1) = param_3;
              *param_1 = 0x11d;
              param_1[5] = uVar15 - uVar3;
              *(ulong *)(param_1 + 3) = CONCAT44(uVar15 - iVar8,iVar13);
              *(ulong *)(param_1 + 6) = lVar6 + uVar14;
              if (cVar5 == '\n') {
                iVar13 = iVar13 + 1;
                *(int *)((long)param_2 + 0x14) = iVar13;
                *(uint *)(param_2 + 3) = uVar7;
              }
              *(uint *)(param_2 + 2) = uVar7;
              if (*(char *)(lVar6 + uVar9) == '\n') {
                *(int *)((long)param_2 + 0x14) = iVar13 + 1;
                *(uint *)(param_2 + 3) = uVar15 + 2;
                *(uint *)(param_2 + 2) = uVar15 + 2;
                return;
              }
              *(uint *)(param_2 + 2) = uVar15 + 2;
              return;
            }
            iVar13 = *(int *)((long)param_2 + 0x14);
            iVar8 = *(int *)(param_2 + 3);
            if (*(char *)(lVar6 + (ulong)uVar15) == '\n') {
              *(int *)((long)param_2 + 0x14) = iVar13 + 1;
              *(uint *)(param_2 + 3) = uVar7;
            }
            *(uint *)(param_2 + 2) = uVar7;
            *(undefined8 *)(param_1 + 1) = param_3;
            *(ulong *)(param_1 + 3) = CONCAT44(uVar15 - iVar8,iVar13);
            *param_1 = 0x109;
            param_1[5] = uVar15 - uVar3;
            *(ulong *)(param_1 + 6) = lVar6 + uVar14;
            return;
          }
          goto LAB_00ee7b0c;
        }
        uVar9 = (ulong)(uVar15 + 1);
        if ((uVar9 < uVar16) && (*(char *)(lVar6 + uVar9) == 'u')) {
          uVar7 = uVar15 + 2;
          uVar11 = (ulong)uVar7;
          if ((uVar16 <= uVar11) || (*(char *)(lVar6 + uVar11) != '{')) goto LAB_00ee7a3c;
          *(uint *)(param_2 + 2) = uVar15 + 1;
          if (*(char *)(lVar6 + uVar9) == '\n') {
            *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
            *(uint *)(param_2 + 3) = uVar7;
          }
          *(uint *)(param_2 + 2) = uVar7;
          if (*(char *)(lVar6 + uVar11) == '\n') {
            uVar15 = uVar15 + 3;
            uVar9 = (ulong)uVar15;
            *(uint *)(param_2 + 2) = uVar15;
            *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
            *(uint *)(param_2 + 3) = uVar15;
          }
          else {
            uVar9 = (ulong)(uVar15 + 3);
            *(uint *)(param_2 + 2) = uVar15 + 3;
          }
        }
        else {
LAB_00ee7a3c:
          readBackslashInString();
          uVar9 = (ulong)*(uint *)(param_2 + 2);
          uVar16 = param_2[1];
        }
      }
      uVar15 = (uint)uVar9;
    } while (uVar9 < uVar16);
  }
  uVar1 = *(undefined4 *)((long)param_2 + 0x14);
  iVar13 = *(int *)(param_2 + 3);
  *(undefined8 *)(param_1 + 1) = param_3;
  param_1[5] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = 0x11a;
  *(ulong *)(param_1 + 3) = CONCAT44(uVar15 - iVar13,uVar1);
  return;
}


