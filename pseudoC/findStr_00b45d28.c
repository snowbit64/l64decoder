// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findStr
// Entry Point: 00b45d28
// Size: 492 bytes
// Signature: undefined __thiscall findStr(TextFilterManager * this, char * param_1, char * param_2, bool param_3, char * * param_4, char * * param_5)


/* TextFilterManager::findStr(char const*, char const*, bool, char const*&, char const*&) */

void __thiscall
TextFilterManager::findStr
          (TextFilterManager *this,char *param_1,char *param_2,bool param_3,char **param_4,
          char **param_5)

{
  TextFilterManager **ppTVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  size_t sVar8;
  TextFilterManager **ppTVar9;
  TextFilterManager **ppTVar10;
  char *pcVar11;
  char *pcVar12;
  uint local_70;
  uint uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_1 != '\0') && (*param_2 != '\0')) {
    if (!param_3) {
      pcVar7 = strstr(param_1,param_2);
      if (pcVar7 != (char *)0x0) {
        *param_4 = pcVar7;
        sVar8 = strlen(param_2);
        *param_5 = pcVar7 + sVar8;
      }
      bVar3 = pcVar7 != (char *)0x0;
      goto LAB_00b45ecc;
    }
    pcVar7 = param_1;
    if (param_2[1] == '\0') {
LAB_00b45dec:
      ppTVar1 = (TextFilterManager **)(this + 8);
LAB_00b45df0:
      pcVar11 = param_1;
      pcVar12 = param_2;
      if (*param_2 != '\0') {
        do {
          if (*pcVar11 == '\0') goto LAB_00b45ec8;
          uVar4 = StringUtil::utf8ToUnicode(pcVar11,&uStack_6c);
          uVar5 = StringUtil::utf8ToUnicode(pcVar12,&local_70);
          if ((uVar4 == 0) || (uVar5 == 0)) goto LAB_00b45ec8;
          if (uStack_6c == local_70) {
            pcVar12 = pcVar12 + uVar5;
          }
          else {
            if ((pcVar12 == param_2) ||
               (ppTVar10 = (TextFilterManager **)*ppTVar1, ppTVar9 = ppTVar1,
               ppTVar10 == (TextFilterManager **)0x0)) goto LAB_00b45e8c;
            do {
              bVar3 = *(uint *)((long)ppTVar10 + 0x1c) < uStack_6c;
              if (!bVar3) {
                ppTVar9 = ppTVar10;
              }
              ppTVar10 = (TextFilterManager **)ppTVar10[bVar3];
            } while (ppTVar10 != (TextFilterManager **)0x0);
            if ((ppTVar9 == ppTVar1) || (uStack_6c < *(uint *)((long)ppTVar9 + 0x1c)))
            goto LAB_00b45e8c;
          }
          pcVar11 = pcVar11 + uVar4;
          if (*pcVar12 == '\0') break;
        } while( true );
      }
      bVar3 = true;
      *param_4 = param_1;
      *param_5 = pcVar11;
      goto LAB_00b45ecc;
    }
    pcVar12 = param_2 + 2;
    do {
      uVar6 = StringUtil::utf8Next(pcVar7);
      pcVar7 = pcVar7 + (uVar6 & 0xffffffff);
      if (*pcVar12 == '\0') {
        if (*pcVar7 != '\0') goto LAB_00b45dec;
        break;
      }
      pcVar12 = pcVar12 + 1;
    } while (*pcVar7 != '\0');
  }
LAB_00b45ec8:
  bVar3 = false;
LAB_00b45ecc:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
LAB_00b45e8c:
  uVar4 = StringUtil::utf8Next(param_1);
  uVar5 = StringUtil::utf8Next(pcVar7);
  bVar3 = false;
  if ((uVar4 == 0) || (uVar5 == 0)) goto LAB_00b45ecc;
  pcVar7 = pcVar7 + uVar5;
  bVar3 = false;
  param_1 = param_1 + uVar4;
  if (*pcVar7 == '\0') goto LAB_00b45ecc;
  goto LAB_00b45df0;
}


