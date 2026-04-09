// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __tree_remove<std::__ndk1::__tree_node_base<void*>*>
// Entry Point: 006d8798
// Size: 936 bytes
// Signature: void __cdecl __tree_remove<std::__ndk1::__tree_node_base<void*>*>(__tree_node_base * param_1, __tree_node_base * param_2)


/* void 
   std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(std::__ndk1::__tree_node_base<void*>*,
   std::__ndk1::__tree_node_base<void*>*) */

void std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
               (__tree_node_base *param_1,__tree_node_base *param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long *plVar6;
  long **pplVar7;
  long **pplVar8;
  long *plVar9;
  
  pplVar4 = *(long ***)param_2;
  pplVar5 = (long **)param_2;
  if (pplVar4 == (long **)0x0) {
LAB_006d87b8:
    pplVar4 = (long **)pplVar5[1];
    if (pplVar4 == (long **)0x0) {
      bVar2 = true;
      goto LAB_006d87d8;
    }
  }
  else {
    pplVar3 = *(long ***)(param_2 + 8);
    if (*(long ***)(param_2 + 8) != (long **)0x0) {
      do {
        pplVar5 = pplVar3;
        pplVar3 = (long **)*pplVar5;
      } while ((long **)*pplVar5 != (long **)0x0);
      goto LAB_006d87b8;
    }
  }
  bVar2 = false;
  pplVar4[2] = pplVar5[2];
LAB_006d87d8:
  pplVar7 = (long **)pplVar5[2];
  pplVar3 = (long **)*pplVar7;
  if (pplVar3 == pplVar5) {
    *pplVar7 = (long *)pplVar4;
    if (pplVar5 == (long **)param_1) {
      pplVar3 = (long **)0x0;
      param_1 = (__tree_node_base *)pplVar4;
    }
    else {
      pplVar3 = (long **)pplVar7[1];
    }
  }
  else {
    pplVar7[1] = (long *)pplVar4;
  }
  cVar1 = *(char *)(pplVar5 + 3);
  pplVar7 = (long **)param_1;
  if (pplVar5 != (long **)param_2) {
    plVar9 = *(long **)(param_2 + 0x10);
    pplVar5[2] = plVar9;
    plVar9[**(__tree_node_base ***)(param_2 + 0x10) != param_2] = (long)pplVar5;
    plVar9 = *(long **)param_2;
    plVar6 = *(long **)(param_2 + 8);
    plVar9[2] = (long)pplVar5;
    *pplVar5 = plVar9;
    pplVar5[1] = plVar6;
    if (plVar6 != (long *)0x0) {
      plVar6[2] = (long)pplVar5;
    }
    pplVar7 = pplVar5;
    if (param_1 != param_2) {
      pplVar7 = (long **)param_1;
    }
    *(__tree_node_base *)(pplVar5 + 3) = param_2[0x18];
  }
  if ((cVar1 != '\0') && (pplVar7 != (long **)0x0)) {
    if (bVar2) {
      while( true ) {
        pplVar5 = (long **)pplVar3[2];
        if ((long **)*pplVar5 != pplVar3) break;
        if (*(char *)(pplVar3 + 3) == '\0') {
          plVar9 = pplVar3[1];
          *(undefined *)(pplVar3 + 3) = 1;
          *(undefined *)(pplVar5 + 3) = 0;
          *pplVar5 = plVar9;
          if (plVar9 != (long *)0x0) {
            plVar9[2] = (long)pplVar5;
          }
          pplVar3[2] = pplVar5[2];
          pplVar4 = pplVar3;
          if (pplVar7 != pplVar5) {
            pplVar4 = pplVar7;
          }
          pplVar5[2][(long **)*pplVar5[2] != pplVar5] = (long)pplVar3;
          pplVar3[1] = (long *)pplVar5;
          pplVar5[2] = (long *)pplVar3;
          pplVar3 = (long **)*pplVar5;
          pplVar5 = (long **)*pplVar3;
          pplVar7 = pplVar4;
        }
        else {
          pplVar5 = (long **)*pplVar3;
        }
        if ((pplVar5 != (long **)0x0) && (pplVar4 = pplVar3, *(char *)(pplVar5 + 3) == '\0')) {
LAB_006d8a94:
          pplVar3 = (long **)pplVar4[2];
          plVar9 = *pplVar3;
          *(undefined *)(pplVar4 + 3) = *(undefined *)(pplVar3 + 3);
          plVar6 = (long *)plVar9[1];
          *(undefined *)(pplVar3 + 3) = 1;
          *(undefined *)(pplVar5 + 3) = 1;
          *pplVar3 = plVar6;
          if (plVar6 != (long *)0x0) {
            plVar6[2] = (long)pplVar3;
          }
          plVar9[2] = (long)pplVar3[2];
          pplVar3[2][(long **)*pplVar3[2] != pplVar3] = (long)plVar9;
          plVar9[1] = (long)pplVar3;
          pplVar3[2] = plVar9;
          return;
        }
        pplVar4 = (long **)pplVar3[1];
        if ((pplVar4 != (long **)0x0) && (*(char *)(pplVar4 + 3) == '\0')) {
          if (pplVar5 != (long **)0x0) {
            pplVar4 = pplVar3;
            if (*(char *)(pplVar5 + 3) == '\0') goto LAB_006d8a94;
            pplVar4 = (long **)pplVar3[1];
          }
          plVar9 = *pplVar4;
          *(undefined *)(pplVar4 + 3) = 1;
          *(undefined *)(pplVar3 + 3) = 0;
          pplVar3[1] = plVar9;
          if (plVar9 != (long *)0x0) {
            plVar9[2] = (long)pplVar3;
          }
          pplVar4[2] = pplVar3[2];
          pplVar3[2][(long **)*pplVar3[2] != pplVar3] = (long)pplVar4;
          *pplVar4 = (long *)pplVar3;
          pplVar3[2] = (long *)pplVar4;
          pplVar5 = pplVar3;
          goto LAB_006d8a94;
        }
        pplVar5 = (long **)pplVar3[2];
        *(undefined *)(pplVar3 + 3) = 0;
        if ((*(char *)(pplVar5 + 3) == '\0') || (pplVar5 == pplVar7)) {
LAB_006d89d4:
          *(undefined *)(pplVar5 + 3) = 1;
          return;
        }
LAB_006d886c:
        pplVar3 = (long **)pplVar5[2][(long **)*pplVar5[2] == pplVar5];
      }
      if (*(char *)(pplVar3 + 3) == '\0') {
        pplVar4 = (long **)pplVar5[1];
        *(undefined *)(pplVar3 + 3) = 1;
        *(undefined *)(pplVar5 + 3) = 0;
        plVar9 = *pplVar4;
        pplVar5[1] = plVar9;
        if (plVar9 != (long *)0x0) {
          plVar9[2] = (long)pplVar5;
        }
        pplVar4[2] = pplVar5[2];
        pplVar5[2][(long **)*pplVar5[2] != pplVar5] = (long)pplVar4;
        *pplVar4 = (long *)pplVar5;
        pplVar8 = (long **)*pplVar3;
        pplVar5[2] = (long *)pplVar4;
        pplVar5 = pplVar3;
        if (pplVar7 != pplVar8) {
          pplVar5 = pplVar7;
        }
        pplVar3 = (long **)pplVar8[1];
        pplVar4 = (long **)*pplVar3;
        pplVar7 = pplVar5;
        if (pplVar4 != (long **)0x0) goto LAB_006d890c;
LAB_006d8914:
        pplVar5 = (long **)pplVar3[1];
        if ((pplVar5 == (long **)0x0) || (*(char *)(pplVar5 + 3) != '\0')) {
          pplVar4 = (long **)pplVar3[2];
          *(undefined *)(pplVar3 + 3) = 0;
          pplVar5 = pplVar7;
          if ((pplVar4 != pplVar7) && (pplVar5 = pplVar4, *(char *)(pplVar4 + 3) != '\0'))
          goto LAB_006d886c;
          goto LAB_006d89d4;
        }
LAB_006d89e8:
        pplVar7 = pplVar3;
        if (*(char *)(pplVar5 + 3) == '\0') goto LAB_006d8aec;
      }
      else {
        pplVar4 = (long **)*pplVar3;
        pplVar5 = pplVar7;
        if (pplVar4 == (long **)0x0) goto LAB_006d8914;
LAB_006d890c:
        pplVar7 = pplVar5;
        if (*(char *)(pplVar4 + 3) != '\0') goto LAB_006d8914;
        pplVar5 = (long **)pplVar3[1];
        if (pplVar5 != (long **)0x0) goto LAB_006d89e8;
      }
      plVar9 = pplVar4[1];
      *(undefined *)(pplVar4 + 3) = 1;
      *(undefined *)(pplVar3 + 3) = 0;
      *pplVar3 = plVar9;
      if (plVar9 != (long *)0x0) {
        plVar9[2] = (long)pplVar3;
      }
      pplVar4[2] = pplVar3[2];
      pplVar3[2][(long **)*pplVar3[2] != pplVar3] = (long)pplVar4;
      pplVar4[1] = (long *)pplVar3;
      pplVar3[2] = (long *)pplVar4;
      pplVar7 = pplVar4;
      pplVar5 = pplVar3;
LAB_006d8aec:
      plVar9 = pplVar7[2];
      pplVar4 = (long **)plVar9[1];
      *(undefined *)(pplVar7 + 3) = *(undefined *)(plVar9 + 3);
      plVar6 = *pplVar4;
      *(undefined *)(plVar9 + 3) = 1;
      *(undefined *)(pplVar5 + 3) = 1;
      plVar9[1] = (long)plVar6;
      if (plVar6 != (long *)0x0) {
        plVar6[2] = (long)plVar9;
      }
      pplVar4[2] = (long *)plVar9[2];
      ((long **)plVar9[2])[*(long **)plVar9[2] != plVar9] = (long *)pplVar4;
      *pplVar4 = plVar9;
      plVar9[2] = (long)pplVar4;
      return;
    }
    *(undefined *)(pplVar4 + 3) = 1;
  }
  return;
}


