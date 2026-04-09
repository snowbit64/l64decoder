// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: replaceUnrenderableCharacters
// Entry Point: 006f25ac
// Size: 620 bytes
// Signature: undefined __thiscall replaceUnrenderableCharacters(FontOverlayRenderer * this, char * param_1, uint param_2, char * * param_3)


/* FontOverlayRenderer::replaceUnrenderableCharacters(char const*, unsigned int, char*&) */

void __thiscall
FontOverlayRenderer::replaceUnrenderableCharacters
          (FontOverlayRenderer *this,char *param_1,uint param_2,char **param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint local_74;
  char acStack_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_1 != (char *)0x0) {
    uVar5 = StringUtil::unicodeToUtf8(param_2,acStack_70);
    uVar6 = StringUtil::utf8ToUnicode(param_1,&local_74);
    uVar9 = 1;
    if ((uVar6 != 0) && (local_74 != 0)) {
      iVar13 = 0;
      pcVar7 = param_1;
      do {
        if ((local_74 == 10) || (local_74 == 0xd)) {
LAB_006f2634:
          uVar8 = uVar6;
        }
        else {
          iVar11 = *(int *)(this + 0x70) + -1;
          uVar8 = uVar5;
          if (0 < *(int *)(this + 0x70)) {
            iVar12 = 0;
            do {
              while( true ) {
                uVar1 = iVar11 + iVar12;
                if ((int)uVar1 < 0) {
                  uVar1 = uVar1 + 1;
                }
                iVar2 = (int)uVar1 >> 1;
                uVar3 = *(uint *)(*(long *)(this + 0x68) + (long)iVar2 * 0x1c);
                if (uVar3 < local_74) break;
                if (uVar3 <= local_74) {
                  if (*(short *)(*(long *)(this + 0x68) +
                                 ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x1c + 4) != 0x7fff)
                  goto LAB_006f2634;
                  goto LAB_006f2638;
                }
                iVar11 = iVar2 + -1;
                if (iVar11 < iVar12) goto LAB_006f2638;
              }
              iVar12 = iVar2 + 1;
            } while (iVar12 <= iVar11);
          }
        }
LAB_006f2638:
        pcVar7 = pcVar7 + uVar6;
        iVar13 = uVar8 + iVar13;
        uVar6 = StringUtil::utf8ToUnicode(pcVar7,&local_74);
      } while ((uVar6 != 0) && (local_74 != 0));
      uVar9 = (ulong)(iVar13 + 1);
    }
    pcVar7 = (char *)operator_new__(uVar9);
    *param_3 = pcVar7;
    uVar5 = StringUtil::utf8ToUnicode(param_1,&local_74);
    while ((uVar5 != 0 && (local_74 != 0))) {
      uVar9 = (ulong)uVar5;
      if ((local_74 == 10) || (local_74 == 0xd)) {
LAB_006f2724:
        memcpy(pcVar7,param_1,uVar9);
        uVar10 = uVar9;
      }
      else {
        iVar13 = *(int *)(this + 0x70) + -1;
        if (0 < *(int *)(this + 0x70)) {
          iVar11 = 0;
          do {
            uVar5 = iVar13 + iVar11;
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 1;
            }
            iVar12 = (int)uVar5 >> 1;
            uVar6 = *(uint *)(*(long *)(this + 0x68) + (long)iVar12 * 0x1c);
            if (uVar6 < local_74) {
              iVar11 = iVar12 + 1;
            }
            else {
              if (uVar6 <= local_74) {
                if (*(short *)(*(long *)(this + 0x68) +
                               ((long)((ulong)uVar5 << 0x20) >> 0x21) * 0x1c + 4) != 0x7fff)
                goto LAB_006f2724;
                break;
              }
              iVar13 = iVar12 + -1;
            }
          } while (iVar11 <= iVar13);
        }
        memcpy(pcVar7,acStack_70,(ulong)uVar5);
        uVar10 = (ulong)uVar5;
      }
      param_1 = param_1 + uVar9;
      pcVar7 = pcVar7 + uVar10;
      uVar5 = StringUtil::utf8ToUnicode(param_1,&local_74);
    }
    *pcVar7 = '\0';
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


