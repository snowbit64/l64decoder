// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestCustomShaderDelete
// Entry Point: 00950e88
// Size: 328 bytes
// Signature: undefined __thiscall requestCustomShaderDelete(MaterialManager * this, CustomShader * param_1)


/* MaterialManager::requestCustomShaderDelete(CustomShader const*) */

void __thiscall
MaterialManager::requestCustomShaderDelete(MaterialManager *this,CustomShader *param_1)

{
  long **pplVar1;
  long **pplVar2;
  long **pplVar3;
  long *plVar4;
  long **pplVar5;
  
  Mutex::enterCriticalSection();
  if (*(int *)(param_1 + 8) < 1) {
    pplVar1 = *(long ***)(this + 0x38);
    pplVar5 = pplVar1;
    if (pplVar1 != (long **)(this + 0x40)) {
LAB_00950edc:
      pplVar2 = (long **)pplVar5[1];
      if (pplVar5[7] != (long *)param_1) goto code_r0x00950eec;
      if (pplVar2 == (long **)0x0) {
        pplVar2 = pplVar5 + 2;
        pplVar3 = (long **)*pplVar2;
        if ((long **)*pplVar3 != pplVar5) {
          do {
            plVar4 = *pplVar2;
            pplVar2 = (long **)(plVar4 + 2);
            pplVar3 = (long **)*pplVar2;
          } while (*pplVar3 != plVar4);
        }
      }
      else {
        do {
          pplVar3 = pplVar2;
          pplVar2 = (long **)*pplVar3;
        } while ((long **)*pplVar3 != (long **)0x0);
      }
      if (pplVar1 == pplVar5) {
        *(long ***)(this + 0x38) = pplVar3;
      }
      *(long *)(this + 0x48) = *(long *)(this + 0x48) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x40),(__tree_node_base *)pplVar5);
      if ((*(byte *)(pplVar5 + 4) & 1) != 0) {
        operator_delete(pplVar5[6]);
      }
      operator_delete(pplVar5);
LAB_00950fa8:
      if (param_1 == (CustomShader *)0x0) goto LAB_00950fbc;
    }
    (**(code **)(*(long *)param_1 + 8))(param_1);
  }
LAB_00950fbc:
  Mutex::leaveCriticalSection();
  return;
code_r0x00950eec:
  if (pplVar2 == (long **)0x0) {
    pplVar2 = pplVar5 + 2;
    pplVar3 = (long **)*pplVar2;
    if ((long **)*pplVar3 != pplVar5) {
      do {
        plVar4 = *pplVar2;
        pplVar2 = (long **)(plVar4 + 2);
        pplVar3 = (long **)*pplVar2;
      } while (*pplVar3 != plVar4);
    }
  }
  else {
    do {
      pplVar3 = pplVar2;
      pplVar2 = (long **)*pplVar3;
    } while ((long **)*pplVar3 != (long **)0x0);
  }
  pplVar5 = pplVar3;
  if (pplVar3 == (long **)(this + 0x40)) goto LAB_00950fa8;
  goto LAB_00950edc;
}


