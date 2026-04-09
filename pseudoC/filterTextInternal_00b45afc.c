// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: filterTextInternal
// Entry Point: 00b45afc
// Size: 556 bytes
// Signature: undefined __thiscall filterTextInternal(TextFilterManager * this, char * param_1, uchar * * param_2, uint param_3, bool * param_4, bool param_5)


/* TextFilterManager::filterTextInternal(char const*, unsigned char**, unsigned int, bool*, bool) */

void __thiscall
TextFilterManager::filterTextInternal
          (TextFilterManager *this,char *param_1,uchar **param_2,uint param_3,bool *param_4,
          bool param_5)

{
  undefined8 *puVar1;
  TextFilterManager **ppTVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  uchar *puVar8;
  long lVar9;
  TextFilterManager **ppTVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  TextFilterManager **ppTVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  uint local_8c;
  char *local_88;
  int local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (param_3 != 0) {
    uVar17 = 0;
    ppTVar2 = (TextFilterManager **)(this + 8);
    do {
      puVar8 = param_2[uVar17];
      pcVar7 = param_1;
      while (uVar6 = findStr(this,pcVar7,(char *)puVar8,param_5,(char **)&local_80,&local_88),
            pcVar7 = local_88, (uVar6 & 1) != 0) {
        uVar18 = (local_80 - (uint)param_1) + 1;
        iVar16 = (int)local_88;
        while ((uVar18 < ~(uint)param_1 + iVar16 &&
               (uVar5 = StringUtil::utf8ToUnicode(param_1 + uVar18,&local_8c), uVar5 != 0))) {
          ppTVar10 = (TextFilterManager **)*ppTVar2;
          ppTVar14 = ppTVar2;
          if (ppTVar10 == (TextFilterManager **)0x0) {
LAB_00b45c30:
            uVar13 = uVar5;
            if (uVar5 < 2) {
              uVar13 = 1;
            }
            uVar6 = (ulong)uVar13;
            if (uVar13 < 8) {
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              if ((!CARRY4(uVar18,(uint)(uVar6 - 1))) && (uVar6 - 1 >> 0x20 == 0)) {
                if (uVar13 < 0x20) {
                  uVar12 = 0;
                }
                else {
                  uVar11 = uVar6 & 0xffffffe0;
                  uVar12 = uVar11;
                  uVar15 = uVar18;
                  do {
                    puVar1 = (undefined8 *)(param_4 + uVar15);
                    uVar12 = uVar12 - 0x20;
                    uVar15 = uVar15 + 0x20;
                    puVar1[1] = 0x101010101010101;
                    *puVar1 = 0x101010101010101;
                    puVar1[3] = 0x101010101010101;
                    puVar1[2] = 0x101010101010101;
                  } while (uVar12 != 0);
                  if (uVar11 == uVar6) goto LAB_00b45bd4;
                  uVar12 = uVar11;
                  if ((uVar13 & 0x18) == 0) goto LAB_00b45c44;
                }
                uVar13 = uVar5;
                if (uVar5 < 2) {
                  uVar13 = 1;
                }
                uVar11 = (ulong)uVar13 & 0xfffffff8;
                lVar9 = uVar12 - uVar11;
                uVar15 = uVar18 + (int)uVar12;
                do {
                  *(undefined8 *)(param_4 + uVar15) = 0x101010101010101;
                  lVar9 = lVar9 + 8;
                  uVar15 = uVar15 + 8;
                } while (lVar9 != 0);
                if (uVar11 == uVar13) goto LAB_00b45bd4;
              }
            }
LAB_00b45c44:
            uVar13 = uVar18 + (int)uVar11;
            lVar9 = uVar6 - uVar11;
            do {
              param_4[uVar13] = true;
              uVar13 = uVar13 + 1;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          else {
            do {
              bVar4 = *(uint *)((long)ppTVar10 + 0x1c) < local_8c;
              if (!bVar4) {
                ppTVar14 = ppTVar10;
              }
              ppTVar10 = (TextFilterManager **)ppTVar10[bVar4];
            } while (ppTVar10 != (TextFilterManager **)0x0);
            if ((ppTVar14 == ppTVar2) || (local_8c < *(uint *)((long)ppTVar14 + 0x1c)))
            goto LAB_00b45c30;
          }
LAB_00b45bd4:
          uVar18 = uVar5 + uVar18;
        }
        puVar8 = param_2[uVar17];
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != param_3);
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


