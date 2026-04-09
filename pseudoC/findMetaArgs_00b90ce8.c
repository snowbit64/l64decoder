// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findMetaArgs
// Entry Point: 00b90ce8
// Size: 1188 bytes
// Signature: undefined __thiscall findMetaArgs(Preprocessor * this, uint param_1, uint param_2, uint * param_3, uint * param_4, uint * param_5, uint * param_6, uint * param_7, uint * param_8, uint * param_9, uint * param_10)


/* Preprocessor::findMetaArgs(unsigned int, unsigned int, unsigned int&, unsigned int&, unsigned
   int&, unsigned int&, unsigned int&, unsigned int&, unsigned int*, unsigned int*) */

void __thiscall
Preprocessor::findMetaArgs
          (Preprocessor *this,uint param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5,
          uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  int iVar9;
  bool abStack_74 [4];
  uint local_70;
  uint local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c = param_1;
  uVar6 = matchSequence(this,*(char **)(*(long *)(this + 0x30) + 0x58),&local_6c);
  if ((uVar6 & 1) == 0) {
    if (**(char **)(*(long *)(this + 0x30) + 0x50) == '\0') {
      uVar8 = 0;
      uVar4 = local_6c;
    }
    else {
      uVar6 = matchSequence(this,*(char **)(*(long *)(this + 0x30) + 0x50),&local_6c);
      uVar4 = local_6c;
      if ((uVar6 & 1) == 0) {
        uVar8 = 0xffffffff;
        goto LAB_00b91158;
      }
      if (local_6c != 0) {
        uVar5 = local_6c - 1;
        uVar6 = getChar(this,uVar5);
        if ((((uint)uVar6 & 0xff) < 0x21) && ((1L << (uVar6 & 0x3f) & 0x100000600U) != 0)) {
          uVar4 = uVar5;
          local_6c = uVar5;
        }
      }
      uVar8 = 0;
    }
  }
  else {
    *param_3 = local_6c;
    if ((param_2 == 0) ||
       (uVar6 = findPossibleUserMacro
                          (this,&local_6c,param_4,&local_70,param_9,param_10,param_8,abStack_74,
                           (Macro **)0x0,0), (uVar6 & 1) == 0)) {
      iVar9 = 0;
      *param_8 = 0;
      uVar4 = local_6c;
LAB_00b90f3c:
      do {
        uVar5 = uVar4;
        uVar4 = identifierEnd(this,uVar5);
      } while (uVar4 != uVar5);
      local_6c = uVar5;
      skipPossibleComments(this,&local_6c,0,false);
      uVar4 = local_6c;
      bVar3 = getChar(this,local_6c);
      if (bVar3 == 0) {
        if (iVar9 == 0) goto LAB_00b90fc0;
LAB_00b90f24:
        printError(this,"unfinished macro argument");
        iVar2 = iVar9;
      }
      else {
        pcVar7 = strchr(*(char **)(*(long *)(this + 0x30) + 0x80),(uint)bVar3);
        if (pcVar7 != (char *)0x0) {
          iVar9 = iVar9 + 1;
        }
        if (iVar9 == 0) {
LAB_00b90fc0:
          *param_4 = uVar4;
          uVar6 = matchSequence(this,*(char **)(*(long *)(this + 0x30) + 0x60),&local_6c);
          if ((uVar6 & 1) != 0) goto LAB_00b90db4;
          if (**(char **)(*(long *)(this + 0x30) + 0x68) == '\0') goto LAB_00b9114c;
          uVar6 = matchSequence(this,*(char **)(*(long *)(this + 0x30) + 0x68),&local_6c);
          uVar4 = local_6c;
          if ((uVar6 & 1) != 0) goto LAB_00b9101c;
          iVar9 = 0;
          iVar2 = 0;
          if (bVar3 == 0) goto LAB_00b90f24;
        }
        else {
          pcVar7 = strchr(*(char **)(*(long *)(this + 0x30) + 0x88),(uint)bVar3);
          iVar2 = iVar9 - (uint)(pcVar7 != (char *)0x0);
        }
      }
      iVar9 = iVar2;
      local_6c = local_6c + 1;
      uVar4 = local_6c;
      goto LAB_00b90f3c;
    }
    *param_3 = local_6c;
    local_6c = local_70;
    uVar6 = matchSequence(this,*(char **)(*(long *)(this + 0x30) + 0x60),&local_6c);
    if ((uVar6 & 1) != 0) {
LAB_00b90db4:
      iVar9 = 0;
      *param_5 = local_6c;
      uVar4 = local_6c;
LAB_00b90de8:
      do {
        uVar5 = uVar4;
        uVar4 = identifierEnd(this,uVar5);
      } while (uVar4 != uVar5);
      local_6c = uVar5;
      skipPossibleComments(this,&local_6c,0,false);
      uVar4 = local_6c;
      bVar3 = getChar(this,local_6c);
      if (bVar3 == 0) {
        if (iVar9 == 0) goto LAB_00b90e6c;
LAB_00b90dd0:
        printError(this,"unfinished macro");
        iVar2 = iVar9;
      }
      else {
        pcVar7 = strchr(*(char **)(*(long *)(this + 0x30) + 0x80),(uint)bVar3);
        if (pcVar7 != (char *)0x0) {
          iVar9 = iVar9 + 1;
        }
        if (iVar9 == 0) {
LAB_00b90e6c:
          *param_6 = uVar4;
          if (**(char **)(*(long *)(this + 0x30) + 0x68) == '\0') goto LAB_00b910c4;
          uVar6 = matchSequence(this,*(char **)(*(long *)(this + 0x30) + 0x68),&local_6c);
          uVar4 = local_6c;
          if ((uVar6 & 1) != 0) goto LAB_00b9106c;
          iVar9 = 0;
          iVar2 = 0;
          if (bVar3 == 0) goto LAB_00b90dd0;
        }
        else {
          pcVar7 = strchr(*(char **)(*(long *)(this + 0x30) + 0x88),(uint)bVar3);
          iVar2 = iVar9 - (uint)(pcVar7 != (char *)0x0);
        }
      }
      iVar9 = iVar2;
      local_6c = local_6c + 1;
      uVar4 = local_6c;
      goto LAB_00b90de8;
    }
    if (**(char **)(*(long *)(this + 0x30) + 0x68) != '\0') {
      uVar6 = matchSequence(this,*(char **)(*(long *)(this + 0x30) + 0x68),&local_6c);
      if ((uVar6 & 1) == 0) {
        printError(this,"#define/#defeval requires an identifier or a single macro call");
      }
      else if (local_6c != 0) {
        uVar4 = local_6c - 1;
        uVar6 = getChar(this,uVar4);
        if ((((uint)uVar6 & 0xff) < 0x21) && ((1L << (uVar6 & 0x3f) & 0x100000600U) != 0)) {
          local_6c = uVar4;
        }
      }
    }
LAB_00b9114c:
    uVar8 = 1;
    uVar4 = local_6c;
  }
  goto LAB_00b91154;
LAB_00b9101c:
  if (local_6c == 0) {
    uVar8 = 1;
  }
  else {
    uVar5 = local_6c - 1;
    uVar6 = getChar(this,uVar5);
    uVar8 = 1;
    if ((((uint)uVar6 & 0xff) < 0x21) && ((1L << (uVar6 & 0x3f) & 0x100000600U) != 0)) {
      uVar8 = 1;
      uVar4 = uVar5;
      local_6c = uVar5;
    }
  }
  goto LAB_00b91154;
LAB_00b9106c:
  if (local_6c == 0) {
LAB_00b910c4:
    uVar8 = 2;
  }
  else {
    uVar5 = local_6c - 1;
    uVar6 = getChar(this,uVar5);
    uVar8 = 2;
    if ((((uint)uVar6 & 0xff) < 0x21) && ((1L << (uVar6 & 0x3f) & 0x100000600U) != 0)) {
      uVar8 = 2;
      uVar4 = uVar5;
      local_6c = uVar5;
    }
  }
LAB_00b91154:
  *param_7 = uVar4;
LAB_00b91158:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


