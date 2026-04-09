// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParseDeep
// Entry Point: 00dfd800
// Size: 532 bytes
// Signature: undefined __thiscall ParseDeep(XMLAttribute * this, char * param_1, bool param_2, int * param_3)


/* tinyxml2::XMLAttribute::ParseDeep(char*, bool, int*) */

void __thiscall
tinyxml2::XMLAttribute::ParseDeep(XMLAttribute *this,char *param_1,bool param_2,int *param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  byte *pbVar4;
  size_t __n;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *__s1;
  char local_6c;
  undefined local_6b;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pbVar4 = (byte *)StrPair::ParseName((StrPair *)(this + 8),param_1);
  if (pbVar4 == (byte *)0x0) goto LAB_00dfd9a4;
  if ('\0' < (char)*pbVar4) {
    uVar5 = (uint)*pbVar4;
    if (param_3 == (int *)0x0) {
      do {
        if ((uVar5 != 0x20) && (4 < uVar5 - 9)) goto LAB_00dfd8b8;
        pbVar4 = pbVar4 + 1;
        uVar5 = (uint)*pbVar4;
      } while (-1 < (char)*pbVar4);
    }
    else {
      do {
        if ((uVar5 != 0x20) && (4 < uVar5 - 9)) goto LAB_00dfd8b8;
        if (uVar5 == 10) {
          *param_3 = *param_3 + 1;
        }
        pbVar4 = pbVar4 + 1;
        uVar5 = (uint)*pbVar4;
      } while (-1 < (char)*pbVar4);
    }
  }
  goto LAB_00dfd9a0;
LAB_00dfd8b8:
  if (uVar5 == 0x3d) {
    pbVar4 = pbVar4 + 1;
    uVar5 = (uint)*pbVar4;
    if (-1 < (char)*pbVar4) {
      if (param_3 == (int *)0x0) {
        do {
          if ((uVar5 != 0x20) && (4 < uVar5 - 9)) break;
          pbVar4 = pbVar4 + 1;
          uVar5 = (uint)*pbVar4;
        } while (-1 < (char)*pbVar4);
      }
      else {
        do {
          if ((uVar5 != 0x20) && (4 < uVar5 - 9)) break;
          if (uVar5 == 10) {
            *param_3 = *param_3 + 1;
          }
          pbVar4 = pbVar4 + 1;
          uVar5 = (uint)*pbVar4;
        } while (-1 < (char)*pbVar4);
      }
    }
    if ((uVar5 == 0x27) || (uVar5 == 0x22)) {
      local_6c = (char)uVar5;
      local_6b = 0;
      __n = __strlen_chk(&local_6c,2);
      pbVar7 = pbVar4 + 1;
      bVar1 = *pbVar7;
      __s1 = pbVar7;
      while (bVar1 != 0) {
        if ((bVar1 == uVar5) && (iVar3 = strncmp((char *)__s1,&local_6c,__n), iVar3 == 0)) {
          if ((((byte)this[0x21] >> 1 & 1) != 0) && (*(void **)(this + 0x28) != (void *)0x0)) {
            operator_delete__(*(void **)(this + 0x28));
          }
          uVar6 = 0x102;
          if (param_2) {
            uVar6 = 0x103;
          }
          pbVar4 = __s1 + __n;
          *(byte **)(this + 0x28) = pbVar7;
          *(byte **)(this + 0x30) = __s1;
          *(undefined4 *)(this + 0x20) = uVar6;
          if (*(long *)(lVar2 + 0x28) == local_68) {
            return;
          }
          goto LAB_00dfda10;
        }
        if (bVar1 == 10) {
          *param_3 = *param_3 + 1;
        }
        __s1 = __s1 + 1;
        bVar1 = *__s1;
      }
    }
  }
LAB_00dfd9a0:
  pbVar4 = (byte *)0x0;
LAB_00dfd9a4:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00dfda10:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar4);
}


