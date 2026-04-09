// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startAttribute
// Entry Point: 009447d8
// Size: 632 bytes
// Signature: undefined __cdecl startAttribute(void * param_1, char * param_2, char * * param_3)


/* I3DUserAttributesFactory::startAttribute(void*, char const*, char const**) */

void I3DUserAttributesFactory::startAttribute(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  char *__s1;
  char *__s1_00;
  char *__s1_01;
  UserAttribute *pUVar5;
  long lVar6;
  long lVar7;
  float local_58 [2];
  UserAttribute *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar7 = **(long **)((long)param_1 + 0x298);
  if (lVar7 != 0) {
    __s1 = (char *)ExpatUtil::getAttr("name",param_3);
    __s1_00 = (char *)ExpatUtil::getAttr("type",param_3);
    __s1_01 = (char *)ExpatUtil::getAttr("value",param_3);
    if (((__s1 != (char *)0x0) && (__s1_00 != (char *)0x0)) && (__s1_01 != (char *)0x0)) {
      iVar3 = strcmp(__s1_00,"boolean");
      if (iVar3 == 0) {
        pUVar5 = (UserAttribute *)
                 UserAttributes::addAttribute((UserAttributes *)(lVar7 + 0x60),__s1,0);
        iVar3 = strcmp(__s1_01,"true");
        UserAttribute::setBool(pUVar5,iVar3 == 0);
      }
      else {
        iVar3 = strcmp(__s1_00,"integer");
        if (iVar3 == 0) {
          pUVar5 = (UserAttribute *)
                   UserAttributes::addAttribute((UserAttributes *)(lVar7 + 0x60),__s1,1);
          iVar3 = atoi(__s1_01);
          UserAttribute::setInt(pUVar5,iVar3);
        }
        else {
          iVar3 = strcmp(__s1_00,"float");
          if (iVar3 == 0) {
            pUVar5 = (UserAttribute *)
                     UserAttributes::addAttribute((UserAttributes *)(lVar7 + 0x60),__s1,2);
            local_58[0] = 0.0;
            StringUtil::atof(__s1_01,local_58);
            UserAttribute::setFloat(pUVar5,local_58[0]);
          }
          else {
            iVar3 = strcmp(__s1_00,"scriptCallback");
            if (iVar3 == 0) {
              pUVar5 = (UserAttribute *)
                       UserAttributes::addAttribute((UserAttributes *)(lVar7 + 0x60),__s1,4);
              UserAttribute::setScriptCallbackFunction(pUVar5,__s1_01);
              iVar3 = strcmp(__s1,"onCreate");
              if (iVar3 == 0) {
                local_58[0] = *(float *)(lVar7 + 0x18);
                local_50 = pUVar5;
                FUN_00944a50(*(long *)((long)param_1 + 0x298) + 8,local_58);
              }
            }
            else {
              iVar3 = strcmp(__s1_00,"nodeId");
              if (iVar3 == 0) {
                pUVar5 = (UserAttribute *)
                         UserAttributes::addAttribute((UserAttributes *)(lVar7 + 0x60),__s1,5);
                uVar4 = atoi(__s1_01);
                lVar7 = *(long *)((long)param_1 + 0x138);
                if (lVar7 != 0) {
                  lVar6 = (long)param_1 + 0x138;
                  do {
                    bVar2 = *(uint *)(lVar7 + 0x20) < uVar4;
                    if (!bVar2) {
                      lVar6 = lVar7;
                    }
                    lVar7 = *(long *)(lVar7 + (ulong)bVar2 * 8);
                  } while (lVar7 != 0);
                  if ((lVar6 != (long)param_1 + 0x138) && (*(uint *)(lVar6 + 0x20) <= uVar4)) {
                    UserAttribute::setNodeId(pUVar5,*(uint *)(*(long *)(lVar6 + 0x28) + 0x18));
                  }
                }
              }
              else {
                pUVar5 = (UserAttribute *)
                         UserAttributes::addAttribute((UserAttributes *)(lVar7 + 0x60),__s1,3);
                UserAttribute::setString(pUVar5,__s1_01);
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


