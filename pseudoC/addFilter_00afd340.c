// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addFilter
// Entry Point: 00afd340
// Size: 320 bytes
// Signature: undefined __thiscall addFilter(GiantsNotificationManager * this, char * param_1, char * param_2)


/* GiantsNotificationManager::addFilter(char const*, char const*) */

void __thiscall
GiantsNotificationManager::addFilter(GiantsNotificationManager *this,char *param_1,char *param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4c = 0;
  sscanf(param_1,"%x",&local_4c);
  uVar2 = local_4c;
  if (local_4c != 0) {
    uVar3 = StringUtil::parseVersionString(param_2);
    pplVar6 = (long **)(this + 0x28);
    pplVar7 = (long **)*pplVar6;
    pplVar8 = pplVar6;
    if (pplVar7 != (long **)0x0) {
      pplVar6 = (long **)(this + 0x28);
      do {
        while (pplVar8 = pplVar7, uVar2 < *(uint *)((long)pplVar8 + 0x1c)) {
          pplVar6 = pplVar8;
          pplVar7 = (long **)*pplVar8;
          if ((long **)*pplVar8 == (long **)0x0) {
            plVar5 = *pplVar8;
            goto joined_r0x00afd42c;
          }
        }
        if (uVar2 <= *(uint *)((long)pplVar8 + 0x1c)) break;
        pplVar6 = pplVar8 + 1;
        pplVar7 = (long **)*pplVar6;
      } while ((long **)*pplVar6 != (long **)0x0);
    }
    plVar5 = *pplVar6;
joined_r0x00afd42c:
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)operator_new(0x28);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = (long)pplVar8;
      *pplVar6 = plVar5;
      plVar4 = *(long **)(this + 0x20);
      *(uint *)((long)plVar5 + 0x1c) = uVar2;
      *(undefined4 *)(plVar5 + 4) = uVar3;
      if (*plVar4 != 0) {
        *(long *)(this + 0x20) = *plVar4;
        plVar5 = *pplVar6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x28),(__tree_node_base *)plVar5);
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
    }
    this[1] = (GiantsNotificationManager)0x1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


