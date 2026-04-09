// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToBool
// Entry Point: 00dfa6a0
// Size: 412 bytes
// Signature: undefined __cdecl ToBool(char * param_1, bool * param_2)


/* tinyxml2::XMLUtil::ToBool(char const*, bool*) */

void tinyxml2::XMLUtil::ToBool(char *param_1,bool *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = 0;
  iVar3 = sscanf(param_1,"%d",&local_3c);
  if (iVar3 == 1) {
    bVar2 = local_3c != 0;
  }
  else if (param_1 == "true") {
LAB_00dfa800:
    bVar2 = true;
  }
  else {
    iVar3 = strncmp(param_1,"true",0x7fffffff);
    bVar2 = true;
    if ((iVar3 != 0) && (param_1 != "True")) {
      iVar3 = strncmp(param_1,"True",0x7fffffff);
      bVar2 = true;
      if ((iVar3 != 0) && (param_1 != "TRUE")) {
        iVar3 = strncmp(param_1,"TRUE",0x7fffffff);
        if (iVar3 == 0) goto LAB_00dfa800;
        if (param_1 == "false") {
          bVar2 = false;
        }
        else {
          iVar3 = strncmp(param_1,"false",0x7fffffff);
          bVar2 = false;
          if ((iVar3 != 0) && (param_1 != "False")) {
            iVar3 = strncmp(param_1,"False",0x7fffffff);
            bVar2 = false;
            if ((iVar3 != 0) && (param_1 != "FALSE")) {
              iVar3 = strncmp(param_1,"FALSE",0x7fffffff);
              uVar4 = 0;
              if (iVar3 != 0) goto LAB_00dfa80c;
              bVar2 = false;
            }
          }
        }
      }
    }
  }
  uVar4 = 1;
  *param_2 = bVar2;
LAB_00dfa80c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


